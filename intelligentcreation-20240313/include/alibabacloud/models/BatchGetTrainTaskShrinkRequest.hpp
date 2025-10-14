// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTRAINTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTRAINTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetTrainTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTrainTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_TO_JSON(taskIdList, taskIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetTrainTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_FROM_JSON(taskIdList, taskIdListShrink_);
    };
    BatchGetTrainTaskShrinkRequest() = default ;
    BatchGetTrainTaskShrinkRequest(const BatchGetTrainTaskShrinkRequest &) = default ;
    BatchGetTrainTaskShrinkRequest(BatchGetTrainTaskShrinkRequest &&) = default ;
    BatchGetTrainTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTrainTaskShrinkRequest() = default ;
    BatchGetTrainTaskShrinkRequest& operator=(const BatchGetTrainTaskShrinkRequest &) = default ;
    BatchGetTrainTaskShrinkRequest& operator=(BatchGetTrainTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunMainId_ == nullptr
        && return this->taskIdListShrink_ == nullptr; };
    // aliyunMainId Field Functions 
    bool hasAliyunMainId() const { return this->aliyunMainId_ != nullptr;};
    void deleteAliyunMainId() { this->aliyunMainId_ = nullptr;};
    inline string aliyunMainId() const { DARABONBA_PTR_GET_DEFAULT(aliyunMainId_, "") };
    inline BatchGetTrainTaskShrinkRequest& setAliyunMainId(string aliyunMainId) { DARABONBA_PTR_SET_VALUE(aliyunMainId_, aliyunMainId) };


    // taskIdListShrink Field Functions 
    bool hasTaskIdListShrink() const { return this->taskIdListShrink_ != nullptr;};
    void deleteTaskIdListShrink() { this->taskIdListShrink_ = nullptr;};
    inline string taskIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdListShrink_, "") };
    inline BatchGetTrainTaskShrinkRequest& setTaskIdListShrink(string taskIdListShrink) { DARABONBA_PTR_SET_VALUE(taskIdListShrink_, taskIdListShrink) };


  protected:
    std::shared_ptr<string> aliyunMainId_ = nullptr;
    std::shared_ptr<string> taskIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
