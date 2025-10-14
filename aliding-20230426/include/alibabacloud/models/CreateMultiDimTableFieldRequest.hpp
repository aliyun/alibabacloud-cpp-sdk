// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIDIMTABLEFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIDIMTABLEFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMultiDimTableFieldRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMultiDimTableFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiDimTableFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiDimTableFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateMultiDimTableFieldRequest() = default ;
    CreateMultiDimTableFieldRequest(const CreateMultiDimTableFieldRequest &) = default ;
    CreateMultiDimTableFieldRequest(CreateMultiDimTableFieldRequest &&) = default ;
    CreateMultiDimTableFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiDimTableFieldRequest() = default ;
    CreateMultiDimTableFieldRequest& operator=(const CreateMultiDimTableFieldRequest &) = default ;
    CreateMultiDimTableFieldRequest& operator=(CreateMultiDimTableFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseId_ == nullptr
        && return this->name_ == nullptr && return this->property_ == nullptr && return this->sheetIdOrName_ == nullptr && return this->tenantContext_ == nullptr && return this->type_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline CreateMultiDimTableFieldRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMultiDimTableFieldRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline     const Darabonba::Json & property() const { DARABONBA_GET(property_) };
    Darabonba::Json & property() { DARABONBA_GET(property_) };
    inline CreateMultiDimTableFieldRequest& setProperty(const Darabonba::Json & property) { DARABONBA_SET_VALUE(property_, property) };
    inline CreateMultiDimTableFieldRequest& setProperty(Darabonba::Json & property) { DARABONBA_SET_RVALUE(property_, property) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline CreateMultiDimTableFieldRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateMultiDimTableFieldRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateMultiDimTableFieldRequestTenantContext) };
    inline CreateMultiDimTableFieldRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateMultiDimTableFieldRequestTenantContext) };
    inline CreateMultiDimTableFieldRequest& setTenantContext(const CreateMultiDimTableFieldRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateMultiDimTableFieldRequest& setTenantContext(CreateMultiDimTableFieldRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMultiDimTableFieldRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json property_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<CreateMultiDimTableFieldRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
