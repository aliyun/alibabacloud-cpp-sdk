// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(TaskInstances, taskInstancesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(TaskInstances, taskInstancesShrink_);
    };
    UpdateTaskInstancesShrinkRequest() = default ;
    UpdateTaskInstancesShrinkRequest(const UpdateTaskInstancesShrinkRequest &) = default ;
    UpdateTaskInstancesShrinkRequest(UpdateTaskInstancesShrinkRequest &&) = default ;
    UpdateTaskInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskInstancesShrinkRequest() = default ;
    UpdateTaskInstancesShrinkRequest& operator=(const UpdateTaskInstancesShrinkRequest &) = default ;
    UpdateTaskInstancesShrinkRequest& operator=(UpdateTaskInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->taskInstancesShrink_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateTaskInstancesShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // taskInstancesShrink Field Functions 
    bool hasTaskInstancesShrink() const { return this->taskInstancesShrink_ != nullptr;};
    void deleteTaskInstancesShrink() { this->taskInstancesShrink_ = nullptr;};
    inline string taskInstancesShrink() const { DARABONBA_PTR_GET_DEFAULT(taskInstancesShrink_, "") };
    inline UpdateTaskInstancesShrinkRequest& setTaskInstancesShrink(string taskInstancesShrink) { DARABONBA_PTR_SET_VALUE(taskInstancesShrink_, taskInstancesShrink) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The instances.
    std::shared_ptr<string> taskInstancesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
