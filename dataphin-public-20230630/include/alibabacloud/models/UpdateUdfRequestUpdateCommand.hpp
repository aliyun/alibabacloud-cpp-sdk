// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUDFREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUDFREQUESTUPDATECOMMAND_HPP_
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
  class UpdateUdfRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUdfRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(CommandHelp, commandHelp_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RefResourceIdList, refResourceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUdfRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(CommandHelp, commandHelp_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RefResourceIdList, refResourceIdList_);
    };
    UpdateUdfRequestUpdateCommand() = default ;
    UpdateUdfRequestUpdateCommand(const UpdateUdfRequestUpdateCommand &) = default ;
    UpdateUdfRequestUpdateCommand(UpdateUdfRequestUpdateCommand &&) = default ;
    UpdateUdfRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUdfRequestUpdateCommand() = default ;
    UpdateUdfRequestUpdateCommand& operator=(const UpdateUdfRequestUpdateCommand &) = default ;
    UpdateUdfRequestUpdateCommand& operator=(UpdateUdfRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->className_ != nullptr && this->commandHelp_ != nullptr && this->comment_ != nullptr && this->description_ != nullptr && this->id_ != nullptr
        && this->projectId_ != nullptr && this->refResourceIdList_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline UpdateUdfRequestUpdateCommand& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline UpdateUdfRequestUpdateCommand& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // commandHelp Field Functions 
    bool hasCommandHelp() const { return this->commandHelp_ != nullptr;};
    void deleteCommandHelp() { this->commandHelp_ = nullptr;};
    inline string commandHelp() const { DARABONBA_PTR_GET_DEFAULT(commandHelp_, "") };
    inline UpdateUdfRequestUpdateCommand& setCommandHelp(string commandHelp) { DARABONBA_PTR_SET_VALUE(commandHelp_, commandHelp) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateUdfRequestUpdateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateUdfRequestUpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateUdfRequestUpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateUdfRequestUpdateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // refResourceIdList Field Functions 
    bool hasRefResourceIdList() const { return this->refResourceIdList_ != nullptr;};
    void deleteRefResourceIdList() { this->refResourceIdList_ = nullptr;};
    inline const vector<int64_t> & refResourceIdList() const { DARABONBA_PTR_GET_CONST(refResourceIdList_, vector<int64_t>) };
    inline vector<int64_t> refResourceIdList() { DARABONBA_PTR_GET(refResourceIdList_, vector<int64_t>) };
    inline UpdateUdfRequestUpdateCommand& setRefResourceIdList(const vector<int64_t> & refResourceIdList) { DARABONBA_PTR_SET_VALUE(refResourceIdList_, refResourceIdList) };
    inline UpdateUdfRequestUpdateCommand& setRefResourceIdList(vector<int64_t> && refResourceIdList) { DARABONBA_PTR_SET_RVALUE(refResourceIdList_, refResourceIdList) };


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
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> refResourceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
