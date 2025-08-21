// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainQPSListResponseBodyDomainQPSList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainQPSListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQPSListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainQPSList, domainQPSList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQPSListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainQPSList, domainQPSList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainQPSListResponseBody() = default ;
    DescribeDomainQPSListResponseBody(const DescribeDomainQPSListResponseBody &) = default ;
    DescribeDomainQPSListResponseBody(DescribeDomainQPSListResponseBody &&) = default ;
    DescribeDomainQPSListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQPSListResponseBody() = default ;
    DescribeDomainQPSListResponseBody& operator=(const DescribeDomainQPSListResponseBody &) = default ;
    DescribeDomainQPSListResponseBody& operator=(DescribeDomainQPSListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainQPSList_ != nullptr
        && this->requestId_ != nullptr; };
    // domainQPSList Field Functions 
    bool hasDomainQPSList() const { return this->domainQPSList_ != nullptr;};
    void deleteDomainQPSList() { this->domainQPSList_ = nullptr;};
    inline const vector<DescribeDomainQPSListResponseBodyDomainQPSList> & domainQPSList() const { DARABONBA_PTR_GET_CONST(domainQPSList_, vector<DescribeDomainQPSListResponseBodyDomainQPSList>) };
    inline vector<DescribeDomainQPSListResponseBodyDomainQPSList> domainQPSList() { DARABONBA_PTR_GET(domainQPSList_, vector<DescribeDomainQPSListResponseBodyDomainQPSList>) };
    inline DescribeDomainQPSListResponseBody& setDomainQPSList(const vector<DescribeDomainQPSListResponseBodyDomainQPSList> & domainQPSList) { DARABONBA_PTR_SET_VALUE(domainQPSList_, domainQPSList) };
    inline DescribeDomainQPSListResponseBody& setDomainQPSList(vector<DescribeDomainQPSListResponseBodyDomainQPSList> && domainQPSList) { DARABONBA_PTR_SET_RVALUE(domainQPSList_, domainQPSList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainQPSListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the statistics on the QPS of the website.
    std::shared_ptr<vector<DescribeDomainQPSListResponseBodyDomainQPSList>> domainQPSList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
