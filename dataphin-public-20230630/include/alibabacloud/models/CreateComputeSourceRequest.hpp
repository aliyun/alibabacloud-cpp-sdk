// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateComputeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CreateComputeSourceRequest() = default ;
    CreateComputeSourceRequest(const CreateComputeSourceRequest &) = default ;
    CreateComputeSourceRequest(CreateComputeSourceRequest &&) = default ;
    CreateComputeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeSourceRequest() = default ;
    CreateComputeSourceRequest& operator=(const CreateComputeSourceRequest &) = default ;
    CreateComputeSourceRequest& operator=(CreateComputeSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ConfigList, configList_);
        DARABONBA_PTR_TO_JSON(CreateType, createType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeVersion, typeVersion_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
        DARABONBA_PTR_FROM_JSON(CreateType, createType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeVersion, typeVersion_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ConfigList() = default ;
        ConfigList(const ConfigList &) = default ;
        ConfigList(ConfigList &&) = default ;
        ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigList() = default ;
        ConfigList& operator=(const ConfigList &) = default ;
        ConfigList& operator=(ConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ConfigList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The configuration item.
        // 
        // This parameter is required.
        shared_ptr<string> key_ {};
        // The value of the configuration item.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->configList_ == nullptr && this->createType_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr
        && this->typeVersion_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline int64_t getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
      inline CreateCommand& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // configList Field Functions 
      bool hasConfigList() const { return this->configList_ != nullptr;};
      void deleteConfigList() { this->configList_ = nullptr;};
      inline const vector<CreateCommand::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<CreateCommand::ConfigList>) };
      inline vector<CreateCommand::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<CreateCommand::ConfigList>) };
      inline CreateCommand& setConfigList(const vector<CreateCommand::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
      inline CreateCommand& setConfigList(vector<CreateCommand::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


      // createType Field Functions 
      bool hasCreateType() const { return this->createType_ != nullptr;};
      void deleteCreateType() { this->createType_ = nullptr;};
      inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
      inline CreateCommand& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CreateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeVersion Field Functions 
      bool hasTypeVersion() const { return this->typeVersion_ != nullptr;};
      void deleteTypeVersion() { this->typeVersion_ = nullptr;};
      inline string getTypeVersion() const { DARABONBA_PTR_GET_DEFAULT(typeVersion_, "") };
      inline CreateCommand& setTypeVersion(string typeVersion) { DARABONBA_PTR_SET_VALUE(typeVersion_, typeVersion) };


    protected:
      // The ID of the associated cluster. This parameter takes effect only when CreateType is not specified or is set to COMPUTE_SOURCE, which creates a compute source that references a cluster. This parameter is mutually exclusive with CreateType=CLUSTER.
      shared_ptr<int64_t> clusterId_ {};
      // The connection configuration items.
      // 
      // This parameter is required.
      shared_ptr<vector<CreateCommand::ConfigList>> configList_ {};
      // The type of entity to create. Valid values:
      // 
      // - CLUSTER: Creates a cluster. ClusterId cannot be specified.
      // - COMPUTE_SOURCE: Creates a compute source. This is the default value.
      shared_ptr<string> createType_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The name of the compute source.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The type of the compute source.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The version of the compute source type.
      shared_ptr<string> typeVersion_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateComputeSourceRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateComputeSourceRequest::CreateCommand) };
    inline CreateComputeSourceRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateComputeSourceRequest::CreateCommand) };
    inline CreateComputeSourceRequest& setCreateCommand(const CreateComputeSourceRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateComputeSourceRequest& setCreateCommand(CreateComputeSourceRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateComputeSourceRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateComputeSourceRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<CreateComputeSourceRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
