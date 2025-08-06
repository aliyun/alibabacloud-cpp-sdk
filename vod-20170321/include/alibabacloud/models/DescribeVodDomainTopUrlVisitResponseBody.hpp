// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPURLVISITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyAllUrlList.hpp>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyUrl200List.hpp>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyUrl300List.hpp>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyUrl400List.hpp>
#include <alibabacloud/models/DescribeVodDomainTopUrlVisitResponseBodyUrl500List.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTopUrlVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTopUrlVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllUrlList, allUrlList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Url200List, url200List_);
      DARABONBA_PTR_TO_JSON(Url300List, url300List_);
      DARABONBA_PTR_TO_JSON(Url400List, url400List_);
      DARABONBA_PTR_TO_JSON(Url500List, url500List_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTopUrlVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllUrlList, allUrlList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Url200List, url200List_);
      DARABONBA_PTR_FROM_JSON(Url300List, url300List_);
      DARABONBA_PTR_FROM_JSON(Url400List, url400List_);
      DARABONBA_PTR_FROM_JSON(Url500List, url500List_);
    };
    DescribeVodDomainTopUrlVisitResponseBody() = default ;
    DescribeVodDomainTopUrlVisitResponseBody(const DescribeVodDomainTopUrlVisitResponseBody &) = default ;
    DescribeVodDomainTopUrlVisitResponseBody(DescribeVodDomainTopUrlVisitResponseBody &&) = default ;
    DescribeVodDomainTopUrlVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTopUrlVisitResponseBody() = default ;
    DescribeVodDomainTopUrlVisitResponseBody& operator=(const DescribeVodDomainTopUrlVisitResponseBody &) = default ;
    DescribeVodDomainTopUrlVisitResponseBody& operator=(DescribeVodDomainTopUrlVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allUrlList_ != nullptr
        && this->domainName_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->url200List_ != nullptr && this->url300List_ != nullptr
        && this->url400List_ != nullptr && this->url500List_ != nullptr; };
    // allUrlList Field Functions 
    bool hasAllUrlList() const { return this->allUrlList_ != nullptr;};
    void deleteAllUrlList() { this->allUrlList_ = nullptr;};
    inline const DescribeVodDomainTopUrlVisitResponseBodyAllUrlList & allUrlList() const { DARABONBA_PTR_GET_CONST(allUrlList_, DescribeVodDomainTopUrlVisitResponseBodyAllUrlList) };
    inline DescribeVodDomainTopUrlVisitResponseBodyAllUrlList allUrlList() { DARABONBA_PTR_GET(allUrlList_, DescribeVodDomainTopUrlVisitResponseBodyAllUrlList) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setAllUrlList(const DescribeVodDomainTopUrlVisitResponseBodyAllUrlList & allUrlList) { DARABONBA_PTR_SET_VALUE(allUrlList_, allUrlList) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setAllUrlList(DescribeVodDomainTopUrlVisitResponseBodyAllUrlList && allUrlList) { DARABONBA_PTR_SET_RVALUE(allUrlList_, allUrlList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainTopUrlVisitResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainTopUrlVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainTopUrlVisitResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // url200List Field Functions 
    bool hasUrl200List() const { return this->url200List_ != nullptr;};
    void deleteUrl200List() { this->url200List_ = nullptr;};
    inline const DescribeVodDomainTopUrlVisitResponseBodyUrl200List & url200List() const { DARABONBA_PTR_GET_CONST(url200List_, DescribeVodDomainTopUrlVisitResponseBodyUrl200List) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl200List url200List() { DARABONBA_PTR_GET(url200List_, DescribeVodDomainTopUrlVisitResponseBodyUrl200List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl200List(const DescribeVodDomainTopUrlVisitResponseBodyUrl200List & url200List) { DARABONBA_PTR_SET_VALUE(url200List_, url200List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl200List(DescribeVodDomainTopUrlVisitResponseBodyUrl200List && url200List) { DARABONBA_PTR_SET_RVALUE(url200List_, url200List) };


    // url300List Field Functions 
    bool hasUrl300List() const { return this->url300List_ != nullptr;};
    void deleteUrl300List() { this->url300List_ = nullptr;};
    inline const DescribeVodDomainTopUrlVisitResponseBodyUrl300List & url300List() const { DARABONBA_PTR_GET_CONST(url300List_, DescribeVodDomainTopUrlVisitResponseBodyUrl300List) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl300List url300List() { DARABONBA_PTR_GET(url300List_, DescribeVodDomainTopUrlVisitResponseBodyUrl300List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl300List(const DescribeVodDomainTopUrlVisitResponseBodyUrl300List & url300List) { DARABONBA_PTR_SET_VALUE(url300List_, url300List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl300List(DescribeVodDomainTopUrlVisitResponseBodyUrl300List && url300List) { DARABONBA_PTR_SET_RVALUE(url300List_, url300List) };


    // url400List Field Functions 
    bool hasUrl400List() const { return this->url400List_ != nullptr;};
    void deleteUrl400List() { this->url400List_ = nullptr;};
    inline const DescribeVodDomainTopUrlVisitResponseBodyUrl400List & url400List() const { DARABONBA_PTR_GET_CONST(url400List_, DescribeVodDomainTopUrlVisitResponseBodyUrl400List) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl400List url400List() { DARABONBA_PTR_GET(url400List_, DescribeVodDomainTopUrlVisitResponseBodyUrl400List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl400List(const DescribeVodDomainTopUrlVisitResponseBodyUrl400List & url400List) { DARABONBA_PTR_SET_VALUE(url400List_, url400List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl400List(DescribeVodDomainTopUrlVisitResponseBodyUrl400List && url400List) { DARABONBA_PTR_SET_RVALUE(url400List_, url400List) };


    // url500List Field Functions 
    bool hasUrl500List() const { return this->url500List_ != nullptr;};
    void deleteUrl500List() { this->url500List_ = nullptr;};
    inline const DescribeVodDomainTopUrlVisitResponseBodyUrl500List & url500List() const { DARABONBA_PTR_GET_CONST(url500List_, DescribeVodDomainTopUrlVisitResponseBodyUrl500List) };
    inline DescribeVodDomainTopUrlVisitResponseBodyUrl500List url500List() { DARABONBA_PTR_GET(url500List_, DescribeVodDomainTopUrlVisitResponseBodyUrl500List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl500List(const DescribeVodDomainTopUrlVisitResponseBodyUrl500List & url500List) { DARABONBA_PTR_SET_VALUE(url500List_, url500List) };
    inline DescribeVodDomainTopUrlVisitResponseBody& setUrl500List(DescribeVodDomainTopUrlVisitResponseBodyUrl500List && url500List) { DARABONBA_PTR_SET_RVALUE(url500List_, url500List) };


  protected:
    std::shared_ptr<DescribeVodDomainTopUrlVisitResponseBodyAllUrlList> allUrlList_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<DescribeVodDomainTopUrlVisitResponseBodyUrl200List> url200List_ = nullptr;
    std::shared_ptr<DescribeVodDomainTopUrlVisitResponseBodyUrl300List> url300List_ = nullptr;
    std::shared_ptr<DescribeVodDomainTopUrlVisitResponseBodyUrl400List> url400List_ = nullptr;
    std::shared_ptr<DescribeVodDomainTopUrlVisitResponseBodyUrl500List> url500List_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
