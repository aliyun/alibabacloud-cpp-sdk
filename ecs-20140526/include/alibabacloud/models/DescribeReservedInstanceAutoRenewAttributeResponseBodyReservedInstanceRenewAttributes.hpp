// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCEAUTORENEWATTRIBUTERESPONSEBODYRESERVEDINSTANCERENEWATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCEAUTORENEWATTRIBUTERESPONSEBODYRESERVEDINSTANCERENEWATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedInstanceRenewAttribute, reservedInstanceRenewAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedInstanceRenewAttribute, reservedInstanceRenewAttribute_);
    };
    DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes() = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes(const DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes &) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes(DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes &&) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes() = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes& operator=(const DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes &) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes& operator=(DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reservedInstanceRenewAttribute_ != nullptr; };
    // reservedInstanceRenewAttribute Field Functions 
    bool hasReservedInstanceRenewAttribute() const { return this->reservedInstanceRenewAttribute_ != nullptr;};
    void deleteReservedInstanceRenewAttribute() { this->reservedInstanceRenewAttribute_ = nullptr;};
    inline const vector<Models::DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute> & reservedInstanceRenewAttribute() const { DARABONBA_PTR_GET_CONST(reservedInstanceRenewAttribute_, vector<Models::DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute>) };
    inline vector<Models::DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute> reservedInstanceRenewAttribute() { DARABONBA_PTR_GET(reservedInstanceRenewAttribute_, vector<Models::DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute>) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes& setReservedInstanceRenewAttribute(const vector<Models::DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute> & reservedInstanceRenewAttribute) { DARABONBA_PTR_SET_VALUE(reservedInstanceRenewAttribute_, reservedInstanceRenewAttribute) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributes& setReservedInstanceRenewAttribute(vector<Models::DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute> && reservedInstanceRenewAttribute) { DARABONBA_PTR_SET_RVALUE(reservedInstanceRenewAttribute_, reservedInstanceRenewAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeReservedInstanceAutoRenewAttributeResponseBodyReservedInstanceRenewAttributesReservedInstanceRenewAttribute>> reservedInstanceRenewAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
