// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainConfigsResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainConfigsResponseBody() = default ;
    DescribeDcdnDomainConfigsResponseBody(const DescribeDcdnDomainConfigsResponseBody &) = default ;
    DescribeDcdnDomainConfigsResponseBody(DescribeDcdnDomainConfigsResponseBody &&) = default ;
    DescribeDcdnDomainConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainConfigsResponseBody() = default ;
    DescribeDcdnDomainConfigsResponseBody& operator=(const DescribeDcdnDomainConfigsResponseBody &) = default ;
    DescribeDcdnDomainConfigsResponseBody& operator=(DescribeDcdnDomainConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigs_ != nullptr
        && this->requestId_ != nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const DescribeDcdnDomainConfigsResponseBodyDomainConfigs & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, DescribeDcdnDomainConfigsResponseBodyDomainConfigs) };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigs domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, DescribeDcdnDomainConfigsResponseBodyDomainConfigs) };
    inline DescribeDcdnDomainConfigsResponseBody& setDomainConfigs(const DescribeDcdnDomainConfigsResponseBodyDomainConfigs & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeDcdnDomainConfigsResponseBody& setDomainConfigs(DescribeDcdnDomainConfigsResponseBodyDomainConfigs && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the domain name.
    std::shared_ptr<DescribeDcdnDomainConfigsResponseBodyDomainConfigs> domainConfigs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
