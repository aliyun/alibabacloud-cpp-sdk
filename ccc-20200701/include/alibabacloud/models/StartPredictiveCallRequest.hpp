// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPREDICTIVECALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPREDICTIVECALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartPredictiveCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPredictiveCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(ContactFlowVariables, contactFlowVariables_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaskedCallee, maskedCallee_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, StartPredictiveCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(ContactFlowVariables, contactFlowVariables_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaskedCallee, maskedCallee_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    StartPredictiveCallRequest() = default ;
    StartPredictiveCallRequest(const StartPredictiveCallRequest &) = default ;
    StartPredictiveCallRequest(StartPredictiveCallRequest &&) = default ;
    StartPredictiveCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPredictiveCallRequest() = default ;
    StartPredictiveCallRequest& operator=(const StartPredictiveCallRequest &) = default ;
    StartPredictiveCallRequest& operator=(StartPredictiveCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callee_ == nullptr
        && this->caller_ == nullptr && this->contactFlowId_ == nullptr && this->contactFlowVariables_ == nullptr && this->instanceId_ == nullptr && this->maskedCallee_ == nullptr
        && this->skillGroupId_ == nullptr && this->tags_ == nullptr && this->timeoutSeconds_ == nullptr; };
    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline StartPredictiveCallRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline StartPredictiveCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string getContactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline StartPredictiveCallRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // contactFlowVariables Field Functions 
    bool hasContactFlowVariables() const { return this->contactFlowVariables_ != nullptr;};
    void deleteContactFlowVariables() { this->contactFlowVariables_ = nullptr;};
    inline string getContactFlowVariables() const { DARABONBA_PTR_GET_DEFAULT(contactFlowVariables_, "") };
    inline StartPredictiveCallRequest& setContactFlowVariables(string contactFlowVariables) { DARABONBA_PTR_SET_VALUE(contactFlowVariables_, contactFlowVariables) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartPredictiveCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maskedCallee Field Functions 
    bool hasMaskedCallee() const { return this->maskedCallee_ != nullptr;};
    void deleteMaskedCallee() { this->maskedCallee_ = nullptr;};
    inline string getMaskedCallee() const { DARABONBA_PTR_GET_DEFAULT(maskedCallee_, "") };
    inline StartPredictiveCallRequest& setMaskedCallee(string maskedCallee) { DARABONBA_PTR_SET_VALUE(maskedCallee_, maskedCallee) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline StartPredictiveCallRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline StartPredictiveCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline StartPredictiveCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    // The callee number.
    // 
    // This parameter is required.
    shared_ptr<string> callee_ {};
    // The caller number, which must be an active outbound number under the instance.
    // 
    // This parameter is required.
    shared_ptr<string> caller_ {};
    // The IVR contact flow ID. After the callee answers, the call is automatically transferred into this IVR flow.
    // 
    // This parameter is required.
    shared_ptr<string> contactFlowId_ {};
    // The contact flow variables passed in as a JSON-formatted string of an array. Each array element is a key-value pair, where the key is the variable name and the value is the variable value. To use these variables in the IVR flow, create a Custom Parameter with the same name in the start node of the IVR associated with the specified contact flow ID.
    shared_ptr<string> contactFlowVariables_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The desensitized callee number. If this field is not empty, it indicates that the callee number must be desensitized. The Desensitization Rule is defined by the Customer. Simply enter the desensitized callee number here. Using a desensitized callee number means that in certain scenarios, only the desensitized number is visible, and the real callee number cannot be viewed.
    shared_ptr<string> maskedCallee_ {};
    // The skill group ID. This parameter is optional. If specified, the outbound number is selected only from the numbers associated with the specified skill group.
    shared_ptr<string> skillGroupId_ {};
    // The ingest endpoint data, primarily used for extension purposes. Regular users do not need to concern themselves with this.
    shared_ptr<string> tags_ {};
    // The timeout period, in seconds. If the call is not answered within the specified time, it is automatically disconnected.
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
