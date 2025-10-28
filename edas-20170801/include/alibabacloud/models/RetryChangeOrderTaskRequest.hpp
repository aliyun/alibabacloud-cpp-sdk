// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYCHANGEORDERTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYCHANGEORDERTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class RetryChangeOrderTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryChangeOrderTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RetryStatus, retryStatus_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryChangeOrderTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RetryStatus, retryStatus_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RetryChangeOrderTaskRequest() = default ;
    RetryChangeOrderTaskRequest(const RetryChangeOrderTaskRequest &) = default ;
    RetryChangeOrderTaskRequest(RetryChangeOrderTaskRequest &&) = default ;
    RetryChangeOrderTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryChangeOrderTaskRequest() = default ;
    RetryChangeOrderTaskRequest& operator=(const RetryChangeOrderTaskRequest &) = default ;
    RetryChangeOrderTaskRequest& operator=(RetryChangeOrderTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->retryStatus_ == nullptr
        && return this->taskId_ == nullptr; };
    // retryStatus Field Functions 
    bool hasRetryStatus() const { return this->retryStatus_ != nullptr;};
    void deleteRetryStatus() { this->retryStatus_ = nullptr;};
    inline bool retryStatus() const { DARABONBA_PTR_GET_DEFAULT(retryStatus_, false) };
    inline RetryChangeOrderTaskRequest& setRetryStatus(bool retryStatus) { DARABONBA_PTR_SET_VALUE(retryStatus_, retryStatus) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RetryChangeOrderTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The retry status.
    std::shared_ptr<bool> retryStatus_ = nullptr;
    // The ID of the process.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
