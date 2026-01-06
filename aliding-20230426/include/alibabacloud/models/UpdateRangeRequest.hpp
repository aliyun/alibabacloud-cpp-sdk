// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERANGEREQUEST_HPP_
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

    virtual bool empty() const override { return this->backgroundColors_ == nullptr
        && this->hyperlinks_ == nullptr && this->numberFormat_ == nullptr && this->rangeAddress_ == nullptr && this->sheetId_ == nullptr && this->tenantContext_ == nullptr
        && this->values_ == nullptr && this->workbookId_ == nullptr; };
    // backgroundColors Field Functions 
    bool hasBackgroundColors() const { return this->backgroundColors_ != nullptr;};
    void deleteBackgroundColors() { this->backgroundColors_ = nullptr;};
    inline const vector<vector<string>> & getBackgroundColors() const { DARABONBA_PTR_GET_CONST(backgroundColors_, vector<vector<string>>) };
    inline vector<vector<string>> getBackgroundColors() { DARABONBA_PTR_GET(backgroundColors_, vector<vector<string>>) };
    inline UpdateRangeRequest& setBackgroundColors(const vector<vector<string>> & backgroundColors) { DARABONBA_PTR_SET_VALUE(backgroundColors_, backgroundColors) };
    inline UpdateRangeRequest& setBackgroundColors(vector<vector<string>> && backgroundColors) { DARABONBA_PTR_SET_RVALUE(backgroundColors_, backgroundColors) };


    // hyperlinks Field Functions 
    bool hasHyperlinks() const { return this->hyperlinks_ != nullptr;};
    void deleteHyperlinks() { this->hyperlinks_ = nullptr;};
    inline const vector<vector<UpdateRangeRequest::Hyperlinks>> & getHyperlinks() const { DARABONBA_PTR_GET_CONST(hyperlinks_, vector<vector<UpdateRangeRequest::Hyperlinks>>) };
    inline vector<vector<UpdateRangeRequest::Hyperlinks>> getHyperlinks() { DARABONBA_PTR_GET(hyperlinks_, vector<vector<UpdateRangeRequest::Hyperlinks>>) };
    inline UpdateRangeRequest& setHyperlinks(const vector<vector<UpdateRangeRequest::Hyperlinks>> & hyperlinks) { DARABONBA_PTR_SET_VALUE(hyperlinks_, hyperlinks) };
    inline UpdateRangeRequest& setHyperlinks(vector<vector<UpdateRangeRequest::Hyperlinks>> && hyperlinks) { DARABONBA_PTR_SET_RVALUE(hyperlinks_, hyperlinks) };


    // numberFormat Field Functions 
    bool hasNumberFormat() const { return this->numberFormat_ != nullptr;};
    void deleteNumberFormat() { this->numberFormat_ = nullptr;};
    inline string getNumberFormat() const { DARABONBA_PTR_GET_DEFAULT(numberFormat_, "") };
    inline UpdateRangeRequest& setNumberFormat(string numberFormat) { DARABONBA_PTR_SET_VALUE(numberFormat_, numberFormat) };


    // rangeAddress Field Functions 
    bool hasRangeAddress() const { return this->rangeAddress_ != nullptr;};
    void deleteRangeAddress() { this->rangeAddress_ = nullptr;};
    inline string getRangeAddress() const { DARABONBA_PTR_GET_DEFAULT(rangeAddress_, "") };
    inline UpdateRangeRequest& setRangeAddress(string rangeAddress) { DARABONBA_PTR_SET_VALUE(rangeAddress_, rangeAddress) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string getSheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline UpdateRangeRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateRangeRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateRangeRequest::TenantContext) };
    inline UpdateRangeRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateRangeRequest::TenantContext) };
    inline UpdateRangeRequest& setTenantContext(const UpdateRangeRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateRangeRequest& setTenantContext(UpdateRangeRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<vector<string>> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
    inline vector<vector<string>> getValues() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
    inline UpdateRangeRequest& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateRangeRequest& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string getWorkbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline UpdateRangeRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    shared_ptr<vector<vector<string>>> backgroundColors_ {};
    shared_ptr<vector<vector<UpdateRangeRequest::Hyperlinks>>> hyperlinks_ {};
    shared_ptr<string> numberFormat_ {};
    // This parameter is required.
    shared_ptr<string> rangeAddress_ {};
    // This parameter is required.
    shared_ptr<string> sheetId_ {};
    shared_ptr<UpdateRangeRequest::TenantContext> tenantContext_ {};
    shared_ptr<vector<vector<string>>> values_ {};
    // This parameter is required.
    shared_ptr<string> workbookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
