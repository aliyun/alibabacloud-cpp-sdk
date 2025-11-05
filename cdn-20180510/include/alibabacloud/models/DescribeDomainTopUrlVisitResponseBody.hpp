// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyAllUrlList.hpp>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl200List.hpp>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl300List.hpp>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl400List.hpp>
#include <alibabacloud/models/DescribeDomainTopUrlVisitResponseBodyUrl500List.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopUrlVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUrlVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllUrlList, allUrlList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Url200List, url200List_);
      DARABONBA_PTR_TO_JSON(Url300List, url300List_);
      DARABONBA_PTR_TO_JSON(Url400List, url400List_);
      DARABONBA_PTR_TO_JSON(Url500List, url500List_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUrlVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllUrlList, allUrlList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Url200List, url200List_);
      DARABONBA_PTR_FROM_JSON(Url300List, url300List_);
      DARABONBA_PTR_FROM_JSON(Url400List, url400List_);
      DARABONBA_PTR_FROM_JSON(Url500List, url500List_);
    };
    DescribeDomainTopUrlVisitResponseBody() = default ;
    DescribeDomainTopUrlVisitResponseBody(const DescribeDomainTopUrlVisitResponseBody &) = default ;
    DescribeDomainTopUrlVisitResponseBody(DescribeDomainTopUrlVisitResponseBody &&) = default ;
    DescribeDomainTopUrlVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUrlVisitResponseBody() = default ;
    DescribeDomainTopUrlVisitResponseBody& operator=(const DescribeDomainTopUrlVisitResponseBody &) = default ;
    DescribeDomainTopUrlVisitResponseBody& operator=(DescribeDomainTopUrlVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allUrlList_ == nullptr
        && return this->domainName_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr && return this->url200List_ == nullptr && return this->url300List_ == nullptr
        && return this->url400List_ == nullptr && return this->url500List_ == nullptr; };
    // allUrlList Field Functions 
    bool hasAllUrlList() const { return this->allUrlList_ != nullptr;};
    void deleteAllUrlList() { this->allUrlList_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBodyAllUrlList & allUrlList() const { DARABONBA_PTR_GET_CONST(allUrlList_, DescribeDomainTopUrlVisitResponseBodyAllUrlList) };
    inline DescribeDomainTopUrlVisitResponseBodyAllUrlList allUrlList() { DARABONBA_PTR_GET(allUrlList_, DescribeDomainTopUrlVisitResponseBodyAllUrlList) };
    inline DescribeDomainTopUrlVisitResponseBody& setAllUrlList(const DescribeDomainTopUrlVisitResponseBodyAllUrlList & allUrlList) { DARABONBA_PTR_SET_VALUE(allUrlList_, allUrlList) };
    inline DescribeDomainTopUrlVisitResponseBody& setAllUrlList(DescribeDomainTopUrlVisitResponseBodyAllUrlList && allUrlList) { DARABONBA_PTR_SET_RVALUE(allUrlList_, allUrlList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainTopUrlVisitResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopUrlVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainTopUrlVisitResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // url200List Field Functions 
    bool hasUrl200List() const { return this->url200List_ != nullptr;};
    void deleteUrl200List() { this->url200List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBodyUrl200List & url200List() const { DARABONBA_PTR_GET_CONST(url200List_, DescribeDomainTopUrlVisitResponseBodyUrl200List) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl200List url200List() { DARABONBA_PTR_GET(url200List_, DescribeDomainTopUrlVisitResponseBodyUrl200List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl200List(const DescribeDomainTopUrlVisitResponseBodyUrl200List & url200List) { DARABONBA_PTR_SET_VALUE(url200List_, url200List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl200List(DescribeDomainTopUrlVisitResponseBodyUrl200List && url200List) { DARABONBA_PTR_SET_RVALUE(url200List_, url200List) };


    // url300List Field Functions 
    bool hasUrl300List() const { return this->url300List_ != nullptr;};
    void deleteUrl300List() { this->url300List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBodyUrl300List & url300List() const { DARABONBA_PTR_GET_CONST(url300List_, DescribeDomainTopUrlVisitResponseBodyUrl300List) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl300List url300List() { DARABONBA_PTR_GET(url300List_, DescribeDomainTopUrlVisitResponseBodyUrl300List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl300List(const DescribeDomainTopUrlVisitResponseBodyUrl300List & url300List) { DARABONBA_PTR_SET_VALUE(url300List_, url300List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl300List(DescribeDomainTopUrlVisitResponseBodyUrl300List && url300List) { DARABONBA_PTR_SET_RVALUE(url300List_, url300List) };


    // url400List Field Functions 
    bool hasUrl400List() const { return this->url400List_ != nullptr;};
    void deleteUrl400List() { this->url400List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBodyUrl400List & url400List() const { DARABONBA_PTR_GET_CONST(url400List_, DescribeDomainTopUrlVisitResponseBodyUrl400List) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl400List url400List() { DARABONBA_PTR_GET(url400List_, DescribeDomainTopUrlVisitResponseBodyUrl400List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl400List(const DescribeDomainTopUrlVisitResponseBodyUrl400List & url400List) { DARABONBA_PTR_SET_VALUE(url400List_, url400List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl400List(DescribeDomainTopUrlVisitResponseBodyUrl400List && url400List) { DARABONBA_PTR_SET_RVALUE(url400List_, url400List) };


    // url500List Field Functions 
    bool hasUrl500List() const { return this->url500List_ != nullptr;};
    void deleteUrl500List() { this->url500List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBodyUrl500List & url500List() const { DARABONBA_PTR_GET_CONST(url500List_, DescribeDomainTopUrlVisitResponseBodyUrl500List) };
    inline DescribeDomainTopUrlVisitResponseBodyUrl500List url500List() { DARABONBA_PTR_GET(url500List_, DescribeDomainTopUrlVisitResponseBodyUrl500List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl500List(const DescribeDomainTopUrlVisitResponseBodyUrl500List & url500List) { DARABONBA_PTR_SET_VALUE(url500List_, url500List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl500List(DescribeDomainTopUrlVisitResponseBodyUrl500List && url500List) { DARABONBA_PTR_SET_RVALUE(url500List_, url500List) };


  protected:
    // A list of frequently requested URLs.
    std::shared_ptr<DescribeDomainTopUrlVisitResponseBodyAllUrlList> allUrlList_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // A list of URLs for which 2xx status codes were returned.
    std::shared_ptr<DescribeDomainTopUrlVisitResponseBodyUrl200List> url200List_ = nullptr;
    // A list of URLs for which 3xx status codes were returned.
    std::shared_ptr<DescribeDomainTopUrlVisitResponseBodyUrl300List> url300List_ = nullptr;
    // A list of URLs for which 4xx status codes were returned.
    std::shared_ptr<DescribeDomainTopUrlVisitResponseBodyUrl400List> url400List_ = nullptr;
    // A list of URLs for which 5xx status codes were returned.
    std::shared_ptr<DescribeDomainTopUrlVisitResponseBodyUrl500List> url500List_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
