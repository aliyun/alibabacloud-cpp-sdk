// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMultiDimTableRecordsRequestRecordIds.hpp>
#include <alibabacloud/models/UpdateMultiDimTableRecordsRequestTenantContext.hpp>
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
    virtual bool empty() const override { this->baseId_ != nullptr
        && this->recordIds_ != nullptr && this->sheetIdOrName_ != nullptr && this->tenantContext_ != nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline UpdateMultiDimTableRecordsRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<UpdateMultiDimTableRecordsRequestRecordIds> & recordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<UpdateMultiDimTableRecordsRequestRecordIds>) };
    inline vector<UpdateMultiDimTableRecordsRequestRecordIds> recordIds() { DARABONBA_PTR_GET(recordIds_, vector<UpdateMultiDimTableRecordsRequestRecordIds>) };
    inline UpdateMultiDimTableRecordsRequest& setRecordIds(const vector<UpdateMultiDimTableRecordsRequestRecordIds> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline UpdateMultiDimTableRecordsRequest& setRecordIds(vector<UpdateMultiDimTableRecordsRequestRecordIds> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline UpdateMultiDimTableRecordsRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateMultiDimTableRecordsRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateMultiDimTableRecordsRequestTenantContext) };
    inline UpdateMultiDimTableRecordsRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateMultiDimTableRecordsRequestTenantContext) };
    inline UpdateMultiDimTableRecordsRequest& setTenantContext(const UpdateMultiDimTableRecordsRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateMultiDimTableRecordsRequest& setTenantContext(UpdateMultiDimTableRecordsRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpdateMultiDimTableRecordsRequestRecordIds>> recordIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<UpdateMultiDimTableRecordsRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
