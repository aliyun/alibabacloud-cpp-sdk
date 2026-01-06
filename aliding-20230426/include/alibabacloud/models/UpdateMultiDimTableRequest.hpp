// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMultiDimTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiDimTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiDimTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateMultiDimTableRequest() = default ;
    UpdateMultiDimTableRequest(const UpdateMultiDimTableRequest &) = default ;
    UpdateMultiDimTableRequest(UpdateMultiDimTableRequest &&) = default ;
    UpdateMultiDimTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiDimTableRequest() = default ;
    UpdateMultiDimTableRequest& operator=(const UpdateMultiDimTableRequest &) = default ;
    UpdateMultiDimTableRequest& operator=(UpdateMultiDimTableRequest &&) = default ;
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
        && this->name_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline UpdateMultiDimTableRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMultiDimTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline UpdateMultiDimTableRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateMultiDimTableRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateMultiDimTableRequest::TenantContext) };
    inline UpdateMultiDimTableRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateMultiDimTableRequest::TenantContext) };
    inline UpdateMultiDimTableRequest& setTenantContext(const UpdateMultiDimTableRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateMultiDimTableRequest& setTenantContext(UpdateMultiDimTableRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<UpdateMultiDimTableRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
