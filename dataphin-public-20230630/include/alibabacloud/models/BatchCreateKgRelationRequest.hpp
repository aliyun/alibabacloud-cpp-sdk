// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEKGRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEKGRELATIONREQUEST_HPP_
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
  class BatchCreateKgRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateKgRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateKgRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    BatchCreateKgRelationRequest() = default ;
    BatchCreateKgRelationRequest(const BatchCreateKgRelationRequest &) = default ;
    BatchCreateKgRelationRequest(BatchCreateKgRelationRequest &&) = default ;
    BatchCreateKgRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateKgRelationRequest() = default ;
    BatchCreateKgRelationRequest& operator=(const BatchCreateKgRelationRequest &) = default ;
    BatchCreateKgRelationRequest& operator=(BatchCreateKgRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(RelationList, relationList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
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
      class RelationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelationList& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(SourceEntityId, sourceEntityId_);
          DARABONBA_PTR_TO_JSON(TargetEntityId, targetEntityId_);
        };
        friend void from_json(const Darabonba::Json& j, RelationList& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(SourceEntityId, sourceEntityId_);
          DARABONBA_PTR_FROM_JSON(TargetEntityId, targetEntityId_);
        };
        RelationList() = default ;
        RelationList(const RelationList &) = default ;
        RelationList(RelationList &&) = default ;
        RelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelationList() = default ;
        RelationList& operator=(const RelationList &) = default ;
        RelationList& operator=(RelationList &&) = default ;
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
        inline const vector<RelationList::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<RelationList::PropertyList>) };
        inline vector<RelationList::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<RelationList::PropertyList>) };
        inline RelationList& setPropertyList(const vector<RelationList::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
        inline RelationList& setPropertyList(vector<RelationList::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline RelationList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // sourceEntityId Field Functions 
        bool hasSourceEntityId() const { return this->sourceEntityId_ != nullptr;};
        void deleteSourceEntityId() { this->sourceEntityId_ = nullptr;};
        inline string getSourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityId_, "") };
        inline RelationList& setSourceEntityId(string sourceEntityId) { DARABONBA_PTR_SET_VALUE(sourceEntityId_, sourceEntityId) };


        // targetEntityId Field Functions 
        bool hasTargetEntityId() const { return this->targetEntityId_ != nullptr;};
        void deleteTargetEntityId() { this->targetEntityId_ = nullptr;};
        inline string getTargetEntityId() const { DARABONBA_PTR_GET_DEFAULT(targetEntityId_, "") };
        inline RelationList& setTargetEntityId(string targetEntityId) { DARABONBA_PTR_SET_VALUE(targetEntityId_, targetEntityId) };


      protected:
        // The list of relationship record properties.
        shared_ptr<vector<RelationList::PropertyList>> propertyList_ {};
        // The relationship type code.
        // 
        // This parameter is required.
        shared_ptr<string> relationType_ {};
        // The ID of the source entity record.
        // 
        // This parameter is required.
        shared_ptr<string> sourceEntityId_ {};
        // The ID of the target entity record.
        // 
        // This parameter is required.
        shared_ptr<string> targetEntityId_ {};
      };

      virtual bool empty() const override { return this->relationList_ == nullptr; };
      // relationList Field Functions 
      bool hasRelationList() const { return this->relationList_ != nullptr;};
      void deleteRelationList() { this->relationList_ = nullptr;};
      inline const vector<CreateCommand::RelationList> & getRelationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<CreateCommand::RelationList>) };
      inline vector<CreateCommand::RelationList> getRelationList() { DARABONBA_PTR_GET(relationList_, vector<CreateCommand::RelationList>) };
      inline CreateCommand& setRelationList(const vector<CreateCommand::RelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
      inline CreateCommand& setRelationList(vector<CreateCommand::RelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    protected:
      // The list of relationships.
      // 
      // This parameter is required.
      shared_ptr<vector<CreateCommand::RelationList>> relationList_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const BatchCreateKgRelationRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, BatchCreateKgRelationRequest::CreateCommand) };
    inline BatchCreateKgRelationRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, BatchCreateKgRelationRequest::CreateCommand) };
    inline BatchCreateKgRelationRequest& setCreateCommand(const BatchCreateKgRelationRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline BatchCreateKgRelationRequest& setCreateCommand(BatchCreateKgRelationRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline BatchCreateKgRelationRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline BatchCreateKgRelationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<BatchCreateKgRelationRequest::CreateCommand> createCommand_ {};
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
