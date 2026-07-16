// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMATCHSITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMATCHSITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetMatchSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMatchSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMatchSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    GetMatchSiteResponseBody() = default ;
    GetMatchSiteResponseBody(const GetMatchSiteResponseBody &) = default ;
    GetMatchSiteResponseBody(GetMatchSiteResponseBody &&) = default ;
    GetMatchSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMatchSiteResponseBody() = default ;
    GetMatchSiteResponseBody& operator=(const GetMatchSiteResponseBody &) = default ;
    GetMatchSiteResponseBody& operator=(GetMatchSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->siteId_ == nullptr && this->siteName_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMatchSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetMatchSiteResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetMatchSiteResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The site ID.
    shared_ptr<int64_t> siteId_ {};
    // The site name.
    shared_ptr<string> siteName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
