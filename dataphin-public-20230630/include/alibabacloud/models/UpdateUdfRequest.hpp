// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUDFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUDFREQUEST_HPP_
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
  class UpdateUdfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUdfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUdfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateUdfRequest() = default ;
    UpdateUdfRequest(const UpdateUdfRequest &) = default ;
    UpdateUdfRequest(UpdateUdfRequest &&) = default ;
    UpdateUdfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUdfRequest() = default ;
    UpdateUdfRequest& operator=(const UpdateUdfRequest &) = default ;
    UpdateUdfRequest& operator=(UpdateUdfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ClassName, className_);
        DARABONBA_PTR_TO_JSON(CommandHelp, commandHelp_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(RefResourceIdList, refResourceIdList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ClassName, className_);
        DARABONBA_PTR_FROM_JSON(CommandHelp, commandHelp_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(RefResourceIdList, refResourceIdList_);
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
      virtual bool empty() const override { return this->category_ == nullptr
        && this->className_ == nullptr && this->commandHelp_ == nullptr && this->comment_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->projectId_ == nullptr && this->refResourceIdList_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline UpdateCommand& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // className Field Functions 
      bool hasClassName() const { return this->className_ != nullptr;};
      void deleteClassName() { this->className_ = nullptr;};
      inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
      inline UpdateCommand& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


      // commandHelp Field Functions 
      bool hasCommandHelp() const { return this->commandHelp_ != nullptr;};
      void deleteCommandHelp() { this->commandHelp_ = nullptr;};
      inline string getCommandHelp() const { DARABONBA_PTR_GET_DEFAULT(commandHelp_, "") };
      inline UpdateCommand& setCommandHelp(string commandHelp) { DARABONBA_PTR_SET_VALUE(commandHelp_, commandHelp) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline UpdateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


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


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline UpdateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // refResourceIdList Field Functions 
      bool hasRefResourceIdList() const { return this->refResourceIdList_ != nullptr;};
      void deleteRefResourceIdList() { this->refResourceIdList_ = nullptr;};
      inline const vector<int64_t> & getRefResourceIdList() const { DARABONBA_PTR_GET_CONST(refResourceIdList_, vector<int64_t>) };
      inline vector<int64_t> getRefResourceIdList() { DARABONBA_PTR_GET(refResourceIdList_, vector<int64_t>) };
      inline UpdateCommand& setRefResourceIdList(const vector<int64_t> & refResourceIdList) { DARABONBA_PTR_SET_VALUE(refResourceIdList_, refResourceIdList) };
      inline UpdateCommand& setRefResourceIdList(vector<int64_t> && refResourceIdList) { DARABONBA_PTR_SET_RVALUE(refResourceIdList_, refResourceIdList) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> category_ {};
      // This parameter is required.
      shared_ptr<string> className_ {};
      // This parameter is required.
      shared_ptr<string> commandHelp_ {};
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // This parameter is required.
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> refResourceIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateUdfRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateUdfRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateUdfRequest::UpdateCommand) };
    inline UpdateUdfRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateUdfRequest::UpdateCommand) };
    inline UpdateUdfRequest& setUpdateCommand(const UpdateUdfRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateUdfRequest& setUpdateCommand(UpdateUdfRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateUdfRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
