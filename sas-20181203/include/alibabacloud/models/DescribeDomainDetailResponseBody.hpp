// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyDomainDetailItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainDetailItems, domainDetailItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootDomain, rootDomain_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainDetailItems, domainDetailItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootDomain, rootDomain_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody(DescribeDomainDetailResponseBody &&) = default ;
    DescribeDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody& operator=(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody& operator=(DescribeDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && return this->domain_ == nullptr && return this->domainDetailItems_ == nullptr && return this->requestId_ == nullptr && return this->rootDomain_ == nullptr && return this->vulCount_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeDomainDetailResponseBody& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainDetailResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainDetailItems Field Functions 
    bool hasDomainDetailItems() const { return this->domainDetailItems_ != nullptr;};
    void deleteDomainDetailItems() { this->domainDetailItems_ = nullptr;};
    inline const vector<DescribeDomainDetailResponseBodyDomainDetailItems> & domainDetailItems() const { DARABONBA_PTR_GET_CONST(domainDetailItems_, vector<DescribeDomainDetailResponseBodyDomainDetailItems>) };
    inline vector<DescribeDomainDetailResponseBodyDomainDetailItems> domainDetailItems() { DARABONBA_PTR_GET(domainDetailItems_, vector<DescribeDomainDetailResponseBodyDomainDetailItems>) };
    inline DescribeDomainDetailResponseBody& setDomainDetailItems(const vector<DescribeDomainDetailResponseBodyDomainDetailItems> & domainDetailItems) { DARABONBA_PTR_SET_VALUE(domainDetailItems_, domainDetailItems) };
    inline DescribeDomainDetailResponseBody& setDomainDetailItems(vector<DescribeDomainDetailResponseBodyDomainDetailItems> && domainDetailItems) { DARABONBA_PTR_SET_RVALUE(domainDetailItems_, domainDetailItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootDomain Field Functions 
    bool hasRootDomain() const { return this->rootDomain_ != nullptr;};
    void deleteRootDomain() { this->rootDomain_ = nullptr;};
    inline string rootDomain() const { DARABONBA_PTR_GET_DEFAULT(rootDomain_, "") };
    inline DescribeDomainDetailResponseBody& setRootDomain(string rootDomain) { DARABONBA_PTR_SET_VALUE(rootDomain_, rootDomain) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeDomainDetailResponseBody& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The total number of alerts in your website assets.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // An array that consists of the details about the domain asset.
    std::shared_ptr<vector<DescribeDomainDetailResponseBodyDomainDetailItems>> domainDetailItems_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the root domain that corresponds to the domain.
    std::shared_ptr<string> rootDomain_ = nullptr;
    // The total number of vulnerabilities in your website assets.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
