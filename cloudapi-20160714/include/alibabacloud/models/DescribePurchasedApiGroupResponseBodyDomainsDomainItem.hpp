// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODYDOMAINSDOMAINITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPRESPONSEBODYDOMAINSDOMAINITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApiGroupResponseBodyDomainsDomainItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApiGroupResponseBodyDomainsDomainItem& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApiGroupResponseBodyDomainsDomainItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribePurchasedApiGroupResponseBodyDomainsDomainItem() = default ;
    DescribePurchasedApiGroupResponseBodyDomainsDomainItem(const DescribePurchasedApiGroupResponseBodyDomainsDomainItem &) = default ;
    DescribePurchasedApiGroupResponseBodyDomainsDomainItem(DescribePurchasedApiGroupResponseBodyDomainsDomainItem &&) = default ;
    DescribePurchasedApiGroupResponseBodyDomainsDomainItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApiGroupResponseBodyDomainsDomainItem() = default ;
    DescribePurchasedApiGroupResponseBodyDomainsDomainItem& operator=(const DescribePurchasedApiGroupResponseBodyDomainsDomainItem &) = default ;
    DescribePurchasedApiGroupResponseBodyDomainsDomainItem& operator=(DescribePurchasedApiGroupResponseBodyDomainsDomainItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribePurchasedApiGroupResponseBodyDomainsDomainItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
