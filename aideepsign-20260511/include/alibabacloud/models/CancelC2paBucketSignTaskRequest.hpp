// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELC2PABUCKETSIGNTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELC2PABUCKETSIGNTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CancelC2paBucketSignTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelC2paBucketSignTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelC2paBucketSignTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CancelC2paBucketSignTaskRequest() = default ;
    CancelC2paBucketSignTaskRequest(const CancelC2paBucketSignTaskRequest &) = default ;
    CancelC2paBucketSignTaskRequest(CancelC2paBucketSignTaskRequest &&) = default ;
    CancelC2paBucketSignTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelC2paBucketSignTaskRequest() = default ;
    CancelC2paBucketSignTaskRequest& operator=(const CancelC2paBucketSignTaskRequest &) = default ;
    CancelC2paBucketSignTaskRequest& operator=(CancelC2paBucketSignTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CancelC2paBucketSignTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The parent task ID of the bucket returned by CreateC2paBucketSignTask.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
