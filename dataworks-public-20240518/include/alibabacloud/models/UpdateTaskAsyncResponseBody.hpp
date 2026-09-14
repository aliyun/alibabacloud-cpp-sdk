// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKASYNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateTaskAsyncResponseBody() = default ;
    UpdateTaskAsyncResponseBody(const UpdateTaskAsyncResponseBody &) = default ;
    UpdateTaskAsyncResponseBody(UpdateTaskAsyncResponseBody &&) = default ;
    UpdateTaskAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskAsyncResponseBody() = default ;
    UpdateTaskAsyncResponseBody& operator=(const UpdateTaskAsyncResponseBody &) = default ;
    UpdateTaskAsyncResponseBody& operator=(UpdateTaskAsyncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationId_ == nullptr
        && this->requestId_ == nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline UpdateTaskAsyncResponseBody& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTaskAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation ID, which is used to obtain the result of the asynchronous node update. You can call the UpdateTaskAsync operation to obtain the result.
    shared_ptr<string> operationId_ {};
    // The request ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
