// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetVideoClipTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetVideoClipTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskIdList, taskIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetVideoClipTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskIdList, taskIdListShrink_);
    };
    BatchGetVideoClipTaskShrinkRequest() = default ;
    BatchGetVideoClipTaskShrinkRequest(const BatchGetVideoClipTaskShrinkRequest &) = default ;
    BatchGetVideoClipTaskShrinkRequest(BatchGetVideoClipTaskShrinkRequest &&) = default ;
    BatchGetVideoClipTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetVideoClipTaskShrinkRequest() = default ;
    BatchGetVideoClipTaskShrinkRequest& operator=(const BatchGetVideoClipTaskShrinkRequest &) = default ;
    BatchGetVideoClipTaskShrinkRequest& operator=(BatchGetVideoClipTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIdListShrink_ == nullptr; };
    // taskIdListShrink Field Functions 
    bool hasTaskIdListShrink() const { return this->taskIdListShrink_ != nullptr;};
    void deleteTaskIdListShrink() { this->taskIdListShrink_ = nullptr;};
    inline string getTaskIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdListShrink_, "") };
    inline BatchGetVideoClipTaskShrinkRequest& setTaskIdListShrink(string taskIdListShrink) { DARABONBA_PTR_SET_VALUE(taskIdListShrink_, taskIdListShrink) };


  protected:
    shared_ptr<string> taskIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
