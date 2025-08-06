// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIDIMTABLEFIELDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIDIMTABLEFIELDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMultiDimTableFieldShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiDimTableFieldShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Property, propertyShrink_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiDimTableFieldShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Property, propertyShrink_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateMultiDimTableFieldShrinkRequest() = default ;
    CreateMultiDimTableFieldShrinkRequest(const CreateMultiDimTableFieldShrinkRequest &) = default ;
    CreateMultiDimTableFieldShrinkRequest(CreateMultiDimTableFieldShrinkRequest &&) = default ;
    CreateMultiDimTableFieldShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiDimTableFieldShrinkRequest() = default ;
    CreateMultiDimTableFieldShrinkRequest& operator=(const CreateMultiDimTableFieldShrinkRequest &) = default ;
    CreateMultiDimTableFieldShrinkRequest& operator=(CreateMultiDimTableFieldShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseId_ != nullptr
        && this->name_ != nullptr && this->propertyShrink_ != nullptr && this->sheetIdOrName_ != nullptr && this->tenantContextShrink_ != nullptr && this->type_ != nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline CreateMultiDimTableFieldShrinkRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMultiDimTableFieldShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // propertyShrink Field Functions 
    bool hasPropertyShrink() const { return this->propertyShrink_ != nullptr;};
    void deletePropertyShrink() { this->propertyShrink_ = nullptr;};
    inline string propertyShrink() const { DARABONBA_PTR_GET_DEFAULT(propertyShrink_, "") };
    inline CreateMultiDimTableFieldShrinkRequest& setPropertyShrink(string propertyShrink) { DARABONBA_PTR_SET_VALUE(propertyShrink_, propertyShrink) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline CreateMultiDimTableFieldShrinkRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateMultiDimTableFieldShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMultiDimTableFieldShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> propertyShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
