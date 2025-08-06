// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLESHEETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLESHEETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultiDimTableSheetRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableSheetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableSheetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableSheetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetMultiDimTableSheetRequest() = default ;
    GetMultiDimTableSheetRequest(const GetMultiDimTableSheetRequest &) = default ;
    GetMultiDimTableSheetRequest(GetMultiDimTableSheetRequest &&) = default ;
    GetMultiDimTableSheetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableSheetRequest() = default ;
    GetMultiDimTableSheetRequest& operator=(const GetMultiDimTableSheetRequest &) = default ;
    GetMultiDimTableSheetRequest& operator=(GetMultiDimTableSheetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseId_ != nullptr
        && this->sheetIdOrName_ != nullptr && this->tenantContext_ != nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline GetMultiDimTableSheetRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline GetMultiDimTableSheetRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetMultiDimTableSheetRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetMultiDimTableSheetRequestTenantContext) };
    inline GetMultiDimTableSheetRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetMultiDimTableSheetRequestTenantContext) };
    inline GetMultiDimTableSheetRequest& setTenantContext(const GetMultiDimTableSheetRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetMultiDimTableSheetRequest& setTenantContext(GetMultiDimTableSheetRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<GetMultiDimTableSheetRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
