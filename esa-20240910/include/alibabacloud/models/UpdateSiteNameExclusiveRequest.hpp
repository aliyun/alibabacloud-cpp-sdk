// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITENAMEEXCLUSIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITENAMEEXCLUSIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSiteNameExclusiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSiteNameExclusiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSiteNameExclusiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateSiteNameExclusiveRequest() = default ;
    UpdateSiteNameExclusiveRequest(const UpdateSiteNameExclusiveRequest &) = default ;
    UpdateSiteNameExclusiveRequest(UpdateSiteNameExclusiveRequest &&) = default ;
    UpdateSiteNameExclusiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSiteNameExclusiveRequest() = default ;
    UpdateSiteNameExclusiveRequest& operator=(const UpdateSiteNameExclusiveRequest &) = default ;
    UpdateSiteNameExclusiveRequest& operator=(UpdateSiteNameExclusiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->siteId_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdateSiteNameExclusiveRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSiteNameExclusiveRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Specifies whether to enable site hold. Valid values:
    // 
    // *   on
    // *   off
    // 
    // This parameter is required.
    std::shared_ptr<string> enable_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
