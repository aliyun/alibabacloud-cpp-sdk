// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKGENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKGENTITYREQUEST_HPP_
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
  class CreateKgEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKgEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKgEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateKgEntityRequest() = default ;
    CreateKgEntityRequest(const CreateKgEntityRequest &) = default ;
    CreateKgEntityRequest(CreateKgEntityRequest &&) = default ;
    CreateKgEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKgEntityRequest() = default ;
    CreateKgEntityRequest& operator=(const CreateKgEntityRequest &) = default ;
    CreateKgEntityRequest& operator=(CreateKgEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
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
      inline CreateCommand& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // propertyList Field Functions 
      bool hasPropertyList() const { return this->propertyList_ != nullptr;};
      void deletePropertyList() { this->propertyList_ = nullptr;};
      inline const vector<CreateCommand::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<CreateCommand::PropertyList>) };
      inline vector<CreateCommand::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<CreateCommand::PropertyList>) };
      inline CreateCommand& setPropertyList(const vector<CreateCommand::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
      inline CreateCommand& setPropertyList(vector<CreateCommand::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


    protected:
      // The entity type code.
      // 
      // This parameter is required.
      shared_ptr<string> entityType_ {};
      // The entity record property list.
      // 
      // This parameter is required.
      shared_ptr<vector<CreateCommand::PropertyList>> propertyList_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateKgEntityRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateKgEntityRequest::CreateCommand) };
    inline CreateKgEntityRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateKgEntityRequest::CreateCommand) };
    inline CreateKgEntityRequest& setCreateCommand(const CreateKgEntityRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateKgEntityRequest& setCreateCommand(CreateKgEntityRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateKgEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateKgEntityRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateKgEntityRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<CreateKgEntityRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
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
