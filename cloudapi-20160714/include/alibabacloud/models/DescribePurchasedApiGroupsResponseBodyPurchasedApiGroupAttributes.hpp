// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODYPURCHASEDAPIGROUPATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODYPURCHASEDAPIGROUPATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(PurchasedApiGroupAttribute, purchasedApiGroupAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(PurchasedApiGroupAttribute, purchasedApiGroupAttribute_);
    };
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes() = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes(const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes &) = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes(DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes &&) = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes() = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes& operator=(const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes &) = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes& operator=(DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->purchasedApiGroupAttribute_ == nullptr; };
    // purchasedApiGroupAttribute Field Functions 
    bool hasPurchasedApiGroupAttribute() const { return this->purchasedApiGroupAttribute_ != nullptr;};
    void deletePurchasedApiGroupAttribute() { this->purchasedApiGroupAttribute_ = nullptr;};
    inline const vector<Models::DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute> & purchasedApiGroupAttribute() const { DARABONBA_PTR_GET_CONST(purchasedApiGroupAttribute_, vector<Models::DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute>) };
    inline vector<Models::DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute> purchasedApiGroupAttribute() { DARABONBA_PTR_GET(purchasedApiGroupAttribute_, vector<Models::DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute>) };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes& setPurchasedApiGroupAttribute(const vector<Models::DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute> & purchasedApiGroupAttribute) { DARABONBA_PTR_SET_VALUE(purchasedApiGroupAttribute_, purchasedApiGroupAttribute) };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes& setPurchasedApiGroupAttribute(vector<Models::DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute> && purchasedApiGroupAttribute) { DARABONBA_PTR_SET_RVALUE(purchasedApiGroupAttribute_, purchasedApiGroupAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute>> purchasedApiGroupAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
