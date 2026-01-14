// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREPORTTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREPORTTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ModifyReportTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReportTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ReportTaskStatus, reportTaskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReportTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ReportTaskStatus, reportTaskStatus_);
    };
    ModifyReportTaskStatusRequest() = default ;
    ModifyReportTaskStatusRequest(const ModifyReportTaskStatusRequest &) = default ;
    ModifyReportTaskStatusRequest(ModifyReportTaskStatusRequest &&) = default ;
    ModifyReportTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReportTaskStatusRequest() = default ;
    ModifyReportTaskStatusRequest& operator=(const ModifyReportTaskStatusRequest &) = default ;
    ModifyReportTaskStatusRequest& operator=(ModifyReportTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureType_ == nullptr
        && this->lang_ == nullptr && this->reportTaskStatus_ == nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline ModifyReportTaskStatusRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyReportTaskStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reportTaskStatus Field Functions 
    bool hasReportTaskStatus() const { return this->reportTaskStatus_ != nullptr;};
    void deleteReportTaskStatus() { this->reportTaskStatus_ = nullptr;};
    inline int32_t getReportTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(reportTaskStatus_, 0) };
    inline ModifyReportTaskStatusRequest& setReportTaskStatus(int32_t reportTaskStatus) { DARABONBA_PTR_SET_VALUE(reportTaskStatus_, reportTaskStatus) };


  protected:
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Simplified Chinese
    // *   **en_us**: English
    shared_ptr<string> lang_ {};
    // Specifies the status of the report task. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    // 
    // > This parameter is required.
    shared_ptr<int32_t> reportTaskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
