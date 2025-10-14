// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLEFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLEFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMultiDimTableFieldRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMultiDimTableFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultiDimTableFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultiDimTableFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(FieldIdOrName, fieldIdOrName_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeleteMultiDimTableFieldRequest() = default ;
    DeleteMultiDimTableFieldRequest(const DeleteMultiDimTableFieldRequest &) = default ;
    DeleteMultiDimTableFieldRequest(DeleteMultiDimTableFieldRequest &&) = default ;
    DeleteMultiDimTableFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultiDimTableFieldRequest() = default ;
    DeleteMultiDimTableFieldRequest& operator=(const DeleteMultiDimTableFieldRequest &) = default ;
    DeleteMultiDimTableFieldRequest& operator=(DeleteMultiDimTableFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseId_ == nullptr
        && return this->fieldIdOrName_ == nullptr && return this->sheetIdOrName_ == nullptr && return this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline DeleteMultiDimTableFieldRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // fieldIdOrName Field Functions 
    bool hasFieldIdOrName() const { return this->fieldIdOrName_ != nullptr;};
    void deleteFieldIdOrName() { this->fieldIdOrName_ = nullptr;};
    inline string fieldIdOrName() const { DARABONBA_PTR_GET_DEFAULT(fieldIdOrName_, "") };
    inline DeleteMultiDimTableFieldRequest& setFieldIdOrName(string fieldIdOrName) { DARABONBA_PTR_SET_VALUE(fieldIdOrName_, fieldIdOrName) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline DeleteMultiDimTableFieldRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteMultiDimTableFieldRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteMultiDimTableFieldRequestTenantContext) };
    inline DeleteMultiDimTableFieldRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteMultiDimTableFieldRequestTenantContext) };
    inline DeleteMultiDimTableFieldRequest& setTenantContext(const DeleteMultiDimTableFieldRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteMultiDimTableFieldRequest& setTenantContext(DeleteMultiDimTableFieldRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fieldIdOrName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<DeleteMultiDimTableFieldRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
