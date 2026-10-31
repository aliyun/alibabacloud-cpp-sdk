// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECTIFYFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECTIFYFLOWREQUEST_HPP_
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
  class CreateRectifyFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRectifyFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRectifyFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CreateRectifyFlowRequest() = default ;
    CreateRectifyFlowRequest(const CreateRectifyFlowRequest &) = default ;
    CreateRectifyFlowRequest(CreateRectifyFlowRequest &&) = default ;
    CreateRectifyFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRectifyFlowRequest() = default ;
    CreateRectifyFlowRequest& operator=(const CreateRectifyFlowRequest &) = default ;
    CreateRectifyFlowRequest& operator=(CreateRectifyFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BindToRectify, bindToRectify_);
        DARABONBA_PTR_TO_JSON(BindToRectifyId, bindToRectifyId_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(GovernItemType, governItemType_);
        DARABONBA_PTR_TO_JSON(GovernObjectIds, governObjectIds_);
        DARABONBA_PTR_TO_JSON(RectifyName, rectifyName_);
        DARABONBA_PTR_TO_JSON(RectifyPriority, rectifyPriority_);
        DARABONBA_PTR_TO_JSON(RectifyScope, rectifyScope_);
        DARABONBA_PTR_TO_JSON(RectifyUser, rectifyUser_);
        DARABONBA_PTR_TO_JSON(VerifyUser, verifyUser_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BindToRectify, bindToRectify_);
        DARABONBA_PTR_FROM_JSON(BindToRectifyId, bindToRectifyId_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(GovernItemType, governItemType_);
        DARABONBA_PTR_FROM_JSON(GovernObjectIds, governObjectIds_);
        DARABONBA_PTR_FROM_JSON(RectifyName, rectifyName_);
        DARABONBA_PTR_FROM_JSON(RectifyPriority, rectifyPriority_);
        DARABONBA_PTR_FROM_JSON(RectifyScope, rectifyScope_);
        DARABONBA_PTR_FROM_JSON(RectifyUser, rectifyUser_);
        DARABONBA_PTR_FROM_JSON(VerifyUser, verifyUser_);
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
      virtual bool empty() const override { return this->bindToRectify_ == nullptr
        && this->bindToRectifyId_ == nullptr && this->comment_ == nullptr && this->governItemType_ == nullptr && this->governObjectIds_ == nullptr && this->rectifyName_ == nullptr
        && this->rectifyPriority_ == nullptr && this->rectifyScope_ == nullptr && this->rectifyUser_ == nullptr && this->verifyUser_ == nullptr; };
      // bindToRectify Field Functions 
      bool hasBindToRectify() const { return this->bindToRectify_ != nullptr;};
      void deleteBindToRectify() { this->bindToRectify_ = nullptr;};
      inline bool getBindToRectify() const { DARABONBA_PTR_GET_DEFAULT(bindToRectify_, false) };
      inline CreateCommand& setBindToRectify(bool bindToRectify) { DARABONBA_PTR_SET_VALUE(bindToRectify_, bindToRectify) };


      // bindToRectifyId Field Functions 
      bool hasBindToRectifyId() const { return this->bindToRectifyId_ != nullptr;};
      void deleteBindToRectifyId() { this->bindToRectifyId_ = nullptr;};
      inline int64_t getBindToRectifyId() const { DARABONBA_PTR_GET_DEFAULT(bindToRectifyId_, 0L) };
      inline CreateCommand& setBindToRectifyId(int64_t bindToRectifyId) { DARABONBA_PTR_SET_VALUE(bindToRectifyId_, bindToRectifyId) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline CreateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // governItemType Field Functions 
      bool hasGovernItemType() const { return this->governItemType_ != nullptr;};
      void deleteGovernItemType() { this->governItemType_ = nullptr;};
      inline string getGovernItemType() const { DARABONBA_PTR_GET_DEFAULT(governItemType_, "") };
      inline CreateCommand& setGovernItemType(string governItemType) { DARABONBA_PTR_SET_VALUE(governItemType_, governItemType) };


      // governObjectIds Field Functions 
      bool hasGovernObjectIds() const { return this->governObjectIds_ != nullptr;};
      void deleteGovernObjectIds() { this->governObjectIds_ = nullptr;};
      inline const vector<int64_t> & getGovernObjectIds() const { DARABONBA_PTR_GET_CONST(governObjectIds_, vector<int64_t>) };
      inline vector<int64_t> getGovernObjectIds() { DARABONBA_PTR_GET(governObjectIds_, vector<int64_t>) };
      inline CreateCommand& setGovernObjectIds(const vector<int64_t> & governObjectIds) { DARABONBA_PTR_SET_VALUE(governObjectIds_, governObjectIds) };
      inline CreateCommand& setGovernObjectIds(vector<int64_t> && governObjectIds) { DARABONBA_PTR_SET_RVALUE(governObjectIds_, governObjectIds) };


      // rectifyName Field Functions 
      bool hasRectifyName() const { return this->rectifyName_ != nullptr;};
      void deleteRectifyName() { this->rectifyName_ = nullptr;};
      inline string getRectifyName() const { DARABONBA_PTR_GET_DEFAULT(rectifyName_, "") };
      inline CreateCommand& setRectifyName(string rectifyName) { DARABONBA_PTR_SET_VALUE(rectifyName_, rectifyName) };


      // rectifyPriority Field Functions 
      bool hasRectifyPriority() const { return this->rectifyPriority_ != nullptr;};
      void deleteRectifyPriority() { this->rectifyPriority_ = nullptr;};
      inline string getRectifyPriority() const { DARABONBA_PTR_GET_DEFAULT(rectifyPriority_, "") };
      inline CreateCommand& setRectifyPriority(string rectifyPriority) { DARABONBA_PTR_SET_VALUE(rectifyPriority_, rectifyPriority) };


      // rectifyScope Field Functions 
      bool hasRectifyScope() const { return this->rectifyScope_ != nullptr;};
      void deleteRectifyScope() { this->rectifyScope_ = nullptr;};
      inline string getRectifyScope() const { DARABONBA_PTR_GET_DEFAULT(rectifyScope_, "") };
      inline CreateCommand& setRectifyScope(string rectifyScope) { DARABONBA_PTR_SET_VALUE(rectifyScope_, rectifyScope) };


      // rectifyUser Field Functions 
      bool hasRectifyUser() const { return this->rectifyUser_ != nullptr;};
      void deleteRectifyUser() { this->rectifyUser_ = nullptr;};
      inline string getRectifyUser() const { DARABONBA_PTR_GET_DEFAULT(rectifyUser_, "") };
      inline CreateCommand& setRectifyUser(string rectifyUser) { DARABONBA_PTR_SET_VALUE(rectifyUser_, rectifyUser) };


      // verifyUser Field Functions 
      bool hasVerifyUser() const { return this->verifyUser_ != nullptr;};
      void deleteVerifyUser() { this->verifyUser_ = nullptr;};
      inline string getVerifyUser() const { DARABONBA_PTR_GET_DEFAULT(verifyUser_, "") };
      inline CreateCommand& setVerifyUser(string verifyUser) { DARABONBA_PTR_SET_VALUE(verifyUser_, verifyUser) };


    protected:
      // Specifies whether to associate with an existing process. Default value: false.
      shared_ptr<bool> bindToRectify_ {};
      // This parameter is required when you associate with an existing process.
      shared_ptr<int64_t> bindToRectifyId_ {};
      // The operation description. This parameter is optional. Maximum length: 128 characters.
      shared_ptr<string> comment_ {};
      // The governance object type. Valid values: TABLE, DATASOURCE_TABLE, DATASOURCE, INDEX, REALTIME_LOGICAL_TABLE, and QD_FEATURE.
      // 
      // This parameter is required.
      shared_ptr<string> governItemType_ {};
      // The list of issue IDs. Issues that cannot be rectified are skipped. If all issues are skipped, the original business error is returned.
      // 
      // This parameter is required.
      shared_ptr<vector<int64_t>> governObjectIds_ {};
      // The rectification name. This parameter is required when you create a process and can contain up to 128 characters. It is ignored when you associate with an existing process.
      shared_ptr<string> rectifyName_ {};
      // The rectification priority. Valid values: HIGH, MIDDLE, and LOW. Default value: MIDDLE. This parameter is ignored and not verified when you associate with an existing process.
      shared_ptr<string> rectifyPriority_ {};
      // The rectification scope. Valid values: QUALITY_RULE_SCOPE, QUALITY_RULE_TASK_SCOPE, QUALITY_GOVERN_OBJECT_SCOPE, and QUALITY_WATCH_SCOPE. The default value is the same as the value on the page. A rule scope may include other issues.
      shared_ptr<string> rectifyScope_ {};
      // The ID of the user who performs the rectification. Default value: the current user. This parameter is ignored when you associate with an existing process.
      shared_ptr<string> rectifyUser_ {};
      // The ID of the user who performs the verification. Default value: the current user. This parameter is ignored when you associate with an existing process.
      shared_ptr<string> verifyUser_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateRectifyFlowRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateRectifyFlowRequest::CreateCommand) };
    inline CreateRectifyFlowRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateRectifyFlowRequest::CreateCommand) };
    inline CreateRectifyFlowRequest& setCreateCommand(const CreateRectifyFlowRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateRectifyFlowRequest& setCreateCommand(CreateRectifyFlowRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateRectifyFlowRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateRectifyFlowRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The business request parameters.
    // 
    // This parameter is required.
    shared_ptr<CreateRectifyFlowRequest::CreateCommand> createCommand_ {};
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
