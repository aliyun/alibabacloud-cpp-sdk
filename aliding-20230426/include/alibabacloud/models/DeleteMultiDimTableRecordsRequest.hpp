// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLERECORDSREQUEST_HPP_
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
  class DeleteMultiDimTableRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeleteMultiDimTableRecordsRequest() = default ;
    DeleteMultiDimTableRecordsRequest(const DeleteMultiDimTableRecordsRequest &) = default ;
    DeleteMultiDimTableRecordsRequest(DeleteMultiDimTableRecordsRequest &&) = default ;
    DeleteMultiDimTableRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultiDimTableRecordsRequest() = default ;
    DeleteMultiDimTableRecordsRequest& operator=(const DeleteMultiDimTableRecordsRequest &) = default ;
    DeleteMultiDimTableRecordsRequest& operator=(DeleteMultiDimTableRecordsRequest &&) = default ;
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
        && this->recordIds_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline DeleteMultiDimTableRecordsRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<string> & getRecordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<string>) };
    inline vector<string> getRecordIds() { DARABONBA_PTR_GET(recordIds_, vector<string>) };
    inline DeleteMultiDimTableRecordsRequest& setRecordIds(const vector<string> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline DeleteMultiDimTableRecordsRequest& setRecordIds(vector<string> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline DeleteMultiDimTableRecordsRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteMultiDimTableRecordsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteMultiDimTableRecordsRequest::TenantContext) };
    inline DeleteMultiDimTableRecordsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteMultiDimTableRecordsRequest::TenantContext) };
    inline DeleteMultiDimTableRecordsRequest& setTenantContext(const DeleteMultiDimTableRecordsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteMultiDimTableRecordsRequest& setTenantContext(DeleteMultiDimTableRecordsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> recordIds_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<DeleteMultiDimTableRecordsRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
