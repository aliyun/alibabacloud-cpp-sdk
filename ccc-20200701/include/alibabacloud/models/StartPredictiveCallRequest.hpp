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
    virtual bool empty() const override { this->callee_ != nullptr
        && this->caller_ != nullptr && this->contactFlowId_ != nullptr && this->contactFlowVariables_ != nullptr && this->instanceId_ != nullptr && this->maskedCallee_ != nullptr
        && this->skillGroupId_ != nullptr && this->tags_ != nullptr && this->timeoutSeconds_ != nullptr; };
    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline StartPredictiveCallRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline StartPredictiveCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline StartPredictiveCallRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // contactFlowVariables Field Functions 
    bool hasContactFlowVariables() const { return this->contactFlowVariables_ != nullptr;};
    void deleteContactFlowVariables() { this->contactFlowVariables_ = nullptr;};
    inline string contactFlowVariables() const { DARABONBA_PTR_GET_DEFAULT(contactFlowVariables_, "") };
    inline StartPredictiveCallRequest& setContactFlowVariables(string contactFlowVariables) { DARABONBA_PTR_SET_VALUE(contactFlowVariables_, contactFlowVariables) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartPredictiveCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maskedCallee Field Functions 
    bool hasMaskedCallee() const { return this->maskedCallee_ != nullptr;};
    void deleteMaskedCallee() { this->maskedCallee_ = nullptr;};
    inline string maskedCallee() const { DARABONBA_PTR_GET_DEFAULT(maskedCallee_, "") };
    inline StartPredictiveCallRequest& setMaskedCallee(string maskedCallee) { DARABONBA_PTR_SET_VALUE(maskedCallee_, maskedCallee) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline StartPredictiveCallRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline StartPredictiveCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline StartPredictiveCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callee_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> caller_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<string> contactFlowVariables_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> maskedCallee_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
