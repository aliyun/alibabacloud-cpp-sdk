// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITETRAFFICSEQUENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSITETRAFFICSEQUENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteTrafficSequenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteTrafficSequenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteTrafficSequenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetSiteTrafficSequenceRequest() = default ;
    GetSiteTrafficSequenceRequest(const GetSiteTrafficSequenceRequest &) = default ;
    GetSiteTrafficSequenceRequest(GetSiteTrafficSequenceRequest &&) = default ;
    GetSiteTrafficSequenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteTrafficSequenceRequest() = default ;
    GetSiteTrafficSequenceRequest& operator=(const GetSiteTrafficSequenceRequest &) = default ;
    GetSiteTrafficSequenceRequest& operator=(GetSiteTrafficSequenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && this->siteVersion_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetSiteTrafficSequenceRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetSiteTrafficSequenceRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The site ID. You can obtain the site ID by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number of the site. After version management is enabled for the site, you can specify a site version number to obtain the traffic sequence information of the corresponding version. The default version is 0. If version management is not enabled for the site, you do not need to specify this parameter.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
