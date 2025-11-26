// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Operation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetOperationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOperationResponseBody() = default ;
    GetOperationResponseBody(const GetOperationResponseBody &) = default ;
    GetOperationResponseBody(GetOperationResponseBody &&) = default ;
    GetOperationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationResponseBody() = default ;
    GetOperationResponseBody& operator=(const GetOperationResponseBody &) = default ;
    GetOperationResponseBody& operator=(GetOperationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operation_ == nullptr
        && return this->requestId_ == nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline const Operation & operation() const { DARABONBA_PTR_GET_CONST(operation_, Operation) };
    inline Operation operation() { DARABONBA_PTR_GET(operation_, Operation) };
    inline GetOperationResponseBody& setOperation(const Operation & operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };
    inline GetOperationResponseBody& setOperation(Operation && operation) { DARABONBA_PTR_SET_RVALUE(operation_, operation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOperationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation that was performed.
    std::shared_ptr<Operation> operation_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
