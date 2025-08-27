// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICERULEADDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICERULEADDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceRuleAddShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceRuleAddShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entities, entitiesShrink_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceRuleAddShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entities, entitiesShrink_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    InvoiceRuleAddShrinkRequest() = default ;
    InvoiceRuleAddShrinkRequest(const InvoiceRuleAddShrinkRequest &) = default ;
    InvoiceRuleAddShrinkRequest(InvoiceRuleAddShrinkRequest &&) = default ;
    InvoiceRuleAddShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceRuleAddShrinkRequest() = default ;
    InvoiceRuleAddShrinkRequest& operator=(const InvoiceRuleAddShrinkRequest &) = default ;
    InvoiceRuleAddShrinkRequest& operator=(InvoiceRuleAddShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entitiesShrink_ != nullptr
        && this->thirdPartId_ != nullptr; };
    // entitiesShrink Field Functions 
    bool hasEntitiesShrink() const { return this->entitiesShrink_ != nullptr;};
    void deleteEntitiesShrink() { this->entitiesShrink_ = nullptr;};
    inline string entitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(entitiesShrink_, "") };
    inline InvoiceRuleAddShrinkRequest& setEntitiesShrink(string entitiesShrink) { DARABONBA_PTR_SET_VALUE(entitiesShrink_, entitiesShrink) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceRuleAddShrinkRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> entitiesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
