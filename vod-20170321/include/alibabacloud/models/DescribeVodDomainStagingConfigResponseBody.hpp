// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainStagingConfigResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainStagingConfigResponseBody() = default ;
    DescribeVodDomainStagingConfigResponseBody(const DescribeVodDomainStagingConfigResponseBody &) = default ;
    DescribeVodDomainStagingConfigResponseBody(DescribeVodDomainStagingConfigResponseBody &&) = default ;
    DescribeVodDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainStagingConfigResponseBody() = default ;
    DescribeVodDomainStagingConfigResponseBody& operator=(const DescribeVodDomainStagingConfigResponseBody &) = default ;
    DescribeVodDomainStagingConfigResponseBody& operator=(DescribeVodDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigs_ != nullptr
        && this->domainName_ != nullptr && this->requestId_ != nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const vector<DescribeVodDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, vector<DescribeVodDomainStagingConfigResponseBodyDomainConfigs>) };
    inline vector<DescribeVodDomainStagingConfigResponseBodyDomainConfigs> domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, vector<DescribeVodDomainStagingConfigResponseBodyDomainConfigs>) };
    inline DescribeVodDomainStagingConfigResponseBody& setDomainConfigs(const vector<DescribeVodDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeVodDomainStagingConfigResponseBody& setDomainConfigs(vector<DescribeVodDomainStagingConfigResponseBodyDomainConfigs> && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainStagingConfigResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeVodDomainStagingConfigResponseBodyDomainConfigs>> domainConfigs_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
