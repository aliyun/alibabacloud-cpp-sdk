// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONVEXTENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONVEXTENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateConvExtensionRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateConvExtensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConvExtensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MobileUrl, mobileUrl_);
      DARABONBA_PTR_TO_JSON(PcUrl, pcUrl_);
      DARABONBA_PTR_TO_JSON(StaffIdList, staffIdList_);
      DARABONBA_PTR_TO_JSON(SystemUid, systemUid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConvExtensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MobileUrl, mobileUrl_);
      DARABONBA_PTR_FROM_JSON(PcUrl, pcUrl_);
      DARABONBA_PTR_FROM_JSON(StaffIdList, staffIdList_);
      DARABONBA_PTR_FROM_JSON(SystemUid, systemUid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateConvExtensionRequest() = default ;
    UpdateConvExtensionRequest(const UpdateConvExtensionRequest &) = default ;
    UpdateConvExtensionRequest(UpdateConvExtensionRequest &&) = default ;
    UpdateConvExtensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConvExtensionRequest() = default ;
    UpdateConvExtensionRequest& operator=(const UpdateConvExtensionRequest &) = default ;
    UpdateConvExtensionRequest& operator=(UpdateConvExtensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mobileUrl_ != nullptr
        && this->pcUrl_ != nullptr && this->staffIdList_ != nullptr && this->systemUid_ != nullptr && this->tenantContext_ != nullptr; };
    // mobileUrl Field Functions 
    bool hasMobileUrl() const { return this->mobileUrl_ != nullptr;};
    void deleteMobileUrl() { this->mobileUrl_ = nullptr;};
    inline string mobileUrl() const { DARABONBA_PTR_GET_DEFAULT(mobileUrl_, "") };
    inline UpdateConvExtensionRequest& setMobileUrl(string mobileUrl) { DARABONBA_PTR_SET_VALUE(mobileUrl_, mobileUrl) };


    // pcUrl Field Functions 
    bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
    void deletePcUrl() { this->pcUrl_ = nullptr;};
    inline string pcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
    inline UpdateConvExtensionRequest& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


    // staffIdList Field Functions 
    bool hasStaffIdList() const { return this->staffIdList_ != nullptr;};
    void deleteStaffIdList() { this->staffIdList_ = nullptr;};
    inline const vector<string> & staffIdList() const { DARABONBA_PTR_GET_CONST(staffIdList_, vector<string>) };
    inline vector<string> staffIdList() { DARABONBA_PTR_GET(staffIdList_, vector<string>) };
    inline UpdateConvExtensionRequest& setStaffIdList(const vector<string> & staffIdList) { DARABONBA_PTR_SET_VALUE(staffIdList_, staffIdList) };
    inline UpdateConvExtensionRequest& setStaffIdList(vector<string> && staffIdList) { DARABONBA_PTR_SET_RVALUE(staffIdList_, staffIdList) };


    // systemUid Field Functions 
    bool hasSystemUid() const { return this->systemUid_ != nullptr;};
    void deleteSystemUid() { this->systemUid_ = nullptr;};
    inline string systemUid() const { DARABONBA_PTR_GET_DEFAULT(systemUid_, "") };
    inline UpdateConvExtensionRequest& setSystemUid(string systemUid) { DARABONBA_PTR_SET_VALUE(systemUid_, systemUid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateConvExtensionRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateConvExtensionRequestTenantContext) };
    inline UpdateConvExtensionRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateConvExtensionRequestTenantContext) };
    inline UpdateConvExtensionRequest& setTenantContext(const UpdateConvExtensionRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateConvExtensionRequest& setTenantContext(UpdateConvExtensionRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> mobileUrl_ = nullptr;
    std::shared_ptr<string> pcUrl_ = nullptr;
    std::shared_ptr<vector<string>> staffIdList_ = nullptr;
    std::shared_ptr<string> systemUid_ = nullptr;
    std::shared_ptr<UpdateConvExtensionRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
