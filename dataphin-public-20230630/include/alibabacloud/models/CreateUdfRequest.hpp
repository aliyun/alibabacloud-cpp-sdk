// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUDFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUDFREQUEST_HPP_
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
  class CreateUdfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUdfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUdfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateUdfRequest() = default ;
    CreateUdfRequest(const CreateUdfRequest &) = default ;
    CreateUdfRequest(CreateUdfRequest &&) = default ;
    CreateUdfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUdfRequest() = default ;
    CreateUdfRequest& operator=(const CreateUdfRequest &) = default ;
    CreateUdfRequest& operator=(CreateUdfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ClassName, className_);
        DARABONBA_PTR_TO_JSON(CommandHelp, commandHelp_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(ComputeEngineType, computeEngineType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(RefResourceIdList, refResourceIdList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ClassName, className_);
        DARABONBA_PTR_FROM_JSON(CommandHelp, commandHelp_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(ComputeEngineType, computeEngineType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(RefResourceIdList, refResourceIdList_);
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
      virtual bool empty() const override { return this->category_ == nullptr
        && this->className_ == nullptr && this->commandHelp_ == nullptr && this->comment_ == nullptr && this->computeEngineType_ == nullptr && this->description_ == nullptr
        && this->directory_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->refResourceIdList_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline CreateCommand& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // className Field Functions 
      bool hasClassName() const { return this->className_ != nullptr;};
      void deleteClassName() { this->className_ = nullptr;};
      inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
      inline CreateCommand& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


      // commandHelp Field Functions 
      bool hasCommandHelp() const { return this->commandHelp_ != nullptr;};
      void deleteCommandHelp() { this->commandHelp_ = nullptr;};
      inline string getCommandHelp() const { DARABONBA_PTR_GET_DEFAULT(commandHelp_, "") };
      inline CreateCommand& setCommandHelp(string commandHelp) { DARABONBA_PTR_SET_VALUE(commandHelp_, commandHelp) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline CreateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // computeEngineType Field Functions 
      bool hasComputeEngineType() const { return this->computeEngineType_ != nullptr;};
      void deleteComputeEngineType() { this->computeEngineType_ = nullptr;};
      inline string getComputeEngineType() const { DARABONBA_PTR_GET_DEFAULT(computeEngineType_, "") };
      inline CreateCommand& setComputeEngineType(string computeEngineType) { DARABONBA_PTR_SET_VALUE(computeEngineType_, computeEngineType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline CreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // refResourceIdList Field Functions 
      bool hasRefResourceIdList() const { return this->refResourceIdList_ != nullptr;};
      void deleteRefResourceIdList() { this->refResourceIdList_ = nullptr;};
      inline const vector<int64_t> & getRefResourceIdList() const { DARABONBA_PTR_GET_CONST(refResourceIdList_, vector<int64_t>) };
      inline vector<int64_t> getRefResourceIdList() { DARABONBA_PTR_GET(refResourceIdList_, vector<int64_t>) };
      inline CreateCommand& setRefResourceIdList(const vector<int64_t> & refResourceIdList) { DARABONBA_PTR_SET_VALUE(refResourceIdList_, refResourceIdList) };
      inline CreateCommand& setRefResourceIdList(vector<int64_t> && refResourceIdList) { DARABONBA_PTR_SET_RVALUE(refResourceIdList_, refResourceIdList) };


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
      shared_ptr<string> computeEngineType_ {};
      // This parameter is required.
      shared_ptr<string> description_ {};
      shared_ptr<string> directory_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> refResourceIdList_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateUdfRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateUdfRequest::CreateCommand) };
    inline CreateUdfRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateUdfRequest::CreateCommand) };
    inline CreateUdfRequest& setCreateCommand(const CreateUdfRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateUdfRequest& setCreateCommand(CreateUdfRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateUdfRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateUdfRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
