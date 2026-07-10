// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECOGNITIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECOGNITIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class QueryRecognitionResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecognitionResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderUniqueId, orderUniqueId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecognitionResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderUniqueId, orderUniqueId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryRecognitionResultRequest() = default ;
    QueryRecognitionResultRequest(const QueryRecognitionResultRequest &) = default ;
    QueryRecognitionResultRequest(QueryRecognitionResultRequest &&) = default ;
    QueryRecognitionResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecognitionResultRequest() = default ;
    QueryRecognitionResultRequest& operator=(const QueryRecognitionResultRequest &) = default ;
    QueryRecognitionResultRequest& operator=(QueryRecognitionResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderUniqueId_ == nullptr
        && this->taskId_ == nullptr; };
    // orderUniqueId Field Functions 
    bool hasOrderUniqueId() const { return this->orderUniqueId_ != nullptr;};
    void deleteOrderUniqueId() { this->orderUniqueId_ = nullptr;};
    inline string getOrderUniqueId() const { DARABONBA_PTR_GET_DEFAULT(orderUniqueId_, "") };
    inline QueryRecognitionResultRequest& setOrderUniqueId(string orderUniqueId) { DARABONBA_PTR_SET_VALUE(orderUniqueId_, orderUniqueId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryRecognitionResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Business idempotent request ID
    shared_ptr<string> orderUniqueId_ {};
    // Platform Task ID
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
