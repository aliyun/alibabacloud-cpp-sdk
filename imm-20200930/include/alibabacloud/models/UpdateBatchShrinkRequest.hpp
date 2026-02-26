// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateBatchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actionsShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actionsShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    UpdateBatchShrinkRequest() = default ;
    UpdateBatchShrinkRequest(const UpdateBatchShrinkRequest &) = default ;
    UpdateBatchShrinkRequest(UpdateBatchShrinkRequest &&) = default ;
    UpdateBatchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchShrinkRequest() = default ;
    UpdateBatchShrinkRequest& operator=(const UpdateBatchShrinkRequest &) = default ;
    UpdateBatchShrinkRequest& operator=(UpdateBatchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionsShrink_ == nullptr
        && this->id_ == nullptr && this->inputShrink_ == nullptr && this->projectName_ == nullptr && this->tagsShrink_ == nullptr; };
    // actionsShrink Field Functions 
    bool hasActionsShrink() const { return this->actionsShrink_ != nullptr;};
    void deleteActionsShrink() { this->actionsShrink_ = nullptr;};
    inline string getActionsShrink() const { DARABONBA_PTR_GET_DEFAULT(actionsShrink_, "") };
    inline UpdateBatchShrinkRequest& setActionsShrink(string actionsShrink) { DARABONBA_PTR_SET_VALUE(actionsShrink_, actionsShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateBatchShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline UpdateBatchShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateBatchShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateBatchShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The processing templates.
    shared_ptr<string> actionsShrink_ {};
    // The ID of the batch processing task. You can obtain the ID of the batch processing task from the response of the [CreateBatch](https://help.aliyun.com/document_detail/606694.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The input data source.
    shared_ptr<string> inputShrink_ {};
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
