// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCACHECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebCacheConfigsResponseBodyDomainCacheConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCacheConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCacheConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCacheConfigs, domainCacheConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCacheConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCacheConfigs, domainCacheConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebCacheConfigsResponseBody() = default ;
    DescribeWebCacheConfigsResponseBody(const DescribeWebCacheConfigsResponseBody &) = default ;
    DescribeWebCacheConfigsResponseBody(DescribeWebCacheConfigsResponseBody &&) = default ;
    DescribeWebCacheConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCacheConfigsResponseBody() = default ;
    DescribeWebCacheConfigsResponseBody& operator=(const DescribeWebCacheConfigsResponseBody &) = default ;
    DescribeWebCacheConfigsResponseBody& operator=(DescribeWebCacheConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainCacheConfigs_ != nullptr
        && this->requestId_ != nullptr; };
    // domainCacheConfigs Field Functions 
    bool hasDomainCacheConfigs() const { return this->domainCacheConfigs_ != nullptr;};
    void deleteDomainCacheConfigs() { this->domainCacheConfigs_ = nullptr;};
    inline const vector<DescribeWebCacheConfigsResponseBodyDomainCacheConfigs> & domainCacheConfigs() const { DARABONBA_PTR_GET_CONST(domainCacheConfigs_, vector<DescribeWebCacheConfigsResponseBodyDomainCacheConfigs>) };
    inline vector<DescribeWebCacheConfigsResponseBodyDomainCacheConfigs> domainCacheConfigs() { DARABONBA_PTR_GET(domainCacheConfigs_, vector<DescribeWebCacheConfigsResponseBodyDomainCacheConfigs>) };
    inline DescribeWebCacheConfigsResponseBody& setDomainCacheConfigs(const vector<DescribeWebCacheConfigsResponseBodyDomainCacheConfigs> & domainCacheConfigs) { DARABONBA_PTR_SET_VALUE(domainCacheConfigs_, domainCacheConfigs) };
    inline DescribeWebCacheConfigsResponseBody& setDomainCacheConfigs(vector<DescribeWebCacheConfigsResponseBodyDomainCacheConfigs> && domainCacheConfigs) { DARABONBA_PTR_SET_RVALUE(domainCacheConfigs_, domainCacheConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCacheConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of Static Page Caching configurations.
    std::shared_ptr<vector<DescribeWebCacheConfigsResponseBodyDomainCacheConfigs>> domainCacheConfigs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
