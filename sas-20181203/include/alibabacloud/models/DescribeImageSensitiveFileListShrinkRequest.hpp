// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILELISTSHRINKREQUEST_HPP_
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
  class DescribeImageSensitiveFileListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSensitiveFileListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_TO_JSON(SensitiveKeyList, sensitiveKeyList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSensitiveFileListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_FROM_JSON(SensitiveKeyList, sensitiveKeyList_);
    };
    DescribeImageSensitiveFileListShrinkRequest() = default ;
    DescribeImageSensitiveFileListShrinkRequest(const DescribeImageSensitiveFileListShrinkRequest &) = default ;
    DescribeImageSensitiveFileListShrinkRequest(DescribeImageSensitiveFileListShrinkRequest &&) = default ;
    DescribeImageSensitiveFileListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSensitiveFileListShrinkRequest() = default ;
    DescribeImageSensitiveFileListShrinkRequest& operator=(const DescribeImageSensitiveFileListShrinkRequest &) = default ;
    DescribeImageSensitiveFileListShrinkRequest& operator=(DescribeImageSensitiveFileListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && this->criteriaType_ == nullptr && this->currentPage_ == nullptr && this->imageUuid_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr
        && this->riskLevel_ == nullptr && this->scanRangeShrink_ == nullptr && this->sensitiveKeyList_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeImageSensitiveFileListShrinkRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string getCriteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline DescribeImageSensitiveFileListShrinkRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageSensitiveFileListShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeImageSensitiveFileListShrinkRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageSensitiveFileListShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageSensitiveFileListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageSensitiveFileListShrinkRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scanRangeShrink Field Functions 
    bool hasScanRangeShrink() const { return this->scanRangeShrink_ != nullptr;};
    void deleteScanRangeShrink() { this->scanRangeShrink_ = nullptr;};
    inline string getScanRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(scanRangeShrink_, "") };
    inline DescribeImageSensitiveFileListShrinkRequest& setScanRangeShrink(string scanRangeShrink) { DARABONBA_PTR_SET_VALUE(scanRangeShrink_, scanRangeShrink) };


    // sensitiveKeyList Field Functions 
    bool hasSensitiveKeyList() const { return this->sensitiveKeyList_ != nullptr;};
    void deleteSensitiveKeyList() { this->sensitiveKeyList_ = nullptr;};
    inline const vector<string> & getSensitiveKeyList() const { DARABONBA_PTR_GET_CONST(sensitiveKeyList_, vector<string>) };
    inline vector<string> getSensitiveKeyList() { DARABONBA_PTR_GET(sensitiveKeyList_, vector<string>) };
    inline DescribeImageSensitiveFileListShrinkRequest& setSensitiveKeyList(const vector<string> & sensitiveKeyList) { DARABONBA_PTR_SET_VALUE(sensitiveKeyList_, sensitiveKeyList) };
    inline DescribeImageSensitiveFileListShrinkRequest& setSensitiveKeyList(vector<string> && sensitiveKeyList) { DARABONBA_PTR_SET_RVALUE(sensitiveKeyList_, sensitiveKeyList) };


  protected:
    // The value of the sensitive file type.
    shared_ptr<string> criteria_ {};
    // The type of the sensitive files that you want to query. Valid values:
    // 
    // *   **SensitiveFileKey**: the type of alerts for sensitive files. Valid values:
    // 
    //     *   **npm_token**: Node Package Manager (NPM) access token
    //     *   **ftp_cfg**: FTP configuration
    //     *   **google_oauth_key**: Google OAuth key
    //     *   **planetscale_passwd**: PlanetScale password
    //     *   **github_ssh_key**: Github SSH key
    //     *   **msbuild_publish_profile**: MSBuild publish profile
    //     *   **fastly_cdn_token**: Fastly CDN token
    //     *   **ssh_private_key**: SSH private key
    //     *   **aws_cli**: Amazon Web Services (AWS) CLI credentials
    //     *   **cpanel_proftpd**: cPanel ProFTPD credentials
    //     *   **postgresql_passwd**: PostgreSQL password
    //     *   **discord_client_cred**: Discord client credentials
    //     *   **rails_database**: Rails database configuration
    //     *   **aws_access_key**: AWS access key
    //     *   **esmtp_cfg**: Extended Simple Mail Transfer Protocol (ESMTP) configuration
    //     *   **docker_registry_cfg**: Docker image repository configuration
    //     *   **pem**: Privacy-Enhanced Mail (PEM)
    //     *   **common_cred**: common credentials
    //     *   **sftp_cfg**: Secure File Transfer Protocol (SFTP) connection configuration
    //     *   **grafana_token**: Grafana token
    //     *   **slack_token**: Slack token
    //     *   **ec_private_key**: EC private key
    //     *   **pypi_token**: upload token for the Python Package Index (PyPI)
    //     *   **finicity_token**: Finicity token
    //     *   **k8s_client_key**: Kubernetes private key
    //     *   **git_cfg**: Git configuration
    //     *   **django_key**: Django key
    //     *   **jenkins_ssh**: Jenkins SSH configuration file
    //     *   **openssh_private_key**: OpenSSL private key
    //     *   **square_oauth**: OAuth credential for Square
    //     *   **typeform_token**: Typeform token
    //     *   **common_database_cfg**: general database connection configuration
    //     *   **wordpress_database_cfg**: WordPress database configuration
    //     *   **googlecloud_api_key**: API key for Google Cloud
    //     *   **vscode_sftp**: VSCode SFTP configuration
    //     *   **apache_htpasswd**: Apache htpasswd
    //     *   **planetscale_token**: PlanetScale token
    //     *   **contentful_preview_token**: preview token for Contentful
    //     *   **php_database_cfg**: database password for a PHP application
    //     *   **atom_remote_sync**: Atom remote synchronization configuration
    //     *   **aws_session_token**: AWS session token
    //     *   **atom_sftp_cfg**: Atom SFTP configuration
    //     *   **asana_client_private_key**: Asana client key
    //     *   **tencentcloud_ak**: secret ID of a third-party cloud
    //     *   **rsa_private_key**: Rivest-Shamir-Adleman (RSA) private key
    //     *   **github_personal_token**: personal access token for GitHub
    //     *   **pgp**: Pretty Good Privacy (PGP) encrypted file
    //     *   **stripe_skpk**: Stripe secret key
    //     *   **square_token**: Square access token
    //     *   **rails_carrierwave**: file upload credentials for Rails Carrierwave
    //     *   **dbeaver_database_cfg**: DBeaver database configuration
    //     *   **robomongo_cred**: Robomongo credentials
    //     *   **github_oauth_token**: OAuth access token for GitHub
    //     *   **pulumi_token**: Pulumi token
    //     *   **ventrilo_voip**: Ventrilo VoIP server configuration
    //     *   **macos_keychain** :macOS keychain
    //     *   **amazon_mws_token**: Amazon MWS token
    //     *   **dynatrace_token**: Dynatrace token
    //     *   **java_keystore**: Java KeyStore (JKS)
    //     *   **microsoft_sdf**: Microsoft SQL Server Compact Edition (CE) database
    //     *   **kubernetes_dashboard_cred**: user credentials for Kubernetes Dashboard
    //     *   **atlassian_token**: Atlassian token
    //     *   **rdp**: remote desktop protocol (RDP)
    //     *   **mailgun_key**: Mailgun webhook signing key
    //     *   **mailchimp_api_key**: API key for Mailchimp
    //     *   **netrc_cfg**: .netrc configuration file
    //     *   **openvpn_cfg**: OpenVPN configuration
    //     *   **github_refresh_token**: GitHub refresh token
    //     *   **salesforce**: Salesforce credentials
    //     *   **salesforce**: Sendinblue credentials
    //     *   **pkcs_private_key**: PKCS#12 key
    //     *   **rubyonrails_passwd**: Ruby on Rails password file
    //     *   **filezilla_ftp**: FileZilla FTP configuration
    //     *   **databricks_token**: Databricks token
    //     *   **gitLab_personal_toke**: personal access token for GitLab
    //     *   **rails_master_key**: Rails master key
    //     *   **sqlite**: SQLite3 or SQLite database
    //     *   **firefox_logins**: Firefox logon configuration
    //     *   **mailgun_private_token**: Mailgun private token
    //     *   **joomla_cfg**: Joomla configuration
    //     *   **hashicorp_terraform_token**: HashiCorp Terraform token
    //     *   **jetbrains_ides**: JetBrains IDEs configuration
    //     *   **heroku_api_key**: Heroku API key
    //     *   **messagebird_token**: MessageBird token
    //     *   **messagebird_token**: MessageBird token
    //     *   **hashicorp_vault_token**: HashiCorp Vault token
    //     *   **pgp_private_key**: PGP private key
    //     *   **sshpasswd**: SSH password
    //     *   **huaweicloud_ak**: secret access key of a third-party cloud
    //     *   **aws_s3cmd**: AWS S3cmd configuration
    //     *   **php_config**: PHP configuration
    //     *   **common_private_key**: private key of a common type
    //     *   **microsoft_mdf**: Microsoft SQL Server database
    //     *   **mediawiki_cfg**: MediaWiki configuration
    //     *   **jenkins_cred**: Jenkins credentials
    //     *   **rubygems_cred**: RubyGems credentials
    //     *   **clojars_token**: Clojars token
    //     *   **phoenix_web_passwd**: Phoenix web credentials
    //     *   **puttygen_private_key**: PuTTYgen private key
    //     *   **google_oauth_token**: Google OAuth access token
    //     *   **rubyonrails_cfg**: Ruby On Rails database configuration
    //     *   **lob_api_key**: Lob API key
    //     *   **pkcs_cred**: PKCS#12 certificate
    //     *   **otr_private_key**: Off-the-Record Messaging (OTR) private key
    //     *   **contentful_delivery_token**: delivery token for Contentful
    //     *   **digital_ocean_tugboat**: DigitalOcean Tugboat configuration
    //     *   **dsa_private_key**: Digital Signature Algorithm (DSA) private key
    //     *   **rails_app_token**: Rails app token
    //     *   **git_cred**: Git user credential
    //     *   **newrelic_api_key**: User API key for New Relic
    //     *   **github_hub**: hub configuration for storing GitHub tokens
    //     *   **rubygem**: RubyGem token
    // 
    // *   **SensitiveFileName**: the name of the alert type for sensitive files.
    shared_ptr<string> criteriaType_ {};
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The UUID of the image.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation of Container Registry to query the image UUID from the value of the **ImageUuid** response parameter.
    shared_ptr<string> imageUuid_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    shared_ptr<string> riskLevel_ {};
    // An array that consists of the types of the assets that you want to scan. Valid values:
    // 
    // *   **image**
    // *   **container**
    shared_ptr<string> scanRangeShrink_ {};
    shared_ptr<vector<string>> sensitiveKeyList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
