// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONACTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationResponseBodyApplicationActionsActionParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetApplicationResponseBodyApplicationActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplicationActions& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RunActionScope, runActionScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplicationActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RunActionScope, runActionScope_);
    };
    GetApplicationResponseBodyApplicationActions() = default ;
    GetApplicationResponseBodyApplicationActions(const GetApplicationResponseBodyApplicationActions &) = default ;
    GetApplicationResponseBodyApplicationActions(GetApplicationResponseBodyApplicationActions &&) = default ;
    GetApplicationResponseBodyApplicationActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplicationActions() = default ;
    GetApplicationResponseBodyApplicationActions& operator=(const GetApplicationResponseBodyApplicationActions &) = default ;
    GetApplicationResponseBodyApplicationActions& operator=(GetApplicationResponseBodyApplicationActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && return this->actionParams_ == nullptr && return this->command_ == nullptr && return this->componentName_ == nullptr && return this->description_ == nullptr && return this->runActionScope_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline GetApplicationResponseBodyApplicationActions& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline const vector<Models::GetApplicationResponseBodyApplicationActionsActionParams> & actionParams() const { DARABONBA_PTR_GET_CONST(actionParams_, vector<Models::GetApplicationResponseBodyApplicationActionsActionParams>) };
    inline vector<Models::GetApplicationResponseBodyApplicationActionsActionParams> actionParams() { DARABONBA_PTR_GET(actionParams_, vector<Models::GetApplicationResponseBodyApplicationActionsActionParams>) };
    inline GetApplicationResponseBodyApplicationActions& setActionParams(const vector<Models::GetApplicationResponseBodyApplicationActionsActionParams> & actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };
    inline GetApplicationResponseBodyApplicationActions& setActionParams(vector<Models::GetApplicationResponseBodyApplicationActionsActionParams> && actionParams) { DARABONBA_PTR_SET_RVALUE(actionParams_, actionParams) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline GetApplicationResponseBodyApplicationActions& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline GetApplicationResponseBodyApplicationActions& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyApplicationActions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // runActionScope Field Functions 
    bool hasRunActionScope() const { return this->runActionScope_ != nullptr;};
    void deleteRunActionScope() { this->runActionScope_ = nullptr;};
    inline string runActionScope() const { DARABONBA_PTR_GET_DEFAULT(runActionScope_, "") };
    inline GetApplicationResponseBodyApplicationActions& setRunActionScope(string runActionScope) { DARABONBA_PTR_SET_VALUE(runActionScope_, runActionScope) };


  protected:
    // The action name.
    std::shared_ptr<string> actionName_ = nullptr;
    // The list of action parameters.
    std::shared_ptr<vector<Models::GetApplicationResponseBodyApplicationActionsActionParams>> actionParams_ = nullptr;
    // The action command.
    std::shared_ptr<string> command_ = nullptr;
    // The component name.
    std::shared_ptr<string> componentName_ = nullptr;
    // The description of the action.
    std::shared_ptr<string> description_ = nullptr;
    // The execution scope. Valid values:
    // 
    // *   APPLICATION: the application scope.
    // *   COMPONENT: the component scope.
    // *   COMPONENT_INSTANCE: the component instance scope.
    std::shared_ptr<string> runActionScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
