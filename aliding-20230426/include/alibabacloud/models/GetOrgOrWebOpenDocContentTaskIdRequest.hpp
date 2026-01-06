// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGORWEBOPENDOCCONTENTTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORGORWEBOPENDOCCONTENTTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOrgOrWebOpenDocContentTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgOrWebOpenDocContentTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgOrWebOpenDocContentTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetOrgOrWebOpenDocContentTaskIdRequest() = default ;
    GetOrgOrWebOpenDocContentTaskIdRequest(const GetOrgOrWebOpenDocContentTaskIdRequest &) = default ;
    GetOrgOrWebOpenDocContentTaskIdRequest(GetOrgOrWebOpenDocContentTaskIdRequest &&) = default ;
    GetOrgOrWebOpenDocContentTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgOrWebOpenDocContentTaskIdRequest() = default ;
    GetOrgOrWebOpenDocContentTaskIdRequest& operator=(const GetOrgOrWebOpenDocContentTaskIdRequest &) = default ;
    GetOrgOrWebOpenDocContentTaskIdRequest& operator=(GetOrgOrWebOpenDocContentTaskIdRequest &&) = default ;
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

    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->generateCp_ == nullptr && this->scopeType_ == nullptr && this->targetFormat_ == nullptr && this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // generateCp Field Functions 
    bool hasGenerateCp() const { return this->generateCp_ != nullptr;};
    void deleteGenerateCp() { this->generateCp_ = nullptr;};
    inline bool getGenerateCp() const { DARABONBA_PTR_GET_DEFAULT(generateCp_, false) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setGenerateCp(bool generateCp) { DARABONBA_PTR_SET_VALUE(generateCp_, generateCp) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline int32_t getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // targetFormat Field Functions 
    bool hasTargetFormat() const { return this->targetFormat_ != nullptr;};
    void deleteTargetFormat() { this->targetFormat_ = nullptr;};
    inline string getTargetFormat() const { DARABONBA_PTR_GET_DEFAULT(targetFormat_, "") };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setTargetFormat(string targetFormat) { DARABONBA_PTR_SET_VALUE(targetFormat_, targetFormat) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetOrgOrWebOpenDocContentTaskIdRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetOrgOrWebOpenDocContentTaskIdRequest::TenantContext) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetOrgOrWebOpenDocContentTaskIdRequest::TenantContext) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setTenantContext(const GetOrgOrWebOpenDocContentTaskIdRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setTenantContext(GetOrgOrWebOpenDocContentTaskIdRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryUuid_ {};
    shared_ptr<bool> generateCp_ {};
    shared_ptr<int32_t> scopeType_ {};
    shared_ptr<string> targetFormat_ {};
    shared_ptr<GetOrgOrWebOpenDocContentTaskIdRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
