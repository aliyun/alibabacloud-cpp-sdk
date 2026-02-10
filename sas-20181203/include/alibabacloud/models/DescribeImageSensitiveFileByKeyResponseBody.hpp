// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESENSITIVEFILEBYKEYRESPONSEBODY_HPP_
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
  class DescribeImageSensitiveFileByKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSensitiveFileByKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSensitiveFileByKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageSensitiveFileByKeyResponseBody() = default ;
    DescribeImageSensitiveFileByKeyResponseBody(const DescribeImageSensitiveFileByKeyResponseBody &) = default ;
    DescribeImageSensitiveFileByKeyResponseBody(DescribeImageSensitiveFileByKeyResponseBody &&) = default ;
    DescribeImageSensitiveFileByKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSensitiveFileByKeyResponseBody() = default ;
    DescribeImageSensitiveFileByKeyResponseBody& operator=(const DescribeImageSensitiveFileByKeyResponseBody &) = default ;
    DescribeImageSensitiveFileByKeyResponseBody& operator=(DescribeImageSensitiveFileByKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SensitiveFileList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SensitiveFileList& obj) { 
        DARABONBA_PTR_TO_JSON(Advice, advice_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(LayerDigest, layerDigest_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Promt, promt_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
        DARABONBA_PTR_TO_JSON(SensitiveFileName, sensitiveFileName_);
      };
      friend void from_json(const Darabonba::Json& j, SensitiveFileList& obj) { 
        DARABONBA_PTR_FROM_JSON(Advice, advice_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(LayerDigest, layerDigest_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Promt, promt_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
        DARABONBA_PTR_FROM_JSON(SensitiveFileName, sensitiveFileName_);
      };
      SensitiveFileList() = default ;
      SensitiveFileList(const SensitiveFileList &) = default ;
      SensitiveFileList(SensitiveFileList &&) = default ;
      SensitiveFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SensitiveFileList() = default ;
      SensitiveFileList& operator=(const SensitiveFileList &) = default ;
      SensitiveFileList& operator=(SensitiveFileList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advice_ == nullptr
        && this->description_ == nullptr && this->filePath_ == nullptr && this->firstScanTime_ == nullptr && this->lastScanTime_ == nullptr && this->layerDigest_ == nullptr
        && this->md5_ == nullptr && this->promt_ == nullptr && this->riskLevel_ == nullptr && this->sensitiveFileKey_ == nullptr && this->sensitiveFileName_ == nullptr; };
      // advice Field Functions 
      bool hasAdvice() const { return this->advice_ != nullptr;};
      void deleteAdvice() { this->advice_ = nullptr;};
      inline string getAdvice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
      inline SensitiveFileList& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SensitiveFileList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline SensitiveFileList& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline SensitiveFileList& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline SensitiveFileList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // layerDigest Field Functions 
      bool hasLayerDigest() const { return this->layerDigest_ != nullptr;};
      void deleteLayerDigest() { this->layerDigest_ = nullptr;};
      inline string getLayerDigest() const { DARABONBA_PTR_GET_DEFAULT(layerDigest_, "") };
      inline SensitiveFileList& setLayerDigest(string layerDigest) { DARABONBA_PTR_SET_VALUE(layerDigest_, layerDigest) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline SensitiveFileList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // promt Field Functions 
      bool hasPromt() const { return this->promt_ != nullptr;};
      void deletePromt() { this->promt_ = nullptr;};
      inline string getPromt() const { DARABONBA_PTR_GET_DEFAULT(promt_, "") };
      inline SensitiveFileList& setPromt(string promt) { DARABONBA_PTR_SET_VALUE(promt_, promt) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline SensitiveFileList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sensitiveFileKey Field Functions 
      bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
      void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
      inline string getSensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
      inline SensitiveFileList& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


      // sensitiveFileName Field Functions 
      bool hasSensitiveFileName() const { return this->sensitiveFileName_ != nullptr;};
      void deleteSensitiveFileName() { this->sensitiveFileName_ = nullptr;};
      inline string getSensitiveFileName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileName_, "") };
      inline SensitiveFileList& setSensitiveFileName(string sensitiveFileName) { DARABONBA_PTR_SET_VALUE(sensitiveFileName_, sensitiveFileName) };


    protected:
      // The suggestion.
      shared_ptr<string> advice_ {};
      // The description of the sensitive file.
      shared_ptr<string> description_ {};
      // The file path.
      shared_ptr<string> filePath_ {};
      // The timestamp generated when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTime_ {};
      // The timestamp when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The digest of the image.
      shared_ptr<string> layerDigest_ {};
      // The MD5 value of the sensitive file.
      shared_ptr<string> md5_ {};
      // The sensitive content.
      shared_ptr<string> promt_ {};
      // The risk level. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> riskLevel_ {};
      // The type of the alert for the sensitive file. Valid values:
      // 
      // *   **npm_token**: NPM access token
      // *   **ftp_cfg**: FTP configuration
      // *   **google_oauth_key**: Google OAuth key
      // *   **planetscale_passwd**: PlanetScale password
      // *   **github_ssh_key**: Github SSH key
      // *   **msbuild_publish_profile**: MSBuild publish profile
      // *   **fastly_cdn_token**: Fastly CDN token
      // *   **ssh_private_key**: SSH private key
      // *   **aws_cli**: Amazon Web Services (AWS) CLI credential
      // *   **cpanel_proftpd**: cPanel ProFTPD credential
      // *   **postgresql_passwd**: PostgreSQL password file
      // *   **discord_client_cred**: Discord client credential
      // *   **rails_database**: Rails database configuration
      // *   **aws_access_key**: AWS Access Key
      // *   **esmtp_cfg**: Extended Simple Mail Transfer Protocol (ESMTP) configuration
      // *   **docker_registry_cfg**: configuration of a Docker image repository
      // *   **pem**: Privacy-Enhanced Mail (PEM)
      // *   **common_cred**: common credential
      // *   **sftp_cfg**: configuration of connection over Secure File Transfer Protocol (SFTP)
      // *   **grafana_token**: Grafana token
      // *   **slack_token**: Slack token
      // *   **ec_private_key**: Elliptic Curve (EC) private key
      // *   **pypi_token**: Python Package Index (PyPI) token
      // *   **finicity_token**: Finicity token
      // *   **k8s_client_key**: private key for the Kubernetes client
      // *   **git_cfg**: Git configuration
      // *   **django_key**: Django key
      // *   **jenkins_ssh**: SSH configuration file for Jenkins
      // *   **openssh_private_key**: OpenSSH private key
      // *   **square_oauth**: Square OAuth credential
      // *   **typeform_token**: Typeform token
      // *   **common_database_cfg**: configuration of general database connection
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
      // *   **robomongo_cred**: RoboMongo credential
      // *   **github_oauth_token**: OAuth access token for GitHub
      // *   **pulumi_token**: Pulumi token
      // *   **ventrilo_voip**: configuration of a Ventrilo VoIP server
      // *   **macos_keychain**: macOS Keychain
      // *   **amazon_mws_token**: Amazon MWS token
      // *   **dynatrace_token**: Dynatrace token
      // *   **java_keystore**: Java KeyStore (JKS)
      // *   **microsoft_sdf**: Microsoft SQL Server Compact Edition (CE) database
      // *   **kubernetes_dashboard_cred**: user credential for Kubernetes Dashboard
      // *   **atlassian_token**: Atlassian token
      // *   **rdp**: remote desktop protocol (RDP)
      // *   **mailgun_key**: Mailgun webhook signing key
      // *   **mailchimp_api_key**: API key for Mailchimp
      // *   **netrc_cfg**: netrc configuration file
      // *   **openvpn_cfg**: configuration of the OpenVPN client
      // *   **github_refresh_token**: GitHub refresh token
      // *   **salesforce**: Salesforce credential
      // *   **salesforce**: Sendinblue token
      // *   **pkcs_private_key**: PKCS#12 private key
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
      // *   **heroku_api_key**: API key for Heroku
      // *   **messagebird_token**: MessageBird token
      // *   **github_app_token**: Github app token
      // *   **hashicorp_vault_token**: HashiCorp Vault token
      // *   **pgp_private_key**: PGP private key
      // *   **sshpasswd**: SSH password
      // *   **huaweicloud_ak**: secret access key of a third-party cloud
      // *   **aws_s3cmd**: AWS S3cmd configuration
      // *   **php_config**: PHP configuration
      // *   **common_private_key**: common private key
      // *   **microsoft_mdf**: Microsoft SQL Server database
      // *   **mediawiki_cfg**: MediaWiki configuration
      // *   **jenkins_cred**: Jenkins credential
      // *   **rubygems_cred**: RubyGems credential
      // *   **clojars_token**: Clojars token
      // *   **phoenix_web_passwd**: Phoenix web credential
      // *   **puttygen_private_key**: PuTTYgen private key
      // *   **google_oauth_token**: Google OAuth access token
      // *   **rubyonrails_cfg**: Ruby On Rails database configuration
      // *   **lob_api_key**: Lob API key for Lob
      // *   **pkcs_cred**: PKCS#12 certificate
      // *   **otr_private_key**: Off-the-Record Messaging (OTR) private key
      // *   **contentful_delivery_token**: Contentful delivery token
      // *   **digital_ocean_tugboat**: DigitalOcean Tugboat configuration
      // *   **dsa_private_key**: Digital Signature Algorithm (DSA) private key
      // *   **rails_app_token**: app token for Rails
      // *   **git_cred**: Git user credential
      // *   **newrelic_api_key**: User API key for New Relic
      // *   **github_hub**: hub configuration for storing GitHub tokens
      // *   **rubygem**: Rubygem Token
      shared_ptr<string> sensitiveFileKey_ {};
      // The name of the alert type for the sensitive file.
      shared_ptr<string> sensitiveFileName_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(LastRowKey, lastRowKey_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(LastRowKey, lastRowKey_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->lastRowKey_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // lastRowKey Field Functions 
      bool hasLastRowKey() const { return this->lastRowKey_ != nullptr;};
      void deleteLastRowKey() { this->lastRowKey_ = nullptr;};
      inline string getLastRowKey() const { DARABONBA_PTR_GET_DEFAULT(lastRowKey_, "") };
      inline PageInfo& setLastRowKey(string lastRowKey) { DARABONBA_PTR_SET_VALUE(lastRowKey_, lastRowKey) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The key of the last data entry.
      shared_ptr<string> lastRowKey_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->sensitiveFileList_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeImageSensitiveFileByKeyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageSensitiveFileByKeyResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageSensitiveFileByKeyResponseBody::PageInfo) };
    inline DescribeImageSensitiveFileByKeyResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageSensitiveFileByKeyResponseBody::PageInfo) };
    inline DescribeImageSensitiveFileByKeyResponseBody& setPageInfo(const DescribeImageSensitiveFileByKeyResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageSensitiveFileByKeyResponseBody& setPageInfo(DescribeImageSensitiveFileByKeyResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageSensitiveFileByKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveFileList Field Functions 
    bool hasSensitiveFileList() const { return this->sensitiveFileList_ != nullptr;};
    void deleteSensitiveFileList() { this->sensitiveFileList_ = nullptr;};
    inline const vector<DescribeImageSensitiveFileByKeyResponseBody::SensitiveFileList> & getSensitiveFileList() const { DARABONBA_PTR_GET_CONST(sensitiveFileList_, vector<DescribeImageSensitiveFileByKeyResponseBody::SensitiveFileList>) };
    inline vector<DescribeImageSensitiveFileByKeyResponseBody::SensitiveFileList> getSensitiveFileList() { DARABONBA_PTR_GET(sensitiveFileList_, vector<DescribeImageSensitiveFileByKeyResponseBody::SensitiveFileList>) };
    inline DescribeImageSensitiveFileByKeyResponseBody& setSensitiveFileList(const vector<DescribeImageSensitiveFileByKeyResponseBody::SensitiveFileList> & sensitiveFileList) { DARABONBA_PTR_SET_VALUE(sensitiveFileList_, sensitiveFileList) };
    inline DescribeImageSensitiveFileByKeyResponseBody& setSensitiveFileList(vector<DescribeImageSensitiveFileByKeyResponseBody::SensitiveFileList> && sensitiveFileList) { DARABONBA_PTR_SET_RVALUE(sensitiveFileList_, sensitiveFileList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageSensitiveFileByKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. If the 200 status code is returned, the request was successful.
    shared_ptr<string> code_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<DescribeImageSensitiveFileByKeyResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The information about the sensitive files.
    shared_ptr<vector<DescribeImageSensitiveFileByKeyResponseBody::SensitiveFileList>> sensitiveFileList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
