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
    };
    friend void from_json(const Darabonba::Json& j, ExportRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportFileType, exportFileType_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
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
    virtual bool empty() const override { this->exportFileType_ != nullptr
        && this->exportType_ != nullptr && this->lang_ != nullptr && this->params_ != nullptr; };
    // exportFileType Field Functions 
    bool hasExportFileType() const { return this->exportFileType_ != nullptr;};
    void deleteExportFileType() { this->exportFileType_ = nullptr;};
    inline string exportFileType() const { DARABONBA_PTR_GET_DEFAULT(exportFileType_, "") };
    inline ExportRecordRequest& setExportFileType(string exportFileType) { DARABONBA_PTR_SET_VALUE(exportFileType_, exportFileType) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportRecordRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExportRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ExportRecordRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // The type of the file to export. Valid values:
    // 
    // *   **virusScanExport**: The details of the virus scan tasks are exported. This parameter is available and required when ExportType is set to virusScanExport.
    std::shared_ptr<string> exportFileType_ = nullptr;
    // The type of the check result list that you want to export. Valid values:
    // 
    // *   **assetInstance**: the list of servers displayed on the Host page
    // *   **user**: the list of fingerprints for accounts
    // *   **port**: the list of fingerprints for ports
    // *   **process**: the list of fingerprints for processes
    // *   **sca**: the list of fingerprints for middleware assets
    // *   **database**: the list of fingerprints for databases
    // *   **web**: the list of fingerprints for web services
    // *   **software**: the list of fingerprints for software assets
    // *   **cron**: the list of fingerprints for scheduled tasks
    // *   **autorun**: the list of fingerprints for startup items
    // *   **lkm**: the list of fingerprints for kernel modules
    // *   **webserver**: the list of fingerprints for websites
    // *   **virusScanExport**: the details of the virus scan tasks
    // *   **imageVulExport**: the list of image system vulnerabilities
    // *   **imageBaseLineExport**: the list of check results for image baselines
    // *   **imageAffectedMaliciousExport**: the list of check results for malicious image samples
    // *   **baselineCspm**: the list of check results for configuration assessment
    // *   **attack**: the list of alert events for attack analysis
    // *   **accessKey**: the list of alerts that are generated for AccessKey pair leaks
    // *   **exportObjectScanEvents**: the list of alerts generated for malicious files
    // 
    // This parameter is required.
    std::shared_ptr<string> exportType_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The conditions that are used to filter check results.
    // 
    // > This operation is a common export operation for multiple features of Security Center. The available configuration fields of this parameter vary based on the features. We recommend that you do not specify this parameter when you call the operation. You can export an information list without specifying this parameter, and then filter data in the exported Excel file.
    std::shared_ptr<string> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
