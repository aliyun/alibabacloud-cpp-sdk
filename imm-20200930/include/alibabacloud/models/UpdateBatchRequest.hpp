// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBatchRequestActions.hpp>
#include <alibabacloud/models/Input.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    UpdateBatchRequest() = default ;
    UpdateBatchRequest(const UpdateBatchRequest &) = default ;
    UpdateBatchRequest(UpdateBatchRequest &&) = default ;
    UpdateBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchRequest() = default ;
    UpdateBatchRequest& operator=(const UpdateBatchRequest &) = default ;
    UpdateBatchRequest& operator=(UpdateBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->id_ != nullptr && this->input_ != nullptr && this->projectName_ != nullptr && this->tags_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<UpdateBatchRequestActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<UpdateBatchRequestActions>) };
    inline vector<UpdateBatchRequestActions> actions() { DARABONBA_PTR_GET(actions_, vector<UpdateBatchRequestActions>) };
    inline UpdateBatchRequest& setActions(const vector<UpdateBatchRequestActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline UpdateBatchRequest& setActions(vector<UpdateBatchRequestActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateBatchRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Input & input() const { DARABONBA_PTR_GET_CONST(input_, Input) };
    inline Input input() { DARABONBA_PTR_GET(input_, Input) };
    inline UpdateBatchRequest& setInput(const Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline UpdateBatchRequest& setInput(Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateBatchRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline UpdateBatchRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline UpdateBatchRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The processing templates.
    std::shared_ptr<vector<UpdateBatchRequestActions>> actions_ = nullptr;
    // The ID of the batch processing task. You can obtain the ID of the batch processing task from the response of the [CreateBatch](https://help.aliyun.com/document_detail/606694.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The input data source.
    std::shared_ptr<Input> input_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
