// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONVEXTENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONVEXTENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->mobileUrl_ == nullptr
        && this->pcUrl_ == nullptr && this->staffIdList_ == nullptr && this->systemUid_ == nullptr && this->tenantContext_ == nullptr; };
    // mobileUrl Field Functions 
    bool hasMobileUrl() const { return this->mobileUrl_ != nullptr;};
    void deleteMobileUrl() { this->mobileUrl_ = nullptr;};
    inline string getMobileUrl() const { DARABONBA_PTR_GET_DEFAULT(mobileUrl_, "") };
    inline UpdateConvExtensionRequest& setMobileUrl(string mobileUrl) { DARABONBA_PTR_SET_VALUE(mobileUrl_, mobileUrl) };


    // pcUrl Field Functions 
    bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
    void deletePcUrl() { this->pcUrl_ = nullptr;};
    inline string getPcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
    inline UpdateConvExtensionRequest& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


    // staffIdList Field Functions 
    bool hasStaffIdList() const { return this->staffIdList_ != nullptr;};
    void deleteStaffIdList() { this->staffIdList_ = nullptr;};
    inline const vector<string> & getStaffIdList() const { DARABONBA_PTR_GET_CONST(staffIdList_, vector<string>) };
    inline vector<string> getStaffIdList() { DARABONBA_PTR_GET(staffIdList_, vector<string>) };
    inline UpdateConvExtensionRequest& setStaffIdList(const vector<string> & staffIdList) { DARABONBA_PTR_SET_VALUE(staffIdList_, staffIdList) };
    inline UpdateConvExtensionRequest& setStaffIdList(vector<string> && staffIdList) { DARABONBA_PTR_SET_RVALUE(staffIdList_, staffIdList) };


    // systemUid Field Functions 
    bool hasSystemUid() const { return this->systemUid_ != nullptr;};
    void deleteSystemUid() { this->systemUid_ = nullptr;};
    inline string getSystemUid() const { DARABONBA_PTR_GET_DEFAULT(systemUid_, "") };
    inline UpdateConvExtensionRequest& setSystemUid(string systemUid) { DARABONBA_PTR_SET_VALUE(systemUid_, systemUid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateConvExtensionRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateConvExtensionRequest::TenantContext) };
    inline UpdateConvExtensionRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateConvExtensionRequest::TenantContext) };
    inline UpdateConvExtensionRequest& setTenantContext(const UpdateConvExtensionRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateConvExtensionRequest& setTenantContext(UpdateConvExtensionRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> mobileUrl_ {};
    shared_ptr<string> pcUrl_ {};
    shared_ptr<vector<string>> staffIdList_ {};
    shared_ptr<string> systemUid_ {};
    shared_ptr<UpdateConvExtensionRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
