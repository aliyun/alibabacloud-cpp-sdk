// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKGRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKGRELATIONREQUEST_HPP_
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
  class CreateKgRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKgRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKgRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateKgRelationRequest() = default ;
    CreateKgRelationRequest(const CreateKgRelationRequest &) = default ;
    CreateKgRelationRequest(CreateKgRelationRequest &&) = default ;
    CreateKgRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKgRelationRequest() = default ;
    CreateKgRelationRequest& operator=(const CreateKgRelationRequest &) = default ;
    CreateKgRelationRequest& operator=(CreateKgRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(SourceEntityId, sourceEntityId_);
        DARABONBA_PTR_TO_JSON(TargetEntityId, targetEntityId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(SourceEntityId, sourceEntityId_);
        DARABONBA_PTR_FROM_JSON(TargetEntityId, targetEntityId_);
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

      virtual bool empty() const override { return this->propertyList_ == nullptr
        && this->relationType_ == nullptr && this->sourceEntityId_ == nullptr && this->targetEntityId_ == nullptr; };
      // propertyList Field Functions 
      bool hasPropertyList() const { return this->propertyList_ != nullptr;};
      void deletePropertyList() { this->propertyList_ = nullptr;};
      inline const vector<CreateCommand::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<CreateCommand::PropertyList>) };
      inline vector<CreateCommand::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<CreateCommand::PropertyList>) };
      inline CreateCommand& setPropertyList(const vector<CreateCommand::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
      inline CreateCommand& setPropertyList(vector<CreateCommand::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline CreateCommand& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // sourceEntityId Field Functions 
      bool hasSourceEntityId() const { return this->sourceEntityId_ != nullptr;};
      void deleteSourceEntityId() { this->sourceEntityId_ = nullptr;};
      inline string getSourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityId_, "") };
      inline CreateCommand& setSourceEntityId(string sourceEntityId) { DARABONBA_PTR_SET_VALUE(sourceEntityId_, sourceEntityId) };


      // targetEntityId Field Functions 
      bool hasTargetEntityId() const { return this->targetEntityId_ != nullptr;};
      void deleteTargetEntityId() { this->targetEntityId_ = nullptr;};
      inline string getTargetEntityId() const { DARABONBA_PTR_GET_DEFAULT(targetEntityId_, "") };
      inline CreateCommand& setTargetEntityId(string targetEntityId) { DARABONBA_PTR_SET_VALUE(targetEntityId_, targetEntityId) };


    protected:
      // The relationship record property list.
      shared_ptr<vector<CreateCommand::PropertyList>> propertyList_ {};
      // The relationship type code.
      // 
      // This parameter is required.
      shared_ptr<string> relationType_ {};
      // The source entity record ID.
      // 
      // This parameter is required.
      shared_ptr<string> sourceEntityId_ {};
      // The target entity record ID.
      // 
      // This parameter is required.
      shared_ptr<string> targetEntityId_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateKgRelationRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateKgRelationRequest::CreateCommand) };
    inline CreateKgRelationRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateKgRelationRequest::CreateCommand) };
    inline CreateKgRelationRequest& setCreateCommand(const CreateKgRelationRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateKgRelationRequest& setCreateCommand(CreateKgRelationRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateKgRelationRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateKgRelationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<CreateKgRelationRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
