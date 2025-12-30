// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class TransferDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    TransferDomainResponseBody() = default ;
    TransferDomainResponseBody(const TransferDomainResponseBody &) = default ;
    TransferDomainResponseBody(TransferDomainResponseBody &&) = default ;
    TransferDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferDomainResponseBody() = default ;
    TransferDomainResponseBody& operator=(const TransferDomainResponseBody &) = default ;
    TransferDomainResponseBody& operator=(TransferDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransferDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline TransferDomainResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task ID.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
