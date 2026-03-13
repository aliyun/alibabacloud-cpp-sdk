// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULEADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULEADDREQUEST_HPP_
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
  class InvoiceRuleAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceRuleAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceRuleAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    InvoiceRuleAddRequest() = default ;
    InvoiceRuleAddRequest(const InvoiceRuleAddRequest &) = default ;
    InvoiceRuleAddRequest(InvoiceRuleAddRequest &&) = default ;
    InvoiceRuleAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceRuleAddRequest() = default ;
    InvoiceRuleAddRequest& operator=(const InvoiceRuleAddRequest &) = default ;
    InvoiceRuleAddRequest& operator=(InvoiceRuleAddRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<string> entityId_ {};
      // This parameter is required.
      shared_ptr<string> entityName_ {};
      // This parameter is required.
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->entities_ == nullptr
        && this->thirdPartId_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<InvoiceRuleAddRequest::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<InvoiceRuleAddRequest::Entities>) };
    inline vector<InvoiceRuleAddRequest::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<InvoiceRuleAddRequest::Entities>) };
    inline InvoiceRuleAddRequest& setEntities(const vector<InvoiceRuleAddRequest::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline InvoiceRuleAddRequest& setEntities(vector<InvoiceRuleAddRequest::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string getThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceRuleAddRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<InvoiceRuleAddRequest::Entities>> entities_ {};
    // This parameter is required.
    shared_ptr<string> thirdPartId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
