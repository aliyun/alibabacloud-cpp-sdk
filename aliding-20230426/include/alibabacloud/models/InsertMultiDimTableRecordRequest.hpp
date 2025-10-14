// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertMultiDimTableRecordRequestRecords.hpp>
#include <alibabacloud/models/InsertMultiDimTableRecordRequestTenantContext.hpp>
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
    virtual bool empty() const override { return this->baseId_ == nullptr
        && return this->records_ == nullptr && return this->sheetIdOrName_ == nullptr && return this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline InsertMultiDimTableRecordRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<InsertMultiDimTableRecordRequestRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<InsertMultiDimTableRecordRequestRecords>) };
    inline vector<InsertMultiDimTableRecordRequestRecords> records() { DARABONBA_PTR_GET(records_, vector<InsertMultiDimTableRecordRequestRecords>) };
    inline InsertMultiDimTableRecordRequest& setRecords(const vector<InsertMultiDimTableRecordRequestRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline InsertMultiDimTableRecordRequest& setRecords(vector<InsertMultiDimTableRecordRequestRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline InsertMultiDimTableRecordRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InsertMultiDimTableRecordRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InsertMultiDimTableRecordRequestTenantContext) };
    inline InsertMultiDimTableRecordRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, InsertMultiDimTableRecordRequestTenantContext) };
    inline InsertMultiDimTableRecordRequest& setTenantContext(const InsertMultiDimTableRecordRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InsertMultiDimTableRecordRequest& setTenantContext(InsertMultiDimTableRecordRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<InsertMultiDimTableRecordRequestRecords>> records_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<InsertMultiDimTableRecordRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
