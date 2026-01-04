// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainSecurityProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecurityProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecurityProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeDomainSecurityProfileRequest() = default ;
    DescribeDomainSecurityProfileRequest(const DescribeDomainSecurityProfileRequest &) = default ;
    DescribeDomainSecurityProfileRequest(DescribeDomainSecurityProfileRequest &&) = default ;
    DescribeDomainSecurityProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecurityProfileRequest() = default ;
    DescribeDomainSecurityProfileRequest& operator=(const DescribeDomainSecurityProfileRequest &) = default ;
    DescribeDomainSecurityProfileRequest& operator=(DescribeDomainSecurityProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainSecurityProfileRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
