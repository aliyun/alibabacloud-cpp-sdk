// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeMOTokenUsageSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMOTokenUsageSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UsageType, usageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMOTokenUsageSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
    };
    DescribeMOTokenUsageSummaryRequest() = default ;
    DescribeMOTokenUsageSummaryRequest(const DescribeMOTokenUsageSummaryRequest &) = default ;
    DescribeMOTokenUsageSummaryRequest(DescribeMOTokenUsageSummaryRequest &&) = default ;
    DescribeMOTokenUsageSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMOTokenUsageSummaryRequest() = default ;
    DescribeMOTokenUsageSummaryRequest& operator=(const DescribeMOTokenUsageSummaryRequest &) = default ;
    DescribeMOTokenUsageSummaryRequest& operator=(DescribeMOTokenUsageSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr && this->startTime_ == nullptr && this->usageType_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribeMOTokenUsageSummaryRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMOTokenUsageSummaryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMOTokenUsageSummaryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeMOTokenUsageSummaryRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMOTokenUsageSummaryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline DescribeMOTokenUsageSummaryRequest& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> usageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
