// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITEACCESSTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITEACCESSTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSiteAccessTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSiteAccessTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSiteAccessTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateSiteAccessTypeRequest() = default ;
    UpdateSiteAccessTypeRequest(const UpdateSiteAccessTypeRequest &) = default ;
    UpdateSiteAccessTypeRequest(UpdateSiteAccessTypeRequest &&) = default ;
    UpdateSiteAccessTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSiteAccessTypeRequest() = default ;
    UpdateSiteAccessTypeRequest& operator=(const UpdateSiteAccessTypeRequest &) = default ;
    UpdateSiteAccessTypeRequest& operator=(UpdateSiteAccessTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->siteId_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline UpdateSiteAccessTypeRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSiteAccessTypeRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The new DNS setup of the website. Valid values:
    // 
    // *   **NS**
    // *   **CNAME**
    // 
    // This parameter is required.
    std::shared_ptr<string> accessType_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
