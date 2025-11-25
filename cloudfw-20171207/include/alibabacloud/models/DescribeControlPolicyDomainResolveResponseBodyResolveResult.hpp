// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVERESPONSEBODYRESOLVERESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVERESPONSEBODYRESOLVERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeControlPolicyDomainResolveResponseBodyResolveResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeControlPolicyDomainResolveResponseBodyResolveResult& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(IpAddrList, ipAddrList_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeControlPolicyDomainResolveResponseBodyResolveResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(IpAddrList, ipAddrList_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeControlPolicyDomainResolveResponseBodyResolveResult() = default ;
    DescribeControlPolicyDomainResolveResponseBodyResolveResult(const DescribeControlPolicyDomainResolveResponseBodyResolveResult &) = default ;
    DescribeControlPolicyDomainResolveResponseBodyResolveResult(DescribeControlPolicyDomainResolveResponseBodyResolveResult &&) = default ;
    DescribeControlPolicyDomainResolveResponseBodyResolveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeControlPolicyDomainResolveResponseBodyResolveResult() = default ;
    DescribeControlPolicyDomainResolveResponseBodyResolveResult& operator=(const DescribeControlPolicyDomainResolveResponseBodyResolveResult &) = default ;
    DescribeControlPolicyDomainResolveResponseBodyResolveResult& operator=(DescribeControlPolicyDomainResolveResponseBodyResolveResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->ipAddrList_ == nullptr && return this->ipVersion_ == nullptr && return this->updateTime_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeControlPolicyDomainResolveResponseBodyResolveResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ipAddrList Field Functions 
    bool hasIpAddrList() const { return this->ipAddrList_ != nullptr;};
    void deleteIpAddrList() { this->ipAddrList_ = nullptr;};
    inline const vector<string> & ipAddrList() const { DARABONBA_PTR_GET_CONST(ipAddrList_, vector<string>) };
    inline vector<string> ipAddrList() { DARABONBA_PTR_GET(ipAddrList_, vector<string>) };
    inline DescribeControlPolicyDomainResolveResponseBodyResolveResult& setIpAddrList(const vector<string> & ipAddrList) { DARABONBA_PTR_SET_VALUE(ipAddrList_, ipAddrList) };
    inline DescribeControlPolicyDomainResolveResponseBodyResolveResult& setIpAddrList(vector<string> && ipAddrList) { DARABONBA_PTR_SET_RVALUE(ipAddrList_, ipAddrList) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline DescribeControlPolicyDomainResolveResponseBodyResolveResult& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeControlPolicyDomainResolveResponseBodyResolveResult& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<vector<string>> ipAddrList_ = nullptr;
    std::shared_ptr<int32_t> ipVersion_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
