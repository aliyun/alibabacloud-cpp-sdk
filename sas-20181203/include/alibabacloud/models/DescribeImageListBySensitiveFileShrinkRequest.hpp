// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageListBySensitiveFileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListBySensitiveFileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListBySensitiveFileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeImageListBySensitiveFileShrinkRequest() = default ;
    DescribeImageListBySensitiveFileShrinkRequest(const DescribeImageListBySensitiveFileShrinkRequest &) = default ;
    DescribeImageListBySensitiveFileShrinkRequest(DescribeImageListBySensitiveFileShrinkRequest &&) = default ;
    DescribeImageListBySensitiveFileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListBySensitiveFileShrinkRequest() = default ;
    DescribeImageListBySensitiveFileShrinkRequest& operator=(const DescribeImageListBySensitiveFileShrinkRequest &) = default ;
    DescribeImageListBySensitiveFileShrinkRequest& operator=(DescribeImageListBySensitiveFileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->imageDigest_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->repoInstanceId_ == nullptr && return this->repoName_ == nullptr
        && return this->repoNamespace_ == nullptr && return this->riskLevel_ == nullptr && return this->scanRangeShrink_ == nullptr && return this->sensitiveFileKey_ == nullptr && return this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageListBySensitiveFileShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageListBySensitiveFileShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string repoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scanRangeShrink Field Functions 
    bool hasScanRangeShrink() const { return this->scanRangeShrink_ != nullptr;};
    void deleteScanRangeShrink() { this->scanRangeShrink_ = nullptr;};
    inline string scanRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(scanRangeShrink_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setScanRangeShrink(string scanRangeShrink) { DARABONBA_PTR_SET_VALUE(scanRangeShrink_, scanRangeShrink) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string sensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageListBySensitiveFileShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The image digest.
    // > Fuzzy match is supported.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the specified container image.
    // 
    // > You can call the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation to obtain the IDs of container images from the value of the **InstanceId** response parameter.
    std::shared_ptr<string> repoInstanceId_ = nullptr;
    // The name of the image repository.
    // 
    // > Fuzzy match is supported.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    // > Fuzzy match is supported.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The risk level of the file. Separate multiple levels with commas (,). Valid values:
    // 
    // - **high**
    // - **medium**
    // - **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // An array consisting of the types of the assets that you want to scan. Valid values:
    // - **image**
    // - **container**
    std::shared_ptr<string> scanRangeShrink_ = nullptr;
    // The type of the alert for the sensitive file. Valid values:
    // 
    // *   **npm_token**: npm access token.
    // *   **ftp_cfg**: FTP configuration.
    // *   **google_oauth_key**: Google OAuth key.
    // *   **planetscale_passwd**: PlanetScale password.
    // *   **github_ssh_key**: Github SSH key.
    // *   **msbuild_publish_profile**: MSBuild publish profile.
    // *   **fastly_cdn_token**: Fastly CDN token.
    // *   **ssh_private_key**: SSH private key.
    // *   **aws_cli**: Amazon Web Services (AWS) CLI credential.
    // *   **cpanel_proftpd**: cPanel ProFTPD credential.
    // *   **postgresql_passwd**: PostgreSQL password file.
    // *   **discord_client_cred**: Discord client credential.
    // *   **rails_database**: Rails database configuration.
    // *   **aws_access_key**: AWS access key.
    // *   **esmtp_cfg**: configuration of mail server over Extended Simple Mail Transfer Protocol (ESMTP).
    // *   **docker_registry_cfg**: configuration of a Docker image repository.
    // *   **pem**: Privacy-Enhanced Mail (PEM).
    // *   **common_cred**: common credential.
    // *   **sftp_cfg**: configuration of connection over Secure File Transfer Protocol (SFTP).
    // *   **grafana_token**: Grafana token.
    // *   **slack_token**: Slack token.
    // *   **ec_private_key**: Elliptic Curve (EC) private key.
    // *   **pypi_token**: Python Package Index (PyPI) token.
    // *   **finicity_token**: Finicity token.
    // *   **k8s_client_key**: private key for the Kubernetes client.
    // *   **git_cfg**: Git configuration.
    // *   **django_key**: Django key.
    // *   **jenkins_ssh**: SSH configuration file for Jenkins.
    // *   **openssh_private_key**: OpenSSH private key.
    // *   **square_oauth**: Square OAuth credential.
    // *   **typeform_token**: Typeform token.
    // *   **common_database_cfg**: configuration of general database connection.
    // *   **wordpress_database_cfg**: WordPress database configuration.
    // *   **googlecloud_api_key**: API key for Google Cloud.
    // *   **vscode_sftp**: VSCode SFTP configuration.
    // *   **apache_htpasswd**: Apache htpasswd.
    // *   **planetscale_token**: PlanetScale token.
    // *   **contentful_preview_token**: preview token for Contentful.
    // *   **php_database_cfg**: database password for a PHP application.
    // *   **atom_remote_sync**: Atom remote synchronization configuration.
    // *   **aws_session_token**: AWS session token.
    // *   **atom_sftp_cfg**: Atom SFTP configuration.
    // *   **asana_client_private_key**: private key for the Asana client.
    // *   **tencentcloud_ak**: secret ID of a third-party cloud.
    // *   **rsa_private_key**: Rivest-Shamir-Adleman (RSA) private key.
    // *   **github_personal_token**: personal access token for GitHub.
    // *   **pgp**: Pretty Good Privacy (PGP) encrypted file.
    // *   **stripe_skpk**: Stripe secret key.
    // *   **square_token**: Square access token.
    // *   **rails_carrierwave**: Rails Carrierwave credential.
    // *   **dbeaver_database_cfg**: DBeaver database configuration.
    // *   **robomongo_cred**: RoboMongo credential.
    // *   **github_oauth_token**: OAuth access token for GitHub.
    // *   **pulumi_token**: Pulumi token.
    // *   **ventrilo_voip**: configuration of a Ventrilo VoIP server.
    // *   **macos_keychain**: macOS keychain.
    // *   **amazon_mws_token**: Amazon MWS token.
    // *   **dynatrace_token**: Dynatrace token.
    // *   **java_keystore**: Java KeyStore (JKS).
    // *   **microsoft_sdf**: Microsoft SQL Server Compact Edition (CE) database.
    // *   **kubernetes_dashboard_cred**: user credential for Kubernetes Dashboard.
    // *   **atlassian_token**: Atlassian token.
    // *   **rdp**: remote desktop protocol (RDP).
    // *   **mailgun_key**: Mailgun webhook signing key.
    // *   **mailchimp_api_key**: API key for Mailchimp.
    // *   **netrc_cfg**: .netrc configuration file.
    // *   **openvpn_cfg**: configuration of the OpenVPN client.
    // *   **github_refresh_token**: GitHub refresh token.
    // *   **salesforce**: Salesforce credential.
    // *   **salesforce**: Sendinblue token.
    // *   **pkcs_private_key**: PKCS#12 private key.
    // *   **rubyonrails_passwd**: Ruby on Rails password file.
    // *   **filezilla_ftp**: FileZilla FTP configuration.
    // *   **databricks_token**: Databricks token.
    // *   **gitLab_personal_toke**: personal access token for GitLab.
    // *   **rails_master_key**: Rails master key.
    // *   **sqlite**: SQLite3 or SQLite database.
    // *   **firefox_logins**: Firefox logon configuration.
    // *   **mailgun_private_token**: Mailgun private token.
    // *   **joomla_cfg**: Joomla configuration.
    // *   **hashicorp_terraform_token**: HashiCorp Terraform token.
    // *   **jetbrains_ides**: JetBrains IDEs configuration.
    // *   **heroku_api_key**: API key for Heroku.
    // *   **messagebird_token**: MessageBird token.
    // *   **github_app_token**: Github app token.
    // *   **hashicorp_vault_token**: HashiCorp Vault token.
    // *   **pgp_private_key**: PGP private key.
    // *   **sshpasswd**: SSH password.
    // *   **huaweicloud_ak**: secret access key of a third-party cloud.
    // *   **aws_s3cmd**: AWS S3cmd configuration.
    // *   **php_config**: PHP configuration.
    // *   **common_private_key**: common private key.
    // *   **microsoft_mdf**: Microsoft SQL Server database.
    // *   **mediawiki_cfg**: MediaWiki configuration.
    // *   **jenkins_cred**: Jenkins credential.
    // *   **rubygems_cred**: RubyGems credential.
    // *   **clojars_token**: Clojars token.
    // *   **phoenix_web_passwd**: Phoenix web credential.
    // *   **puttygen_private_key**: PuTTYgen private key.
    // *   **google_oauth_token**: Google OAuth access token.
    // *   **rubyonrails_cfg**: Ruby On Rails database configuration.
    // *   **lob_api_key**: Lob API key for Lob.
    // *   **pkcs_cred**: PKCS#12 certificate.
    // *   **otr_private_key**: Off-the-Record Messaging (OTR) private key.
    // *   **contentful_delivery_token**: Contentful delivery token.
    // *   **digital_ocean_tugboat**: DigitalOcean Tugboat configuration.
    // *   **dsa_private_key**: Digital Signature Algorithm (DSA) private key.
    // *   **rails_app_token**: app token for Rails.
    // *   **git_cred**: user credential for Git.
    // *   **newrelic_api_key**: User API key for New Relic.
    // *   **github_hub**: hub configuration for storing GitHub tokens.
    // *   **rubygem**: RubyGem token.
    std::shared_ptr<string> sensitiveFileKey_ = nullptr;
    // The sensitive file status. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: ignored
    // *   **2**: false positive
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
