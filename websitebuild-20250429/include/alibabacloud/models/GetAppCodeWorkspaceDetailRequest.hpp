// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCODEWORKSPACEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCODEWORKSPACEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppCodeWorkspaceDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppCodeWorkspaceDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppCodeWorkspaceDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetAppCodeWorkspaceDetailRequest() = default ;
    GetAppCodeWorkspaceDetailRequest(const GetAppCodeWorkspaceDetailRequest &) = default ;
    GetAppCodeWorkspaceDetailRequest(GetAppCodeWorkspaceDetailRequest &&) = default ;
    GetAppCodeWorkspaceDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppCodeWorkspaceDetailRequest() = default ;
    GetAppCodeWorkspaceDetailRequest& operator=(const GetAppCodeWorkspaceDetailRequest &) = default ;
    GetAppCodeWorkspaceDetailRequest& operator=(GetAppCodeWorkspaceDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline GetAppCodeWorkspaceDetailRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    shared_ptr<string> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
