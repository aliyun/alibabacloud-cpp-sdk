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
    // The type of the file to export. Valid values:
    // 
    // *   **virusScanExport**: The details of the virus scan tasks are exported. This parameter is available and required when ExportType is set to virusScanExport.
    shared_ptr<string> exportFileType_ {};
    // The type of detection result list to be exported. Values:
    // - **assetInstance**: List of servers in the asset center 
    // - **user**: List of asset fingerprints for accounts 
    // - **port**: List of asset fingerprints for ports 
    // - **process**: List of asset fingerprints for processes 
    // - **sca**: List of asset fingerprints for middleware 
    // - **database**: List of asset fingerprints for databases 
    // - **web**: List of asset fingerprints for web services 
    // - **software**: List of asset fingerprints for software 
    // - **cron**: List of asset fingerprints for scheduled tasks 
    // - **autorun**: List of asset fingerprints for startup items 
    // - **lkm**: List of asset fingerprints for kernel modules 
    // - **webserver**: List of asset fingerprints for web sites 
    // - **virusScanExport**: List of details for virus scan tasks 
    // - **imageVulExport**: List of system vulnerabilities in images 
    // - **imageBaseLineExport**: List of baseline check results in images 
    // - **imageAffectedMaliciousExport**: List of malicious sample check results in images 
    // - **baselineCspm**: List of detection results for cloud platform configuration checks 
    // - **attack**: List of alert events for attack analysis 
    // - **accessKey**: List of alert events for AK leak detection 
    // - **exportObjectScanEvents**: List of alert events for malicious file detection 
    // - **domainDetail**: Website assets 
    // - **assetsPropertyScaProcessDetail**: RASP protection process for application protection 
    // - **exportHcWarning**: List of system baseline risks 
    // - **raspAttackAlert**: List of attack alerts for Application Protection
    // - **raspApplicationConfiguration**: List of application configurations for Application Protection
    // - **raspWeaknessDetection**: List of weakness detections for Application Protection
    // - **raspInMemoryWebshellDetection**: List of in-memory webshell detection alerts for Application Protection
    // - **raspInMemoryWebshellInsertion**: List of in-memory webshell insertion alerts for Application Protection
    // 
    // This parameter is required.
    shared_ptr<string> exportType_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The conditions that are used to filter check results.
    // 
    // > This operation is a common export operation for multiple features of Security Center. The available configuration fields of this parameter vary based on the features. We recommend that you do not specify this parameter when you call the operation. You can export an information list without specifying this parameter, and then filter data in the exported Excel file.
    shared_ptr<string> params_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the ID.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
