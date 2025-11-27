// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsDomainDetailResponseBodyDomainConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDomainDetailResponseBody() = default ;
    DescribeVsDomainDetailResponseBody(const DescribeVsDomainDetailResponseBody &) = default ;
    DescribeVsDomainDetailResponseBody(DescribeVsDomainDetailResponseBody &&) = default ;
    DescribeVsDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainDetailResponseBody() = default ;
    DescribeVsDomainDetailResponseBody& operator=(const DescribeVsDomainDetailResponseBody &) = default ;
    DescribeVsDomainDetailResponseBody& operator=(DescribeVsDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const DescribeVsDomainDetailResponseBodyDomainConfig & domainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, DescribeVsDomainDetailResponseBodyDomainConfig) };
    inline DescribeVsDomainDetailResponseBodyDomainConfig domainConfig() { DARABONBA_PTR_GET(domainConfig_, DescribeVsDomainDetailResponseBodyDomainConfig) };
    inline DescribeVsDomainDetailResponseBody& setDomainConfig(const DescribeVsDomainDetailResponseBodyDomainConfig & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline DescribeVsDomainDetailResponseBody& setDomainConfig(DescribeVsDomainDetailResponseBodyDomainConfig && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVsDomainDetailResponseBodyDomainConfig> domainConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
