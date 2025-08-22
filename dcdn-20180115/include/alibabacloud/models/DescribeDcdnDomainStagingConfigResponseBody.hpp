// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainStagingConfigResponseBody() = default ;
    DescribeDcdnDomainStagingConfigResponseBody(const DescribeDcdnDomainStagingConfigResponseBody &) = default ;
    DescribeDcdnDomainStagingConfigResponseBody(DescribeDcdnDomainStagingConfigResponseBody &&) = default ;
    DescribeDcdnDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainStagingConfigResponseBody() = default ;
    DescribeDcdnDomainStagingConfigResponseBody& operator=(const DescribeDcdnDomainStagingConfigResponseBody &) = default ;
    DescribeDcdnDomainStagingConfigResponseBody& operator=(DescribeDcdnDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigs_ != nullptr
        && this->requestId_ != nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const vector<DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, vector<DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs>) };
    inline vector<DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs> domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, vector<DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs>) };
    inline DescribeDcdnDomainStagingConfigResponseBody& setDomainConfigs(const vector<DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs> & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeDcdnDomainStagingConfigResponseBody& setDomainConfigs(vector<DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs> && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of accelerated domain names returned.
    std::shared_ptr<vector<DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs>> domainConfigs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
