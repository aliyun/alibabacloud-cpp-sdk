// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMULTIDIMTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMULTIDIMTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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

    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_ANY_TO_JSON(Property, property_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_ANY_FROM_JSON(Property, property_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->property_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // property Field Functions 
      bool hasProperty() const { return this->property_ != nullptr;};
      void deleteProperty() { this->property_ = nullptr;};
      inline       const Darabonba::Json & getProperty() const { DARABONBA_GET(property_) };
      Darabonba::Json & getProperty() { DARABONBA_GET(property_) };
      inline Fields& setProperty(const Darabonba::Json & property) { DARABONBA_SET_VALUE(property_, property) };
      inline Fields& setProperty(Darabonba::Json && property) { DARABONBA_SET_RVALUE(property_, property) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<string> name_ {};
      Darabonba::Json property_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->fields_ == nullptr && this->name_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline AddMultiDimTableRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<AddMultiDimTableRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<AddMultiDimTableRequest::Fields>) };
    inline vector<AddMultiDimTableRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<AddMultiDimTableRequest::Fields>) };
    inline AddMultiDimTableRequest& setFields(const vector<AddMultiDimTableRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline AddMultiDimTableRequest& setFields(vector<AddMultiDimTableRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMultiDimTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddMultiDimTableRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddMultiDimTableRequest::TenantContext) };
    inline AddMultiDimTableRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, AddMultiDimTableRequest::TenantContext) };
    inline AddMultiDimTableRequest& setTenantContext(const AddMultiDimTableRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddMultiDimTableRequest& setTenantContext(AddMultiDimTableRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    shared_ptr<vector<AddMultiDimTableRequest::Fields>> fields_ {};
    shared_ptr<string> name_ {};
    shared_ptr<AddMultiDimTableRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
