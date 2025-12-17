// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchModifyEntitlementResponseBodyEntitlements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class BatchModifyEntitlementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchModifyEntitlementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entitlements, entitlements_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchModifyEntitlementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entitlements, entitlements_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchModifyEntitlementResponseBody() = default ;
    BatchModifyEntitlementResponseBody(const BatchModifyEntitlementResponseBody &) = default ;
    BatchModifyEntitlementResponseBody(BatchModifyEntitlementResponseBody &&) = default ;
    BatchModifyEntitlementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchModifyEntitlementResponseBody() = default ;
    BatchModifyEntitlementResponseBody& operator=(const BatchModifyEntitlementResponseBody &) = default ;
    BatchModifyEntitlementResponseBody& operator=(BatchModifyEntitlementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entitlements_ == nullptr
        && return this->requestId_ == nullptr; };
    // entitlements Field Functions 
    bool hasEntitlements() const { return this->entitlements_ != nullptr;};
    void deleteEntitlements() { this->entitlements_ = nullptr;};
    inline const BatchModifyEntitlementResponseBodyEntitlements & entitlements() const { DARABONBA_PTR_GET_CONST(entitlements_, BatchModifyEntitlementResponseBodyEntitlements) };
    inline BatchModifyEntitlementResponseBodyEntitlements entitlements() { DARABONBA_PTR_GET(entitlements_, BatchModifyEntitlementResponseBodyEntitlements) };
    inline BatchModifyEntitlementResponseBody& setEntitlements(const BatchModifyEntitlementResponseBodyEntitlements & entitlements) { DARABONBA_PTR_SET_VALUE(entitlements_, entitlements) };
    inline BatchModifyEntitlementResponseBody& setEntitlements(BatchModifyEntitlementResponseBodyEntitlements && entitlements) { DARABONBA_PTR_SET_RVALUE(entitlements_, entitlements) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchModifyEntitlementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<BatchModifyEntitlementResponseBodyEntitlements> entitlements_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
