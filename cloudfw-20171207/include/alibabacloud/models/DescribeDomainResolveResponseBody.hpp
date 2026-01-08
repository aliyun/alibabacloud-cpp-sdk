// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDomainResolveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResolveResult, resolveResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResolveResult, resolveResult_);
    };
    DescribeDomainResolveResponseBody() = default ;
    DescribeDomainResolveResponseBody(const DescribeDomainResolveResponseBody &) = default ;
    DescribeDomainResolveResponseBody(DescribeDomainResolveResponseBody &&) = default ;
    DescribeDomainResolveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResolveResponseBody() = default ;
    DescribeDomainResolveResponseBody& operator=(const DescribeDomainResolveResponseBody &) = default ;
    DescribeDomainResolveResponseBody& operator=(DescribeDomainResolveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResolveResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResolveResult& obj) { 
        DARABONBA_PTR_TO_JSON(IpAddrs, ipAddrs_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResolveResult& obj) { 
        DARABONBA_PTR_FROM_JSON(IpAddrs, ipAddrs_);
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
      virtual bool empty() const override { return this->ipAddrs_ == nullptr
        && this->updateTime_ == nullptr; };
      // ipAddrs Field Functions 
      bool hasIpAddrs() const { return this->ipAddrs_ != nullptr;};
      void deleteIpAddrs() { this->ipAddrs_ = nullptr;};
      inline string getIpAddrs() const { DARABONBA_PTR_GET_DEFAULT(ipAddrs_, "") };
      inline ResolveResult& setIpAddrs(string ipAddrs) { DARABONBA_PTR_SET_VALUE(ipAddrs_, ipAddrs) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ResolveResult& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The IP address to which the domain name is resolved. Multiple IP addresses are separated by commas (,).
      shared_ptr<string> ipAddrs_ {};
      // The time when the domain name was resolved. The value of this parameter is a timestamp. Unit: seconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resolveResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainResolveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resolveResult Field Functions 
    bool hasResolveResult() const { return this->resolveResult_ != nullptr;};
    void deleteResolveResult() { this->resolveResult_ = nullptr;};
    inline const DescribeDomainResolveResponseBody::ResolveResult & getResolveResult() const { DARABONBA_PTR_GET_CONST(resolveResult_, DescribeDomainResolveResponseBody::ResolveResult) };
    inline DescribeDomainResolveResponseBody::ResolveResult getResolveResult() { DARABONBA_PTR_GET(resolveResult_, DescribeDomainResolveResponseBody::ResolveResult) };
    inline DescribeDomainResolveResponseBody& setResolveResult(const DescribeDomainResolveResponseBody::ResolveResult & resolveResult) { DARABONBA_PTR_SET_VALUE(resolveResult_, resolveResult) };
    inline DescribeDomainResolveResponseBody& setResolveResult(DescribeDomainResolveResponseBody::ResolveResult && resolveResult) { DARABONBA_PTR_SET_RVALUE(resolveResult_, resolveResult) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details about the DNS record of the domain name.
    shared_ptr<DescribeDomainResolveResponseBody::ResolveResult> resolveResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
