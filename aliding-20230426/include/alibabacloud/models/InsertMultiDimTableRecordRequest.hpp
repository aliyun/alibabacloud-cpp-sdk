// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDREQUEST_HPP_
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
  class InsertMultiDimTableRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertMultiDimTableRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, InsertMultiDimTableRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    InsertMultiDimTableRecordRequest() = default ;
    InsertMultiDimTableRecordRequest(const InsertMultiDimTableRecordRequest &) = default ;
    InsertMultiDimTableRecordRequest(InsertMultiDimTableRecordRequest &&) = default ;
    InsertMultiDimTableRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertMultiDimTableRecordRequest() = default ;
    InsertMultiDimTableRecordRequest& operator=(const InsertMultiDimTableRecordRequest &) = default ;
    InsertMultiDimTableRecordRequest& operator=(InsertMultiDimTableRecordRequest &&) = default ;
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

    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_ANY_TO_JSON(Fields, fields_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_ANY_FROM_JSON(Fields, fields_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fields_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline       const Darabonba::Json & getFields() const { DARABONBA_GET(fields_) };
      Darabonba::Json & getFields() { DARABONBA_GET(fields_) };
      inline Records& setFields(const Darabonba::Json & fields) { DARABONBA_SET_VALUE(fields_, fields) };
      inline Records& setFields(Darabonba::Json && fields) { DARABONBA_SET_RVALUE(fields_, fields) };


    protected:
      // This parameter is required.
      Darabonba::Json fields_ {};
    };

    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->records_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline InsertMultiDimTableRecordRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<InsertMultiDimTableRecordRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<InsertMultiDimTableRecordRequest::Records>) };
    inline vector<InsertMultiDimTableRecordRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<InsertMultiDimTableRecordRequest::Records>) };
    inline InsertMultiDimTableRecordRequest& setRecords(const vector<InsertMultiDimTableRecordRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline InsertMultiDimTableRecordRequest& setRecords(vector<InsertMultiDimTableRecordRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline InsertMultiDimTableRecordRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InsertMultiDimTableRecordRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InsertMultiDimTableRecordRequest::TenantContext) };
    inline InsertMultiDimTableRecordRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, InsertMultiDimTableRecordRequest::TenantContext) };
    inline InsertMultiDimTableRecordRequest& setTenantContext(const InsertMultiDimTableRecordRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InsertMultiDimTableRecordRequest& setTenantContext(InsertMultiDimTableRecordRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<vector<InsertMultiDimTableRecordRequest::Records>> records_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<InsertMultiDimTableRecordRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
