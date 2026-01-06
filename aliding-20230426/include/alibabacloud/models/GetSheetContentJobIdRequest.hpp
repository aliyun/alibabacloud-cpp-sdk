// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSHEETCONTENTJOBIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSHEETCONTENTJOBIDREQUEST_HPP_
#include <darabonba/Core.hpp>
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
        && this->exportType_ == nullptr && this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetSheetContentJobIdRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline GetSheetContentJobIdRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetSheetContentJobIdRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetSheetContentJobIdRequest::TenantContext) };
    inline GetSheetContentJobIdRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetSheetContentJobIdRequest::TenantContext) };
    inline GetSheetContentJobIdRequest& setTenantContext(const GetSheetContentJobIdRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetSheetContentJobIdRequest& setTenantContext(GetSheetContentJobIdRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> dentryUuid_ {};
    shared_ptr<string> exportType_ {};
    shared_ptr<GetSheetContentJobIdRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
