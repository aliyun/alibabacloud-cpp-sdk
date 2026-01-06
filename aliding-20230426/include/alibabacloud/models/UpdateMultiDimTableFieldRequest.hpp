// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLEFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLEFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMultiDimTableFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiDimTableFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiDimTableFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateMultiDimTableFieldRequest() = default ;
    UpdateMultiDimTableFieldRequest(const UpdateMultiDimTableFieldRequest &) = default ;
    UpdateMultiDimTableFieldRequest(UpdateMultiDimTableFieldRequest &&) = default ;
    UpdateMultiDimTableFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiDimTableFieldRequest() = default ;
    UpdateMultiDimTableFieldRequest& operator=(const UpdateMultiDimTableFieldRequest &) = default ;
    UpdateMultiDimTableFieldRequest& operator=(UpdateMultiDimTableFieldRequest &&) = default ;
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

    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->fieldIdOrName_ == nullptr && this->name_ == nullptr && this->property_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline UpdateMultiDimTableFieldRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // fieldIdOrName Field Functions 
    bool hasFieldIdOrName() const { return this->fieldIdOrName_ != nullptr;};
    void deleteFieldIdOrName() { this->fieldIdOrName_ = nullptr;};
    inline string getFieldIdOrName() const { DARABONBA_PTR_GET_DEFAULT(fieldIdOrName_, "") };
    inline UpdateMultiDimTableFieldRequest& setFieldIdOrName(string fieldIdOrName) { DARABONBA_PTR_SET_VALUE(fieldIdOrName_, fieldIdOrName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMultiDimTableFieldRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline     const Darabonba::Json & getProperty() const { DARABONBA_GET(property_) };
    Darabonba::Json & getProperty() { DARABONBA_GET(property_) };
    inline UpdateMultiDimTableFieldRequest& setProperty(const Darabonba::Json & property) { DARABONBA_SET_VALUE(property_, property) };
    inline UpdateMultiDimTableFieldRequest& setProperty(Darabonba::Json && property) { DARABONBA_SET_RVALUE(property_, property) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline UpdateMultiDimTableFieldRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateMultiDimTableFieldRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateMultiDimTableFieldRequest::TenantContext) };
    inline UpdateMultiDimTableFieldRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateMultiDimTableFieldRequest::TenantContext) };
    inline UpdateMultiDimTableFieldRequest& setTenantContext(const UpdateMultiDimTableFieldRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateMultiDimTableFieldRequest& setTenantContext(UpdateMultiDimTableFieldRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<string> fieldIdOrName_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    Darabonba::Json property_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<UpdateMultiDimTableFieldRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
