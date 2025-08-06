// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLEFIELDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLEFIELDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMultiDimTableFieldShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiDimTableFieldShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Property, propertyShrink_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiDimTableFieldShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Property, propertyShrink_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    UpdateMultiDimTableFieldShrinkRequest() = default ;
    UpdateMultiDimTableFieldShrinkRequest(const UpdateMultiDimTableFieldShrinkRequest &) = default ;
    UpdateMultiDimTableFieldShrinkRequest(UpdateMultiDimTableFieldShrinkRequest &&) = default ;
    UpdateMultiDimTableFieldShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiDimTableFieldShrinkRequest() = default ;
    UpdateMultiDimTableFieldShrinkRequest& operator=(const UpdateMultiDimTableFieldShrinkRequest &) = default ;
    UpdateMultiDimTableFieldShrinkRequest& operator=(UpdateMultiDimTableFieldShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseId_ != nullptr
        && this->fieldIdOrName_ != nullptr && this->name_ != nullptr && this->propertyShrink_ != nullptr && this->sheetIdOrName_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline UpdateMultiDimTableFieldShrinkRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // fieldIdOrName Field Functions 
    bool hasFieldIdOrName() const { return this->fieldIdOrName_ != nullptr;};
    void deleteFieldIdOrName() { this->fieldIdOrName_ = nullptr;};
    inline string fieldIdOrName() const { DARABONBA_PTR_GET_DEFAULT(fieldIdOrName_, "") };
    inline UpdateMultiDimTableFieldShrinkRequest& setFieldIdOrName(string fieldIdOrName) { DARABONBA_PTR_SET_VALUE(fieldIdOrName_, fieldIdOrName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMultiDimTableFieldShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // propertyShrink Field Functions 
    bool hasPropertyShrink() const { return this->propertyShrink_ != nullptr;};
    void deletePropertyShrink() { this->propertyShrink_ = nullptr;};
    inline string propertyShrink() const { DARABONBA_PTR_GET_DEFAULT(propertyShrink_, "") };
    inline UpdateMultiDimTableFieldShrinkRequest& setPropertyShrink(string propertyShrink) { DARABONBA_PTR_SET_VALUE(propertyShrink_, propertyShrink) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline UpdateMultiDimTableFieldShrinkRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateMultiDimTableFieldShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fieldIdOrName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> propertyShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
