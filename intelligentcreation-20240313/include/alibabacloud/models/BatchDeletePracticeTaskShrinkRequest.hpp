// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEPRACTICETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEPRACTICETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchDeletePracticeTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeletePracticeTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(taskIds, taskIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeletePracticeTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(taskIds, taskIdsShrink_);
    };
    BatchDeletePracticeTaskShrinkRequest() = default ;
    BatchDeletePracticeTaskShrinkRequest(const BatchDeletePracticeTaskShrinkRequest &) = default ;
    BatchDeletePracticeTaskShrinkRequest(BatchDeletePracticeTaskShrinkRequest &&) = default ;
    BatchDeletePracticeTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeletePracticeTaskShrinkRequest() = default ;
    BatchDeletePracticeTaskShrinkRequest& operator=(const BatchDeletePracticeTaskShrinkRequest &) = default ;
    BatchDeletePracticeTaskShrinkRequest& operator=(BatchDeletePracticeTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idempotentId_ == nullptr
        && this->taskIdsShrink_ == nullptr; };
    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline BatchDeletePracticeTaskShrinkRequest& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string getTaskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline BatchDeletePracticeTaskShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


  protected:
    shared_ptr<string> idempotentId_ {};
    shared_ptr<string> taskIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
