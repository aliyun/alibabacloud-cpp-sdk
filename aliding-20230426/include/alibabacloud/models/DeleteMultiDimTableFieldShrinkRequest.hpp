// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLEFIELDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLEFIELDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMultiDimTableFieldShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultiDimTableFieldShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultiDimTableFieldShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DeleteMultiDimTableFieldShrinkRequest() = default ;
    DeleteMultiDimTableFieldShrinkRequest(const DeleteMultiDimTableFieldShrinkRequest &) = default ;
    DeleteMultiDimTableFieldShrinkRequest(DeleteMultiDimTableFieldShrinkRequest &&) = default ;
    DeleteMultiDimTableFieldShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultiDimTableFieldShrinkRequest() = default ;
    DeleteMultiDimTableFieldShrinkRequest& operator=(const DeleteMultiDimTableFieldShrinkRequest &) = default ;
    DeleteMultiDimTableFieldShrinkRequest& operator=(DeleteMultiDimTableFieldShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->fieldIdOrName_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline DeleteMultiDimTableFieldShrinkRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // fieldIdOrName Field Functions 
    bool hasFieldIdOrName() const { return this->fieldIdOrName_ != nullptr;};
    void deleteFieldIdOrName() { this->fieldIdOrName_ = nullptr;};
    inline string getFieldIdOrName() const { DARABONBA_PTR_GET_DEFAULT(fieldIdOrName_, "") };
    inline DeleteMultiDimTableFieldShrinkRequest& setFieldIdOrName(string fieldIdOrName) { DARABONBA_PTR_SET_VALUE(fieldIdOrName_, fieldIdOrName) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline DeleteMultiDimTableFieldShrinkRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DeleteMultiDimTableFieldShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<string> fieldIdOrName_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
