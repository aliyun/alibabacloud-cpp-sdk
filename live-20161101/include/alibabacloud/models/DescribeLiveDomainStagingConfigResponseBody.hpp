// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainStagingConfigResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainStagingConfigResponseBody() = default ;
    DescribeLiveDomainStagingConfigResponseBody(const DescribeLiveDomainStagingConfigResponseBody &) = default ;
    DescribeLiveDomainStagingConfigResponseBody(DescribeLiveDomainStagingConfigResponseBody &&) = default ;
    DescribeLiveDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStagingConfigResponseBody() = default ;
    DescribeLiveDomainStagingConfigResponseBody& operator=(const DescribeLiveDomainStagingConfigResponseBody &) = default ;
    DescribeLiveDomainStagingConfigResponseBody& operator=(DescribeLiveDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigs_ != nullptr
        && this->requestId_ != nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const vector<DescribeLiveDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, vector<DescribeLiveDomainStagingConfigResponseBodyDomainConfigs>) };
    inline vector<DescribeLiveDomainStagingConfigResponseBodyDomainConfigs> domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, vector<DescribeLiveDomainStagingConfigResponseBodyDomainConfigs>) };
    inline DescribeLiveDomainStagingConfigResponseBody& setDomainConfigs(const vector<DescribeLiveDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeLiveDomainStagingConfigResponseBody& setDomainConfigs(vector<DescribeLiveDomainStagingConfigResponseBodyDomainConfigs> && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The feature configurations of the accelerated domain name.
    std::shared_ptr<vector<DescribeLiveDomainStagingConfigResponseBodyDomainConfigs>> domainConfigs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
