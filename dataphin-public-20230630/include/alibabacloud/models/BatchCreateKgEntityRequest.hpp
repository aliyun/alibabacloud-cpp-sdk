// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEKGENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEKGENTITYREQUEST_HPP_
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
  class BatchCreateKgEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateKgEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateKgEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    BatchCreateKgEntityRequest() = default ;
    BatchCreateKgEntityRequest(const BatchCreateKgEntityRequest &) = default ;
    BatchCreateKgEntityRequest(BatchCreateKgEntityRequest &&) = default ;
    BatchCreateKgEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateKgEntityRequest() = default ;
    BatchCreateKgEntityRequest& operator=(const BatchCreateKgEntityRequest &) = default ;
    BatchCreateKgEntityRequest& operator=(BatchCreateKgEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(EntityList, entityList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
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
      class EntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntityList& obj) { 
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        };
        friend void from_json(const Darabonba::Json& j, EntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
        };
        EntityList() = default ;
        EntityList(const EntityList &) = default ;
        EntityList(EntityList &&) = default ;
        EntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntityList() = default ;
        EntityList& operator=(const EntityList &) = default ;
        EntityList& operator=(EntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PropertyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          PropertyList() = default ;
          PropertyList(const PropertyList &) = default ;
          PropertyList(PropertyList &&) = default ;
          PropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PropertyList() = default ;
          PropertyList& operator=(const PropertyList &) = default ;
          PropertyList& operator=(PropertyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline PropertyList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          // 
          // This parameter is required.
          shared_ptr<string> code_ {};
          // The property value.
          // 
          // This parameter is required.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->entityType_ == nullptr
        && this->propertyList_ == nullptr; };
        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline EntityList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // propertyList Field Functions 
        bool hasPropertyList() const { return this->propertyList_ != nullptr;};
        void deletePropertyList() { this->propertyList_ = nullptr;};
        inline const vector<EntityList::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<EntityList::PropertyList>) };
        inline vector<EntityList::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<EntityList::PropertyList>) };
        inline EntityList& setPropertyList(const vector<EntityList::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
        inline EntityList& setPropertyList(vector<EntityList::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      protected:
        // The entity type code.
        // 
        // This parameter is required.
        shared_ptr<string> entityType_ {};
        // The list of entity record properties.
        // 
        // This parameter is required.
        shared_ptr<vector<EntityList::PropertyList>> propertyList_ {};
      };

      virtual bool empty() const override { return this->entityList_ == nullptr; };
      // entityList Field Functions 
      bool hasEntityList() const { return this->entityList_ != nullptr;};
      void deleteEntityList() { this->entityList_ = nullptr;};
      inline const vector<CreateCommand::EntityList> & getEntityList() const { DARABONBA_PTR_GET_CONST(entityList_, vector<CreateCommand::EntityList>) };
      inline vector<CreateCommand::EntityList> getEntityList() { DARABONBA_PTR_GET(entityList_, vector<CreateCommand::EntityList>) };
      inline CreateCommand& setEntityList(const vector<CreateCommand::EntityList> & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
      inline CreateCommand& setEntityList(vector<CreateCommand::EntityList> && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


    protected:
      // The list of entity records.
      // 
      // This parameter is required.
      shared_ptr<vector<CreateCommand::EntityList>> entityList_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const BatchCreateKgEntityRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, BatchCreateKgEntityRequest::CreateCommand) };
    inline BatchCreateKgEntityRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, BatchCreateKgEntityRequest::CreateCommand) };
    inline BatchCreateKgEntityRequest& setCreateCommand(const BatchCreateKgEntityRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline BatchCreateKgEntityRequest& setCreateCommand(BatchCreateKgEntityRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline BatchCreateKgEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline BatchCreateKgEntityRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline BatchCreateKgEntityRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<BatchCreateKgEntityRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
