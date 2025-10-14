// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLERECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLERECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMultiDimTableRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultiDimTableRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIdsShrink_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultiDimTableRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DeleteMultiDimTableRecordsShrinkRequest() = default ;
    DeleteMultiDimTableRecordsShrinkRequest(const DeleteMultiDimTableRecordsShrinkRequest &) = default ;
    DeleteMultiDimTableRecordsShrinkRequest(DeleteMultiDimTableRecordsShrinkRequest &&) = default ;
    DeleteMultiDimTableRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultiDimTableRecordsShrinkRequest() = default ;
    DeleteMultiDimTableRecordsShrinkRequest& operator=(const DeleteMultiDimTableRecordsShrinkRequest &) = default ;
    DeleteMultiDimTableRecordsShrinkRequest& operator=(DeleteMultiDimTableRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseId_ == nullptr
        && return this->recordIdsShrink_ == nullptr && return this->sheetIdOrName_ == nullptr && return this->tenantContextShrink_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline DeleteMultiDimTableRecordsShrinkRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // recordIdsShrink Field Functions 
    bool hasRecordIdsShrink() const { return this->recordIdsShrink_ != nullptr;};
    void deleteRecordIdsShrink() { this->recordIdsShrink_ = nullptr;};
    inline string recordIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordIdsShrink_, "") };
    inline DeleteMultiDimTableRecordsShrinkRequest& setRecordIdsShrink(string recordIdsShrink) { DARABONBA_PTR_SET_VALUE(recordIdsShrink_, recordIdsShrink) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline DeleteMultiDimTableRecordsShrinkRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DeleteMultiDimTableRecordsShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> recordIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
