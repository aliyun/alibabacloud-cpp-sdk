// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGESHIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPAGESHIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetPageShieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPageShieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetPageShieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetPageShieldRequest() = default ;
    GetPageShieldRequest(const GetPageShieldRequest &) = default ;
    GetPageShieldRequest(GetPageShieldRequest &&) = default ;
    GetPageShieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPageShieldRequest() = default ;
    GetPageShieldRequest& operator=(const GetPageShieldRequest &) = default ;
    GetPageShieldRequest& operator=(GetPageShieldRequest &&) = default ;
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
    inline GetPageShieldRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetPageShieldRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The site ID. You can obtain the ID by calling [ListSites](~~ListSites~~).
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number of the site. For sites with version management enabled, you can use this parameter to specify the site version on which the configuration takes effect. The default value is 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
