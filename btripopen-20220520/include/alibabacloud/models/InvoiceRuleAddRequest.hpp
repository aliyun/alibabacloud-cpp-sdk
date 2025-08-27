// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULEADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULEADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvoiceRuleAddRequestEntities.hpp>
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
    virtual bool empty() const override { this->entities_ != nullptr
        && this->thirdPartId_ != nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<InvoiceRuleAddRequestEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<InvoiceRuleAddRequestEntities>) };
    inline vector<InvoiceRuleAddRequestEntities> entities() { DARABONBA_PTR_GET(entities_, vector<InvoiceRuleAddRequestEntities>) };
    inline InvoiceRuleAddRequest& setEntities(const vector<InvoiceRuleAddRequestEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline InvoiceRuleAddRequest& setEntities(vector<InvoiceRuleAddRequestEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceRuleAddRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<InvoiceRuleAddRequestEntities>> entities_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
