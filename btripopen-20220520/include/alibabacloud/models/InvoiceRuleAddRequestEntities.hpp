// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULEADDREQUESTENTITIES_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULEADDREQUESTENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceRuleAddRequestEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceRuleAddRequestEntities& obj) { 
      DARABONBA_PTR_TO_JSON(entity_id, entityId_);
      DARABONBA_PTR_TO_JSON(entity_name, entityName_);
      DARABONBA_PTR_TO_JSON(entity_type, entityType_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceRuleAddRequestEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
      DARABONBA_PTR_FROM_JSON(entity_name, entityName_);
      DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
    };
    InvoiceRuleAddRequestEntities() = default ;
    InvoiceRuleAddRequestEntities(const InvoiceRuleAddRequestEntities &) = default ;
    InvoiceRuleAddRequestEntities(InvoiceRuleAddRequestEntities &&) = default ;
    InvoiceRuleAddRequestEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceRuleAddRequestEntities() = default ;
    InvoiceRuleAddRequestEntities& operator=(const InvoiceRuleAddRequestEntities &) = default ;
    InvoiceRuleAddRequestEntities& operator=(InvoiceRuleAddRequestEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityId_ != nullptr
        && this->entityName_ != nullptr && this->entityType_ != nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline InvoiceRuleAddRequestEntities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline InvoiceRuleAddRequestEntities& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline InvoiceRuleAddRequestEntities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> entityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entityName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entityType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
