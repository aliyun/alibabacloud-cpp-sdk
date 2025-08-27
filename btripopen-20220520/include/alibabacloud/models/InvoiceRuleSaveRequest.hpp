// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULESAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULESAVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvoiceRuleSaveRequestEntities.hpp>
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
    virtual bool empty() const override { this->allEmploye_ != nullptr
        && this->entities_ != nullptr && this->scope_ != nullptr && this->thirdPartId_ != nullptr; };
    // allEmploye Field Functions 
    bool hasAllEmploye() const { return this->allEmploye_ != nullptr;};
    void deleteAllEmploye() { this->allEmploye_ = nullptr;};
    inline bool allEmploye() const { DARABONBA_PTR_GET_DEFAULT(allEmploye_, false) };
    inline InvoiceRuleSaveRequest& setAllEmploye(bool allEmploye) { DARABONBA_PTR_SET_VALUE(allEmploye_, allEmploye) };


    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<InvoiceRuleSaveRequestEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<InvoiceRuleSaveRequestEntities>) };
    inline vector<InvoiceRuleSaveRequestEntities> entities() { DARABONBA_PTR_GET(entities_, vector<InvoiceRuleSaveRequestEntities>) };
    inline InvoiceRuleSaveRequest& setEntities(const vector<InvoiceRuleSaveRequestEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline InvoiceRuleSaveRequest& setEntities(vector<InvoiceRuleSaveRequestEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline int32_t scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0) };
    inline InvoiceRuleSaveRequest& setScope(int32_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceRuleSaveRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    std::shared_ptr<bool> allEmploye_ = nullptr;
    std::shared_ptr<vector<InvoiceRuleSaveRequestEntities>> entities_ = nullptr;
    std::shared_ptr<int32_t> scope_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
