// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWINFO_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWorkflowResponseBodyWorkflowInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBodyWorkflowInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ActionList, actionList_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBodyWorkflowInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    GetWorkflowResponseBodyWorkflowInfo() = default ;
    GetWorkflowResponseBodyWorkflowInfo(const GetWorkflowResponseBodyWorkflowInfo &) = default ;
    GetWorkflowResponseBodyWorkflowInfo(GetWorkflowResponseBodyWorkflowInfo &&) = default ;
    GetWorkflowResponseBodyWorkflowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBodyWorkflowInfo() = default ;
    GetWorkflowResponseBodyWorkflowInfo& operator=(const GetWorkflowResponseBodyWorkflowInfo &) = default ;
    GetWorkflowResponseBodyWorkflowInfo& operator=(GetWorkflowResponseBodyWorkflowInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionList_ != nullptr
        && this->appId_ != nullptr && this->callbackConfig_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->modifyTime_ != nullptr
        && this->name_ != nullptr && this->state_ != nullptr && this->workflowId_ != nullptr; };
    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline string actionList() const { DARABONBA_PTR_GET_DEFAULT(actionList_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setActionList(string actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackConfig Field Functions 
    bool hasCallbackConfig() const { return this->callbackConfig_ != nullptr;};
    void deleteCallbackConfig() { this->callbackConfig_ = nullptr;};
    inline string callbackConfig() const { DARABONBA_PTR_GET_DEFAULT(callbackConfig_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setCallbackConfig(string callbackConfig) { DARABONBA_PTR_SET_VALUE(callbackConfig_, callbackConfig) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline GetWorkflowResponseBodyWorkflowInfo& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    std::shared_ptr<string> actionList_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> callbackConfig_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
