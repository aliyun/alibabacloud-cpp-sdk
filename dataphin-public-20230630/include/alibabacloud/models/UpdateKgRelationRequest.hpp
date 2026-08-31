// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKGRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKGRELATIONREQUEST_HPP_
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
  class UpdateKgRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKgRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKgRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateKgRelationRequest() = default ;
    UpdateKgRelationRequest(const UpdateKgRelationRequest &) = default ;
    UpdateKgRelationRequest(UpdateKgRelationRequest &&) = default ;
    UpdateKgRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKgRelationRequest() = default ;
    UpdateKgRelationRequest& operator=(const UpdateKgRelationRequest &) = default ;
    UpdateKgRelationRequest& operator=(UpdateKgRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_TO_JSON(RelationId, relationId_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
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
        && this->relationId_ == nullptr && this->relationType_ == nullptr; };
      // propertyList Field Functions 
      bool hasPropertyList() const { return this->propertyList_ != nullptr;};
      void deletePropertyList() { this->propertyList_ = nullptr;};
      inline const vector<UpdateCommand::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<UpdateCommand::PropertyList>) };
      inline vector<UpdateCommand::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<UpdateCommand::PropertyList>) };
      inline UpdateCommand& setPropertyList(const vector<UpdateCommand::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
      inline UpdateCommand& setPropertyList(vector<UpdateCommand::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      // relationId Field Functions 
      bool hasRelationId() const { return this->relationId_ != nullptr;};
      void deleteRelationId() { this->relationId_ = nullptr;};
      inline string getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
      inline UpdateCommand& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline UpdateCommand& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    protected:
      // The list of relationship record properties.
      shared_ptr<vector<UpdateCommand::PropertyList>> propertyList_ {};
      // The relationship record ID.
      // 
      // This parameter is required.
      shared_ptr<string> relationId_ {};
      // The relationship type code.
      // 
      // This parameter is required.
      shared_ptr<string> relationType_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommand_ == nullptr && this->workspaceId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateKgRelationRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateKgRelationRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateKgRelationRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateKgRelationRequest::UpdateCommand) };
    inline UpdateKgRelationRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateKgRelationRequest::UpdateCommand) };
    inline UpdateKgRelationRequest& setUpdateCommand(const UpdateKgRelationRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateKgRelationRequest& setUpdateCommand(UpdateKgRelationRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateKgRelationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The update command.
    // 
    // This parameter is required.
    shared_ptr<UpdateKgRelationRequest::UpdateCommand> updateCommand_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
