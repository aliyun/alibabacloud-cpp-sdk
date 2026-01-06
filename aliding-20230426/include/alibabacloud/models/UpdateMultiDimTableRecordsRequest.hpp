// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSREQUEST_HPP_
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
  class UpdateMultiDimTableRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateMultiDimTableRecordsRequest() = default ;
    UpdateMultiDimTableRecordsRequest(const UpdateMultiDimTableRecordsRequest &) = default ;
    UpdateMultiDimTableRecordsRequest(UpdateMultiDimTableRecordsRequest &&) = default ;
    UpdateMultiDimTableRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiDimTableRecordsRequest() = default ;
    UpdateMultiDimTableRecordsRequest& operator=(const UpdateMultiDimTableRecordsRequest &) = default ;
    UpdateMultiDimTableRecordsRequest& operator=(UpdateMultiDimTableRecordsRequest &&) = default ;
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

    class RecordIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordIds& obj) { 
        DARABONBA_ANY_TO_JSON(Fields, fields_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, RecordIds& obj) { 
        DARABONBA_ANY_FROM_JSON(Fields, fields_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      RecordIds() = default ;
      RecordIds(const RecordIds &) = default ;
      RecordIds(RecordIds &&) = default ;
      RecordIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordIds() = default ;
      RecordIds& operator=(const RecordIds &) = default ;
      RecordIds& operator=(RecordIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fields_ == nullptr
        && this->id_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline       const Darabonba::Json & getFields() const { DARABONBA_GET(fields_) };
      Darabonba::Json & getFields() { DARABONBA_GET(fields_) };
      inline RecordIds& setFields(const Darabonba::Json & fields) { DARABONBA_SET_VALUE(fields_, fields) };
      inline RecordIds& setFields(Darabonba::Json && fields) { DARABONBA_SET_RVALUE(fields_, fields) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline RecordIds& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // This parameter is required.
      Darabonba::Json fields_ {};
      // This parameter is required.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->recordIds_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline UpdateMultiDimTableRecordsRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<UpdateMultiDimTableRecordsRequest::RecordIds> & getRecordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<UpdateMultiDimTableRecordsRequest::RecordIds>) };
    inline vector<UpdateMultiDimTableRecordsRequest::RecordIds> getRecordIds() { DARABONBA_PTR_GET(recordIds_, vector<UpdateMultiDimTableRecordsRequest::RecordIds>) };
    inline UpdateMultiDimTableRecordsRequest& setRecordIds(const vector<UpdateMultiDimTableRecordsRequest::RecordIds> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline UpdateMultiDimTableRecordsRequest& setRecordIds(vector<UpdateMultiDimTableRecordsRequest::RecordIds> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline UpdateMultiDimTableRecordsRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateMultiDimTableRecordsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateMultiDimTableRecordsRequest::TenantContext) };
    inline UpdateMultiDimTableRecordsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateMultiDimTableRecordsRequest::TenantContext) };
    inline UpdateMultiDimTableRecordsRequest& setTenantContext(const UpdateMultiDimTableRecordsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateMultiDimTableRecordsRequest& setTenantContext(UpdateMultiDimTableRecordsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<vector<UpdateMultiDimTableRecordsRequest::RecordIds>> recordIds_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<UpdateMultiDimTableRecordsRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
