// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVERESPONSEBODY_HPP_
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
  class DescribeControlPolicyDomainResolveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeControlPolicyDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResolveResult, resolveResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeControlPolicyDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResolveResult, resolveResult_);
    };
    DescribeControlPolicyDomainResolveResponseBody() = default ;
    DescribeControlPolicyDomainResolveResponseBody(const DescribeControlPolicyDomainResolveResponseBody &) = default ;
    DescribeControlPolicyDomainResolveResponseBody(DescribeControlPolicyDomainResolveResponseBody &&) = default ;
    DescribeControlPolicyDomainResolveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeControlPolicyDomainResolveResponseBody() = default ;
    DescribeControlPolicyDomainResolveResponseBody& operator=(const DescribeControlPolicyDomainResolveResponseBody &) = default ;
    DescribeControlPolicyDomainResolveResponseBody& operator=(DescribeControlPolicyDomainResolveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResolveResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResolveResult& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(IpAddrList, ipAddrList_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResolveResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(IpAddrList, ipAddrList_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ResolveResult() = default ;
      ResolveResult(const ResolveResult &) = default ;
      ResolveResult(ResolveResult &&) = default ;
      ResolveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResolveResult() = default ;
      ResolveResult& operator=(const ResolveResult &) = default ;
      ResolveResult& operator=(ResolveResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->ipAddrList_ == nullptr && this->ipVersion_ == nullptr && this->updateTime_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline ResolveResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // ipAddrList Field Functions 
      bool hasIpAddrList() const { return this->ipAddrList_ != nullptr;};
      void deleteIpAddrList() { this->ipAddrList_ = nullptr;};
      inline const vector<string> & getIpAddrList() const { DARABONBA_PTR_GET_CONST(ipAddrList_, vector<string>) };
      inline vector<string> getIpAddrList() { DARABONBA_PTR_GET(ipAddrList_, vector<string>) };
      inline ResolveResult& setIpAddrList(const vector<string> & ipAddrList) { DARABONBA_PTR_SET_VALUE(ipAddrList_, ipAddrList) };
      inline ResolveResult& setIpAddrList(vector<string> && ipAddrList) { DARABONBA_PTR_SET_RVALUE(ipAddrList_, ipAddrList) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline int32_t getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
      inline ResolveResult& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ResolveResult& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<vector<string>> ipAddrList_ {};
      shared_ptr<int32_t> ipVersion_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resolveResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeControlPolicyDomainResolveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resolveResult Field Functions 
    bool hasResolveResult() const { return this->resolveResult_ != nullptr;};
    void deleteResolveResult() { this->resolveResult_ = nullptr;};
    inline const vector<DescribeControlPolicyDomainResolveResponseBody::ResolveResult> & getResolveResult() const { DARABONBA_PTR_GET_CONST(resolveResult_, vector<DescribeControlPolicyDomainResolveResponseBody::ResolveResult>) };
    inline vector<DescribeControlPolicyDomainResolveResponseBody::ResolveResult> getResolveResult() { DARABONBA_PTR_GET(resolveResult_, vector<DescribeControlPolicyDomainResolveResponseBody::ResolveResult>) };
    inline DescribeControlPolicyDomainResolveResponseBody& setResolveResult(const vector<DescribeControlPolicyDomainResolveResponseBody::ResolveResult> & resolveResult) { DARABONBA_PTR_SET_VALUE(resolveResult_, resolveResult) };
    inline DescribeControlPolicyDomainResolveResponseBody& setResolveResult(vector<DescribeControlPolicyDomainResolveResponseBody::ResolveResult> && resolveResult) { DARABONBA_PTR_SET_RVALUE(resolveResult_, resolveResult) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeControlPolicyDomainResolveResponseBody::ResolveResult>> resolveResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
