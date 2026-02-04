// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERVIPSBYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERVIPSBYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserVipsByDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserVipsByDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserVipsByDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeDcdnUserVipsByDomainRequest() = default ;
    DescribeDcdnUserVipsByDomainRequest(const DescribeDcdnUserVipsByDomainRequest &) = default ;
    DescribeDcdnUserVipsByDomainRequest(DescribeDcdnUserVipsByDomainRequest &&) = default ;
    DescribeDcdnUserVipsByDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserVipsByDomainRequest() = default ;
    DescribeDcdnUserVipsByDomainRequest& operator=(const DescribeDcdnUserVipsByDomainRequest &) = default ;
    DescribeDcdnUserVipsByDomainRequest& operator=(DescribeDcdnUserVipsByDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && this->domainName_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline string getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
    inline DescribeDcdnUserVipsByDomainRequest& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnUserVipsByDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // Specifies whether to query the virtual IP addresses of only healthy POPs. Valid value:
    // 
    // *   **on**: queries healthy VIPs.
    // *   **off**: queries all VIPs.
    shared_ptr<string> available_ {};
    // The accelerated domain name. You can specify only one domain name.
    // 
    // Enumeration values: example.com
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
