// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECAMPAIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECAMPAIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UpdateCampaignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCampaignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StrategyParameters, strategyParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCampaignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StrategyParameters, strategyParameters_);
    };
    UpdateCampaignRequest() = default ;
    UpdateCampaignRequest(const UpdateCampaignRequest &) = default ;
    UpdateCampaignRequest(UpdateCampaignRequest &&) = default ;
    UpdateCampaignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCampaignRequest() = default ;
    UpdateCampaignRequest& operator=(const UpdateCampaignRequest &) = default ;
    UpdateCampaignRequest& operator=(UpdateCampaignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callableTime_ == nullptr
        && this->campaignId_ == nullptr && this->contactFlowId_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr
        && this->startTime_ == nullptr && this->strategyParameters_ == nullptr; };
    // callableTime Field Functions 
    bool hasCallableTime() const { return this->callableTime_ != nullptr;};
    void deleteCallableTime() { this->callableTime_ = nullptr;};
    inline string getCallableTime() const { DARABONBA_PTR_GET_DEFAULT(callableTime_, "") };
    inline UpdateCampaignRequest& setCallableTime(string callableTime) { DARABONBA_PTR_SET_VALUE(callableTime_, callableTime) };


    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline UpdateCampaignRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string getContactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline UpdateCampaignRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateCampaignRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCampaignRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCampaignRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateCampaignRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategyParameters Field Functions 
    bool hasStrategyParameters() const { return this->strategyParameters_ != nullptr;};
    void deleteStrategyParameters() { this->strategyParameters_ = nullptr;};
    inline string getStrategyParameters() const { DARABONBA_PTR_GET_DEFAULT(strategyParameters_, "") };
    inline UpdateCampaignRequest& setStrategyParameters(string strategyParameters) { DARABONBA_PTR_SET_VALUE(strategyParameters_, strategyParameters) };


  protected:
    shared_ptr<string> callableTime_ {};
    // This parameter is required.
    shared_ptr<string> campaignId_ {};
    shared_ptr<string> contactFlowId_ {};
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> strategyParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
