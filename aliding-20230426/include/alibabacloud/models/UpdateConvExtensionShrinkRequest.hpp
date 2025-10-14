// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONVEXTENSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONVEXTENSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateConvExtensionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConvExtensionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MobileUrl, mobileUrl_);
      DARABONBA_PTR_TO_JSON(PcUrl, pcUrl_);
      DARABONBA_PTR_TO_JSON(StaffIdList, staffIdListShrink_);
      DARABONBA_PTR_TO_JSON(SystemUid, systemUid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConvExtensionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MobileUrl, mobileUrl_);
      DARABONBA_PTR_FROM_JSON(PcUrl, pcUrl_);
      DARABONBA_PTR_FROM_JSON(StaffIdList, staffIdListShrink_);
      DARABONBA_PTR_FROM_JSON(SystemUid, systemUid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    UpdateConvExtensionShrinkRequest() = default ;
    UpdateConvExtensionShrinkRequest(const UpdateConvExtensionShrinkRequest &) = default ;
    UpdateConvExtensionShrinkRequest(UpdateConvExtensionShrinkRequest &&) = default ;
    UpdateConvExtensionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConvExtensionShrinkRequest() = default ;
    UpdateConvExtensionShrinkRequest& operator=(const UpdateConvExtensionShrinkRequest &) = default ;
    UpdateConvExtensionShrinkRequest& operator=(UpdateConvExtensionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobileUrl_ == nullptr
        && return this->pcUrl_ == nullptr && return this->staffIdListShrink_ == nullptr && return this->systemUid_ == nullptr && return this->tenantContextShrink_ == nullptr; };
    // mobileUrl Field Functions 
    bool hasMobileUrl() const { return this->mobileUrl_ != nullptr;};
    void deleteMobileUrl() { this->mobileUrl_ = nullptr;};
    inline string mobileUrl() const { DARABONBA_PTR_GET_DEFAULT(mobileUrl_, "") };
    inline UpdateConvExtensionShrinkRequest& setMobileUrl(string mobileUrl) { DARABONBA_PTR_SET_VALUE(mobileUrl_, mobileUrl) };


    // pcUrl Field Functions 
    bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
    void deletePcUrl() { this->pcUrl_ = nullptr;};
    inline string pcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
    inline UpdateConvExtensionShrinkRequest& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


    // staffIdListShrink Field Functions 
    bool hasStaffIdListShrink() const { return this->staffIdListShrink_ != nullptr;};
    void deleteStaffIdListShrink() { this->staffIdListShrink_ = nullptr;};
    inline string staffIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(staffIdListShrink_, "") };
    inline UpdateConvExtensionShrinkRequest& setStaffIdListShrink(string staffIdListShrink) { DARABONBA_PTR_SET_VALUE(staffIdListShrink_, staffIdListShrink) };


    // systemUid Field Functions 
    bool hasSystemUid() const { return this->systemUid_ != nullptr;};
    void deleteSystemUid() { this->systemUid_ = nullptr;};
    inline string systemUid() const { DARABONBA_PTR_GET_DEFAULT(systemUid_, "") };
    inline UpdateConvExtensionShrinkRequest& setSystemUid(string systemUid) { DARABONBA_PTR_SET_VALUE(systemUid_, systemUid) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateConvExtensionShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    std::shared_ptr<string> mobileUrl_ = nullptr;
    std::shared_ptr<string> pcUrl_ = nullptr;
    std::shared_ptr<string> staffIdListShrink_ = nullptr;
    std::shared_ptr<string> systemUid_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
