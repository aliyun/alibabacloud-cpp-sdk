// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMULTIDIMTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMULTIDIMTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddMultiDimTableRequestFields.hpp>
#include <alibabacloud/models/AddMultiDimTableRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddMultiDimTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMultiDimTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddMultiDimTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddMultiDimTableRequest() = default ;
    AddMultiDimTableRequest(const AddMultiDimTableRequest &) = default ;
    AddMultiDimTableRequest(AddMultiDimTableRequest &&) = default ;
    AddMultiDimTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMultiDimTableRequest() = default ;
    AddMultiDimTableRequest& operator=(const AddMultiDimTableRequest &) = default ;
    AddMultiDimTableRequest& operator=(AddMultiDimTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseId_ == nullptr
        && return this->fields_ == nullptr && return this->name_ == nullptr && return this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline AddMultiDimTableRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<AddMultiDimTableRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<AddMultiDimTableRequestFields>) };
    inline vector<AddMultiDimTableRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<AddMultiDimTableRequestFields>) };
    inline AddMultiDimTableRequest& setFields(const vector<AddMultiDimTableRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline AddMultiDimTableRequest& setFields(vector<AddMultiDimTableRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMultiDimTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddMultiDimTableRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddMultiDimTableRequestTenantContext) };
    inline AddMultiDimTableRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddMultiDimTableRequestTenantContext) };
    inline AddMultiDimTableRequest& setTenantContext(const AddMultiDimTableRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddMultiDimTableRequest& setTenantContext(AddMultiDimTableRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    std::shared_ptr<vector<AddMultiDimTableRequestFields>> fields_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<AddMultiDimTableRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
