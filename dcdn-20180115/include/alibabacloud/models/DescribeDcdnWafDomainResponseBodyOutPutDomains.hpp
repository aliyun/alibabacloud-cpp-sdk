// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINRESPONSEBODYOUTPUTDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINRESPONSEBODYOUTPUTDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDomainResponseBodyOutPutDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDomainResponseBodyOutPutDomains& obj) { 
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(CcStatus, ccStatus_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WafStatus, wafStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDomainResponseBodyOutPutDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(CcStatus, ccStatus_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WafStatus, wafStatus_);
    };
    DescribeDcdnWafDomainResponseBodyOutPutDomains() = default ;
    DescribeDcdnWafDomainResponseBodyOutPutDomains(const DescribeDcdnWafDomainResponseBodyOutPutDomains &) = default ;
    DescribeDcdnWafDomainResponseBodyOutPutDomains(DescribeDcdnWafDomainResponseBodyOutPutDomains &&) = default ;
    DescribeDcdnWafDomainResponseBodyOutPutDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDomainResponseBodyOutPutDomains() = default ;
    DescribeDcdnWafDomainResponseBodyOutPutDomains& operator=(const DescribeDcdnWafDomainResponseBodyOutPutDomains &) = default ;
    DescribeDcdnWafDomainResponseBodyOutPutDomains& operator=(DescribeDcdnWafDomainResponseBodyOutPutDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclStatus_ != nullptr
        && this->ccStatus_ != nullptr && this->domain_ != nullptr && this->status_ != nullptr && this->wafStatus_ != nullptr; };
    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline int32_t aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, 0) };
    inline DescribeDcdnWafDomainResponseBodyOutPutDomains& setAclStatus(int32_t aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // ccStatus Field Functions 
    bool hasCcStatus() const { return this->ccStatus_ != nullptr;};
    void deleteCcStatus() { this->ccStatus_ = nullptr;};
    inline int32_t ccStatus() const { DARABONBA_PTR_GET_DEFAULT(ccStatus_, 0) };
    inline DescribeDcdnWafDomainResponseBodyOutPutDomains& setCcStatus(int32_t ccStatus) { DARABONBA_PTR_SET_VALUE(ccStatus_, ccStatus) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDcdnWafDomainResponseBodyOutPutDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDcdnWafDomainResponseBodyOutPutDomains& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // wafStatus Field Functions 
    bool hasWafStatus() const { return this->wafStatus_ != nullptr;};
    void deleteWafStatus() { this->wafStatus_ = nullptr;};
    inline int32_t wafStatus() const { DARABONBA_PTR_GET_DEFAULT(wafStatus_, 0) };
    inline DescribeDcdnWafDomainResponseBodyOutPutDomains& setWafStatus(int32_t wafStatus) { DARABONBA_PTR_SET_VALUE(wafStatus_, wafStatus) };


  protected:
    // The status of the ACL. Valid values:
    // 
    // *   0: disabled
    // *   1: enabled
    std::shared_ptr<int32_t> aclStatus_ = nullptr;
    // The status of protection against HTTP flood attacks. Valid values:
    // 
    // *   0: disabled
    // *   1: enabled
    std::shared_ptr<int32_t> ccStatus_ = nullptr;
    // The domain name that has WAF enabled.
    std::shared_ptr<string> domain_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   1: The domain name is added to WAF, or the domain name is valid.
    // *   10: The domain name is being added to WAF.
    // *   11: The domain name failed to be added to WAF.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The status of WAF. Valid values:
    // 
    // *   0: disabled
    // *   1: enabled
    std::shared_ptr<int32_t> wafStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
