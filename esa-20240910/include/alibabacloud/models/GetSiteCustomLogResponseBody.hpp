// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITECUSTOMLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITECUSTOMLOGRESPONSEBODY_HPP_
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
  class GetSiteCustomLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteCustomLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(IsExist, isExist_);
      DARABONBA_PTR_TO_JSON(LogCustomField, logCustomField_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteCustomLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(IsExist, isExist_);
      DARABONBA_PTR_FROM_JSON(LogCustomField, logCustomField_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetSiteCustomLogResponseBody() = default ;
    GetSiteCustomLogResponseBody(const GetSiteCustomLogResponseBody &) = default ;
    GetSiteCustomLogResponseBody(GetSiteCustomLogResponseBody &&) = default ;
    GetSiteCustomLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteCustomLogResponseBody() = default ;
    GetSiteCustomLogResponseBody& operator=(const GetSiteCustomLogResponseBody &) = default ;
    GetSiteCustomLogResponseBody& operator=(GetSiteCustomLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogCustomField : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogCustomField& obj) { 
        DARABONBA_PTR_TO_JSON(Cookies, cookies_);
        DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
        DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
      };
      friend void from_json(const Darabonba::Json& j, LogCustomField& obj) { 
        DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
        DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
        DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
      };
      LogCustomField() = default ;
      LogCustomField(const LogCustomField &) = default ;
      LogCustomField(LogCustomField &&) = default ;
      LogCustomField(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogCustomField() = default ;
      LogCustomField& operator=(const LogCustomField &) = default ;
      LogCustomField& operator=(LogCustomField &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cookies_ == nullptr
        && this->requestHeaders_ == nullptr && this->responseHeaders_ == nullptr; };
      // cookies Field Functions 
      bool hasCookies() const { return this->cookies_ != nullptr;};
      void deleteCookies() { this->cookies_ = nullptr;};
      inline const vector<string> & getCookies() const { DARABONBA_PTR_GET_CONST(cookies_, vector<string>) };
      inline vector<string> getCookies() { DARABONBA_PTR_GET(cookies_, vector<string>) };
      inline LogCustomField& setCookies(const vector<string> & cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };
      inline LogCustomField& setCookies(vector<string> && cookies) { DARABONBA_PTR_SET_RVALUE(cookies_, cookies) };


      // requestHeaders Field Functions 
      bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
      void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
      inline const vector<string> & getRequestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<string>) };
      inline vector<string> getRequestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<string>) };
      inline LogCustomField& setRequestHeaders(const vector<string> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
      inline LogCustomField& setRequestHeaders(vector<string> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


      // responseHeaders Field Functions 
      bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
      void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
      inline const vector<string> & getResponseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<string>) };
      inline vector<string> getResponseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<string>) };
      inline LogCustomField& setResponseHeaders(const vector<string> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
      inline LogCustomField& setResponseHeaders(vector<string> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


    protected:
      // The cookie fields.
      shared_ptr<vector<string>> cookies_ {};
      // The request header fields.
      shared_ptr<vector<string>> requestHeaders_ {};
      // The response header fields.
      shared_ptr<vector<string>> responseHeaders_ {};
    };

    virtual bool empty() const override { return this->configId_ == nullptr
        && this->isExist_ == nullptr && this->logCustomField_ == nullptr && this->requestId_ == nullptr && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetSiteCustomLogResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // isExist Field Functions 
    bool hasIsExist() const { return this->isExist_ != nullptr;};
    void deleteIsExist() { this->isExist_ = nullptr;};
    inline bool getIsExist() const { DARABONBA_PTR_GET_DEFAULT(isExist_, false) };
    inline GetSiteCustomLogResponseBody& setIsExist(bool isExist) { DARABONBA_PTR_SET_VALUE(isExist_, isExist) };


    // logCustomField Field Functions 
    bool hasLogCustomField() const { return this->logCustomField_ != nullptr;};
    void deleteLogCustomField() { this->logCustomField_ = nullptr;};
    inline const GetSiteCustomLogResponseBody::LogCustomField & getLogCustomField() const { DARABONBA_PTR_GET_CONST(logCustomField_, GetSiteCustomLogResponseBody::LogCustomField) };
    inline GetSiteCustomLogResponseBody::LogCustomField getLogCustomField() { DARABONBA_PTR_GET(logCustomField_, GetSiteCustomLogResponseBody::LogCustomField) };
    inline GetSiteCustomLogResponseBody& setLogCustomField(const GetSiteCustomLogResponseBody::LogCustomField & logCustomField) { DARABONBA_PTR_SET_VALUE(logCustomField_, logCustomField) };
    inline GetSiteCustomLogResponseBody& setLogCustomField(GetSiteCustomLogResponseBody::LogCustomField && logCustomField) { DARABONBA_PTR_SET_RVALUE(logCustomField_, logCustomField) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteCustomLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetSiteCustomLogResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the custom log field configuration.
    shared_ptr<int64_t> configId_ {};
    // Indicates whether the custom configuration exists.
    shared_ptr<bool> isExist_ {};
    // The custom fields.
    shared_ptr<GetSiteCustomLogResponseBody::LogCustomField> logCustomField_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
