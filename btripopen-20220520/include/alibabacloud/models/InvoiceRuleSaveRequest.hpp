// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULESAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULESAVEREQUEST_HPP_
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
  class InvoiceRuleSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceRuleSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(all_employe, allEmploye_);
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceRuleSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(all_employe, allEmploye_);
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    InvoiceRuleSaveRequest() = default ;
    InvoiceRuleSaveRequest(const InvoiceRuleSaveRequest &) = default ;
    InvoiceRuleSaveRequest(InvoiceRuleSaveRequest &&) = default ;
    InvoiceRuleSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceRuleSaveRequest() = default ;
    InvoiceRuleSaveRequest& operator=(const InvoiceRuleSaveRequest &) = default ;
    InvoiceRuleSaveRequest& operator=(InvoiceRuleSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Entities& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Entities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Entities& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->allEmploye_ == nullptr
        && this->entities_ == nullptr && this->scope_ == nullptr && this->thirdPartId_ == nullptr; };
    // allEmploye Field Functions 
    bool hasAllEmploye() const { return this->allEmploye_ != nullptr;};
    void deleteAllEmploye() { this->allEmploye_ = nullptr;};
    inline bool getAllEmploye() const { DARABONBA_PTR_GET_DEFAULT(allEmploye_, false) };
    inline InvoiceRuleSaveRequest& setAllEmploye(bool allEmploye) { DARABONBA_PTR_SET_VALUE(allEmploye_, allEmploye) };


    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<InvoiceRuleSaveRequest::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<InvoiceRuleSaveRequest::Entities>) };
    inline vector<InvoiceRuleSaveRequest::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<InvoiceRuleSaveRequest::Entities>) };
    inline InvoiceRuleSaveRequest& setEntities(const vector<InvoiceRuleSaveRequest::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline InvoiceRuleSaveRequest& setEntities(vector<InvoiceRuleSaveRequest::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline int32_t getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0) };
    inline InvoiceRuleSaveRequest& setScope(int32_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string getThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceRuleSaveRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    shared_ptr<bool> allEmploye_ {};
    shared_ptr<vector<InvoiceRuleSaveRequest::Entities>> entities_ {};
    shared_ptr<int32_t> scope_ {};
    // This parameter is required.
    shared_ptr<string> thirdPartId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
