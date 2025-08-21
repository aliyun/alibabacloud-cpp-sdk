// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPHTTPMETHODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPHTTPMETHODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopHttpMethodResponseBodyDomainTopMethod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopHttpMethodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopHttpMethodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTopMethod, domainTopMethod_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopHttpMethodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTopMethod, domainTopMethod_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopHttpMethodResponseBody() = default ;
    DescribeDomainTopHttpMethodResponseBody(const DescribeDomainTopHttpMethodResponseBody &) = default ;
    DescribeDomainTopHttpMethodResponseBody(DescribeDomainTopHttpMethodResponseBody &&) = default ;
    DescribeDomainTopHttpMethodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopHttpMethodResponseBody() = default ;
    DescribeDomainTopHttpMethodResponseBody& operator=(const DescribeDomainTopHttpMethodResponseBody &) = default ;
    DescribeDomainTopHttpMethodResponseBody& operator=(DescribeDomainTopHttpMethodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainTopMethod_ != nullptr
        && this->requestId_ != nullptr; };
    // domainTopMethod Field Functions 
    bool hasDomainTopMethod() const { return this->domainTopMethod_ != nullptr;};
    void deleteDomainTopMethod() { this->domainTopMethod_ = nullptr;};
    inline const vector<DescribeDomainTopHttpMethodResponseBodyDomainTopMethod> & domainTopMethod() const { DARABONBA_PTR_GET_CONST(domainTopMethod_, vector<DescribeDomainTopHttpMethodResponseBodyDomainTopMethod>) };
    inline vector<DescribeDomainTopHttpMethodResponseBodyDomainTopMethod> domainTopMethod() { DARABONBA_PTR_GET(domainTopMethod_, vector<DescribeDomainTopHttpMethodResponseBodyDomainTopMethod>) };
    inline DescribeDomainTopHttpMethodResponseBody& setDomainTopMethod(const vector<DescribeDomainTopHttpMethodResponseBodyDomainTopMethod> & domainTopMethod) { DARABONBA_PTR_SET_VALUE(domainTopMethod_, domainTopMethod) };
    inline DescribeDomainTopHttpMethodResponseBody& setDomainTopMethod(vector<DescribeDomainTopHttpMethodResponseBodyDomainTopMethod> && domainTopMethod) { DARABONBA_PTR_SET_RVALUE(domainTopMethod_, domainTopMethod) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopHttpMethodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about top HTTP methods.
    std::shared_ptr<vector<DescribeDomainTopHttpMethodResponseBodyDomainTopMethod>> domainTopMethod_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
