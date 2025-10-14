// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSHEETCONTENTJOBIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSHEETCONTENTJOBIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSheetContentJobIdRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSheetContentJobIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSheetContentJobIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetSheetContentJobIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetSheetContentJobIdRequest() = default ;
    GetSheetContentJobIdRequest(const GetSheetContentJobIdRequest &) = default ;
    GetSheetContentJobIdRequest(GetSheetContentJobIdRequest &&) = default ;
    GetSheetContentJobIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSheetContentJobIdRequest() = default ;
    GetSheetContentJobIdRequest& operator=(const GetSheetContentJobIdRequest &) = default ;
    GetSheetContentJobIdRequest& operator=(GetSheetContentJobIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && return this->exportType_ == nullptr && return this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetSheetContentJobIdRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline GetSheetContentJobIdRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetSheetContentJobIdRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetSheetContentJobIdRequestTenantContext) };
    inline GetSheetContentJobIdRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetSheetContentJobIdRequestTenantContext) };
    inline GetSheetContentJobIdRequest& setTenantContext(const GetSheetContentJobIdRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetSheetContentJobIdRequest& setTenantContext(GetSheetContentJobIdRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<string> exportType_ = nullptr;
    std::shared_ptr<GetSheetContentJobIdRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
