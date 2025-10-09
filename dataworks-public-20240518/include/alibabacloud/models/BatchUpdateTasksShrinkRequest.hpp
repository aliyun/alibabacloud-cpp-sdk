// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATETASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATETASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchUpdateTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Tasks, tasksShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasksShrink_);
    };
    BatchUpdateTasksShrinkRequest() = default ;
    BatchUpdateTasksShrinkRequest(const BatchUpdateTasksShrinkRequest &) = default ;
    BatchUpdateTasksShrinkRequest(BatchUpdateTasksShrinkRequest &&) = default ;
    BatchUpdateTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateTasksShrinkRequest() = default ;
    BatchUpdateTasksShrinkRequest& operator=(const BatchUpdateTasksShrinkRequest &) = default ;
    BatchUpdateTasksShrinkRequest& operator=(BatchUpdateTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->tasksShrink_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline BatchUpdateTasksShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // tasksShrink Field Functions 
    bool hasTasksShrink() const { return this->tasksShrink_ != nullptr;};
    void deleteTasksShrink() { this->tasksShrink_ = nullptr;};
    inline string tasksShrink() const { DARABONBA_PTR_GET_DEFAULT(tasksShrink_, "") };
    inline BatchUpdateTasksShrinkRequest& setTasksShrink(string tasksShrink) { DARABONBA_PTR_SET_VALUE(tasksShrink_, tasksShrink) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The tasks.
    std::shared_ptr<string> tasksShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
