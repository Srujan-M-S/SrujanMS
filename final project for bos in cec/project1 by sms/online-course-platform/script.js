// Simple script for subtle animations and interactivity

document.addEventListener('DOMContentLoaded', () => {
  // Add hover effect for buttons (already handled by CSS transitions)
  // Additional animations can be added here if needed

  // Example: Animate hero headline on page load
  const heroHeadline = document.querySelector('.hero-content h1');
  if (heroHeadline) {
    heroHeadline.style.opacity = 0;
    heroHeadline.style.transform = 'translateY(20px)';
    setTimeout(() => {
      heroHeadline.style.transition = 'opacity 0.8s ease, transform 0.8s ease';
      heroHeadline.style.opacity = 1;
      heroHeadline.style.transform = 'translateY(0)';
    }, 200);
  }

  // Theme toggle button logic
  const themeToggleBtn = document.getElementById('theme-toggle-btn');
  const currentTheme = localStorage.getItem('theme') || 'light';

  function applyTheme(theme) {
    if (theme === 'dark') {
      document.body.classList.add('dark-theme');
      themeToggleBtn.textContent = 'Light Mode';
    } else {
      document.body.classList.remove('dark-theme');
      themeToggleBtn.textContent = 'Dark Mode';
    }
  }

  applyTheme(currentTheme);

  themeToggleBtn.addEventListener('click', () => {
    const newTheme = document.body.classList.contains('dark-theme') ? 'light' : 'dark';
    applyTheme(newTheme);
    localStorage.setItem('theme', newTheme);
  });
});
