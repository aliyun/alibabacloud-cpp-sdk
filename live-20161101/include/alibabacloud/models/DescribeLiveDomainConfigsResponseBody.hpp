// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainConfigsResponseBodyDomainConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigs, domainConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainConfigsResponseBody() = default ;
    DescribeLiveDomainConfigsResponseBody(const DescribeLiveDomainConfigsResponseBody &) = default ;
    DescribeLiveDomainConfigsResponseBody(DescribeLiveDomainConfigsResponseBody &&) = default ;
    DescribeLiveDomainConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainConfigsResponseBody() = default ;
    DescribeLiveDomainConfigsResponseBody& operator=(const DescribeLiveDomainConfigsResponseBody &) = default ;
    DescribeLiveDomainConfigsResponseBody& operator=(DescribeLiveDomainConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfigs_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainConfigs Field Functions 
    bool hasDomainConfigs() const { return this->domainConfigs_ != nullptr;};
    void deleteDomainConfigs() { this->domainConfigs_ = nullptr;};
    inline const DescribeLiveDomainConfigsResponseBodyDomainConfigs & domainConfigs() const { DARABONBA_PTR_GET_CONST(domainConfigs_, DescribeLiveDomainConfigsResponseBodyDomainConfigs) };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigs domainConfigs() { DARABONBA_PTR_GET(domainConfigs_, DescribeLiveDomainConfigsResponseBodyDomainConfigs) };
    inline DescribeLiveDomainConfigsResponseBody& setDomainConfigs(const DescribeLiveDomainConfigsResponseBodyDomainConfigs & domainConfigs) { DARABONBA_PTR_SET_VALUE(domainConfigs_, domainConfigs) };
    inline DescribeLiveDomainConfigsResponseBody& setDomainConfigs(DescribeLiveDomainConfigsResponseBodyDomainConfigs && domainConfigs) { DARABONBA_PTR_SET_RVALUE(domainConfigs_, domainConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the domain name.
    std::shared_ptr<DescribeLiveDomainConfigsResponseBodyDomainConfigs> domainConfigs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
