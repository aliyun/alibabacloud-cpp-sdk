// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetProjectTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetProjectTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskIdList, taskIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetProjectTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskIdList, taskIdListShrink_);
    };
    BatchGetProjectTaskShrinkRequest() = default ;
    BatchGetProjectTaskShrinkRequest(const BatchGetProjectTaskShrinkRequest &) = default ;
    BatchGetProjectTaskShrinkRequest(BatchGetProjectTaskShrinkRequest &&) = default ;
    BatchGetProjectTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetProjectTaskShrinkRequest() = default ;
    BatchGetProjectTaskShrinkRequest& operator=(const BatchGetProjectTaskShrinkRequest &) = default ;
    BatchGetProjectTaskShrinkRequest& operator=(BatchGetProjectTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIdListShrink_ == nullptr; };
    // taskIdListShrink Field Functions 
    bool hasTaskIdListShrink() const { return this->taskIdListShrink_ != nullptr;};
    void deleteTaskIdListShrink() { this->taskIdListShrink_ = nullptr;};
    inline string getTaskIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdListShrink_, "") };
    inline BatchGetProjectTaskShrinkRequest& setTaskIdListShrink(string taskIdListShrink) { DARABONBA_PTR_SET_VALUE(taskIdListShrink_, taskIdListShrink) };


  protected:
    shared_ptr<string> taskIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
