// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExportRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportFileType, exportFileType_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportFileType, exportFileType_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    ExportRecordRequest() = default ;
    ExportRecordRequest(const ExportRecordRequest &) = default ;
    ExportRecordRequest(ExportRecordRequest &&) = default ;
    ExportRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportRecordRequest() = default ;
    ExportRecordRequest& operator=(const ExportRecordRequest &) = default ;
    ExportRecordRequest& operator=(ExportRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportFileType_ == nullptr
        && this->exportType_ == nullptr && this->lang_ == nullptr && this->params_ == nullptr && this->resourceDirectoryAccountId_ == nullptr; };
    // exportFileType Field Functions 
    bool hasExportFileType() const { return this->exportFileType_ != nullptr;};
    void deleteExportFileType() { this->exportFileType_ = nullptr;};
    inline string getExportFileType() const { DARABONBA_PTR_GET_DEFAULT(exportFileType_, "") };
    inline ExportRecordRequest& setExportFileType(string exportFileType) { DARABONBA_PTR_SET_VALUE(exportFileType_, exportFileType) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportRecordRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExportRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ExportRecordRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ExportRecordRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // Specifies the type of the file to be exported. Valid values:
    // 
    // - **virusScanExport**: Exports the virus scan task details. This value is required and can only be used when ExportType is set to virusScanExport.
    shared_ptr<string> exportFileType_ {};
    // Specifies the type of the detection result list to be exported. Valid values:
    // 
    // - **assetInstance**: the server list in the Asset Center
    // - **user**: the Asset Fingerprints list of accounts
    // - **port**: the Asset Fingerprints list of ports
    // - **process**: the Asset Fingerprints list of processes
    // - **sca**: the Asset Fingerprints list of middleware
    // - **database**: the Asset Fingerprints list of databases
    // - **web**: the Asset Fingerprints list of web services
    // - **software**: the Asset Fingerprints list of software
    // - **cron**: the Asset Fingerprints list of scheduled nodes
    // - **autorun**: the Asset Fingerprints list of startup items
    // - **lkm**: the Asset Fingerprints list of kernel modules
    // - **webserver**: the Asset Fingerprints list of websites
    // - **virusScanExport**: the virus scan node details list
    // - **imageVulExport**: the image system vulnerability list
    // - **imageBaseLineExport**: the image baseline check result list
    // - **imageAffectedMaliciousExport**: the image malicious sample check result list
    // - **baselineCspm**: the cloud platform configuration check result list
    // - **attack**: the attack analysis alerting event list
    // - **accessKey**: the AccessKey leak detection alerting event list
    // - **exportObjectScanEvents**: the malicious file detection alerting event list
    // - **domainDetail**: the website assets
    // - **assetsPropertyScaProcessDetail**: the RASP-protected processes in Application Protection
    // - **exportHcWarning**: the system baseline risk list
    // - **raspAttackAlert**: the Application Protection attack alerting list
    // - **raspApplicationConfiguration**: the Application Protection application configuration list
    // - **raspWeaknessDetection**: the Application Protection weakness detection list
    // - **raspInMemoryWebshellDetection**: the Application Protection in-memory webshell detection alerting list
    // - **raspInMemoryWebshellInsertion**: the Application Protection in-memory webshell injection alerting list
    // - **listAgentExport**: the agent list
    // - **listSkillExport**: the skill list
    // - **listModelExport**: the model list
    // - **listAiAgentEventExport**: the agent risk list
    // 
    // This parameter is required.
    shared_ptr<string> exportType_ {};
    // Specifies the language of the request and response. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Specifies the filter conditions for the exported content.
    // 
    // > This operation is a general export operation for exporting detection lists of multiple features in Security Center. The configuration fields of this parameter vary based on the feature. Do not specify this parameter when you call the operation. You can export the information list without specifying this parameter and then filter the target data in the exported Excel file.
    shared_ptr<string> params_ {};
    // The Alibaba Cloud account ID of the member accounts in the resource folder.
    // > You can invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
