// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class UrlList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UrlList& obj) { 
        DARABONBA_PTR_TO_JSON(CostTime, costTime_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, UrlList& obj) { 
        DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      UrlList() = default ;
      UrlList(const UrlList &) = default ;
      UrlList(UrlList &&) = default ;
      UrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UrlList() = default ;
      UrlList& operator=(const UrlList &) = default ;
      UrlList& operator=(UrlList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->costTime_ == nullptr
        && this->domain_ == nullptr && this->url_ == nullptr; };
      // costTime Field Functions 
      bool hasCostTime() const { return this->costTime_ != nullptr;};
      void deleteCostTime() { this->costTime_ = nullptr;};
      inline float getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0.0) };
      inline UrlList& setCostTime(float costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline UrlList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline UrlList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The response duration. Unit: milliseconds.
      shared_ptr<float> costTime_ {};
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The URL that is Base64-encoded.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->urlList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainViewTopCostTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline const vector<DescribeDomainViewTopCostTimeResponseBody::UrlList> & getUrlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<DescribeDomainViewTopCostTimeResponseBody::UrlList>) };
    inline vector<DescribeDomainViewTopCostTimeResponseBody::UrlList> getUrlList() { DARABONBA_PTR_GET(urlList_, vector<DescribeDomainViewTopCostTimeResponseBody::UrlList>) };
    inline DescribeDomainViewTopCostTimeResponseBody& setUrlList(const vector<DescribeDomainViewTopCostTimeResponseBody::UrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
    inline DescribeDomainViewTopCostTimeResponseBody& setUrlList(vector<DescribeDomainViewTopCostTimeResponseBody::UrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The URLs which require the longest time to respond to requests.
    shared_ptr<vector<DescribeDomainViewTopCostTimeResponseBody::UrlList>> urlList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
