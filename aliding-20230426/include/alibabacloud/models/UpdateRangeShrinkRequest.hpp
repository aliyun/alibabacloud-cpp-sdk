// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERANGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERANGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateRangeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRangeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundColors, backgroundColorsShrink_);
      DARABONBA_PTR_TO_JSON(Hyperlinks, hyperlinksShrink_);
      DARABONBA_PTR_TO_JSON(NumberFormat, numberFormat_);
      DARABONBA_PTR_TO_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(Values, valuesShrink_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRangeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundColors, backgroundColorsShrink_);
      DARABONBA_PTR_FROM_JSON(Hyperlinks, hyperlinksShrink_);
      DARABONBA_PTR_FROM_JSON(NumberFormat, numberFormat_);
      DARABONBA_PTR_FROM_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(Values, valuesShrink_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    UpdateRangeShrinkRequest() = default ;
    UpdateRangeShrinkRequest(const UpdateRangeShrinkRequest &) = default ;
    UpdateRangeShrinkRequest(UpdateRangeShrinkRequest &&) = default ;
    UpdateRangeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRangeShrinkRequest() = default ;
    UpdateRangeShrinkRequest& operator=(const UpdateRangeShrinkRequest &) = default ;
    UpdateRangeShrinkRequest& operator=(UpdateRangeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundColorsShrink_ == nullptr
        && return this->hyperlinksShrink_ == nullptr && return this->numberFormat_ == nullptr && return this->rangeAddress_ == nullptr && return this->sheetId_ == nullptr && return this->tenantContextShrink_ == nullptr
        && return this->valuesShrink_ == nullptr && return this->workbookId_ == nullptr; };
    // backgroundColorsShrink Field Functions 
    bool hasBackgroundColorsShrink() const { return this->backgroundColorsShrink_ != nullptr;};
    void deleteBackgroundColorsShrink() { this->backgroundColorsShrink_ = nullptr;};
    inline string backgroundColorsShrink() const { DARABONBA_PTR_GET_DEFAULT(backgroundColorsShrink_, "") };
    inline UpdateRangeShrinkRequest& setBackgroundColorsShrink(string backgroundColorsShrink) { DARABONBA_PTR_SET_VALUE(backgroundColorsShrink_, backgroundColorsShrink) };


    // hyperlinksShrink Field Functions 
    bool hasHyperlinksShrink() const { return this->hyperlinksShrink_ != nullptr;};
    void deleteHyperlinksShrink() { this->hyperlinksShrink_ = nullptr;};
    inline string hyperlinksShrink() const { DARABONBA_PTR_GET_DEFAULT(hyperlinksShrink_, "") };
    inline UpdateRangeShrinkRequest& setHyperlinksShrink(string hyperlinksShrink) { DARABONBA_PTR_SET_VALUE(hyperlinksShrink_, hyperlinksShrink) };


    // numberFormat Field Functions 
    bool hasNumberFormat() const { return this->numberFormat_ != nullptr;};
    void deleteNumberFormat() { this->numberFormat_ = nullptr;};
    inline string numberFormat() const { DARABONBA_PTR_GET_DEFAULT(numberFormat_, "") };
    inline UpdateRangeShrinkRequest& setNumberFormat(string numberFormat) { DARABONBA_PTR_SET_VALUE(numberFormat_, numberFormat) };


    // rangeAddress Field Functions 
    bool hasRangeAddress() const { return this->rangeAddress_ != nullptr;};
    void deleteRangeAddress() { this->rangeAddress_ = nullptr;};
    inline string rangeAddress() const { DARABONBA_PTR_GET_DEFAULT(rangeAddress_, "") };
    inline UpdateRangeShrinkRequest& setRangeAddress(string rangeAddress) { DARABONBA_PTR_SET_VALUE(rangeAddress_, rangeAddress) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline UpdateRangeShrinkRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateRangeShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // valuesShrink Field Functions 
    bool hasValuesShrink() const { return this->valuesShrink_ != nullptr;};
    void deleteValuesShrink() { this->valuesShrink_ = nullptr;};
    inline string valuesShrink() const { DARABONBA_PTR_GET_DEFAULT(valuesShrink_, "") };
    inline UpdateRangeShrinkRequest& setValuesShrink(string valuesShrink) { DARABONBA_PTR_SET_VALUE(valuesShrink_, valuesShrink) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline UpdateRangeShrinkRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    std::shared_ptr<string> backgroundColorsShrink_ = nullptr;
    std::shared_ptr<string> hyperlinksShrink_ = nullptr;
    std::shared_ptr<string> numberFormat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rangeAddress_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> valuesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
