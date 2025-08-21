// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainsBySourceResponseBodyDomainsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainsList, domainsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainsList, domainsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeDomainsBySourceResponseBody() = default ;
    DescribeDomainsBySourceResponseBody(const DescribeDomainsBySourceResponseBody &) = default ;
    DescribeDomainsBySourceResponseBody(DescribeDomainsBySourceResponseBody &&) = default ;
    DescribeDomainsBySourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceResponseBody() = default ;
    DescribeDomainsBySourceResponseBody& operator=(const DescribeDomainsBySourceResponseBody &) = default ;
    DescribeDomainsBySourceResponseBody& operator=(DescribeDomainsBySourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainsList_ != nullptr
        && this->requestId_ != nullptr && this->sources_ != nullptr; };
    // domainsList Field Functions 
    bool hasDomainsList() const { return this->domainsList_ != nullptr;};
    void deleteDomainsList() { this->domainsList_ = nullptr;};
    inline const DescribeDomainsBySourceResponseBodyDomainsList & domainsList() const { DARABONBA_PTR_GET_CONST(domainsList_, DescribeDomainsBySourceResponseBodyDomainsList) };
    inline DescribeDomainsBySourceResponseBodyDomainsList domainsList() { DARABONBA_PTR_GET(domainsList_, DescribeDomainsBySourceResponseBodyDomainsList) };
    inline DescribeDomainsBySourceResponseBody& setDomainsList(const DescribeDomainsBySourceResponseBodyDomainsList & domainsList) { DARABONBA_PTR_SET_VALUE(domainsList_, domainsList) };
    inline DescribeDomainsBySourceResponseBody& setDomainsList(DescribeDomainsBySourceResponseBodyDomainsList && domainsList) { DARABONBA_PTR_SET_RVALUE(domainsList_, domainsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainsBySourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline DescribeDomainsBySourceResponseBody& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


  protected:
    // The domain names corresponding to each origin server.
    std::shared_ptr<DescribeDomainsBySourceResponseBodyDomainsList> domainsList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The origin servers.
    std::shared_ptr<string> sources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
