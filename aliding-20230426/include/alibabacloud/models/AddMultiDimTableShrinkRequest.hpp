// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMULTIDIMTABLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMULTIDIMTABLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddMultiDimTableShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMultiDimTableShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Fields, fieldsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddMultiDimTableShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Fields, fieldsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    AddMultiDimTableShrinkRequest() = default ;
    AddMultiDimTableShrinkRequest(const AddMultiDimTableShrinkRequest &) = default ;
    AddMultiDimTableShrinkRequest(AddMultiDimTableShrinkRequest &&) = default ;
    AddMultiDimTableShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMultiDimTableShrinkRequest() = default ;
    AddMultiDimTableShrinkRequest& operator=(const AddMultiDimTableShrinkRequest &) = default ;
    AddMultiDimTableShrinkRequest& operator=(AddMultiDimTableShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseId_ != nullptr
        && this->fieldsShrink_ != nullptr && this->name_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline AddMultiDimTableShrinkRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // fieldsShrink Field Functions 
    bool hasFieldsShrink() const { return this->fieldsShrink_ != nullptr;};
    void deleteFieldsShrink() { this->fieldsShrink_ = nullptr;};
    inline string fieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(fieldsShrink_, "") };
    inline AddMultiDimTableShrinkRequest& setFieldsShrink(string fieldsShrink) { DARABONBA_PTR_SET_VALUE(fieldsShrink_, fieldsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMultiDimTableShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline AddMultiDimTableShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    std::shared_ptr<string> fieldsShrink_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
