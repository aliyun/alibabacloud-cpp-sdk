// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPUSERAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPUSERAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopUserAgentResponseBodyDomainTopUa.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopUserAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUserAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTopUa, domainTopUa_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUserAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTopUa, domainTopUa_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopUserAgentResponseBody() = default ;
    DescribeDomainTopUserAgentResponseBody(const DescribeDomainTopUserAgentResponseBody &) = default ;
    DescribeDomainTopUserAgentResponseBody(DescribeDomainTopUserAgentResponseBody &&) = default ;
    DescribeDomainTopUserAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUserAgentResponseBody() = default ;
    DescribeDomainTopUserAgentResponseBody& operator=(const DescribeDomainTopUserAgentResponseBody &) = default ;
    DescribeDomainTopUserAgentResponseBody& operator=(DescribeDomainTopUserAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainTopUa_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainTopUa Field Functions 
    bool hasDomainTopUa() const { return this->domainTopUa_ != nullptr;};
    void deleteDomainTopUa() { this->domainTopUa_ = nullptr;};
    inline const vector<DescribeDomainTopUserAgentResponseBodyDomainTopUa> & domainTopUa() const { DARABONBA_PTR_GET_CONST(domainTopUa_, vector<DescribeDomainTopUserAgentResponseBodyDomainTopUa>) };
    inline vector<DescribeDomainTopUserAgentResponseBodyDomainTopUa> domainTopUa() { DARABONBA_PTR_GET(domainTopUa_, vector<DescribeDomainTopUserAgentResponseBodyDomainTopUa>) };
    inline DescribeDomainTopUserAgentResponseBody& setDomainTopUa(const vector<DescribeDomainTopUserAgentResponseBodyDomainTopUa> & domainTopUa) { DARABONBA_PTR_SET_VALUE(domainTopUa_, domainTopUa) };
    inline DescribeDomainTopUserAgentResponseBody& setDomainTopUa(vector<DescribeDomainTopUserAgentResponseBodyDomainTopUa> && domainTopUa) { DARABONBA_PTR_SET_RVALUE(domainTopUa_, domainTopUa) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopUserAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the user agents.
    std::shared_ptr<vector<DescribeDomainTopUserAgentResponseBodyDomainTopUa>> domainTopUa_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
