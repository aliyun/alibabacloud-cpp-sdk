// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWALATTRIBUTERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWALATTRIBUTERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAutoRenewalAttributeResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoRenewalAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewalAttribute, autoRenewalAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoRenewalAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewalAttribute, autoRenewalAttribute_);
    };
    DescribeAutoRenewalAttributeResponseBodyItems() = default ;
    DescribeAutoRenewalAttributeResponseBodyItems(const DescribeAutoRenewalAttributeResponseBodyItems &) = default ;
    DescribeAutoRenewalAttributeResponseBodyItems(DescribeAutoRenewalAttributeResponseBodyItems &&) = default ;
    DescribeAutoRenewalAttributeResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoRenewalAttributeResponseBodyItems() = default ;
    DescribeAutoRenewalAttributeResponseBodyItems& operator=(const DescribeAutoRenewalAttributeResponseBodyItems &) = default ;
    DescribeAutoRenewalAttributeResponseBodyItems& operator=(DescribeAutoRenewalAttributeResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewalAttribute_ == nullptr; };
    // autoRenewalAttribute Field Functions 
    bool hasAutoRenewalAttribute() const { return this->autoRenewalAttribute_ != nullptr;};
    void deleteAutoRenewalAttribute() { this->autoRenewalAttribute_ = nullptr;};
    inline const vector<Models::DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute> & autoRenewalAttribute() const { DARABONBA_PTR_GET_CONST(autoRenewalAttribute_, vector<Models::DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute>) };
    inline vector<Models::DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute> autoRenewalAttribute() { DARABONBA_PTR_GET(autoRenewalAttribute_, vector<Models::DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute>) };
    inline DescribeAutoRenewalAttributeResponseBodyItems& setAutoRenewalAttribute(const vector<Models::DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute> & autoRenewalAttribute) { DARABONBA_PTR_SET_VALUE(autoRenewalAttribute_, autoRenewalAttribute) };
    inline DescribeAutoRenewalAttributeResponseBodyItems& setAutoRenewalAttribute(vector<Models::DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute> && autoRenewalAttribute) { DARABONBA_PTR_SET_RVALUE(autoRenewalAttribute_, autoRenewalAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoRenewalAttributeResponseBodyItemsAutoRenewalAttribute>> autoRenewalAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
