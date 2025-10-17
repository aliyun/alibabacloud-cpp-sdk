// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODYDEDICATEDHOSTRENEWATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODYDEDICATEDHOSTRENEWATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostRenewAttribute, dedicatedHostRenewAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostRenewAttribute, dedicatedHostRenewAttribute_);
    };
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes() = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes(const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes &) = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes(DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes &&) = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes() = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes& operator=(const DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes &) = default ;
    DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes& operator=(DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostRenewAttribute_ == nullptr; };
    // dedicatedHostRenewAttribute Field Functions 
    bool hasDedicatedHostRenewAttribute() const { return this->dedicatedHostRenewAttribute_ != nullptr;};
    void deleteDedicatedHostRenewAttribute() { this->dedicatedHostRenewAttribute_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute> & dedicatedHostRenewAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostRenewAttribute_, vector<Models::DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute>) };
    inline vector<Models::DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute> dedicatedHostRenewAttribute() { DARABONBA_PTR_GET(dedicatedHostRenewAttribute_, vector<Models::DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute>) };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes& setDedicatedHostRenewAttribute(const vector<Models::DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute> & dedicatedHostRenewAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostRenewAttribute_, dedicatedHostRenewAttribute) };
    inline DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributes& setDedicatedHostRenewAttribute(vector<Models::DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute> && dedicatedHostRenewAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostRenewAttribute_, dedicatedHostRenewAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostAutoRenewResponseBodyDedicatedHostRenewAttributesDedicatedHostRenewAttribute>> dedicatedHostRenewAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
