// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDELIVERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateUserDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateUserDeliveryTaskRequest() = default ;
    UpdateUserDeliveryTaskRequest(const UpdateUserDeliveryTaskRequest &) = default ;
    UpdateUserDeliveryTaskRequest(UpdateUserDeliveryTaskRequest &&) = default ;
    UpdateUserDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDeliveryTaskRequest() = default ;
    UpdateUserDeliveryTaskRequest& operator=(const UpdateUserDeliveryTaskRequest &) = default ;
    UpdateUserDeliveryTaskRequest& operator=(UpdateUserDeliveryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->details_ != nullptr && this->discardRate_ != nullptr && this->fieldName_ != nullptr && this->filterVer_ != nullptr && this->taskName_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline UpdateUserDeliveryTaskRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string details() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline UpdateUserDeliveryTaskRequest& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // discardRate Field Functions 
    bool hasDiscardRate() const { return this->discardRate_ != nullptr;};
    void deleteDiscardRate() { this->discardRate_ = nullptr;};
    inline float discardRate() const { DARABONBA_PTR_GET_DEFAULT(discardRate_, 0.0) };
    inline UpdateUserDeliveryTaskRequest& setDiscardRate(float discardRate) { DARABONBA_PTR_SET_VALUE(discardRate_, discardRate) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline UpdateUserDeliveryTaskRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // filterVer Field Functions 
    bool hasFilterVer() const { return this->filterVer_ != nullptr;};
    void deleteFilterVer() { this->filterVer_ = nullptr;};
    inline string filterVer() const { DARABONBA_PTR_GET_DEFAULT(filterVer_, "") };
    inline UpdateUserDeliveryTaskRequest& setFilterVer(string filterVer) { DARABONBA_PTR_SET_VALUE(filterVer_, filterVer) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateUserDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> details_ = nullptr;
    // The discard rate. Default value: 0.
    std::shared_ptr<float> discardRate_ = nullptr;
    // The log fields that you want to include in logs to be delivered. Separate the log fields with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> filterVer_ = nullptr;
    // The name of the delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
