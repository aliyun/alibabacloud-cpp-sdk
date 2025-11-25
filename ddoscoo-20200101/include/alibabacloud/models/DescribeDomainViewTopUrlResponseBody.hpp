// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainViewTopUrlResponseBodyUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewTopUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewTopUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewTopUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainViewTopUrlResponseBody() = default ;
    DescribeDomainViewTopUrlResponseBody(const DescribeDomainViewTopUrlResponseBody &) = default ;
    DescribeDomainViewTopUrlResponseBody(DescribeDomainViewTopUrlResponseBody &&) = default ;
    DescribeDomainViewTopUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewTopUrlResponseBody() = default ;
    DescribeDomainViewTopUrlResponseBody& operator=(const DescribeDomainViewTopUrlResponseBody &) = default ;
    DescribeDomainViewTopUrlResponseBody& operator=(DescribeDomainViewTopUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->urlList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainViewTopUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<DescribeDomainViewTopUrlResponseBodyUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<DescribeDomainViewTopUrlResponseBodyUrlList>) };
    inline vector<DescribeDomainViewTopUrlResponseBodyUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<DescribeDomainViewTopUrlResponseBodyUrlList>) };
    inline DescribeDomainViewTopUrlResponseBody& setUrlList(const vector<DescribeDomainViewTopUrlResponseBodyUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainViewTopUrlResponseBody& setUrlList(vector<DescribeDomainViewTopUrlResponseBodyUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the URLs that receive the most requests.
    std::shared_ptr<vector<DescribeDomainViewTopUrlResponseBodyUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
