// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTMULTIDIMTABLERECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertMultiDimTableRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertMultiDimTableRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Records, recordsShrink_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InsertMultiDimTableRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Records, recordsShrink_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    InsertMultiDimTableRecordShrinkRequest() = default ;
    InsertMultiDimTableRecordShrinkRequest(const InsertMultiDimTableRecordShrinkRequest &) = default ;
    InsertMultiDimTableRecordShrinkRequest(InsertMultiDimTableRecordShrinkRequest &&) = default ;
    InsertMultiDimTableRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertMultiDimTableRecordShrinkRequest() = default ;
    InsertMultiDimTableRecordShrinkRequest& operator=(const InsertMultiDimTableRecordShrinkRequest &) = default ;
    InsertMultiDimTableRecordShrinkRequest& operator=(InsertMultiDimTableRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->recordsShrink_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline InsertMultiDimTableRecordShrinkRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // recordsShrink Field Functions 
    bool hasRecordsShrink() const { return this->recordsShrink_ != nullptr;};
    void deleteRecordsShrink() { this->recordsShrink_ = nullptr;};
    inline string getRecordsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordsShrink_, "") };
    inline InsertMultiDimTableRecordShrinkRequest& setRecordsShrink(string recordsShrink) { DARABONBA_PTR_SET_VALUE(recordsShrink_, recordsShrink) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline InsertMultiDimTableRecordShrinkRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline InsertMultiDimTableRecordShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<string> recordsShrink_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
