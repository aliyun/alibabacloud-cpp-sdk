// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULEDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULEDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvoiceRuleDeleteRequestEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceRuleDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceRuleDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(del_all, delAll_);
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceRuleDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(del_all, delAll_);
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    InvoiceRuleDeleteRequest() = default ;
    InvoiceRuleDeleteRequest(const InvoiceRuleDeleteRequest &) = default ;
    InvoiceRuleDeleteRequest(InvoiceRuleDeleteRequest &&) = default ;
    InvoiceRuleDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceRuleDeleteRequest() = default ;
    InvoiceRuleDeleteRequest& operator=(const InvoiceRuleDeleteRequest &) = default ;
    InvoiceRuleDeleteRequest& operator=(InvoiceRuleDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delAll_ != nullptr
        && this->entities_ != nullptr && this->thirdPartId_ != nullptr; };
    // delAll Field Functions 
    bool hasDelAll() const { return this->delAll_ != nullptr;};
    void deleteDelAll() { this->delAll_ = nullptr;};
    inline bool delAll() const { DARABONBA_PTR_GET_DEFAULT(delAll_, false) };
    inline InvoiceRuleDeleteRequest& setDelAll(bool delAll) { DARABONBA_PTR_SET_VALUE(delAll_, delAll) };


    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<InvoiceRuleDeleteRequestEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<InvoiceRuleDeleteRequestEntities>) };
    inline vector<InvoiceRuleDeleteRequestEntities> entities() { DARABONBA_PTR_GET(entities_, vector<InvoiceRuleDeleteRequestEntities>) };
    inline InvoiceRuleDeleteRequest& setEntities(const vector<InvoiceRuleDeleteRequestEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline InvoiceRuleDeleteRequest& setEntities(vector<InvoiceRuleDeleteRequestEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceRuleDeleteRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    std::shared_ptr<bool> delAll_ = nullptr;
    std::shared_ptr<vector<InvoiceRuleDeleteRequestEntities>> entities_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
