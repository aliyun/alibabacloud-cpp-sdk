// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResetDisksResponseBodyOperationProgressSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ResetDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResetDisksResponseBody() = default ;
    ResetDisksResponseBody(const ResetDisksResponseBody &) = default ;
    ResetDisksResponseBody(ResetDisksResponseBody &&) = default ;
    ResetDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDisksResponseBody() = default ;
    ResetDisksResponseBody& operator=(const ResetDisksResponseBody &) = default ;
    ResetDisksResponseBody& operator=(ResetDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationProgressSet_ != nullptr
        && this->requestId_ != nullptr; };
    // operationProgressSet Field Functions 
    bool hasOperationProgressSet() const { return this->operationProgressSet_ != nullptr;};
    void deleteOperationProgressSet() { this->operationProgressSet_ = nullptr;};
    inline const ResetDisksResponseBodyOperationProgressSet & operationProgressSet() const { DARABONBA_PTR_GET_CONST(operationProgressSet_, ResetDisksResponseBodyOperationProgressSet) };
    inline ResetDisksResponseBodyOperationProgressSet operationProgressSet() { DARABONBA_PTR_GET(operationProgressSet_, ResetDisksResponseBodyOperationProgressSet) };
    inline ResetDisksResponseBody& setOperationProgressSet(const ResetDisksResponseBodyOperationProgressSet & operationProgressSet) { DARABONBA_PTR_SET_VALUE(operationProgressSet_, operationProgressSet) };
    inline ResetDisksResponseBody& setOperationProgressSet(ResetDisksResponseBodyOperationProgressSet && operationProgressSet) { DARABONBA_PTR_SET_RVALUE(operationProgressSet_, operationProgressSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the rollback operation.
    std::shared_ptr<ResetDisksResponseBodyOperationProgressSet> operationProgressSet_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
