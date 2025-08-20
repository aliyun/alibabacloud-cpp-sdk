// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackGroupOperationResponseBodyStackGroupOperation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackGroupOperationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupOperationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroupOperation, stackGroupOperation_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupOperationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroupOperation, stackGroupOperation_);
    };
    GetStackGroupOperationResponseBody() = default ;
    GetStackGroupOperationResponseBody(const GetStackGroupOperationResponseBody &) = default ;
    GetStackGroupOperationResponseBody(GetStackGroupOperationResponseBody &&) = default ;
    GetStackGroupOperationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupOperationResponseBody() = default ;
    GetStackGroupOperationResponseBody& operator=(const GetStackGroupOperationResponseBody &) = default ;
    GetStackGroupOperationResponseBody& operator=(GetStackGroupOperationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->stackGroupOperation_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackGroupOperationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroupOperation Field Functions 
    bool hasStackGroupOperation() const { return this->stackGroupOperation_ != nullptr;};
    void deleteStackGroupOperation() { this->stackGroupOperation_ = nullptr;};
    inline const GetStackGroupOperationResponseBodyStackGroupOperation & stackGroupOperation() const { DARABONBA_PTR_GET_CONST(stackGroupOperation_, GetStackGroupOperationResponseBodyStackGroupOperation) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation stackGroupOperation() { DARABONBA_PTR_GET(stackGroupOperation_, GetStackGroupOperationResponseBodyStackGroupOperation) };
    inline GetStackGroupOperationResponseBody& setStackGroupOperation(const GetStackGroupOperationResponseBodyStackGroupOperation & stackGroupOperation) { DARABONBA_PTR_SET_VALUE(stackGroupOperation_, stackGroupOperation) };
    inline GetStackGroupOperationResponseBody& setStackGroupOperation(GetStackGroupOperationResponseBodyStackGroupOperation && stackGroupOperation) { DARABONBA_PTR_SET_RVALUE(stackGroupOperation_, stackGroupOperation) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the stack group operation.
    std::shared_ptr<GetStackGroupOperationResponseBodyStackGroupOperation> stackGroupOperation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
