// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRangeRequestHyperlinks.hpp>
#include <alibabacloud/models/UpdateRangeRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateRangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundColors, backgroundColors_);
      DARABONBA_PTR_TO_JSON(Hyperlinks, hyperlinks_);
      DARABONBA_PTR_TO_JSON(NumberFormat, numberFormat_);
      DARABONBA_PTR_TO_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Values, values_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundColors, backgroundColors_);
      DARABONBA_PTR_FROM_JSON(Hyperlinks, hyperlinks_);
      DARABONBA_PTR_FROM_JSON(NumberFormat, numberFormat_);
      DARABONBA_PTR_FROM_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    UpdateRangeRequest() = default ;
    UpdateRangeRequest(const UpdateRangeRequest &) = default ;
    UpdateRangeRequest(UpdateRangeRequest &&) = default ;
    UpdateRangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRangeRequest() = default ;
    UpdateRangeRequest& operator=(const UpdateRangeRequest &) = default ;
    UpdateRangeRequest& operator=(UpdateRangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backgroundColors_ != nullptr
        && this->hyperlinks_ != nullptr && this->numberFormat_ != nullptr && this->rangeAddress_ != nullptr && this->sheetId_ != nullptr && this->tenantContext_ != nullptr
        && this->values_ != nullptr && this->workbookId_ != nullptr; };
    // backgroundColors Field Functions 
    bool hasBackgroundColors() const { return this->backgroundColors_ != nullptr;};
    void deleteBackgroundColors() { this->backgroundColors_ = nullptr;};
    inline const vector<vector<string>> & backgroundColors() const { DARABONBA_PTR_GET_CONST(backgroundColors_, vector<vector<string>>) };
    inline vector<vector<string>> backgroundColors() { DARABONBA_PTR_GET(backgroundColors_, vector<vector<string>>) };
    inline UpdateRangeRequest& setBackgroundColors(const vector<vector<string>> & backgroundColors) { DARABONBA_PTR_SET_VALUE(backgroundColors_, backgroundColors) };
    inline UpdateRangeRequest& setBackgroundColors(vector<vector<string>> && backgroundColors) { DARABONBA_PTR_SET_RVALUE(backgroundColors_, backgroundColors) };


    // hyperlinks Field Functions 
    bool hasHyperlinks() const { return this->hyperlinks_ != nullptr;};
    void deleteHyperlinks() { this->hyperlinks_ = nullptr;};
    inline const vector<vector<UpdateRangeRequestHyperlinks>> & hyperlinks() const { DARABONBA_PTR_GET_CONST(hyperlinks_, vector<vector<UpdateRangeRequestHyperlinks>>) };
    inline vector<vector<UpdateRangeRequestHyperlinks>> hyperlinks() { DARABONBA_PTR_GET(hyperlinks_, vector<vector<UpdateRangeRequestHyperlinks>>) };
    inline UpdateRangeRequest& setHyperlinks(const vector<vector<UpdateRangeRequestHyperlinks>> & hyperlinks) { DARABONBA_PTR_SET_VALUE(hyperlinks_, hyperlinks) };
    inline UpdateRangeRequest& setHyperlinks(vector<vector<UpdateRangeRequestHyperlinks>> && hyperlinks) { DARABONBA_PTR_SET_RVALUE(hyperlinks_, hyperlinks) };


    // numberFormat Field Functions 
    bool hasNumberFormat() const { return this->numberFormat_ != nullptr;};
    void deleteNumberFormat() { this->numberFormat_ = nullptr;};
    inline string numberFormat() const { DARABONBA_PTR_GET_DEFAULT(numberFormat_, "") };
    inline UpdateRangeRequest& setNumberFormat(string numberFormat) { DARABONBA_PTR_SET_VALUE(numberFormat_, numberFormat) };


    // rangeAddress Field Functions 
    bool hasRangeAddress() const { return this->rangeAddress_ != nullptr;};
    void deleteRangeAddress() { this->rangeAddress_ = nullptr;};
    inline string rangeAddress() const { DARABONBA_PTR_GET_DEFAULT(rangeAddress_, "") };
    inline UpdateRangeRequest& setRangeAddress(string rangeAddress) { DARABONBA_PTR_SET_VALUE(rangeAddress_, rangeAddress) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline UpdateRangeRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateRangeRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateRangeRequestTenantContext) };
    inline UpdateRangeRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateRangeRequestTenantContext) };
    inline UpdateRangeRequest& setTenantContext(const UpdateRangeRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateRangeRequest& setTenantContext(UpdateRangeRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<vector<string>> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
    inline vector<vector<string>> values() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
    inline UpdateRangeRequest& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateRangeRequest& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline UpdateRangeRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    std::shared_ptr<vector<vector<string>>> backgroundColors_ = nullptr;
    std::shared_ptr<vector<vector<UpdateRangeRequestHyperlinks>>> hyperlinks_ = nullptr;
    std::shared_ptr<string> numberFormat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rangeAddress_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<UpdateRangeRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<vector<vector<string>>> values_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
