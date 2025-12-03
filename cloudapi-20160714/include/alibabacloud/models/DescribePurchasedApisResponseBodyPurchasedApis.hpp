// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODYPURCHASEDAPIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODYPURCHASEDAPIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApisResponseBodyPurchasedApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApisResponseBodyPurchasedApis& obj) { 
      DARABONBA_PTR_TO_JSON(PurchasedApi, purchasedApi_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApisResponseBodyPurchasedApis& obj) { 
      DARABONBA_PTR_FROM_JSON(PurchasedApi, purchasedApi_);
    };
    DescribePurchasedApisResponseBodyPurchasedApis() = default ;
    DescribePurchasedApisResponseBodyPurchasedApis(const DescribePurchasedApisResponseBodyPurchasedApis &) = default ;
    DescribePurchasedApisResponseBodyPurchasedApis(DescribePurchasedApisResponseBodyPurchasedApis &&) = default ;
    DescribePurchasedApisResponseBodyPurchasedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApisResponseBodyPurchasedApis() = default ;
    DescribePurchasedApisResponseBodyPurchasedApis& operator=(const DescribePurchasedApisResponseBodyPurchasedApis &) = default ;
    DescribePurchasedApisResponseBodyPurchasedApis& operator=(DescribePurchasedApisResponseBodyPurchasedApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->purchasedApi_ == nullptr; };
    // purchasedApi Field Functions 
    bool hasPurchasedApi() const { return this->purchasedApi_ != nullptr;};
    void deletePurchasedApi() { this->purchasedApi_ = nullptr;};
    inline const vector<Models::DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi> & purchasedApi() const { DARABONBA_PTR_GET_CONST(purchasedApi_, vector<Models::DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi>) };
    inline vector<Models::DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi> purchasedApi() { DARABONBA_PTR_GET(purchasedApi_, vector<Models::DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi>) };
    inline DescribePurchasedApisResponseBodyPurchasedApis& setPurchasedApi(const vector<Models::DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi> & purchasedApi) { DARABONBA_PTR_SET_VALUE(purchasedApi_, purchasedApi) };
    inline DescribePurchasedApisResponseBodyPurchasedApis& setPurchasedApi(vector<Models::DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi> && purchasedApi) { DARABONBA_PTR_SET_RVALUE(purchasedApi_, purchasedApi) };


  protected:
    std::shared_ptr<vector<Models::DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi>> purchasedApi_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
