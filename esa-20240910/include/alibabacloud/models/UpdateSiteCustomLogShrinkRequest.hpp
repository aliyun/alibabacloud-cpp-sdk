// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITECUSTOMLOGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITECUSTOMLOGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSiteCustomLogShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSiteCustomLogShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cookies, cookiesShrink_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeadersShrink_);
      DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeadersShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSiteCustomLogShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookies, cookiesShrink_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeadersShrink_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeadersShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateSiteCustomLogShrinkRequest() = default ;
    UpdateSiteCustomLogShrinkRequest(const UpdateSiteCustomLogShrinkRequest &) = default ;
    UpdateSiteCustomLogShrinkRequest(UpdateSiteCustomLogShrinkRequest &&) = default ;
    UpdateSiteCustomLogShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSiteCustomLogShrinkRequest() = default ;
    UpdateSiteCustomLogShrinkRequest& operator=(const UpdateSiteCustomLogShrinkRequest &) = default ;
    UpdateSiteCustomLogShrinkRequest& operator=(UpdateSiteCustomLogShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cookiesShrink_ == nullptr
        && this->requestHeadersShrink_ == nullptr && this->responseHeadersShrink_ == nullptr && this->siteId_ == nullptr; };
    // cookiesShrink Field Functions 
    bool hasCookiesShrink() const { return this->cookiesShrink_ != nullptr;};
    void deleteCookiesShrink() { this->cookiesShrink_ = nullptr;};
    inline string getCookiesShrink() const { DARABONBA_PTR_GET_DEFAULT(cookiesShrink_, "") };
    inline UpdateSiteCustomLogShrinkRequest& setCookiesShrink(string cookiesShrink) { DARABONBA_PTR_SET_VALUE(cookiesShrink_, cookiesShrink) };


    // requestHeadersShrink Field Functions 
    bool hasRequestHeadersShrink() const { return this->requestHeadersShrink_ != nullptr;};
    void deleteRequestHeadersShrink() { this->requestHeadersShrink_ = nullptr;};
    inline string getRequestHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(requestHeadersShrink_, "") };
    inline UpdateSiteCustomLogShrinkRequest& setRequestHeadersShrink(string requestHeadersShrink) { DARABONBA_PTR_SET_VALUE(requestHeadersShrink_, requestHeadersShrink) };


    // responseHeadersShrink Field Functions 
    bool hasResponseHeadersShrink() const { return this->responseHeadersShrink_ != nullptr;};
    void deleteResponseHeadersShrink() { this->responseHeadersShrink_ = nullptr;};
    inline string getResponseHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(responseHeadersShrink_, "") };
    inline UpdateSiteCustomLogShrinkRequest& setResponseHeadersShrink(string responseHeadersShrink) { DARABONBA_PTR_SET_VALUE(responseHeadersShrink_, responseHeadersShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSiteCustomLogShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The cookie fields.
    shared_ptr<string> cookiesShrink_ {};
    // The request header fields.
    shared_ptr<string> requestHeadersShrink_ {};
    // The response header fields.
    shared_ptr<string> responseHeadersShrink_ {};
    // site id
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
