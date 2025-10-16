// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVERESPONSEBODYRESOLVERESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVERESPONSEBODYRESOLVERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDomainResolveResponseBodyResolveResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResolveResponseBodyResolveResult& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddrs, ipAddrs_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResolveResponseBodyResolveResult& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddrs, ipAddrs_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDomainResolveResponseBodyResolveResult() = default ;
    DescribeDomainResolveResponseBodyResolveResult(const DescribeDomainResolveResponseBodyResolveResult &) = default ;
    DescribeDomainResolveResponseBodyResolveResult(DescribeDomainResolveResponseBodyResolveResult &&) = default ;
    DescribeDomainResolveResponseBodyResolveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResolveResponseBodyResolveResult() = default ;
    DescribeDomainResolveResponseBodyResolveResult& operator=(const DescribeDomainResolveResponseBodyResolveResult &) = default ;
    DescribeDomainResolveResponseBodyResolveResult& operator=(DescribeDomainResolveResponseBodyResolveResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipAddrs_ == nullptr
        && return this->updateTime_ == nullptr; };
    // ipAddrs Field Functions 
    bool hasIpAddrs() const { return this->ipAddrs_ != nullptr;};
    void deleteIpAddrs() { this->ipAddrs_ = nullptr;};
    inline string ipAddrs() const { DARABONBA_PTR_GET_DEFAULT(ipAddrs_, "") };
    inline DescribeDomainResolveResponseBodyResolveResult& setIpAddrs(string ipAddrs) { DARABONBA_PTR_SET_VALUE(ipAddrs_, ipAddrs) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeDomainResolveResponseBodyResolveResult& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The IP address to which the domain name is resolved. Multiple IP addresses are separated by commas (,).
    std::shared_ptr<string> ipAddrs_ = nullptr;
    // The time when the domain name was resolved. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
