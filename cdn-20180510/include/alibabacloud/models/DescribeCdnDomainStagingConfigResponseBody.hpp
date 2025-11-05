// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainStagingConfigResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDomainStagingConfigResponseBody() = default ;
    DescribeCdnDomainStagingConfigResponseBody(const DescribeCdnDomainStagingConfigResponseBody &) = default ;
    DescribeCdnDomainStagingConfigResponseBody(DescribeCdnDomainStagingConfigResponseBody &&) = default ;
    DescribeCdnDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainStagingConfigResponseBody() = default ;
    DescribeCdnDomainStagingConfigResponseBody& operator=(const DescribeCdnDomainStagingConfigResponseBody &) = default ;
    DescribeCdnDomainStagingConfigResponseBody& operator=(DescribeCdnDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfigs_ == nullptr
        && return this->domainName_ == nullptr && return this->requestId_ == nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const vector<DescribeCdnDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, vector<DescribeCdnDomainStagingConfigResponseBodyDomainConfigs>) };
    inline vector<DescribeCdnDomainStagingConfigResponseBodyDomainConfigs> domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, vector<DescribeCdnDomainStagingConfigResponseBodyDomainConfigs>) };
    inline DescribeCdnDomainStagingConfigResponseBody& setDomainConfigs(const vector<DescribeCdnDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeCdnDomainStagingConfigResponseBody& setDomainConfigs(vector<DescribeCdnDomainStagingConfigResponseBodyDomainConfigs> && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnDomainStagingConfigResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain name configurations.
    std::shared_ptr<vector<DescribeCdnDomainStagingConfigResponseBodyDomainConfigs>> domainConfigs_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
