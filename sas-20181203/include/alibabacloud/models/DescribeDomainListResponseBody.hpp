// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainListResponseBodyDomainListResponseList.hpp>
#include <alibabacloud/models/DescribeDomainListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainListResponseList, domainListResponseList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainListResponseList, domainListResponseList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainListResponseBody() = default ;
    DescribeDomainListResponseBody(const DescribeDomainListResponseBody &) = default ;
    DescribeDomainListResponseBody(DescribeDomainListResponseBody &&) = default ;
    DescribeDomainListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainListResponseBody() = default ;
    DescribeDomainListResponseBody& operator=(const DescribeDomainListResponseBody &) = default ;
    DescribeDomainListResponseBody& operator=(DescribeDomainListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainListResponseList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // domainListResponseList Field Functions 
    bool hasDomainListResponseList() const { return this->domainListResponseList_ != nullptr;};
    void deleteDomainListResponseList() { this->domainListResponseList_ = nullptr;};
    inline const vector<DescribeDomainListResponseBodyDomainListResponseList> & domainListResponseList() const { DARABONBA_PTR_GET_CONST(domainListResponseList_, vector<DescribeDomainListResponseBodyDomainListResponseList>) };
    inline vector<DescribeDomainListResponseBodyDomainListResponseList> domainListResponseList() { DARABONBA_PTR_GET(domainListResponseList_, vector<DescribeDomainListResponseBodyDomainListResponseList>) };
    inline DescribeDomainListResponseBody& setDomainListResponseList(const vector<DescribeDomainListResponseBodyDomainListResponseList> & domainListResponseList) { DARABONBA_PTR_SET_VALUE(domainListResponseList_, domainListResponseList) };
    inline DescribeDomainListResponseBody& setDomainListResponseList(vector<DescribeDomainListResponseBodyDomainListResponseList> && domainListResponseList) { DARABONBA_PTR_SET_RVALUE(domainListResponseList_, domainListResponseList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeDomainListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeDomainListResponseBodyPageInfo) };
    inline DescribeDomainListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeDomainListResponseBodyPageInfo) };
    inline DescribeDomainListResponseBody& setPageInfo(const DescribeDomainListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeDomainListResponseBody& setPageInfo(DescribeDomainListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about domain names.
    std::shared_ptr<vector<DescribeDomainListResponseBodyDomainListResponseList>> domainListResponseList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeDomainListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
