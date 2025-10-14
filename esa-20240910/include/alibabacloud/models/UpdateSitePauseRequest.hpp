// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITEPAUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITEPAUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSitePauseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSitePauseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Paused, paused_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSitePauseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Paused, paused_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateSitePauseRequest() = default ;
    UpdateSitePauseRequest(const UpdateSitePauseRequest &) = default ;
    UpdateSitePauseRequest(UpdateSitePauseRequest &&) = default ;
    UpdateSitePauseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSitePauseRequest() = default ;
    UpdateSitePauseRequest& operator=(const UpdateSitePauseRequest &) = default ;
    UpdateSitePauseRequest& operator=(UpdateSitePauseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paused_ == nullptr
        && return this->siteId_ == nullptr; };
    // paused Field Functions 
    bool hasPaused() const { return this->paused_ != nullptr;};
    void deletePaused() { this->paused_ = nullptr;};
    inline bool paused() const { DARABONBA_PTR_GET_DEFAULT(paused_, false) };
    inline UpdateSitePauseRequest& setPaused(bool paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSitePauseRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Specifies whether to temporarily pause ESA on the website. If you set this parameter to true, all requests to the domains in your DNS records go directly to your origin server. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<bool> paused_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
