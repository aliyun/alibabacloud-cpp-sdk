// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITECUSTOMLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITECUSTOMLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteCustomLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteCustomLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteCustomLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateSiteCustomLogRequest() = default ;
    CreateSiteCustomLogRequest(const CreateSiteCustomLogRequest &) = default ;
    CreateSiteCustomLogRequest(CreateSiteCustomLogRequest &&) = default ;
    CreateSiteCustomLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteCustomLogRequest() = default ;
    CreateSiteCustomLogRequest& operator=(const CreateSiteCustomLogRequest &) = default ;
    CreateSiteCustomLogRequest& operator=(CreateSiteCustomLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cookies_ != nullptr
        && this->requestHeaders_ != nullptr && this->responseHeaders_ != nullptr && this->siteId_ != nullptr; };
    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline const vector<string> & cookies() const { DARABONBA_PTR_GET_CONST(cookies_, vector<string>) };
    inline vector<string> cookies() { DARABONBA_PTR_GET(cookies_, vector<string>) };
    inline CreateSiteCustomLogRequest& setCookies(const vector<string> & cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };
    inline CreateSiteCustomLogRequest& setCookies(vector<string> && cookies) { DARABONBA_PTR_SET_RVALUE(cookies_, cookies) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<string> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<string>) };
    inline vector<string> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<string>) };
    inline CreateSiteCustomLogRequest& setRequestHeaders(const vector<string> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline CreateSiteCustomLogRequest& setRequestHeaders(vector<string> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // responseHeaders Field Functions 
    bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
    void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
    inline const vector<string> & responseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<string>) };
    inline vector<string> responseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<string>) };
    inline CreateSiteCustomLogRequest& setResponseHeaders(const vector<string> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
    inline CreateSiteCustomLogRequest& setResponseHeaders(vector<string> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateSiteCustomLogRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The cookie fields.
    std::shared_ptr<vector<string>> cookies_ = nullptr;
    // The request header fields.
    std::shared_ptr<vector<string>> requestHeaders_ = nullptr;
    // The response header fields.
    std::shared_ptr<vector<string>> responseHeaders_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
