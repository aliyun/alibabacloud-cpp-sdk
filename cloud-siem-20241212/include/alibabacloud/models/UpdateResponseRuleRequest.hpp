// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESPONSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESPONSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateResponseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResponseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResponseActionConfig, responseActionConfig_);
      DARABONBA_PTR_TO_JSON(ResponseActionType, responseActionType_);
      DARABONBA_PTR_TO_JSON(ResponseExecutionCondition, responseExecutionCondition_);
      DARABONBA_PTR_TO_JSON(ResponseRuleId, responseRuleId_);
      DARABONBA_PTR_TO_JSON(ResponseRuleName, responseRuleName_);
      DARABONBA_PTR_TO_JSON(ResponseRulePriority, responseRulePriority_);
      DARABONBA_PTR_TO_JSON(ResponseRuleStatus, responseRuleStatus_);
      DARABONBA_PTR_TO_JSON(ResponseTriggerType, responseTriggerType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResponseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResponseActionConfig, responseActionConfig_);
      DARABONBA_PTR_FROM_JSON(ResponseActionType, responseActionType_);
      DARABONBA_PTR_FROM_JSON(ResponseExecutionCondition, responseExecutionCondition_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleId, responseRuleId_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleName, responseRuleName_);
      DARABONBA_PTR_FROM_JSON(ResponseRulePriority, responseRulePriority_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleStatus, responseRuleStatus_);
      DARABONBA_PTR_FROM_JSON(ResponseTriggerType, responseTriggerType_);
    };
    UpdateResponseRuleRequest() = default ;
    UpdateResponseRuleRequest(const UpdateResponseRuleRequest &) = default ;
    UpdateResponseRuleRequest(UpdateResponseRuleRequest &&) = default ;
    UpdateResponseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResponseRuleRequest() = default ;
    UpdateResponseRuleRequest& operator=(const UpdateResponseRuleRequest &) = default ;
    UpdateResponseRuleRequest& operator=(UpdateResponseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->responseActionConfig_ == nullptr && this->responseActionType_ == nullptr
        && this->responseExecutionCondition_ == nullptr && this->responseRuleId_ == nullptr && this->responseRuleName_ == nullptr && this->responseRulePriority_ == nullptr && this->responseRuleStatus_ == nullptr
        && this->responseTriggerType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateResponseRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline UpdateResponseRuleRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline UpdateResponseRuleRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateResponseRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // responseActionConfig Field Functions 
    bool hasResponseActionConfig() const { return this->responseActionConfig_ != nullptr;};
    void deleteResponseActionConfig() { this->responseActionConfig_ = nullptr;};
    inline string getResponseActionConfig() const { DARABONBA_PTR_GET_DEFAULT(responseActionConfig_, "") };
    inline UpdateResponseRuleRequest& setResponseActionConfig(string responseActionConfig) { DARABONBA_PTR_SET_VALUE(responseActionConfig_, responseActionConfig) };


    // responseActionType Field Functions 
    bool hasResponseActionType() const { return this->responseActionType_ != nullptr;};
    void deleteResponseActionType() { this->responseActionType_ = nullptr;};
    inline string getResponseActionType() const { DARABONBA_PTR_GET_DEFAULT(responseActionType_, "") };
    inline UpdateResponseRuleRequest& setResponseActionType(string responseActionType) { DARABONBA_PTR_SET_VALUE(responseActionType_, responseActionType) };


    // responseExecutionCondition Field Functions 
    bool hasResponseExecutionCondition() const { return this->responseExecutionCondition_ != nullptr;};
    void deleteResponseExecutionCondition() { this->responseExecutionCondition_ = nullptr;};
    inline string getResponseExecutionCondition() const { DARABONBA_PTR_GET_DEFAULT(responseExecutionCondition_, "") };
    inline UpdateResponseRuleRequest& setResponseExecutionCondition(string responseExecutionCondition) { DARABONBA_PTR_SET_VALUE(responseExecutionCondition_, responseExecutionCondition) };


    // responseRuleId Field Functions 
    bool hasResponseRuleId() const { return this->responseRuleId_ != nullptr;};
    void deleteResponseRuleId() { this->responseRuleId_ = nullptr;};
    inline string getResponseRuleId() const { DARABONBA_PTR_GET_DEFAULT(responseRuleId_, "") };
    inline UpdateResponseRuleRequest& setResponseRuleId(string responseRuleId) { DARABONBA_PTR_SET_VALUE(responseRuleId_, responseRuleId) };


    // responseRuleName Field Functions 
    bool hasResponseRuleName() const { return this->responseRuleName_ != nullptr;};
    void deleteResponseRuleName() { this->responseRuleName_ = nullptr;};
    inline string getResponseRuleName() const { DARABONBA_PTR_GET_DEFAULT(responseRuleName_, "") };
    inline UpdateResponseRuleRequest& setResponseRuleName(string responseRuleName) { DARABONBA_PTR_SET_VALUE(responseRuleName_, responseRuleName) };


    // responseRulePriority Field Functions 
    bool hasResponseRulePriority() const { return this->responseRulePriority_ != nullptr;};
    void deleteResponseRulePriority() { this->responseRulePriority_ = nullptr;};
    inline int32_t getResponseRulePriority() const { DARABONBA_PTR_GET_DEFAULT(responseRulePriority_, 0) };
    inline UpdateResponseRuleRequest& setResponseRulePriority(int32_t responseRulePriority) { DARABONBA_PTR_SET_VALUE(responseRulePriority_, responseRulePriority) };


    // responseRuleStatus Field Functions 
    bool hasResponseRuleStatus() const { return this->responseRuleStatus_ != nullptr;};
    void deleteResponseRuleStatus() { this->responseRuleStatus_ = nullptr;};
    inline int32_t getResponseRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(responseRuleStatus_, 0) };
    inline UpdateResponseRuleRequest& setResponseRuleStatus(int32_t responseRuleStatus) { DARABONBA_PTR_SET_VALUE(responseRuleStatus_, responseRuleStatus) };


    // responseTriggerType Field Functions 
    bool hasResponseTriggerType() const { return this->responseTriggerType_ != nullptr;};
    void deleteResponseTriggerType() { this->responseTriggerType_ = nullptr;};
    inline string getResponseTriggerType() const { DARABONBA_PTR_GET_DEFAULT(responseTriggerType_, "") };
    inline UpdateResponseRuleRequest& setResponseTriggerType(string responseTriggerType) { DARABONBA_PTR_SET_VALUE(responseTriggerType_, responseTriggerType) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> responseActionConfig_ {};
    shared_ptr<string> responseActionType_ {};
    shared_ptr<string> responseExecutionCondition_ {};
    shared_ptr<string> responseRuleId_ {};
    shared_ptr<string> responseRuleName_ {};
    shared_ptr<int32_t> responseRulePriority_ {};
    shared_ptr<int32_t> responseRuleStatus_ {};
    shared_ptr<string> responseTriggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
