// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGORWEBOPENDOCCONTENTTASKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORGORWEBOPENDOCCONTENTTASKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOrgOrWebOpenDocContentTaskIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgOrWebOpenDocContentTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgOrWebOpenDocContentTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetOrgOrWebOpenDocContentTaskIdShrinkRequest() = default ;
    GetOrgOrWebOpenDocContentTaskIdShrinkRequest(const GetOrgOrWebOpenDocContentTaskIdShrinkRequest &) = default ;
    GetOrgOrWebOpenDocContentTaskIdShrinkRequest(GetOrgOrWebOpenDocContentTaskIdShrinkRequest &&) = default ;
    GetOrgOrWebOpenDocContentTaskIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgOrWebOpenDocContentTaskIdShrinkRequest() = default ;
    GetOrgOrWebOpenDocContentTaskIdShrinkRequest& operator=(const GetOrgOrWebOpenDocContentTaskIdShrinkRequest &) = default ;
    GetOrgOrWebOpenDocContentTaskIdShrinkRequest& operator=(GetOrgOrWebOpenDocContentTaskIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryUuid_ != nullptr
        && this->generateCp_ != nullptr && this->scopeType_ != nullptr && this->targetFormat_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetOrgOrWebOpenDocContentTaskIdShrinkRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // generateCp Field Functions 
    bool hasGenerateCp() const { return this->generateCp_ != nullptr;};
    void deleteGenerateCp() { this->generateCp_ = nullptr;};
    inline bool generateCp() const { DARABONBA_PTR_GET_DEFAULT(generateCp_, false) };
    inline GetOrgOrWebOpenDocContentTaskIdShrinkRequest& setGenerateCp(bool generateCp) { DARABONBA_PTR_SET_VALUE(generateCp_, generateCp) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline int32_t scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
    inline GetOrgOrWebOpenDocContentTaskIdShrinkRequest& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // targetFormat Field Functions 
    bool hasTargetFormat() const { return this->targetFormat_ != nullptr;};
    void deleteTargetFormat() { this->targetFormat_ = nullptr;};
    inline string targetFormat() const { DARABONBA_PTR_GET_DEFAULT(targetFormat_, "") };
    inline GetOrgOrWebOpenDocContentTaskIdShrinkRequest& setTargetFormat(string targetFormat) { DARABONBA_PTR_SET_VALUE(targetFormat_, targetFormat) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetOrgOrWebOpenDocContentTaskIdShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<bool> generateCp_ = nullptr;
    std::shared_ptr<int32_t> scopeType_ = nullptr;
    std::shared_ptr<string> targetFormat_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
