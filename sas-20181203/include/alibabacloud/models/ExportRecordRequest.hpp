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
    // The type of file to export. Valid values:
    // 
    // - **virusScanExport**: Exports details of a virus scan task. This parameter is required when ExportType is set to virusScanExport.
    shared_ptr<string> exportFileType_ {};
    // The type of records to export. Valid values:
    // 
    // - **assetInstance**: The list of servers in Asset Center
    // 
    // - **user**: The list of account asset fingerprints
    // 
    // - **port**: The list of port asset fingerprints
    // 
    // - **process**: The list of process asset fingerprints
    // 
    // - **sca**: The list of middleware asset fingerprints
    // 
    // - **database**: The list of database asset fingerprints
    // 
    // - **web**: The list of web service asset fingerprints
    // 
    // - **software**: The list of software asset fingerprints
    // 
    // - **cron**: The list of scheduled task (cron) asset fingerprints
    // 
    // - **autorun**: The list of startup item asset fingerprints
    // 
    // - **lkm**: The list of kernel module asset fingerprints
    // 
    // - **webserver**: The list of website asset fingerprints
    // 
    // - **virusScanExport**: The list of virus scan task details
    // 
    // - **imageVulExport**: The list of system vulnerabilities in images
    // 
    // - imageVulExport: The list of system vulnerabilities in images
    // 
    // - **imageBaseLineExport**: The list of image baseline check results
    // 
    // - **imageAffectedMaliciousExport**: The list of malicious sample check results for images
    // 
    // - **baselineCspm**: The list of cloud platform configuration check results
    // 
    // - **attack**: The list of attack analysis alerts
    // 
    // - **accessKey**: The list of AK leakage detection alerts
    // 
    // - **exportObjectScanEvents**: The list of malicious file detection alerts
    // 
    // - **domainDetail**: Website assets
    // 
    // - **assetsPropertyScaProcessDetail**: RASP-protected processes
    // 
    // - **exportHcWarning**: The list of system baseline risks
    // 
    // - **raspAttackAlert**: The list of RASP attack alerts
    // 
    // - **raspApplicationConfiguration**: The list of RASP application configurations
    // 
    // - **raspWeaknessDetection**: The list of RASP weakness detection results
    // 
    // - **raspInMemoryWebshellDetection**: The list of RASP alerts for in-memory webshell detection
    // 
    // - **raspInMemoryWebshellInsertion**: The list of RASP alerts for in-memory webshell insertion
    // 
    // - **listAgentExport**: The list of agents
    // 
    // - **listSkillExport**: The list of skills
    // 
    // - **listModelExport**: The list of models
    // 
    // This parameter is required.
    shared_ptr<string> exportType_ {};
    // The language of the content in the request and response. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The filter conditions for the exported content.
    // 
    // > This is a general-purpose operation for exporting various detection lists from Cloud Security Center. As parameter configurations vary by feature, we recommend that you omit this parameter to export the complete list. You can then filter the data in the exported Excel file.
    shared_ptr<string> params_ {};
    // The ID of the management account for a member in Resource Directory.
    // 
    // > You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
