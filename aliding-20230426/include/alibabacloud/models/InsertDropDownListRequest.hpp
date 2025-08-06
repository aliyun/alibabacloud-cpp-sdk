// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertDropDownListRequestOptions.hpp>
#include <alibabacloud/models/InsertDropDownListRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertDropDownListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDropDownListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDropDownListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    InsertDropDownListRequest() = default ;
    InsertDropDownListRequest(const InsertDropDownListRequest &) = default ;
    InsertDropDownListRequest(InsertDropDownListRequest &&) = default ;
    InsertDropDownListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDropDownListRequest() = default ;
    InsertDropDownListRequest& operator=(const InsertDropDownListRequest &) = default ;
    InsertDropDownListRequest& operator=(InsertDropDownListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->options_ != nullptr
        && this->rangeAddress_ != nullptr && this->sheetId_ != nullptr && this->tenantContext_ != nullptr && this->workbookId_ != nullptr; };
    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<InsertDropDownListRequestOptions> & options() const { DARABONBA_PTR_GET_CONST(options_, vector<InsertDropDownListRequestOptions>) };
    inline vector<InsertDropDownListRequestOptions> options() { DARABONBA_PTR_GET(options_, vector<InsertDropDownListRequestOptions>) };
    inline InsertDropDownListRequest& setOptions(const vector<InsertDropDownListRequestOptions> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline InsertDropDownListRequest& setOptions(vector<InsertDropDownListRequestOptions> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // rangeAddress Field Functions 
    bool hasRangeAddress() const { return this->rangeAddress_ != nullptr;};
    void deleteRangeAddress() { this->rangeAddress_ = nullptr;};
    inline string rangeAddress() const { DARABONBA_PTR_GET_DEFAULT(rangeAddress_, "") };
    inline InsertDropDownListRequest& setRangeAddress(string rangeAddress) { DARABONBA_PTR_SET_VALUE(rangeAddress_, rangeAddress) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline InsertDropDownListRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InsertDropDownListRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InsertDropDownListRequestTenantContext) };
    inline InsertDropDownListRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, InsertDropDownListRequestTenantContext) };
    inline InsertDropDownListRequest& setTenantContext(const InsertDropDownListRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InsertDropDownListRequest& setTenantContext(InsertDropDownListRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline InsertDropDownListRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<InsertDropDownListRequestOptions>> options_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rangeAddress_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<InsertDropDownListRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
