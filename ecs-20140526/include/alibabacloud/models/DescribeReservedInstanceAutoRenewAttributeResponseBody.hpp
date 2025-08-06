// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeReservedInstanceAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceRenewAttributes, reservedInstanceRenewAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceRenewAttributes, reservedInstanceRenewAttributes_);
    };
    DescribeReservedInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody(const DescribeReservedInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody(DescribeReservedInstanceAutoRenewAttributeResponseBody &&) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody& operator=(const DescribeReservedInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody& operator=(DescribeReservedInstanceAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->reservedInstanceRenewAttributes_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedInstanceRenewAttributes Field Functions 
    bool hasReservedInstanceRenewAttributes() const { return this->reservedInstanceRenewAttributes_ != nullptr;};
    void deleteReservedInstanceRenewAttributes() { this->reservedInstanceRenewAttributes_ = nullptr;};
    inline const DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes & reservedInstanceRenewAttributes() const { DARABONBA_PTR_GET_CONST(reservedInstanceRenewAttributes_, DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes reservedInstanceRenewAttributes() { DARABONBA_PTR_GET(reservedInstanceRenewAttributes_, DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBody& setReservedInstanceRenewAttributes(const DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes & reservedInstanceRenewAttributes) { DARABONBA_PTR_SET_VALUE(reservedInstanceRenewAttributes_, reservedInstanceRenewAttributes) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBody& setReservedInstanceRenewAttributes(DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes && reservedInstanceRenewAttributes) { DARABONBA_PTR_SET_RVALUE(reservedInstanceRenewAttributes_, reservedInstanceRenewAttributes) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details about the auto-renewal settings of the reserved instances.
    std::shared_ptr<DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes> reservedInstanceRenewAttributes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
