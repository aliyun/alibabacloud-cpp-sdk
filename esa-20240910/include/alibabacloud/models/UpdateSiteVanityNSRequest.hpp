// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITEVANITYNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITEVANITYNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSiteVanityNSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSiteVanityNSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(VanityNSList, vanityNSList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSiteVanityNSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(VanityNSList, vanityNSList_);
    };
    UpdateSiteVanityNSRequest() = default ;
    UpdateSiteVanityNSRequest(const UpdateSiteVanityNSRequest &) = default ;
    UpdateSiteVanityNSRequest(UpdateSiteVanityNSRequest &&) = default ;
    UpdateSiteVanityNSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSiteVanityNSRequest() = default ;
    UpdateSiteVanityNSRequest& operator=(const UpdateSiteVanityNSRequest &) = default ;
    UpdateSiteVanityNSRequest& operator=(UpdateSiteVanityNSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && this->vanityNSList_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSiteVanityNSRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // vanityNSList Field Functions 
    bool hasVanityNSList() const { return this->vanityNSList_ != nullptr;};
    void deleteVanityNSList() { this->vanityNSList_ = nullptr;};
    inline string getVanityNSList() const { DARABONBA_PTR_GET_DEFAULT(vanityNSList_, "") };
    inline UpdateSiteVanityNSRequest& setVanityNSList(string vanityNSList) { DARABONBA_PTR_SET_VALUE(vanityNSList_, vanityNSList) };


  protected:
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The custom nameserver names. You can specify two to five custom nameserver names. Separate multiple names with commas (,).
    shared_ptr<string> vanityNSList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
