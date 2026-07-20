// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINVOICEENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINVOICEENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddInvoiceEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, AddInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    AddInvoiceEntityRequest() = default ;
    AddInvoiceEntityRequest(const AddInvoiceEntityRequest &) = default ;
    AddInvoiceEntityRequest(AddInvoiceEntityRequest &&) = default ;
    AddInvoiceEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInvoiceEntityRequest() = default ;
    AddInvoiceEntityRequest& operator=(const AddInvoiceEntityRequest &) = default ;
    AddInvoiceEntityRequest& operator=(AddInvoiceEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(entity_id, entityId_);
        DARABONBA_PTR_TO_JSON(entity_name, entityName_);
        DARABONBA_PTR_TO_JSON(entity_type, entityType_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
        DARABONBA_PTR_FROM_JSON(entity_name, entityName_);
        DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
      };
      Entities() = default ;
      Entities(const Entities &) = default ;
      Entities(Entities &&) = default ;
      Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entities() = default ;
      Entities& operator=(const Entities &) = default ;
      Entities& operator=(Entities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityName_ == nullptr && this->entityType_ == nullptr; };
      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline Entities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityName Field Functions 
      bool hasEntityName() const { return this->entityName_ != nullptr;};
      void deleteEntityName() { this->entityName_ = nullptr;};
      inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
      inline Entities& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Entities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    protected:
      // The entity ID, which can be an employee ID, department ID, role ID, or third-party department ID.
      // 
      // This parameter is required.
      shared_ptr<string> entityId_ {};
      // The entity name, which can be an employee name, department name, role name, or third-party department name.
      // 
      // This parameter is required.
      shared_ptr<string> entityName_ {};
      // The entity type. Valid values:
      // - 1: employee
      // - 2: department
      // - 3: role
      // - 4: third-party department
      // 
      // This parameter is required.
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->entities_ == nullptr
        && this->thirdPartId_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<AddInvoiceEntityRequest::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<AddInvoiceEntityRequest::Entities>) };
    inline vector<AddInvoiceEntityRequest::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<AddInvoiceEntityRequest::Entities>) };
    inline AddInvoiceEntityRequest& setEntities(const vector<AddInvoiceEntityRequest::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline AddInvoiceEntityRequest& setEntities(vector<AddInvoiceEntityRequest::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string getThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline AddInvoiceEntityRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    // The list of entities.
    // 
    // This parameter is required.
    shared_ptr<vector<AddInvoiceEntityRequest::Entities>> entities_ {};
    // The third-party invoice ID.
    // 
    // This parameter is required.
    shared_ptr<string> thirdPartId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
