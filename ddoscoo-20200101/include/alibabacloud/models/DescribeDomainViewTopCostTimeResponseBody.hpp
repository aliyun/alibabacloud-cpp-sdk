// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainViewTopCostTimeResponseBodyUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewTopCostTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewTopCostTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewTopCostTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    DescribeDomainViewTopCostTimeResponseBody() = default ;
    DescribeDomainViewTopCostTimeResponseBody(const DescribeDomainViewTopCostTimeResponseBody &) = default ;
    DescribeDomainViewTopCostTimeResponseBody(DescribeDomainViewTopCostTimeResponseBody &&) = default ;
    DescribeDomainViewTopCostTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewTopCostTimeResponseBody() = default ;
    DescribeDomainViewTopCostTimeResponseBody& operator=(const DescribeDomainViewTopCostTimeResponseBody &) = default ;
    DescribeDomainViewTopCostTimeResponseBody& operator=(DescribeDomainViewTopCostTimeResponseBody &&) = default ;
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
    inline DescribeDomainViewTopCostTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<DescribeDomainViewTopCostTimeResponseBodyUrlList> & urlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<DescribeDomainViewTopCostTimeResponseBodyUrlList>) };
    inline vector<DescribeDomainViewTopCostTimeResponseBodyUrlList> urlList() { DARABONBA_PTR_GET(urlList_, vector<DescribeDomainViewTopCostTimeResponseBodyUrlList>) };
    inline DescribeDomainViewTopCostTimeResponseBody& setUrlList(const vector<DescribeDomainViewTopCostTimeResponseBodyUrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainViewTopCostTimeResponseBody& setUrlList(vector<DescribeDomainViewTopCostTimeResponseBodyUrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The URLs which require the longest time to respond to requests.
    std::shared_ptr<vector<DescribeDomainViewTopCostTimeResponseBodyUrlList>> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
