// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetSecurityStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityStrategy, securityStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityStrategy, securityStrategy_);
    };
    GetSecurityStrategyResponseBody() = default ;
    GetSecurityStrategyResponseBody(const GetSecurityStrategyResponseBody &) = default ;
    GetSecurityStrategyResponseBody(GetSecurityStrategyResponseBody &&) = default ;
    GetSecurityStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityStrategyResponseBody() = default ;
    GetSecurityStrategyResponseBody& operator=(const GetSecurityStrategyResponseBody &) = default ;
    GetSecurityStrategyResponseBody& operator=(GetSecurityStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityStrategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityStrategy& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ControlDwScope, controlDwScope_);
        DARABONBA_PTR_TO_JSON(ControlModule, controlModule_);
        DARABONBA_PTR_TO_JSON(ControlSubModule, controlSubModule_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OriginPolicyId, originPolicyId_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Updater, updater_);
        DARABONBA_PTR_TO_JSON(Workspaces, workspaces_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityStrategy& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ControlDwScope, controlDwScope_);
        DARABONBA_PTR_FROM_JSON(ControlModule, controlModule_);
        DARABONBA_PTR_FROM_JSON(ControlSubModule, controlSubModule_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OriginPolicyId, originPolicyId_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Updater, updater_);
        DARABONBA_PTR_FROM_JSON(Workspaces, workspaces_);
      };
      SecurityStrategy() = default ;
      SecurityStrategy(const SecurityStrategy &) = default ;
      SecurityStrategy(SecurityStrategy &&) = default ;
      SecurityStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityStrategy() = default ;
      SecurityStrategy& operator=(const SecurityStrategy &) = default ;
      SecurityStrategy& operator=(SecurityStrategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(ControlDwScope, controlDwScope_);
          DARABONBA_PTR_TO_JSON(ControlModule, controlModule_);
          DARABONBA_PTR_TO_JSON(ControlSubModule, controlSubModule_);
          DARABONBA_PTR_TO_JSON(Controllers, controllers_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(DisplayNameEn, displayNameEn_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SystemPolicyDisplayName, systemPolicyDisplayName_);
          DARABONBA_PTR_TO_JSON(SystemPolicyName, systemPolicyName_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(ControlDwScope, controlDwScope_);
          DARABONBA_PTR_FROM_JSON(ControlModule, controlModule_);
          DARABONBA_PTR_FROM_JSON(ControlSubModule, controlSubModule_);
          DARABONBA_PTR_FROM_JSON(Controllers, controllers_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(DisplayNameEn, displayNameEn_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SystemPolicyDisplayName, systemPolicyDisplayName_);
          DARABONBA_PTR_FROM_JSON(SystemPolicyName, systemPolicyName_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Controllers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Controllers& obj) { 
            DARABONBA_ANY_TO_JSON(BasicEditionDefaultValue, basicEditionDefaultValue_);
            DARABONBA_PTR_TO_JSON(BasicEditionIntervalValue, basicEditionIntervalValue_);
            DARABONBA_PTR_TO_JSON(Controller, controller_);
            DARABONBA_PTR_TO_JSON(ControllerValueType, controllerValueType_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(DisplayNameEn, displayNameEn_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_ANY_TO_JSON(EnterpriseEditionDefaultValue, enterpriseEditionDefaultValue_);
            DARABONBA_PTR_TO_JSON(EnterpriseEditionIntervalValue, enterpriseEditionIntervalValue_);
            DARABONBA_ANY_TO_JSON(ProfessionalEditionDefaultValue, professionalEditionDefaultValue_);
            DARABONBA_PTR_TO_JSON(ProfessionalEditionIntervalValue, professionalEditionIntervalValue_);
            DARABONBA_ANY_TO_JSON(StandardEditionDefaultValue, standardEditionDefaultValue_);
            DARABONBA_PTR_TO_JSON(StandardEditionIntervalValue, standardEditionIntervalValue_);
            DARABONBA_ANY_TO_JSON(UserConfigValue, userConfigValue_);
          };
          friend void from_json(const Darabonba::Json& j, Controllers& obj) { 
            DARABONBA_ANY_FROM_JSON(BasicEditionDefaultValue, basicEditionDefaultValue_);
            DARABONBA_PTR_FROM_JSON(BasicEditionIntervalValue, basicEditionIntervalValue_);
            DARABONBA_PTR_FROM_JSON(Controller, controller_);
            DARABONBA_PTR_FROM_JSON(ControllerValueType, controllerValueType_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(DisplayNameEn, displayNameEn_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_ANY_FROM_JSON(EnterpriseEditionDefaultValue, enterpriseEditionDefaultValue_);
            DARABONBA_PTR_FROM_JSON(EnterpriseEditionIntervalValue, enterpriseEditionIntervalValue_);
            DARABONBA_ANY_FROM_JSON(ProfessionalEditionDefaultValue, professionalEditionDefaultValue_);
            DARABONBA_PTR_FROM_JSON(ProfessionalEditionIntervalValue, professionalEditionIntervalValue_);
            DARABONBA_ANY_FROM_JSON(StandardEditionDefaultValue, standardEditionDefaultValue_);
            DARABONBA_PTR_FROM_JSON(StandardEditionIntervalValue, standardEditionIntervalValue_);
            DARABONBA_ANY_FROM_JSON(UserConfigValue, userConfigValue_);
          };
          Controllers() = default ;
          Controllers(const Controllers &) = default ;
          Controllers(Controllers &&) = default ;
          Controllers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Controllers() = default ;
          Controllers& operator=(const Controllers &) = default ;
          Controllers& operator=(Controllers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->basicEditionDefaultValue_ == nullptr
        && this->basicEditionIntervalValue_ == nullptr && this->controller_ == nullptr && this->controllerValueType_ == nullptr && this->displayName_ == nullptr && this->displayNameEn_ == nullptr
        && this->enable_ == nullptr && this->enterpriseEditionDefaultValue_ == nullptr && this->enterpriseEditionIntervalValue_ == nullptr && this->professionalEditionDefaultValue_ == nullptr && this->professionalEditionIntervalValue_ == nullptr
        && this->standardEditionDefaultValue_ == nullptr && this->standardEditionIntervalValue_ == nullptr && this->userConfigValue_ == nullptr; };
          // basicEditionDefaultValue Field Functions 
          bool hasBasicEditionDefaultValue() const { return this->basicEditionDefaultValue_ != nullptr;};
          void deleteBasicEditionDefaultValue() { this->basicEditionDefaultValue_ = nullptr;};
          inline           const Darabonba::Json & getBasicEditionDefaultValue() const { DARABONBA_GET(basicEditionDefaultValue_) };
          Darabonba::Json & getBasicEditionDefaultValue() { DARABONBA_GET(basicEditionDefaultValue_) };
          inline Controllers& setBasicEditionDefaultValue(const Darabonba::Json & basicEditionDefaultValue) { DARABONBA_SET_VALUE(basicEditionDefaultValue_, basicEditionDefaultValue) };
          inline Controllers& setBasicEditionDefaultValue(Darabonba::Json && basicEditionDefaultValue) { DARABONBA_SET_RVALUE(basicEditionDefaultValue_, basicEditionDefaultValue) };


          // basicEditionIntervalValue Field Functions 
          bool hasBasicEditionIntervalValue() const { return this->basicEditionIntervalValue_ != nullptr;};
          void deleteBasicEditionIntervalValue() { this->basicEditionIntervalValue_ = nullptr;};
          inline const vector<int32_t> & getBasicEditionIntervalValue() const { DARABONBA_PTR_GET_CONST(basicEditionIntervalValue_, vector<int32_t>) };
          inline vector<int32_t> getBasicEditionIntervalValue() { DARABONBA_PTR_GET(basicEditionIntervalValue_, vector<int32_t>) };
          inline Controllers& setBasicEditionIntervalValue(const vector<int32_t> & basicEditionIntervalValue) { DARABONBA_PTR_SET_VALUE(basicEditionIntervalValue_, basicEditionIntervalValue) };
          inline Controllers& setBasicEditionIntervalValue(vector<int32_t> && basicEditionIntervalValue) { DARABONBA_PTR_SET_RVALUE(basicEditionIntervalValue_, basicEditionIntervalValue) };


          // controller Field Functions 
          bool hasController() const { return this->controller_ != nullptr;};
          void deleteController() { this->controller_ = nullptr;};
          inline string getController() const { DARABONBA_PTR_GET_DEFAULT(controller_, "") };
          inline Controllers& setController(string controller) { DARABONBA_PTR_SET_VALUE(controller_, controller) };


          // controllerValueType Field Functions 
          bool hasControllerValueType() const { return this->controllerValueType_ != nullptr;};
          void deleteControllerValueType() { this->controllerValueType_ = nullptr;};
          inline string getControllerValueType() const { DARABONBA_PTR_GET_DEFAULT(controllerValueType_, "") };
          inline Controllers& setControllerValueType(string controllerValueType) { DARABONBA_PTR_SET_VALUE(controllerValueType_, controllerValueType) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline Controllers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // displayNameEn Field Functions 
          bool hasDisplayNameEn() const { return this->displayNameEn_ != nullptr;};
          void deleteDisplayNameEn() { this->displayNameEn_ = nullptr;};
          inline string getDisplayNameEn() const { DARABONBA_PTR_GET_DEFAULT(displayNameEn_, "") };
          inline Controllers& setDisplayNameEn(string displayNameEn) { DARABONBA_PTR_SET_VALUE(displayNameEn_, displayNameEn) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline Controllers& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // enterpriseEditionDefaultValue Field Functions 
          bool hasEnterpriseEditionDefaultValue() const { return this->enterpriseEditionDefaultValue_ != nullptr;};
          void deleteEnterpriseEditionDefaultValue() { this->enterpriseEditionDefaultValue_ = nullptr;};
          inline           const Darabonba::Json & getEnterpriseEditionDefaultValue() const { DARABONBA_GET(enterpriseEditionDefaultValue_) };
          Darabonba::Json & getEnterpriseEditionDefaultValue() { DARABONBA_GET(enterpriseEditionDefaultValue_) };
          inline Controllers& setEnterpriseEditionDefaultValue(const Darabonba::Json & enterpriseEditionDefaultValue) { DARABONBA_SET_VALUE(enterpriseEditionDefaultValue_, enterpriseEditionDefaultValue) };
          inline Controllers& setEnterpriseEditionDefaultValue(Darabonba::Json && enterpriseEditionDefaultValue) { DARABONBA_SET_RVALUE(enterpriseEditionDefaultValue_, enterpriseEditionDefaultValue) };


          // enterpriseEditionIntervalValue Field Functions 
          bool hasEnterpriseEditionIntervalValue() const { return this->enterpriseEditionIntervalValue_ != nullptr;};
          void deleteEnterpriseEditionIntervalValue() { this->enterpriseEditionIntervalValue_ = nullptr;};
          inline const vector<int32_t> & getEnterpriseEditionIntervalValue() const { DARABONBA_PTR_GET_CONST(enterpriseEditionIntervalValue_, vector<int32_t>) };
          inline vector<int32_t> getEnterpriseEditionIntervalValue() { DARABONBA_PTR_GET(enterpriseEditionIntervalValue_, vector<int32_t>) };
          inline Controllers& setEnterpriseEditionIntervalValue(const vector<int32_t> & enterpriseEditionIntervalValue) { DARABONBA_PTR_SET_VALUE(enterpriseEditionIntervalValue_, enterpriseEditionIntervalValue) };
          inline Controllers& setEnterpriseEditionIntervalValue(vector<int32_t> && enterpriseEditionIntervalValue) { DARABONBA_PTR_SET_RVALUE(enterpriseEditionIntervalValue_, enterpriseEditionIntervalValue) };


          // professionalEditionDefaultValue Field Functions 
          bool hasProfessionalEditionDefaultValue() const { return this->professionalEditionDefaultValue_ != nullptr;};
          void deleteProfessionalEditionDefaultValue() { this->professionalEditionDefaultValue_ = nullptr;};
          inline           const Darabonba::Json & getProfessionalEditionDefaultValue() const { DARABONBA_GET(professionalEditionDefaultValue_) };
          Darabonba::Json & getProfessionalEditionDefaultValue() { DARABONBA_GET(professionalEditionDefaultValue_) };
          inline Controllers& setProfessionalEditionDefaultValue(const Darabonba::Json & professionalEditionDefaultValue) { DARABONBA_SET_VALUE(professionalEditionDefaultValue_, professionalEditionDefaultValue) };
          inline Controllers& setProfessionalEditionDefaultValue(Darabonba::Json && professionalEditionDefaultValue) { DARABONBA_SET_RVALUE(professionalEditionDefaultValue_, professionalEditionDefaultValue) };


          // professionalEditionIntervalValue Field Functions 
          bool hasProfessionalEditionIntervalValue() const { return this->professionalEditionIntervalValue_ != nullptr;};
          void deleteProfessionalEditionIntervalValue() { this->professionalEditionIntervalValue_ = nullptr;};
          inline const vector<int32_t> & getProfessionalEditionIntervalValue() const { DARABONBA_PTR_GET_CONST(professionalEditionIntervalValue_, vector<int32_t>) };
          inline vector<int32_t> getProfessionalEditionIntervalValue() { DARABONBA_PTR_GET(professionalEditionIntervalValue_, vector<int32_t>) };
          inline Controllers& setProfessionalEditionIntervalValue(const vector<int32_t> & professionalEditionIntervalValue) { DARABONBA_PTR_SET_VALUE(professionalEditionIntervalValue_, professionalEditionIntervalValue) };
          inline Controllers& setProfessionalEditionIntervalValue(vector<int32_t> && professionalEditionIntervalValue) { DARABONBA_PTR_SET_RVALUE(professionalEditionIntervalValue_, professionalEditionIntervalValue) };


          // standardEditionDefaultValue Field Functions 
          bool hasStandardEditionDefaultValue() const { return this->standardEditionDefaultValue_ != nullptr;};
          void deleteStandardEditionDefaultValue() { this->standardEditionDefaultValue_ = nullptr;};
          inline           const Darabonba::Json & getStandardEditionDefaultValue() const { DARABONBA_GET(standardEditionDefaultValue_) };
          Darabonba::Json & getStandardEditionDefaultValue() { DARABONBA_GET(standardEditionDefaultValue_) };
          inline Controllers& setStandardEditionDefaultValue(const Darabonba::Json & standardEditionDefaultValue) { DARABONBA_SET_VALUE(standardEditionDefaultValue_, standardEditionDefaultValue) };
          inline Controllers& setStandardEditionDefaultValue(Darabonba::Json && standardEditionDefaultValue) { DARABONBA_SET_RVALUE(standardEditionDefaultValue_, standardEditionDefaultValue) };


          // standardEditionIntervalValue Field Functions 
          bool hasStandardEditionIntervalValue() const { return this->standardEditionIntervalValue_ != nullptr;};
          void deleteStandardEditionIntervalValue() { this->standardEditionIntervalValue_ = nullptr;};
          inline const vector<int32_t> & getStandardEditionIntervalValue() const { DARABONBA_PTR_GET_CONST(standardEditionIntervalValue_, vector<int32_t>) };
          inline vector<int32_t> getStandardEditionIntervalValue() { DARABONBA_PTR_GET(standardEditionIntervalValue_, vector<int32_t>) };
          inline Controllers& setStandardEditionIntervalValue(const vector<int32_t> & standardEditionIntervalValue) { DARABONBA_PTR_SET_VALUE(standardEditionIntervalValue_, standardEditionIntervalValue) };
          inline Controllers& setStandardEditionIntervalValue(vector<int32_t> && standardEditionIntervalValue) { DARABONBA_PTR_SET_RVALUE(standardEditionIntervalValue_, standardEditionIntervalValue) };


          // userConfigValue Field Functions 
          bool hasUserConfigValue() const { return this->userConfigValue_ != nullptr;};
          void deleteUserConfigValue() { this->userConfigValue_ = nullptr;};
          inline           const Darabonba::Json & getUserConfigValue() const { DARABONBA_GET(userConfigValue_) };
          Darabonba::Json & getUserConfigValue() { DARABONBA_GET(userConfigValue_) };
          inline Controllers& setUserConfigValue(const Darabonba::Json & userConfigValue) { DARABONBA_SET_VALUE(userConfigValue_, userConfigValue) };
          inline Controllers& setUserConfigValue(Darabonba::Json && userConfigValue) { DARABONBA_SET_RVALUE(userConfigValue_, userConfigValue) };


        protected:
          // The default value for Basic Edition.
          Darabonba::Json basicEditionDefaultValue_ {};
          // The valid value range for Basic Edition, specified as an array `[min, max]`.
          shared_ptr<vector<int32_t>> basicEditionIntervalValue_ {};
          // The identifier for the controller. For valid values, see the documentation for the relevant schema.
          shared_ptr<string> controller_ {};
          // The value type of the controller. Valid values are `Boolean`, `Integer`, `Long`, and `String`.
          shared_ptr<string> controllerValueType_ {};
          // The display name.
          shared_ptr<string> displayName_ {};
          // The display name in English.
          shared_ptr<string> displayNameEn_ {};
          // Whether the controller is enabled.
          shared_ptr<bool> enable_ {};
          // The default value for Enterprise Edition.
          Darabonba::Json enterpriseEditionDefaultValue_ {};
          // The valid value range for Enterprise Edition, specified as an array `[min, max]`.
          shared_ptr<vector<int32_t>> enterpriseEditionIntervalValue_ {};
          // The default value for Professional Edition.
          Darabonba::Json professionalEditionDefaultValue_ {};
          // The valid value range for Professional Edition, specified as an array `[min, max]`.
          shared_ptr<vector<int32_t>> professionalEditionIntervalValue_ {};
          // The default value for Standard Edition.
          Darabonba::Json standardEditionDefaultValue_ {};
          // The valid value range for Standard Edition, specified as an array `[min, max]`.
          shared_ptr<vector<int32_t>> standardEditionIntervalValue_ {};
          // The value configured by the user. The data type of this value is specified by the `ControllerValueType` parameter.
          Darabonba::Json userConfigValue_ {};
        };

        virtual bool empty() const override { return this->controlDwScope_ == nullptr
        && this->controlModule_ == nullptr && this->controlSubModule_ == nullptr && this->controllers_ == nullptr && this->displayName_ == nullptr && this->displayNameEn_ == nullptr
        && this->name_ == nullptr && this->systemPolicyDisplayName_ == nullptr && this->systemPolicyName_ == nullptr; };
        // controlDwScope Field Functions 
        bool hasControlDwScope() const { return this->controlDwScope_ != nullptr;};
        void deleteControlDwScope() { this->controlDwScope_ = nullptr;};
        inline string getControlDwScope() const { DARABONBA_PTR_GET_DEFAULT(controlDwScope_, "") };
        inline Content& setControlDwScope(string controlDwScope) { DARABONBA_PTR_SET_VALUE(controlDwScope_, controlDwScope) };


        // controlModule Field Functions 
        bool hasControlModule() const { return this->controlModule_ != nullptr;};
        void deleteControlModule() { this->controlModule_ = nullptr;};
        inline string getControlModule() const { DARABONBA_PTR_GET_DEFAULT(controlModule_, "") };
        inline Content& setControlModule(string controlModule) { DARABONBA_PTR_SET_VALUE(controlModule_, controlModule) };


        // controlSubModule Field Functions 
        bool hasControlSubModule() const { return this->controlSubModule_ != nullptr;};
        void deleteControlSubModule() { this->controlSubModule_ = nullptr;};
        inline string getControlSubModule() const { DARABONBA_PTR_GET_DEFAULT(controlSubModule_, "") };
        inline Content& setControlSubModule(string controlSubModule) { DARABONBA_PTR_SET_VALUE(controlSubModule_, controlSubModule) };


        // controllers Field Functions 
        bool hasControllers() const { return this->controllers_ != nullptr;};
        void deleteControllers() { this->controllers_ = nullptr;};
        inline const vector<Content::Controllers> & getControllers() const { DARABONBA_PTR_GET_CONST(controllers_, vector<Content::Controllers>) };
        inline vector<Content::Controllers> getControllers() { DARABONBA_PTR_GET(controllers_, vector<Content::Controllers>) };
        inline Content& setControllers(const vector<Content::Controllers> & controllers) { DARABONBA_PTR_SET_VALUE(controllers_, controllers) };
        inline Content& setControllers(vector<Content::Controllers> && controllers) { DARABONBA_PTR_SET_RVALUE(controllers_, controllers) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Content& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // displayNameEn Field Functions 
        bool hasDisplayNameEn() const { return this->displayNameEn_ != nullptr;};
        void deleteDisplayNameEn() { this->displayNameEn_ = nullptr;};
        inline string getDisplayNameEn() const { DARABONBA_PTR_GET_DEFAULT(displayNameEn_, "") };
        inline Content& setDisplayNameEn(string displayNameEn) { DARABONBA_PTR_SET_VALUE(displayNameEn_, displayNameEn) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // systemPolicyDisplayName Field Functions 
        bool hasSystemPolicyDisplayName() const { return this->systemPolicyDisplayName_ != nullptr;};
        void deleteSystemPolicyDisplayName() { this->systemPolicyDisplayName_ = nullptr;};
        inline string getSystemPolicyDisplayName() const { DARABONBA_PTR_GET_DEFAULT(systemPolicyDisplayName_, "") };
        inline Content& setSystemPolicyDisplayName(string systemPolicyDisplayName) { DARABONBA_PTR_SET_VALUE(systemPolicyDisplayName_, systemPolicyDisplayName) };


        // systemPolicyName Field Functions 
        bool hasSystemPolicyName() const { return this->systemPolicyName_ != nullptr;};
        void deleteSystemPolicyName() { this->systemPolicyName_ = nullptr;};
        inline string getSystemPolicyName() const { DARABONBA_PTR_GET_DEFAULT(systemPolicyName_, "") };
        inline Content& setSystemPolicyName(string systemPolicyName) { DARABONBA_PTR_SET_VALUE(systemPolicyName_, systemPolicyName) };


      protected:
        // The scope where the policy is effective. Valid values:
        shared_ptr<string> controlDwScope_ {};
        // The control module. This value corresponds to `controlModule` in the associated `SecurityStrategySchema`.
        shared_ptr<string> controlModule_ {};
        // The control submodule. This value corresponds to `controlSubModule` in the associated `SecurityStrategySchema`.
        shared_ptr<string> controlSubModule_ {};
        // A list of controllers.
        // 
        // **Note:** The available controllers depend on the selected schema. See the documentation for your schema for a list of valid controllers.
        shared_ptr<vector<Content::Controllers>> controllers_ {};
        // The `displayName` field from the associated `SecurityStrategySchema`.
        shared_ptr<string> displayName_ {};
        // The `displayNameEn` field from the associated `SecurityStrategySchema`.
        shared_ptr<string> displayNameEn_ {};
        // The `name` field from the associated `SecurityStrategySchema`.
        shared_ptr<string> name_ {};
        // The display name of the system policy.
        shared_ptr<string> systemPolicyDisplayName_ {};
        // The name of the system policy. If specified, a default policy is automatically created.
        shared_ptr<string> systemPolicyName_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->controlDwScope_ == nullptr && this->controlModule_ == nullptr && this->controlSubModule_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->originPolicyId_ == nullptr
        && this->schemaName_ == nullptr && this->updateTime_ == nullptr && this->updater_ == nullptr && this->workspaces_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const SecurityStrategy::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, SecurityStrategy::Content) };
      inline SecurityStrategy::Content getContent() { DARABONBA_PTR_GET(content_, SecurityStrategy::Content) };
      inline SecurityStrategy& setContent(const SecurityStrategy::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline SecurityStrategy& setContent(SecurityStrategy::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // controlDwScope Field Functions 
      bool hasControlDwScope() const { return this->controlDwScope_ != nullptr;};
      void deleteControlDwScope() { this->controlDwScope_ = nullptr;};
      inline string getControlDwScope() const { DARABONBA_PTR_GET_DEFAULT(controlDwScope_, "") };
      inline SecurityStrategy& setControlDwScope(string controlDwScope) { DARABONBA_PTR_SET_VALUE(controlDwScope_, controlDwScope) };


      // controlModule Field Functions 
      bool hasControlModule() const { return this->controlModule_ != nullptr;};
      void deleteControlModule() { this->controlModule_ = nullptr;};
      inline string getControlModule() const { DARABONBA_PTR_GET_DEFAULT(controlModule_, "") };
      inline SecurityStrategy& setControlModule(string controlModule) { DARABONBA_PTR_SET_VALUE(controlModule_, controlModule) };


      // controlSubModule Field Functions 
      bool hasControlSubModule() const { return this->controlSubModule_ != nullptr;};
      void deleteControlSubModule() { this->controlSubModule_ = nullptr;};
      inline string getControlSubModule() const { DARABONBA_PTR_GET_DEFAULT(controlSubModule_, "") };
      inline SecurityStrategy& setControlSubModule(string controlSubModule) { DARABONBA_PTR_SET_VALUE(controlSubModule_, controlSubModule) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SecurityStrategy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline SecurityStrategy& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SecurityStrategy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline SecurityStrategy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SecurityStrategy& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecurityStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // originPolicyId Field Functions 
      bool hasOriginPolicyId() const { return this->originPolicyId_ != nullptr;};
      void deleteOriginPolicyId() { this->originPolicyId_ = nullptr;};
      inline int64_t getOriginPolicyId() const { DARABONBA_PTR_GET_DEFAULT(originPolicyId_, 0L) };
      inline SecurityStrategy& setOriginPolicyId(int64_t originPolicyId) { DARABONBA_PTR_SET_VALUE(originPolicyId_, originPolicyId) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline SecurityStrategy& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SecurityStrategy& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updater Field Functions 
      bool hasUpdater() const { return this->updater_ != nullptr;};
      void deleteUpdater() { this->updater_ = nullptr;};
      inline string getUpdater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
      inline SecurityStrategy& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


      // workspaces Field Functions 
      bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
      void deleteWorkspaces() { this->workspaces_ = nullptr;};
      inline const vector<int64_t> & getWorkspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<int64_t>) };
      inline vector<int64_t> getWorkspaces() { DARABONBA_PTR_GET(workspaces_, vector<int64_t>) };
      inline SecurityStrategy& setWorkspaces(const vector<int64_t> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
      inline SecurityStrategy& setWorkspaces(vector<int64_t> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


    protected:
      // The content of the security policy. Its structure is defined by the `SecurityStrategySchema`.
      shared_ptr<SecurityStrategy::Content> content_ {};
      // The scope where the policy is effective. Valid values: `Workspace` or `Tenant`.
      shared_ptr<string> controlDwScope_ {};
      // The control module.
      shared_ptr<string> controlModule_ {};
      // The control submodule.
      shared_ptr<string> controlSubModule_ {};
      // The time when the security policy was created.
      shared_ptr<string> createTime_ {};
      // The ID of the creator.
      shared_ptr<string> creator_ {};
      // The policy description.
      shared_ptr<string> description_ {};
      // Whether the security policy is enabled.
      shared_ptr<bool> enabled_ {};
      // The policy ID.
      shared_ptr<int64_t> id_ {};
      // The policy name.
      shared_ptr<string> name_ {};
      // The source ID of the default system policy.
      shared_ptr<int64_t> originPolicyId_ {};
      // The name of the schema template.
      shared_ptr<string> schemaName_ {};
      // The time when the security policy was last updated.
      shared_ptr<string> updateTime_ {};
      // The ID of the last updater.
      shared_ptr<string> updater_ {};
      // The list of associated workspace IDs.
      shared_ptr<vector<int64_t>> workspaces_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityStrategy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityStrategy Field Functions 
    bool hasSecurityStrategy() const { return this->securityStrategy_ != nullptr;};
    void deleteSecurityStrategy() { this->securityStrategy_ = nullptr;};
    inline const GetSecurityStrategyResponseBody::SecurityStrategy & getSecurityStrategy() const { DARABONBA_PTR_GET_CONST(securityStrategy_, GetSecurityStrategyResponseBody::SecurityStrategy) };
    inline GetSecurityStrategyResponseBody::SecurityStrategy getSecurityStrategy() { DARABONBA_PTR_GET(securityStrategy_, GetSecurityStrategyResponseBody::SecurityStrategy) };
    inline GetSecurityStrategyResponseBody& setSecurityStrategy(const GetSecurityStrategyResponseBody::SecurityStrategy & securityStrategy) { DARABONBA_PTR_SET_VALUE(securityStrategy_, securityStrategy) };
    inline GetSecurityStrategyResponseBody& setSecurityStrategy(GetSecurityStrategyResponseBody::SecurityStrategy && securityStrategy) { DARABONBA_PTR_SET_RVALUE(securityStrategy_, securityStrategy) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The security policy.
    shared_ptr<GetSecurityStrategyResponseBody::SecurityStrategy> securityStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
