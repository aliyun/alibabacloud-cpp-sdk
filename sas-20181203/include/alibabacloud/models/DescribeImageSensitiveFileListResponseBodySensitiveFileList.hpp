// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILELISTRESPONSEBODYSENSITIVEFILELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILELISTRESPONSEBODYSENSITIVEFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageSensitiveFileListResponseBodySensitiveFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSensitiveFileListResponseBodySensitiveFileList& obj) { 
      DARABONBA_PTR_TO_JSON(Advice, advice_);
      DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_TO_JSON(SensitiveFileName, sensitiveFileName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnprocessedNum, unprocessedNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSensitiveFileListResponseBodySensitiveFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(Advice, advice_);
      DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileName, sensitiveFileName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnprocessedNum, unprocessedNum_);
    };
    DescribeImageSensitiveFileListResponseBodySensitiveFileList() = default ;
    DescribeImageSensitiveFileListResponseBodySensitiveFileList(const DescribeImageSensitiveFileListResponseBodySensitiveFileList &) = default ;
    DescribeImageSensitiveFileListResponseBodySensitiveFileList(DescribeImageSensitiveFileListResponseBodySensitiveFileList &&) = default ;
    DescribeImageSensitiveFileListResponseBodySensitiveFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSensitiveFileListResponseBodySensitiveFileList() = default ;
    DescribeImageSensitiveFileListResponseBodySensitiveFileList& operator=(const DescribeImageSensitiveFileListResponseBodySensitiveFileList &) = default ;
    DescribeImageSensitiveFileListResponseBodySensitiveFileList& operator=(DescribeImageSensitiveFileListResponseBodySensitiveFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advice_ == nullptr
        && return this->classKey_ == nullptr && return this->className_ == nullptr && return this->count_ == nullptr && return this->description_ == nullptr && return this->firstScanTime_ == nullptr
        && return this->lastScanTime_ == nullptr && return this->riskLevel_ == nullptr && return this->sensitiveFileKey_ == nullptr && return this->sensitiveFileName_ == nullptr && return this->status_ == nullptr
        && return this->unprocessedNum_ == nullptr; };
    // advice Field Functions 
    bool hasAdvice() const { return this->advice_ != nullptr;};
    void deleteAdvice() { this->advice_ = nullptr;};
    inline string advice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


    // classKey Field Functions 
    bool hasClassKey() const { return this->classKey_ != nullptr;};
    void deleteClassKey() { this->classKey_ = nullptr;};
    inline string classKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string sensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


    // sensitiveFileName Field Functions 
    bool hasSensitiveFileName() const { return this->sensitiveFileName_ != nullptr;};
    void deleteSensitiveFileName() { this->sensitiveFileName_ = nullptr;};
    inline string sensitiveFileName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileName_, "") };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setSensitiveFileName(string sensitiveFileName) { DARABONBA_PTR_SET_VALUE(sensitiveFileName_, sensitiveFileName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unprocessedNum Field Functions 
    bool hasUnprocessedNum() const { return this->unprocessedNum_ != nullptr;};
    void deleteUnprocessedNum() { this->unprocessedNum_ = nullptr;};
    inline int32_t unprocessedNum() const { DARABONBA_PTR_GET_DEFAULT(unprocessedNum_, 0) };
    inline DescribeImageSensitiveFileListResponseBodySensitiveFileList& setUnprocessedNum(int32_t unprocessedNum) { DARABONBA_PTR_SET_VALUE(unprocessedNum_, unprocessedNum) };


  protected:
    // The suggestion.
    std::shared_ptr<string> advice_ = nullptr;
    // The key of the sensitive file type.
    std::shared_ptr<string> classKey_ = nullptr;
    // The name of the sensitive file type.
    std::shared_ptr<string> className_ = nullptr;
    // The number of scans that are performed on the sensitive file.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The description of the sensitive file.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The timestamp generated when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The type of the alert for the sensitive file. Valid values:
    // 
    // *   **npm_token**: Node Package Manager (NPM) access token.
    // *   **ftp_cfg**: FTP configuration.
    // *   **google_oauth_key**: Google OAuth key.
    // *   **planetscale_passwd**: PlanetScale password.
    // *   **github_ssh_key**: GitHub SSH key.
    // *   **msbuild_publish_profile**: MSBuild publish profile.
    // *   **fastly_cdn_token**: Fastly CDN token.
    // *   **ssh_private_key**: SSH private key.
    // *   **aws_cli**: Amazon Web Services (AWS) CLI credential.
    // *   **cpanel_proftpd**: cPanel ProFTPD credential.
    // *   **postgresql_passwd**: PostgreSQL password file.
    // *   **discord_client_cred**: Discord client credential.
    // *   **rails_database**: Rails database configuration.
    // *   **aws_access_key**: AWS access key.
    // *   **esmtp_cfg**: Extended Simple Mail Transfer Protocol (ESMTP) configuration.
    // *   **docker_registry_cfg**: Docker image repository configuration.
    // *   **pem**: Privacy-Enhanced Mail (PEM).
    // *   **common_cred**: common credential.
    // *   **sftp_cfg**: Secure File Transfer Protocol (SFTP) connection configuration.
    // *   **grafana_token**: Grafana token.
    // *   **slack_token**: Slack token.
    // *   **ec_private_key**: EC private key.
    // *   **pypi_token**: upload token for the Python Package Index (PyPI).
    // *   **finicity_token**: Finicity token.
    // *   **k8s_client_key**: Kubernetes client private key.
    // *   **git_cfg**: Git configuration.
    // *   **django_key**: Django key.
    // *   **jenkins_ssh**: Jenkins SSH configuration file.
    // *   **openssh_private_key**: OpenSSH private key.
    // *   **square_oauth**: OAuth credential for Square.
    // *   **typeform_token**: Typeform token.
    // *   **common_database_cfg**: general database connection configuration.
    // *   **wordpress_database_cfg**: WordPress database configuration.
    // *   **googlecloud_api_key**: API key for Google Cloud.
    // *   **vscode_sftp**: VS Code SFTP configuration.
    // *   **apache_htpasswd**: Apache htpasswd.
    // *   **planetscale_token**: PlanetScale token.
    // *   **contentful_preview_token**: preview token for Contentful.
    // *   **php_database_cfg**: database password for a PHP application.
    // *   **atom_remote_sync**: Atom remote synchronization configuration.
    // *   **aws_session_token**: AWS session token.
    // *   **atom_sftp_cfg**: Atom SFTP configuration.
    // *   **asana_client_private_key**: Asana client key.
    // *   **tencentcloud_ak**: secret ID of a third-party cloud.
    // *   **rsa_private_key**: Rivest-Shamir-Adleman (RSA) private key.
    // *   **github_personal_token**: personal access token for GitHub.
    // *   **pgp**: Pretty Good Privacy (PGP) encrypted file.
    // *   **stripe_skpk**: Stripe secret key.
    // *   **square_token**: Square access token.
    // *   **rails_carrierwave**: file upload credential for Rails Carrierwave.
    // *   **dbeaver_database_cfg**: DBeaver database configuration.
    // *   **robomongo_cred**: Robomongo credential.
    // *   **github_oauth_token**: OAuth access token for GitHub.
    // *   **pulumi_token**: Pulumi token.
    // *   **ventrilo_voip**: Ventrilo VoIP server configuration.
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
    // *   **openvpn_cfg**: OpenVPN client configuration.
    // *   **github_refresh_token**: GitHub refresh token.
    // *   **salesforce**: Salesforce credential.
    // *   **sendinblue**: Sendinblue token.
    // *   **pkcs_private_key**: PKCS#12 key.
    // *   **rubyonrails_passwd**: Ruby on Rails password file.
    // *   **filezilla_ftp**: FileZilla FTP configuration.
    // *   **databricks_token**: Databricks token.
    // *   **gitLab_personal_token**: personal access token for GitLab.
    // *   **rails_master_key**: Rails master key.
    // *   **sqlite**: SQLite3 or SQLite database.
    // *   **firefox_logins**: Firefox logon configuration.
    // *   **mailgun_private_token**: Mailgun private token.
    // *   **joomla_cfg**: Joomla configuration.
    // *   **hashicorp_terraform_token**: HashiCorp Terraform token.
    // *   **jetbrains_ides**: JetBrains IDEs configuration.
    // *   **heroku_api_key**: Heroku API key.
    // *   **messagebird_token**: MessageBird token.
    // *   **github_app_token**: GitHub app token.
    // *   **hashicorp_vault_token**: HashiCorp Vault token.
    // *   **pgp_private_key**: PGP private key.
    // *   **sshpasswd**: SSH password.
    // *   **huaweicloud_ak**: secret access key of a third-party cloud.
    // *   **aws_s3cmd**: AWS S3cmd configuration.
    // *   **php_config**: PHP configuration.
    // *   **common_private_key**: private key of a common type.
    // *   **microsoft_mdf**: Microsoft SQL Server database.
    // *   **mediawiki_cfg**: MediaWiki configuration.
    // *   **jenkins_cred**: Jenkins credential.
    // *   **rubygems_cred**: RubyGems credential.
    // *   **clojars_token**: Clojars token.
    // *   **phoenix_web_passwd**: Phoenix web credential.
    // *   **puttygen_private_key**: PuTTYgen private key.
    // *   **google_oauth_token**: Google OAuth access token.
    // *   **rubyonrails_cfg**: Ruby on Rails database configuration.
    // *   **lob_api_key**: Lob API key.
    // *   **pkcs_cred**: PKCS#12 certificate.
    // *   **otr_private_key**: Off-the-Record Messaging (OTR) private key.
    // *   **contentful_delivery_token**: delivery token for Contentful.
    // *   **digital_ocean_tugboat**: DigitalOcean Tugboat configuration.
    // *   **dsa_private_key**: Digital Signature Algorithm (DSA) private key.
    // *   **rails_app_token**: Rails app token.
    // *   **git_cred**: Git user credential.
    // *   **newrelic_api_key**: user API key for New Relic.
    // *   **github_hub**: hub configuration for storing GitHub tokens.
    // *   **rubygem**: RubyGems token.
    std::shared_ptr<string> sensitiveFileKey_ = nullptr;
    // The name of the alert type for the sensitive file.
    std::shared_ptr<string> sensitiveFileName_ = nullptr;
    // The status of the sensitive file. Valid values:
    // 
    // *   **0**: unhandled.
    // *   **1**: handled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The number of unprocessed mirrors.
    std::shared_ptr<int32_t> unprocessedNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
