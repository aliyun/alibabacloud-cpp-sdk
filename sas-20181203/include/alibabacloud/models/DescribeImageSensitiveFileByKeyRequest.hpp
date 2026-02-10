// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageSensitiveFileByKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSensitiveFileByKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSensitiveFileByKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
    };
    DescribeImageSensitiveFileByKeyRequest() = default ;
    DescribeImageSensitiveFileByKeyRequest(const DescribeImageSensitiveFileByKeyRequest &) = default ;
    DescribeImageSensitiveFileByKeyRequest(DescribeImageSensitiveFileByKeyRequest &&) = default ;
    DescribeImageSensitiveFileByKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSensitiveFileByKeyRequest() = default ;
    DescribeImageSensitiveFileByKeyRequest& operator=(const DescribeImageSensitiveFileByKeyRequest &) = default ;
    DescribeImageSensitiveFileByKeyRequest& operator=(DescribeImageSensitiveFileByKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->imageUuid_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->scanRange_ == nullptr && this->sensitiveFileKey_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageSensitiveFileByKeyRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeImageSensitiveFileByKeyRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageSensitiveFileByKeyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageSensitiveFileByKeyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & getScanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> getScanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeImageSensitiveFileByKeyRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeImageSensitiveFileByKeyRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string getSensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeImageSensitiveFileByKeyRequest& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


  protected:
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The UUID of the image.
    shared_ptr<string> imageUuid_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the asset that you want to scan. Valid values:
    // 
    // *   **image**
    // *   **container**
    shared_ptr<vector<string>> scanRange_ {};
    // The type of alerts for the sensitive files. Valid values:
    // 
    // *   **npm_token**: Node Package Manager (NPM) access token
    // *   **ftp_cfg**: FTP configuration
    // *   **google_oauth_key**: Google OAuth key
    // *   **planetscale_passwd**: PlanetScale password
    // *   **github_ssh_key**: Github SSH key
    // *   **msbuild_publish_profile**: MSBuild publish profile
    // *   **fastly_cdn_token**: Fastly CDN token
    // *   **ssh_private_key**: SSH private key
    // *   **aws_cli**: Amazon Web Services (AWS) CLI credentials
    // *   **cpanel_proftpd**: cPanel ProFTPD credentials
    // *   **postgresql_passwd**: PostgreSQL password
    // *   **discord_client_cred**: Discord client credentials
    // *   **rails_database**: Rails database configuration
    // *   **aws_access_key**: AWS Access Key
    // *   **esmtp_cfg** :Extended Simple Mail Transfer Protocol (ESMTP) configuration
    // *   **docker_registry_cfg**: Docker image repository configuration
    // *   **pem**: Privacy-Enhanced Mail (PEM)
    // *   **common_cred**: common credentials
    // *   **sftp_cfg**: Secure File Transfer Protocol (SFTP) connection configuration
    // *   **grafana_token**: Grafana token
    // *   **slack_token**: Slack token
    // *   **ec_private_key**: EC private key
    // *   **pypi_token**: Python Package Index (PyPI) token
    // *   **finicity_token**: Finicity token
    // *   **k8s_client_key**: Kubernetes private key
    // *   **git_cfg**: Git configuration
    // *   **django_key**: Django key
    // *   **jenkins_ssh**: Jenkins SSH configuration file
    // *   **openssh_private_key**: OpenSSL private key
    // *   **square_oauth**: OAuth credential for Square
    // *   **typeform_token**: Typeform token
    // *   **common_database_cfg**: general database connection configuration
    // *   **wordpress_database_cfg**: WordPress database configuration
    // *   **googlecloud_api_key**: API key for Google Cloud
    // *   **vscode_sftp**: VSCode SFTP configuration
    // *   **apache_htpasswd**: Apache htpasswd
    // *   **planetscale_token**: PlanetScale token
    // *   **contentful_preview_token**: preview token for Contentful
    // *   **php_database_cfg**: database password for a PHP application
    // *   **atom_remote_sync**: Atom remote synchronization configuration
    // *   **aws_session_token**: AWS session token
    // *   **atom_sftp_cfg**: Atom SFTP configuration
    // *   **asana_client_private_key**: Asana client key
    // *   **tencentcloud_ak**: secret ID of a third-party cloud
    // *   **rsa_private_key**: Rivest-Shamir-Adleman (RSA) private key
    // *   **github_personal_token**: personal access token for GitHub
    // *   **pgp**: Pretty Good Privacy (PGP) encrypted file
    // *   **stripe_skpk**: Stripe secret key
    // *   **square_token**: Square access token
    // *   **rails_carrierwave**: Rails Carrierwave credential
    // *   **dbeaver_database_cfg**: DBeaver database configuration
    // *   **robomongo_cred**: Robomongo credentials
    // *   **github_oauth_token**: OAuth access token for GitHub
    // *   **pulumi_token**: Pulumi token
    // *   **ventrilo_voip**: Ventrilo VoIP server configuration
    // *   **macos_keychain**: macOS Keychain
    // *   **amazon_mws_token**: Amazon MWS token
    // *   **dynatrace_token**: Dynatrace token
    // *   **java_keystore**: Java KeyStore (JKS)
    // *   **microsoft_sdf**: Microsoft SQL Server Compact Edition (CE) database
    // *   **kubernetes_dashboard_cred**: user credentials for Kubernetes Dashboard
    // *   **atlassian_token**: Atlassian token
    // *   **rdp**: remote desktop protocol (RDP)
    // *   **mailgun_key**: Mailgun webhook signing key
    // *   **mailchimp_api_key**: API key for Mailchimp
    // *   **netrc_cfg**: .netrc configuration file
    // *   **openvpn_cfg**: OpenVPN configuration
    // *   **github_refresh_token**: GitHub refresh token
    // *   **salesforce**: Salesforce credentials
    // *   **salesforce**: Sendinblue credentials
    // *   **pkcs_private_key**: PKCS#12 key
    // *   **rubyonrails_passwd**: Ruby on Rails password file
    // *   **filezilla_ftp**: FileZilla FTP configuration
    // *   **databricks_token**: Databricks token
    // *   **gitLab_personal_toke**: personal access token for GitLab
    // *   **rails_master_key**: Rails master key
    // *   **sqlite**: SQLite3 or SQLite database
    // *   **firefox_logins**: Firefox logon configuration
    // *   **mailgun_private_token**: Mailgun private token
    // *   **joomla_cfg**: Joomla configuration
    // *   **hashicorp_terraform_token**: HashiCorp Terraform token
    // *   **jetbrains_ides**: JetBrains IDEs configuration
    // *   **heroku_api_key**: Heroku API key
    // *   **messagebird_token**: MessageBird token
    // *   **messagebird_token**: MessageBird token
    // *   **hashicorp_vault_token**: HashiCorp Vault token
    // *   **pgp_private_key**: PGP private key
    // *   **sshpasswd**: SSH password
    // *   **huaweicloud_ak**: secret access key of a third-party cloud
    // *   **aws_s3cmd**: AWS S3cmd configuration
    // *   **php_config**: PHP configuration
    // *   **common_private_key**: private key of a common type
    // *   **microsoft_mdf**: Microsoft SQL Server database
    // *   **mediawiki_cfg**: MediaWiki configuration
    // *   **jenkins_cred**: Jenkins credentials
    // *   **rubygems_cred**: RubyGems credentials
    // *   **clojars_token**: Clojars token
    // *   **phoenix_web_passwd**: Phoenix web credentials
    // *   **puttygen_private_key**: PuTTYgen private key
    // *   **google_oauth_token**: Google OAuth access token
    // *   **rubyonrails_cfg**: Ruby On Rails database configuration
    // *   **lob_api_key**: Lob API key
    // *   **pkcs_cred**: PKCS#12 certificate
    // *   **otr_private_key**: Off-the-Record Messaging (OTR) private key
    // *   **contentful_delivery_token**: delivery token for Contentful
    // *   **digital_ocean_tugboat**: DigitalOcean Tugboat configuration
    // *   **dsa_private_key**: Digital Signature Algorithm (DSA) private key
    // *   **rails_app_token**: Rails app token
    // *   **git_cred**: Git user credential
    // *   **newrelic_api_key**: User API key for New Relic
    // *   **github_hub**: hub configuration for storing GitHub tokens
    // *   **rubygem**: Rubygem Token
    shared_ptr<string> sensitiveFileKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
