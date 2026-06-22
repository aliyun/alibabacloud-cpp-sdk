// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationResponseBody() = default ;
    GetApplicationResponseBody(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody(GetApplicationResponseBody &&) = default ;
    GetApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBody() = default ;
    GetApplicationResponseBody& operator=(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody& operator=(GetApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Application : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Application& obj) { 
        DARABONBA_PTR_TO_JSON(Actions, actions_);
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ApplicationState, applicationState_);
        DARABONBA_PTR_TO_JSON(ApplicationVersion, applicationVersion_);
        DARABONBA_PTR_TO_JSON(CommunityVersion, communityVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
        DARABONBA_PTR_FROM_JSON(Actions, actions_);
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ApplicationState, applicationState_);
        DARABONBA_PTR_FROM_JSON(ApplicationVersion, applicationVersion_);
        DARABONBA_PTR_FROM_JSON(CommunityVersion, communityVersion_);
      };
      Application() = default ;
      Application(const Application &) = default ;
      Application(Application &&) = default ;
      Application(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Application() = default ;
      Application& operator=(const Application &) = default ;
      Application& operator=(Application &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Actions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Actions& obj) { 
          DARABONBA_PTR_TO_JSON(ActionName, actionName_);
          DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RunActionScope, runActionScope_);
        };
        friend void from_json(const Darabonba::Json& j, Actions& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
          DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RunActionScope, runActionScope_);
        };
        Actions() = default ;
        Actions(const Actions &) = default ;
        Actions(Actions &&) = default ;
        Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Actions() = default ;
        Actions& operator=(const Actions &) = default ;
        Actions& operator=(Actions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ActionParams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActionParams& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(ValueAttribute, valueAttribute_);
          };
          friend void from_json(const Darabonba::Json& j, ActionParams& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(ValueAttribute, valueAttribute_);
          };
          ActionParams() = default ;
          ActionParams(const ActionParams &) = default ;
          ActionParams(ActionParams &&) = default ;
          ActionParams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ActionParams() = default ;
          ActionParams& operator=(const ActionParams &) = default ;
          ActionParams& operator=(ActionParams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ValueAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ValueAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(ValueIncrementStep, valueIncrementStep_);
              DARABONBA_PTR_TO_JSON(ValueMaximum, valueMaximum_);
              DARABONBA_PTR_TO_JSON(ValueMinimum, valueMinimum_);
              DARABONBA_PTR_TO_JSON(ValueType, valueType_);
              DARABONBA_PTR_TO_JSON(ValueUnit, valueUnit_);
            };
            friend void from_json(const Darabonba::Json& j, ValueAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(ValueIncrementStep, valueIncrementStep_);
              DARABONBA_PTR_FROM_JSON(ValueMaximum, valueMaximum_);
              DARABONBA_PTR_FROM_JSON(ValueMinimum, valueMinimum_);
              DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
              DARABONBA_PTR_FROM_JSON(ValueUnit, valueUnit_);
            };
            ValueAttribute() = default ;
            ValueAttribute(const ValueAttribute &) = default ;
            ValueAttribute(ValueAttribute &&) = default ;
            ValueAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ValueAttribute() = default ;
            ValueAttribute& operator=(const ValueAttribute &) = default ;
            ValueAttribute& operator=(ValueAttribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->valueIncrementStep_ == nullptr && this->valueMaximum_ == nullptr && this->valueMinimum_ == nullptr && this->valueType_ == nullptr && this->valueUnit_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ValueAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // valueIncrementStep Field Functions 
            bool hasValueIncrementStep() const { return this->valueIncrementStep_ != nullptr;};
            void deleteValueIncrementStep() { this->valueIncrementStep_ = nullptr;};
            inline string getValueIncrementStep() const { DARABONBA_PTR_GET_DEFAULT(valueIncrementStep_, "") };
            inline ValueAttribute& setValueIncrementStep(string valueIncrementStep) { DARABONBA_PTR_SET_VALUE(valueIncrementStep_, valueIncrementStep) };


            // valueMaximum Field Functions 
            bool hasValueMaximum() const { return this->valueMaximum_ != nullptr;};
            void deleteValueMaximum() { this->valueMaximum_ = nullptr;};
            inline string getValueMaximum() const { DARABONBA_PTR_GET_DEFAULT(valueMaximum_, "") };
            inline ValueAttribute& setValueMaximum(string valueMaximum) { DARABONBA_PTR_SET_VALUE(valueMaximum_, valueMaximum) };


            // valueMinimum Field Functions 
            bool hasValueMinimum() const { return this->valueMinimum_ != nullptr;};
            void deleteValueMinimum() { this->valueMinimum_ = nullptr;};
            inline string getValueMinimum() const { DARABONBA_PTR_GET_DEFAULT(valueMinimum_, "") };
            inline ValueAttribute& setValueMinimum(string valueMinimum) { DARABONBA_PTR_SET_VALUE(valueMinimum_, valueMinimum) };


            // valueType Field Functions 
            bool hasValueType() const { return this->valueType_ != nullptr;};
            void deleteValueType() { this->valueType_ = nullptr;};
            inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
            inline ValueAttribute& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


            // valueUnit Field Functions 
            bool hasValueUnit() const { return this->valueUnit_ != nullptr;};
            void deleteValueUnit() { this->valueUnit_ = nullptr;};
            inline string getValueUnit() const { DARABONBA_PTR_GET_DEFAULT(valueUnit_, "") };
            inline ValueAttribute& setValueUnit(string valueUnit) { DARABONBA_PTR_SET_VALUE(valueUnit_, valueUnit) };


          protected:
            // Value description.
            shared_ptr<string> description_ {};
            // The size of the value increment.
            shared_ptr<string> valueIncrementStep_ {};
            // The maximum range of values.
            shared_ptr<string> valueMaximum_ {};
            // The minimum range of values.
            shared_ptr<string> valueMinimum_ {};
            // The value type of the column.
            shared_ptr<string> valueType_ {};
            // The unit of the value.
            shared_ptr<string> valueUnit_ {};
          };

          virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr && this->valueAttribute_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ActionParams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline ActionParams& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // valueAttribute Field Functions 
          bool hasValueAttribute() const { return this->valueAttribute_ != nullptr;};
          void deleteValueAttribute() { this->valueAttribute_ = nullptr;};
          inline const ActionParams::ValueAttribute & getValueAttribute() const { DARABONBA_PTR_GET_CONST(valueAttribute_, ActionParams::ValueAttribute) };
          inline ActionParams::ValueAttribute getValueAttribute() { DARABONBA_PTR_GET(valueAttribute_, ActionParams::ValueAttribute) };
          inline ActionParams& setValueAttribute(const ActionParams::ValueAttribute & valueAttribute) { DARABONBA_PTR_SET_VALUE(valueAttribute_, valueAttribute) };
          inline ActionParams& setValueAttribute(ActionParams::ValueAttribute && valueAttribute) { DARABONBA_PTR_SET_RVALUE(valueAttribute_, valueAttribute) };


        protected:
          // Description
          shared_ptr<string> description_ {};
          // The parameter name.
          shared_ptr<string> key_ {};
          // The parameter value attribute.
          shared_ptr<ActionParams::ValueAttribute> valueAttribute_ {};
        };

        virtual bool empty() const override { return this->actionName_ == nullptr
        && this->actionParams_ == nullptr && this->command_ == nullptr && this->componentName_ == nullptr && this->description_ == nullptr && this->runActionScope_ == nullptr; };
        // actionName Field Functions 
        bool hasActionName() const { return this->actionName_ != nullptr;};
        void deleteActionName() { this->actionName_ = nullptr;};
        inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
        inline Actions& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


        // actionParams Field Functions 
        bool hasActionParams() const { return this->actionParams_ != nullptr;};
        void deleteActionParams() { this->actionParams_ = nullptr;};
        inline const vector<Actions::ActionParams> & getActionParams() const { DARABONBA_PTR_GET_CONST(actionParams_, vector<Actions::ActionParams>) };
        inline vector<Actions::ActionParams> getActionParams() { DARABONBA_PTR_GET(actionParams_, vector<Actions::ActionParams>) };
        inline Actions& setActionParams(const vector<Actions::ActionParams> & actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };
        inline Actions& setActionParams(vector<Actions::ActionParams> && actionParams) { DARABONBA_PTR_SET_RVALUE(actionParams_, actionParams) };


        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline Actions& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // componentName Field Functions 
        bool hasComponentName() const { return this->componentName_ != nullptr;};
        void deleteComponentName() { this->componentName_ = nullptr;};
        inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
        inline Actions& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Actions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // runActionScope Field Functions 
        bool hasRunActionScope() const { return this->runActionScope_ != nullptr;};
        void deleteRunActionScope() { this->runActionScope_ = nullptr;};
        inline string getRunActionScope() const { DARABONBA_PTR_GET_DEFAULT(runActionScope_, "") };
        inline Actions& setRunActionScope(string runActionScope) { DARABONBA_PTR_SET_VALUE(runActionScope_, runActionScope) };


      protected:
        // The action name.
        shared_ptr<string> actionName_ {};
        // The list of action parameters.
        shared_ptr<vector<Actions::ActionParams>> actionParams_ {};
        // The action command.
        shared_ptr<string> command_ {};
        // The component name.
        shared_ptr<string> componentName_ {};
        // The description of the action.
        shared_ptr<string> description_ {};
        // The execution scope. Valid values:
        // 
        // - APPLICATION: the application scope.
        // 
        // - COMPONENT: the component scope.
        // 
        // - COMPONENT_INSTANCE: the component instance scope.
        shared_ptr<string> runActionScope_ {};
      };

      virtual bool empty() const override { return this->actions_ == nullptr
        && this->applicationName_ == nullptr && this->applicationState_ == nullptr && this->applicationVersion_ == nullptr && this->communityVersion_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<Application::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Application::Actions>) };
      inline vector<Application::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<Application::Actions>) };
      inline Application& setActions(const vector<Application::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Application& setActions(vector<Application::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Application& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // applicationState Field Functions 
      bool hasApplicationState() const { return this->applicationState_ != nullptr;};
      void deleteApplicationState() { this->applicationState_ = nullptr;};
      inline string getApplicationState() const { DARABONBA_PTR_GET_DEFAULT(applicationState_, "") };
      inline Application& setApplicationState(string applicationState) { DARABONBA_PTR_SET_VALUE(applicationState_, applicationState) };


      // applicationVersion Field Functions 
      bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
      void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
      inline string getApplicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
      inline Application& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


      // communityVersion Field Functions 
      bool hasCommunityVersion() const { return this->communityVersion_ != nullptr;};
      void deleteCommunityVersion() { this->communityVersion_ = nullptr;};
      inline string getCommunityVersion() const { DARABONBA_PTR_GET_DEFAULT(communityVersion_, "") };
      inline Application& setCommunityVersion(string communityVersion) { DARABONBA_PTR_SET_VALUE(communityVersion_, communityVersion) };


    protected:
      // The list of actions supported by the application.
      shared_ptr<vector<Application::Actions>> actions_ {};
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The status of the application.
      shared_ptr<string> applicationState_ {};
      // The application version.
      shared_ptr<string> applicationVersion_ {};
      // The community version.
      shared_ptr<string> communityVersion_ {};
    };

    virtual bool empty() const override { return this->application_ == nullptr
        && this->requestId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const GetApplicationResponseBody::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody::Application getApplication() { DARABONBA_PTR_GET(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody& setApplication(const GetApplicationResponseBody::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline GetApplicationResponseBody& setApplication(GetApplicationResponseBody::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application.
    shared_ptr<GetApplicationResponseBody::Application> application_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
