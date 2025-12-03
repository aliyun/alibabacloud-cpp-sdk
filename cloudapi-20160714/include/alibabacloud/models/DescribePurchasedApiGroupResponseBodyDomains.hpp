// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePurchasedApiGroupResponseBodyDomainsDomainItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApiGroupResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApiGroupResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(DomainItem, domainItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApiGroupResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainItem, domainItem_);
    };
    DescribePurchasedApiGroupResponseBodyDomains() = default ;
    DescribePurchasedApiGroupResponseBodyDomains(const DescribePurchasedApiGroupResponseBodyDomains &) = default ;
    DescribePurchasedApiGroupResponseBodyDomains(DescribePurchasedApiGroupResponseBodyDomains &&) = default ;
    DescribePurchasedApiGroupResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApiGroupResponseBodyDomains() = default ;
    DescribePurchasedApiGroupResponseBodyDomains& operator=(const DescribePurchasedApiGroupResponseBodyDomains &) = default ;
    DescribePurchasedApiGroupResponseBodyDomains& operator=(DescribePurchasedApiGroupResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainItem_ == nullptr; };
    // domainItem Field Functions 
    bool hasDomainItem() const { return this->domainItem_ != nullptr;};
    void deleteDomainItem() { this->domainItem_ = nullptr;};
    inline const vector<Models::DescribePurchasedApiGroupResponseBodyDomainsDomainItem> & domainItem() const { DARABONBA_PTR_GET_CONST(domainItem_, vector<Models::DescribePurchasedApiGroupResponseBodyDomainsDomainItem>) };
    inline vector<Models::DescribePurchasedApiGroupResponseBodyDomainsDomainItem> domainItem() { DARABONBA_PTR_GET(domainItem_, vector<Models::DescribePurchasedApiGroupResponseBodyDomainsDomainItem>) };
    inline DescribePurchasedApiGroupResponseBodyDomains& setDomainItem(const vector<Models::DescribePurchasedApiGroupResponseBodyDomainsDomainItem> & domainItem) { DARABONBA_PTR_SET_VALUE(domainItem_, domainItem) };
    inline DescribePurchasedApiGroupResponseBodyDomains& setDomainItem(vector<Models::DescribePurchasedApiGroupResponseBodyDomainsDomainItem> && domainItem) { DARABONBA_PTR_SET_RVALUE(domainItem_, domainItem) };


  protected:
    std::shared_ptr<vector<Models::DescribePurchasedApiGroupResponseBodyDomainsDomainItem>> domainItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
