// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGORWEBOPENDOCCONTENTTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORGORWEBOPENDOCCONTENTTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrgOrWebOpenDocContentTaskIdRequestTenantContext.hpp>
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
    virtual bool empty() const override { this->dentryUuid_ != nullptr
        && this->generateCp_ != nullptr && this->scopeType_ != nullptr && this->targetFormat_ != nullptr && this->tenantContext_ != nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // generateCp Field Functions 
    bool hasGenerateCp() const { return this->generateCp_ != nullptr;};
    void deleteGenerateCp() { this->generateCp_ = nullptr;};
    inline bool generateCp() const { DARABONBA_PTR_GET_DEFAULT(generateCp_, false) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setGenerateCp(bool generateCp) { DARABONBA_PTR_SET_VALUE(generateCp_, generateCp) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline int32_t scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // targetFormat Field Functions 
    bool hasTargetFormat() const { return this->targetFormat_ != nullptr;};
    void deleteTargetFormat() { this->targetFormat_ = nullptr;};
    inline string targetFormat() const { DARABONBA_PTR_GET_DEFAULT(targetFormat_, "") };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setTargetFormat(string targetFormat) { DARABONBA_PTR_SET_VALUE(targetFormat_, targetFormat) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetOrgOrWebOpenDocContentTaskIdRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetOrgOrWebOpenDocContentTaskIdRequestTenantContext) };
    inline GetOrgOrWebOpenDocContentTaskIdRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetOrgOrWebOpenDocContentTaskIdRequestTenantContext) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setTenantContext(const GetOrgOrWebOpenDocContentTaskIdRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetOrgOrWebOpenDocContentTaskIdRequest& setTenantContext(GetOrgOrWebOpenDocContentTaskIdRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<bool> generateCp_ = nullptr;
    std::shared_ptr<int32_t> scopeType_ = nullptr;
    std::shared_ptr<string> targetFormat_ = nullptr;
    std::shared_ptr<GetOrgOrWebOpenDocContentTaskIdRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
