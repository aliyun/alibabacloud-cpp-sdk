// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITECUSTOMLOGRESPONSEBODYLOGCUSTOMFIELD_HPP_
#define ALIBABACLOUD_MODELS_GETSITECUSTOMLOGRESPONSEBODYLOGCUSTOMFIELD_HPP_
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
  class GetSiteCustomLogResponseBodyLogCustomField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteCustomLogResponseBodyLogCustomField& obj) { 
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteCustomLogResponseBodyLogCustomField& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
    };
    GetSiteCustomLogResponseBodyLogCustomField() = default ;
    GetSiteCustomLogResponseBodyLogCustomField(const GetSiteCustomLogResponseBodyLogCustomField &) = default ;
    GetSiteCustomLogResponseBodyLogCustomField(GetSiteCustomLogResponseBodyLogCustomField &&) = default ;
    GetSiteCustomLogResponseBodyLogCustomField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteCustomLogResponseBodyLogCustomField() = default ;
    GetSiteCustomLogResponseBodyLogCustomField& operator=(const GetSiteCustomLogResponseBodyLogCustomField &) = default ;
    GetSiteCustomLogResponseBodyLogCustomField& operator=(GetSiteCustomLogResponseBodyLogCustomField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cookies_ != nullptr
        && this->requestHeaders_ != nullptr && this->responseHeaders_ != nullptr; };
    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline const vector<string> & cookies() const { DARABONBA_PTR_GET_CONST(cookies_, vector<string>) };
    inline vector<string> cookies() { DARABONBA_PTR_GET(cookies_, vector<string>) };
    inline GetSiteCustomLogResponseBodyLogCustomField& setCookies(const vector<string> & cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };
    inline GetSiteCustomLogResponseBodyLogCustomField& setCookies(vector<string> && cookies) { DARABONBA_PTR_SET_RVALUE(cookies_, cookies) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<string> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<string>) };
    inline vector<string> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<string>) };
    inline GetSiteCustomLogResponseBodyLogCustomField& setRequestHeaders(const vector<string> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline GetSiteCustomLogResponseBodyLogCustomField& setRequestHeaders(vector<string> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // responseHeaders Field Functions 
    bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
    void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
    inline const vector<string> & responseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<string>) };
    inline vector<string> responseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<string>) };
    inline GetSiteCustomLogResponseBodyLogCustomField& setResponseHeaders(const vector<string> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
    inline GetSiteCustomLogResponseBodyLogCustomField& setResponseHeaders(vector<string> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


  protected:
    // The cookie fields.
    std::shared_ptr<vector<string>> cookies_ = nullptr;
    // The request header fields.
    std::shared_ptr<vector<string>> requestHeaders_ = nullptr;
    // The response header fields.
    std::shared_ptr<vector<string>> responseHeaders_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
