// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTESOURCEREQUEST_HPP_
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
  class UpdateComputeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateComputeSourceRequest() = default ;
    UpdateComputeSourceRequest(const UpdateComputeSourceRequest &) = default ;
    UpdateComputeSourceRequest(UpdateComputeSourceRequest &&) = default ;
    UpdateComputeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeSourceRequest() = default ;
    UpdateComputeSourceRequest& operator=(const UpdateComputeSourceRequest &) = default ;
    UpdateComputeSourceRequest& operator=(UpdateComputeSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ConfigList, configList_);
        DARABONBA_PTR_TO_JSON(CreateType, createType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeVersion, typeVersion_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
        DARABONBA_PTR_FROM_JSON(CreateType, createType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeVersion, typeVersion_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
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
        // The configuration item value.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->configList_ == nullptr && this->createType_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr && this->typeVersion_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline int64_t getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
      inline UpdateCommand& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // configList Field Functions 
      bool hasConfigList() const { return this->configList_ != nullptr;};
      void deleteConfigList() { this->configList_ = nullptr;};
      inline const vector<UpdateCommand::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<UpdateCommand::ConfigList>) };
      inline vector<UpdateCommand::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<UpdateCommand::ConfigList>) };
      inline UpdateCommand& setConfigList(const vector<UpdateCommand::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
      inline UpdateCommand& setConfigList(vector<UpdateCommand::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


      // createType Field Functions 
      bool hasCreateType() const { return this->createType_ != nullptr;};
      void deleteCreateType() { this->createType_ = nullptr;};
      inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
      inline UpdateCommand& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UpdateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeVersion Field Functions 
      bool hasTypeVersion() const { return this->typeVersion_ != nullptr;};
      void deleteTypeVersion() { this->typeVersion_ = nullptr;};
      inline string getTypeVersion() const { DARABONBA_PTR_GET_DEFAULT(typeVersion_, "") };
      inline UpdateCommand& setTypeVersion(string typeVersion) { DARABONBA_PTR_SET_VALUE(typeVersion_, typeVersion) };


    protected:
      // The associated cluster ID. This parameter takes effect only when CreateType is left empty or set to COMPUTE_SOURCE (to create a compute source that references a cluster). This parameter is mutually exclusive with CreateType=CLUSTER.
      shared_ptr<int64_t> clusterId_ {};
      // The connection configuration items.
      // 
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::ConfigList>> configList_ {};
      // The creation entity type. Valid values:
      // - CLUSTER: Creates the entity as a cluster. ClusterId cannot be specified.
      // - COMPUTE_SOURCE: Creates the entity as a compute source. This is the default value.
      shared_ptr<string> createType_ {};
      // The description.
      // 
      // This parameter is required.
      shared_ptr<string> description_ {};
      // The compute source ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // The compute source name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The compute source type.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The compute source type version.
      shared_ptr<string> typeVersion_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateComputeSourceRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateComputeSourceRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateComputeSourceRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateComputeSourceRequest::UpdateCommand) };
    inline UpdateComputeSourceRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateComputeSourceRequest::UpdateCommand) };
    inline UpdateComputeSourceRequest& setUpdateCommand(const UpdateComputeSourceRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateComputeSourceRequest& setUpdateCommand(UpdateComputeSourceRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The operator user ID.
    shared_ptr<string> opUserId_ {};
    // The edit command.
    // 
    // This parameter is required.
    shared_ptr<UpdateComputeSourceRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
