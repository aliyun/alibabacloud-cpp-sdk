// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainConfigsResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainConfigsResponseBody() = default ;
    DescribeVodDomainConfigsResponseBody(const DescribeVodDomainConfigsResponseBody &) = default ;
    DescribeVodDomainConfigsResponseBody(DescribeVodDomainConfigsResponseBody &&) = default ;
    DescribeVodDomainConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainConfigsResponseBody() = default ;
    DescribeVodDomainConfigsResponseBody& operator=(const DescribeVodDomainConfigsResponseBody &) = default ;
    DescribeVodDomainConfigsResponseBody& operator=(DescribeVodDomainConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigs_ != nullptr
        && this->requestId_ != nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const DescribeVodDomainConfigsResponseBodyDomainConfigs & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, DescribeVodDomainConfigsResponseBodyDomainConfigs) };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigs domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, DescribeVodDomainConfigsResponseBodyDomainConfigs) };
    inline DescribeVodDomainConfigsResponseBody& setDomainConfigs(const DescribeVodDomainConfigsResponseBodyDomainConfigs & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeVodDomainConfigsResponseBody& setDomainConfigs(DescribeVodDomainConfigsResponseBodyDomainConfigs && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the domain name.
    std::shared_ptr<DescribeVodDomainConfigsResponseBodyDomainConfigs> domainConfigs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
