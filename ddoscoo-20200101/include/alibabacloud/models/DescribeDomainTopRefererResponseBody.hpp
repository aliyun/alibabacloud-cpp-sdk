// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopRefererResponseBodyDomainTopReferer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopRefererResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopRefererResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTopReferer, domainTopReferer_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopRefererResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTopReferer, domainTopReferer_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopRefererResponseBody() = default ;
    DescribeDomainTopRefererResponseBody(const DescribeDomainTopRefererResponseBody &) = default ;
    DescribeDomainTopRefererResponseBody(DescribeDomainTopRefererResponseBody &&) = default ;
    DescribeDomainTopRefererResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopRefererResponseBody() = default ;
    DescribeDomainTopRefererResponseBody& operator=(const DescribeDomainTopRefererResponseBody &) = default ;
    DescribeDomainTopRefererResponseBody& operator=(DescribeDomainTopRefererResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainTopReferer_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainTopReferer Field Functions 
    bool hasDomainTopReferer() const { return this->domainTopReferer_ != nullptr;};
    void deleteDomainTopReferer() { this->domainTopReferer_ = nullptr;};
    inline const vector<DescribeDomainTopRefererResponseBodyDomainTopReferer> & domainTopReferer() const { DARABONBA_PTR_GET_CONST(domainTopReferer_, vector<DescribeDomainTopRefererResponseBodyDomainTopReferer>) };
    inline vector<DescribeDomainTopRefererResponseBodyDomainTopReferer> domainTopReferer() { DARABONBA_PTR_GET(domainTopReferer_, vector<DescribeDomainTopRefererResponseBodyDomainTopReferer>) };
    inline DescribeDomainTopRefererResponseBody& setDomainTopReferer(const vector<DescribeDomainTopRefererResponseBodyDomainTopReferer> & domainTopReferer) { DARABONBA_PTR_SET_VALUE(domainTopReferer_, domainTopReferer) };
    inline DescribeDomainTopRefererResponseBody& setDomainTopReferer(vector<DescribeDomainTopRefererResponseBodyDomainTopReferer> && domainTopReferer) { DARABONBA_PTR_SET_RVALUE(domainTopReferer_, domainTopReferer) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopRefererResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about top referers.
    std::shared_ptr<vector<DescribeDomainTopRefererResponseBodyDomainTopReferer>> domainTopReferer_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
