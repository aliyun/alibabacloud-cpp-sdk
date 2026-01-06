// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableAllFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableAllFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableAllFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetMultiDimTableAllFieldsRequest() = default ;
    GetMultiDimTableAllFieldsRequest(const GetMultiDimTableAllFieldsRequest &) = default ;
    GetMultiDimTableAllFieldsRequest(GetMultiDimTableAllFieldsRequest &&) = default ;
    GetMultiDimTableAllFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableAllFieldsRequest() = default ;
    GetMultiDimTableAllFieldsRequest& operator=(const GetMultiDimTableAllFieldsRequest &) = default ;
    GetMultiDimTableAllFieldsRequest& operator=(GetMultiDimTableAllFieldsRequest &&) = default ;
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

    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->sheetIdOrName_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline GetMultiDimTableAllFieldsRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline GetMultiDimTableAllFieldsRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetMultiDimTableAllFieldsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetMultiDimTableAllFieldsRequest::TenantContext) };
    inline GetMultiDimTableAllFieldsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetMultiDimTableAllFieldsRequest::TenantContext) };
    inline GetMultiDimTableAllFieldsRequest& setTenantContext(const GetMultiDimTableAllFieldsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetMultiDimTableAllFieldsRequest& setTenantContext(GetMultiDimTableAllFieldsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<GetMultiDimTableAllFieldsRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
