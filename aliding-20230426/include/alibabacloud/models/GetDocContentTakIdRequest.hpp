// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCCONTENTTAKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCCONTENTTAKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDocContentTakIdRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDocContentTakIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocContentTakIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_TO_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocContentTakIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(GenerateCp, generateCp_);
      DARABONBA_PTR_FROM_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetDocContentTakIdRequest() = default ;
    GetDocContentTakIdRequest(const GetDocContentTakIdRequest &) = default ;
    GetDocContentTakIdRequest(GetDocContentTakIdRequest &&) = default ;
    GetDocContentTakIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocContentTakIdRequest() = default ;
    GetDocContentTakIdRequest& operator=(const GetDocContentTakIdRequest &) = default ;
    GetDocContentTakIdRequest& operator=(GetDocContentTakIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryUuid_ != nullptr
        && this->generateCp_ != nullptr && this->targetFormat_ != nullptr && this->tenantContext_ != nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetDocContentTakIdRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // generateCp Field Functions 
    bool hasGenerateCp() const { return this->generateCp_ != nullptr;};
    void deleteGenerateCp() { this->generateCp_ = nullptr;};
    inline bool generateCp() const { DARABONBA_PTR_GET_DEFAULT(generateCp_, false) };
    inline GetDocContentTakIdRequest& setGenerateCp(bool generateCp) { DARABONBA_PTR_SET_VALUE(generateCp_, generateCp) };


    // targetFormat Field Functions 
    bool hasTargetFormat() const { return this->targetFormat_ != nullptr;};
    void deleteTargetFormat() { this->targetFormat_ = nullptr;};
    inline string targetFormat() const { DARABONBA_PTR_GET_DEFAULT(targetFormat_, "") };
    inline GetDocContentTakIdRequest& setTargetFormat(string targetFormat) { DARABONBA_PTR_SET_VALUE(targetFormat_, targetFormat) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetDocContentTakIdRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetDocContentTakIdRequestTenantContext) };
    inline GetDocContentTakIdRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetDocContentTakIdRequestTenantContext) };
    inline GetDocContentTakIdRequest& setTenantContext(const GetDocContentTakIdRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetDocContentTakIdRequest& setTenantContext(GetDocContentTakIdRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<bool> generateCp_ = nullptr;
    std::shared_ptr<string> targetFormat_ = nullptr;
    std::shared_ptr<GetDocContentTakIdRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
