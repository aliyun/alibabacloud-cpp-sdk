// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWNODECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWNODECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetWorkflowNodeConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowNodeConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(canEdit, canEdit_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(configVersion, configVersion_);
      DARABONBA_PTR_TO_JSON(defaultExecutor, defaultExecutor_);
      DARABONBA_PTR_TO_JSON(defaultModel, defaultModel_);
      DARABONBA_PTR_TO_JSON(defaultResponsibleUserIds, defaultResponsibleUserIds_);
      DARABONBA_PTR_TO_JSON(effectiveExecutor, effectiveExecutor_);
      DARABONBA_PTR_TO_JSON(effectiveModel, effectiveModel_);
      DARABONBA_PTR_TO_JSON(effectiveResponsibleUserIds, effectiveResponsibleUserIds_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(overrides, overrides_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowNodeConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(canEdit, canEdit_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(configVersion, configVersion_);
      DARABONBA_PTR_FROM_JSON(defaultExecutor, defaultExecutor_);
      DARABONBA_PTR_FROM_JSON(defaultModel, defaultModel_);
      DARABONBA_PTR_FROM_JSON(defaultResponsibleUserIds, defaultResponsibleUserIds_);
      DARABONBA_PTR_FROM_JSON(effectiveExecutor, effectiveExecutor_);
      DARABONBA_PTR_FROM_JSON(effectiveModel, effectiveModel_);
      DARABONBA_PTR_FROM_JSON(effectiveResponsibleUserIds, effectiveResponsibleUserIds_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(overrides, overrides_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    GetWorkflowNodeConfigurationResponseBody() = default ;
    GetWorkflowNodeConfigurationResponseBody(const GetWorkflowNodeConfigurationResponseBody &) = default ;
    GetWorkflowNodeConfigurationResponseBody(GetWorkflowNodeConfigurationResponseBody &&) = default ;
    GetWorkflowNodeConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowNodeConfigurationResponseBody() = default ;
    GetWorkflowNodeConfigurationResponseBody& operator=(const GetWorkflowNodeConfigurationResponseBody &) = default ;
    GetWorkflowNodeConfigurationResponseBody& operator=(GetWorkflowNodeConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Overrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Overrides& obj) { 
        DARABONBA_PTR_TO_JSON(executor, executor_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(responsibleUserIds, responsibleUserIds_);
      };
      friend void from_json(const Darabonba::Json& j, Overrides& obj) { 
        DARABONBA_PTR_FROM_JSON(executor, executor_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(responsibleUserIds, responsibleUserIds_);
      };
      Overrides() = default ;
      Overrides(const Overrides &) = default ;
      Overrides(Overrides &&) = default ;
      Overrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Overrides() = default ;
      Overrides& operator=(const Overrides &) = default ;
      Overrides& operator=(Overrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Executor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Executor& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Executor& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Executor() = default ;
        Executor(const Executor &) = default ;
        Executor(Executor &&) = default ;
        Executor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Executor() = default ;
        Executor& operator=(const Executor &) = default ;
        Executor& operator=(Executor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Executor& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Executor& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the executor. If the type is USER, this is a positive integer string representing the platform user ID. If the type is AGENT, this is the technical name of the digital employee in the workspace.
        shared_ptr<string> id_ {};
        // The type of the executor. Valid values: USER for a real person, AGENT for a digital employee, and SYSTEM for a legacy system executor. The SYSTEM value is used only in responses.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->executor_ == nullptr
        && this->model_ == nullptr && this->responsibleUserIds_ == nullptr; };
      // executor Field Functions 
      bool hasExecutor() const { return this->executor_ != nullptr;};
      void deleteExecutor() { this->executor_ = nullptr;};
      inline const Overrides::Executor & getExecutor() const { DARABONBA_PTR_GET_CONST(executor_, Overrides::Executor) };
      inline Overrides::Executor getExecutor() { DARABONBA_PTR_GET(executor_, Overrides::Executor) };
      inline Overrides& setExecutor(const Overrides::Executor & executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };
      inline Overrides& setExecutor(Overrides::Executor && executor) { DARABONBA_PTR_SET_RVALUE(executor_, executor) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Overrides& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // responsibleUserIds Field Functions 
      bool hasResponsibleUserIds() const { return this->responsibleUserIds_ != nullptr;};
      void deleteResponsibleUserIds() { this->responsibleUserIds_ = nullptr;};
      inline const vector<int64_t> & getResponsibleUserIds() const { DARABONBA_PTR_GET_CONST(responsibleUserIds_, vector<int64_t>) };
      inline vector<int64_t> getResponsibleUserIds() { DARABONBA_PTR_GET(responsibleUserIds_, vector<int64_t>) };
      inline Overrides& setResponsibleUserIds(const vector<int64_t> & responsibleUserIds) { DARABONBA_PTR_SET_VALUE(responsibleUserIds_, responsibleUserIds) };
      inline Overrides& setResponsibleUserIds(vector<int64_t> && responsibleUserIds) { DARABONBA_PTR_SET_RVALUE(responsibleUserIds_, responsibleUserIds) };


    protected:
      // The override executor. A null value indicates that the default is used.
      shared_ptr<Overrides::Executor> executor_ {};
      // The override model runtime profile. A null value indicates that the default is used.
      shared_ptr<string> model_ {};
      // The list of override responsible user IDs. A null value indicates that the default is used.
      shared_ptr<vector<int64_t>> responsibleUserIds_ {};
    };

    class EffectiveExecutor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EffectiveExecutor& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EffectiveExecutor& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      EffectiveExecutor() = default ;
      EffectiveExecutor(const EffectiveExecutor &) = default ;
      EffectiveExecutor(EffectiveExecutor &&) = default ;
      EffectiveExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EffectiveExecutor() = default ;
      EffectiveExecutor& operator=(const EffectiveExecutor &) = default ;
      EffectiveExecutor& operator=(EffectiveExecutor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline EffectiveExecutor& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EffectiveExecutor& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the executor. If the type is USER, this is a positive integer string representing the platform user ID. If the type is AGENT, this is the technical name of the digital employee in the workspace.
      shared_ptr<string> id_ {};
      // The type of the executor. Valid values: USER for a real person, AGENT for a digital employee, and SYSTEM for a legacy system executor. The SYSTEM value is used only in responses.
      shared_ptr<string> type_ {};
    };

    class DefaultExecutor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultExecutor& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultExecutor& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      DefaultExecutor() = default ;
      DefaultExecutor(const DefaultExecutor &) = default ;
      DefaultExecutor(DefaultExecutor &&) = default ;
      DefaultExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultExecutor() = default ;
      DefaultExecutor& operator=(const DefaultExecutor &) = default ;
      DefaultExecutor& operator=(DefaultExecutor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DefaultExecutor& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DefaultExecutor& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the executor. If the type is USER, this is a positive integer string representing the platform user ID. If the type is AGENT, this is the technical name of the digital employee in the workspace.
      shared_ptr<string> id_ {};
      // The type of the executor. Valid values: USER for a real person, AGENT for a digital employee, and SYSTEM for a legacy system executor. The SYSTEM value is used only in responses.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->canEdit_ == nullptr
        && this->code_ == nullptr && this->configVersion_ == nullptr && this->defaultExecutor_ == nullptr && this->defaultModel_ == nullptr && this->defaultResponsibleUserIds_ == nullptr
        && this->effectiveExecutor_ == nullptr && this->effectiveModel_ == nullptr && this->effectiveResponsibleUserIds_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr
        && this->nodeId_ == nullptr && this->overrides_ == nullptr && this->requestId_ == nullptr && this->stateVersion_ == nullptr && this->updatedAt_ == nullptr
        && this->updatedBy_ == nullptr; };
    // canEdit Field Functions 
    bool hasCanEdit() const { return this->canEdit_ != nullptr;};
    void deleteCanEdit() { this->canEdit_ = nullptr;};
    inline bool getCanEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
    inline GetWorkflowNodeConfigurationResponseBody& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // configVersion Field Functions 
    bool hasConfigVersion() const { return this->configVersion_ != nullptr;};
    void deleteConfigVersion() { this->configVersion_ = nullptr;};
    inline int64_t getConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(configVersion_, 0L) };
    inline GetWorkflowNodeConfigurationResponseBody& setConfigVersion(int64_t configVersion) { DARABONBA_PTR_SET_VALUE(configVersion_, configVersion) };


    // defaultExecutor Field Functions 
    bool hasDefaultExecutor() const { return this->defaultExecutor_ != nullptr;};
    void deleteDefaultExecutor() { this->defaultExecutor_ = nullptr;};
    inline const GetWorkflowNodeConfigurationResponseBody::DefaultExecutor & getDefaultExecutor() const { DARABONBA_PTR_GET_CONST(defaultExecutor_, GetWorkflowNodeConfigurationResponseBody::DefaultExecutor) };
    inline GetWorkflowNodeConfigurationResponseBody::DefaultExecutor getDefaultExecutor() { DARABONBA_PTR_GET(defaultExecutor_, GetWorkflowNodeConfigurationResponseBody::DefaultExecutor) };
    inline GetWorkflowNodeConfigurationResponseBody& setDefaultExecutor(const GetWorkflowNodeConfigurationResponseBody::DefaultExecutor & defaultExecutor) { DARABONBA_PTR_SET_VALUE(defaultExecutor_, defaultExecutor) };
    inline GetWorkflowNodeConfigurationResponseBody& setDefaultExecutor(GetWorkflowNodeConfigurationResponseBody::DefaultExecutor && defaultExecutor) { DARABONBA_PTR_SET_RVALUE(defaultExecutor_, defaultExecutor) };


    // defaultModel Field Functions 
    bool hasDefaultModel() const { return this->defaultModel_ != nullptr;};
    void deleteDefaultModel() { this->defaultModel_ = nullptr;};
    inline string getDefaultModel() const { DARABONBA_PTR_GET_DEFAULT(defaultModel_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setDefaultModel(string defaultModel) { DARABONBA_PTR_SET_VALUE(defaultModel_, defaultModel) };


    // defaultResponsibleUserIds Field Functions 
    bool hasDefaultResponsibleUserIds() const { return this->defaultResponsibleUserIds_ != nullptr;};
    void deleteDefaultResponsibleUserIds() { this->defaultResponsibleUserIds_ = nullptr;};
    inline const vector<string> & getDefaultResponsibleUserIds() const { DARABONBA_PTR_GET_CONST(defaultResponsibleUserIds_, vector<string>) };
    inline vector<string> getDefaultResponsibleUserIds() { DARABONBA_PTR_GET(defaultResponsibleUserIds_, vector<string>) };
    inline GetWorkflowNodeConfigurationResponseBody& setDefaultResponsibleUserIds(const vector<string> & defaultResponsibleUserIds) { DARABONBA_PTR_SET_VALUE(defaultResponsibleUserIds_, defaultResponsibleUserIds) };
    inline GetWorkflowNodeConfigurationResponseBody& setDefaultResponsibleUserIds(vector<string> && defaultResponsibleUserIds) { DARABONBA_PTR_SET_RVALUE(defaultResponsibleUserIds_, defaultResponsibleUserIds) };


    // effectiveExecutor Field Functions 
    bool hasEffectiveExecutor() const { return this->effectiveExecutor_ != nullptr;};
    void deleteEffectiveExecutor() { this->effectiveExecutor_ = nullptr;};
    inline const GetWorkflowNodeConfigurationResponseBody::EffectiveExecutor & getEffectiveExecutor() const { DARABONBA_PTR_GET_CONST(effectiveExecutor_, GetWorkflowNodeConfigurationResponseBody::EffectiveExecutor) };
    inline GetWorkflowNodeConfigurationResponseBody::EffectiveExecutor getEffectiveExecutor() { DARABONBA_PTR_GET(effectiveExecutor_, GetWorkflowNodeConfigurationResponseBody::EffectiveExecutor) };
    inline GetWorkflowNodeConfigurationResponseBody& setEffectiveExecutor(const GetWorkflowNodeConfigurationResponseBody::EffectiveExecutor & effectiveExecutor) { DARABONBA_PTR_SET_VALUE(effectiveExecutor_, effectiveExecutor) };
    inline GetWorkflowNodeConfigurationResponseBody& setEffectiveExecutor(GetWorkflowNodeConfigurationResponseBody::EffectiveExecutor && effectiveExecutor) { DARABONBA_PTR_SET_RVALUE(effectiveExecutor_, effectiveExecutor) };


    // effectiveModel Field Functions 
    bool hasEffectiveModel() const { return this->effectiveModel_ != nullptr;};
    void deleteEffectiveModel() { this->effectiveModel_ = nullptr;};
    inline string getEffectiveModel() const { DARABONBA_PTR_GET_DEFAULT(effectiveModel_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setEffectiveModel(string effectiveModel) { DARABONBA_PTR_SET_VALUE(effectiveModel_, effectiveModel) };


    // effectiveResponsibleUserIds Field Functions 
    bool hasEffectiveResponsibleUserIds() const { return this->effectiveResponsibleUserIds_ != nullptr;};
    void deleteEffectiveResponsibleUserIds() { this->effectiveResponsibleUserIds_ = nullptr;};
    inline const vector<string> & getEffectiveResponsibleUserIds() const { DARABONBA_PTR_GET_CONST(effectiveResponsibleUserIds_, vector<string>) };
    inline vector<string> getEffectiveResponsibleUserIds() { DARABONBA_PTR_GET(effectiveResponsibleUserIds_, vector<string>) };
    inline GetWorkflowNodeConfigurationResponseBody& setEffectiveResponsibleUserIds(const vector<string> & effectiveResponsibleUserIds) { DARABONBA_PTR_SET_VALUE(effectiveResponsibleUserIds_, effectiveResponsibleUserIds) };
    inline GetWorkflowNodeConfigurationResponseBody& setEffectiveResponsibleUserIds(vector<string> && effectiveResponsibleUserIds) { DARABONBA_PTR_SET_RVALUE(effectiveResponsibleUserIds_, effectiveResponsibleUserIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // overrides Field Functions 
    bool hasOverrides() const { return this->overrides_ != nullptr;};
    void deleteOverrides() { this->overrides_ = nullptr;};
    inline const GetWorkflowNodeConfigurationResponseBody::Overrides & getOverrides() const { DARABONBA_PTR_GET_CONST(overrides_, GetWorkflowNodeConfigurationResponseBody::Overrides) };
    inline GetWorkflowNodeConfigurationResponseBody::Overrides getOverrides() { DARABONBA_PTR_GET(overrides_, GetWorkflowNodeConfigurationResponseBody::Overrides) };
    inline GetWorkflowNodeConfigurationResponseBody& setOverrides(const GetWorkflowNodeConfigurationResponseBody::Overrides & overrides) { DARABONBA_PTR_SET_VALUE(overrides_, overrides) };
    inline GetWorkflowNodeConfigurationResponseBody& setOverrides(GetWorkflowNodeConfigurationResponseBody::Overrides && overrides) { DARABONBA_PTR_SET_RVALUE(overrides_, overrides) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateVersion Field Functions 
    bool hasStateVersion() const { return this->stateVersion_ != nullptr;};
    void deleteStateVersion() { this->stateVersion_ = nullptr;};
    inline int64_t getStateVersion() const { DARABONBA_PTR_GET_DEFAULT(stateVersion_, 0L) };
    inline GetWorkflowNodeConfigurationResponseBody& setStateVersion(int64_t stateVersion) { DARABONBA_PTR_SET_VALUE(stateVersion_, stateVersion) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline GetWorkflowNodeConfigurationResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline int64_t getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, 0L) };
    inline GetWorkflowNodeConfigurationResponseBody& setUpdatedBy(int64_t updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    // Indicates whether the current user can edit this node.
    shared_ptr<bool> canEdit_ {};
    // The common business status code.
    shared_ptr<string> code_ {};
    // The configuration version. It is used as the expectedVersion when updating or restoring the configuration.
    shared_ptr<int64_t> configVersion_ {};
    // The default executor of the template.
    shared_ptr<GetWorkflowNodeConfigurationResponseBody::DefaultExecutor> defaultExecutor_ {};
    // The default model runtime profile of the template.
    shared_ptr<string> defaultModel_ {};
    // The list of user IDs for the default responsible users of the template.
    shared_ptr<vector<string>> defaultResponsibleUserIds_ {};
    // The currently effective executor.
    shared_ptr<GetWorkflowNodeConfigurationResponseBody::EffectiveExecutor> effectiveExecutor_ {};
    // The currently effective model runtime profile.
    shared_ptr<string> effectiveModel_ {};
    // The list of user IDs for the currently effective responsible users.
    shared_ptr<vector<string>> effectiveResponsibleUserIds_ {};
    // The ID of the current physical plan.
    shared_ptr<string> instanceId_ {};
    // The common error description.
    shared_ptr<string> message_ {};
    // The key of the business node.
    shared_ptr<string> nodeId_ {};
    // The override values for the instance. If a field is null, the default value of the template is used.
    shared_ptr<GetWorkflowNodeConfigurationResponseBody::Overrides> overrides_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
    // The state refresh cursor. This cannot be used as a configuration version.
    shared_ptr<int64_t> stateVersion_ {};
    // The time when the configuration was last updated, in ISO 8601 format. This field is empty if the configuration has never been updated.
    shared_ptr<string> updatedAt_ {};
    // The platform user ID of the user who last updated the configuration. This field is empty if the configuration has never been updated.
    shared_ptr<int64_t> updatedBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
