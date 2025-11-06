// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAININFOFORPARTNERRESPONSEBODYDATAOWNERSHIP_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAININFOFORPARTNERRESPONSEBODYDATAOWNERSHIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetDomainInfoForPartnerResponseBodyDataOwnership : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainInfoForPartnerResponseBodyDataOwnership& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainInfoForPartnerResponseBodyDataOwnership& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
    };
    GetDomainInfoForPartnerResponseBodyDataOwnership() = default ;
    GetDomainInfoForPartnerResponseBodyDataOwnership(const GetDomainInfoForPartnerResponseBodyDataOwnership &) = default ;
    GetDomainInfoForPartnerResponseBodyDataOwnership(GetDomainInfoForPartnerResponseBodyDataOwnership &&) = default ;
    GetDomainInfoForPartnerResponseBodyDataOwnership(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainInfoForPartnerResponseBodyDataOwnership() = default ;
    GetDomainInfoForPartnerResponseBodyDataOwnership& operator=(const GetDomainInfoForPartnerResponseBodyDataOwnership &) = default ;
    GetDomainInfoForPartnerResponseBodyDataOwnership& operator=(GetDomainInfoForPartnerResponseBodyDataOwnership &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->provider_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline GetDomainInfoForPartnerResponseBodyDataOwnership& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetDomainInfoForPartnerResponseBodyDataOwnership& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    std::shared_ptr<string> account_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
