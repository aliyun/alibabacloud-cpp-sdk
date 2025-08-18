// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITECUSTOMLOGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITECUSTOMLOGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteCustomLogShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteCustomLogShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cookies, cookiesShrink_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeadersShrink_);
      DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeadersShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteCustomLogShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookies, cookiesShrink_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeadersShrink_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeadersShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateSiteCustomLogShrinkRequest() = default ;
    CreateSiteCustomLogShrinkRequest(const CreateSiteCustomLogShrinkRequest &) = default ;
    CreateSiteCustomLogShrinkRequest(CreateSiteCustomLogShrinkRequest &&) = default ;
    CreateSiteCustomLogShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteCustomLogShrinkRequest() = default ;
    CreateSiteCustomLogShrinkRequest& operator=(const CreateSiteCustomLogShrinkRequest &) = default ;
    CreateSiteCustomLogShrinkRequest& operator=(CreateSiteCustomLogShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cookiesShrink_ != nullptr
        && this->requestHeadersShrink_ != nullptr && this->responseHeadersShrink_ != nullptr && this->siteId_ != nullptr; };
    // cookiesShrink Field Functions 
    bool hasCookiesShrink() const { return this->cookiesShrink_ != nullptr;};
    void deleteCookiesShrink() { this->cookiesShrink_ = nullptr;};
    inline string cookiesShrink() const { DARABONBA_PTR_GET_DEFAULT(cookiesShrink_, "") };
    inline CreateSiteCustomLogShrinkRequest& setCookiesShrink(string cookiesShrink) { DARABONBA_PTR_SET_VALUE(cookiesShrink_, cookiesShrink) };


    // requestHeadersShrink Field Functions 
    bool hasRequestHeadersShrink() const { return this->requestHeadersShrink_ != nullptr;};
    void deleteRequestHeadersShrink() { this->requestHeadersShrink_ = nullptr;};
    inline string requestHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(requestHeadersShrink_, "") };
    inline CreateSiteCustomLogShrinkRequest& setRequestHeadersShrink(string requestHeadersShrink) { DARABONBA_PTR_SET_VALUE(requestHeadersShrink_, requestHeadersShrink) };


    // responseHeadersShrink Field Functions 
    bool hasResponseHeadersShrink() const { return this->responseHeadersShrink_ != nullptr;};
    void deleteResponseHeadersShrink() { this->responseHeadersShrink_ = nullptr;};
    inline string responseHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(responseHeadersShrink_, "") };
    inline CreateSiteCustomLogShrinkRequest& setResponseHeadersShrink(string responseHeadersShrink) { DARABONBA_PTR_SET_VALUE(responseHeadersShrink_, responseHeadersShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateSiteCustomLogShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The cookie fields.
    std::shared_ptr<string> cookiesShrink_ = nullptr;
    // The request header fields.
    std::shared_ptr<string> requestHeadersShrink_ = nullptr;
    // The response header fields.
    std::shared_ptr<string> responseHeadersShrink_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
