// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUDFREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEUDFREQUESTCREATECOMMAND_HPP_
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
  class CreateUdfRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUdfRequestCreateCommand& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateUdfRequestCreateCommand& obj) { 
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
    CreateUdfRequestCreateCommand() = default ;
    CreateUdfRequestCreateCommand(const CreateUdfRequestCreateCommand &) = default ;
    CreateUdfRequestCreateCommand(CreateUdfRequestCreateCommand &&) = default ;
    CreateUdfRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUdfRequestCreateCommand() = default ;
    CreateUdfRequestCreateCommand& operator=(const CreateUdfRequestCreateCommand &) = default ;
    CreateUdfRequestCreateCommand& operator=(CreateUdfRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->className_ == nullptr && return this->commandHelp_ == nullptr && return this->comment_ == nullptr && return this->computeEngineType_ == nullptr && return this->description_ == nullptr
        && return this->directory_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->refResourceIdList_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline CreateUdfRequestCreateCommand& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline CreateUdfRequestCreateCommand& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // commandHelp Field Functions 
    bool hasCommandHelp() const { return this->commandHelp_ != nullptr;};
    void deleteCommandHelp() { this->commandHelp_ = nullptr;};
    inline string commandHelp() const { DARABONBA_PTR_GET_DEFAULT(commandHelp_, "") };
    inline CreateUdfRequestCreateCommand& setCommandHelp(string commandHelp) { DARABONBA_PTR_SET_VALUE(commandHelp_, commandHelp) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateUdfRequestCreateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // computeEngineType Field Functions 
    bool hasComputeEngineType() const { return this->computeEngineType_ != nullptr;};
    void deleteComputeEngineType() { this->computeEngineType_ = nullptr;};
    inline string computeEngineType() const { DARABONBA_PTR_GET_DEFAULT(computeEngineType_, "") };
    inline CreateUdfRequestCreateCommand& setComputeEngineType(string computeEngineType) { DARABONBA_PTR_SET_VALUE(computeEngineType_, computeEngineType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUdfRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreateUdfRequestCreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUdfRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateUdfRequestCreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // refResourceIdList Field Functions 
    bool hasRefResourceIdList() const { return this->refResourceIdList_ != nullptr;};
    void deleteRefResourceIdList() { this->refResourceIdList_ = nullptr;};
    inline const vector<int64_t> & refResourceIdList() const { DARABONBA_PTR_GET_CONST(refResourceIdList_, vector<int64_t>) };
    inline vector<int64_t> refResourceIdList() { DARABONBA_PTR_GET(refResourceIdList_, vector<int64_t>) };
    inline CreateUdfRequestCreateCommand& setRefResourceIdList(const vector<int64_t> & refResourceIdList) { DARABONBA_PTR_SET_VALUE(refResourceIdList_, refResourceIdList) };
    inline CreateUdfRequestCreateCommand& setRefResourceIdList(vector<int64_t> && refResourceIdList) { DARABONBA_PTR_SET_RVALUE(refResourceIdList_, refResourceIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> category_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> className_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commandHelp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> computeEngineType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> directory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> refResourceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
