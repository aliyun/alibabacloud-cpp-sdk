// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_TO_JSON(Select, select_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_FROM_JSON(Select, select_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    GetRangeRequest() = default ;
    GetRangeRequest(const GetRangeRequest &) = default ;
    GetRangeRequest(GetRangeRequest &&) = default ;
    GetRangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRangeRequest() = default ;
    GetRangeRequest& operator=(const GetRangeRequest &) = default ;
    GetRangeRequest& operator=(GetRangeRequest &&) = default ;
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

    virtual bool empty() const override { return this->rangeAddress_ == nullptr
        && this->select_ == nullptr && this->sheetId_ == nullptr && this->tenantContext_ == nullptr && this->workbookId_ == nullptr; };
    // rangeAddress Field Functions 
    bool hasRangeAddress() const { return this->rangeAddress_ != nullptr;};
    void deleteRangeAddress() { this->rangeAddress_ = nullptr;};
    inline string getRangeAddress() const { DARABONBA_PTR_GET_DEFAULT(rangeAddress_, "") };
    inline GetRangeRequest& setRangeAddress(string rangeAddress) { DARABONBA_PTR_SET_VALUE(rangeAddress_, rangeAddress) };


    // select Field Functions 
    bool hasSelect() const { return this->select_ != nullptr;};
    void deleteSelect() { this->select_ = nullptr;};
    inline string getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, "") };
    inline GetRangeRequest& setSelect(string select) { DARABONBA_PTR_SET_VALUE(select_, select) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string getSheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline GetRangeRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetRangeRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetRangeRequest::TenantContext) };
    inline GetRangeRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetRangeRequest::TenantContext) };
    inline GetRangeRequest& setTenantContext(const GetRangeRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetRangeRequest& setTenantContext(GetRangeRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string getWorkbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline GetRangeRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    shared_ptr<string> rangeAddress_ {};
    shared_ptr<string> select_ {};
    // This parameter is required.
    shared_ptr<string> sheetId_ {};
    shared_ptr<GetRangeRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> workbookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
