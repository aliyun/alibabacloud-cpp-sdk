// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEADDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEADDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardRelateAddShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateAddShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(add_list, addListShrink_);
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateAddShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(add_list, addListShrink_);
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
    };
    TravelStandardRelateAddShrinkRequest() = default ;
    TravelStandardRelateAddShrinkRequest(const TravelStandardRelateAddShrinkRequest &) = default ;
    TravelStandardRelateAddShrinkRequest(TravelStandardRelateAddShrinkRequest &&) = default ;
    TravelStandardRelateAddShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateAddShrinkRequest() = default ;
    TravelStandardRelateAddShrinkRequest& operator=(const TravelStandardRelateAddShrinkRequest &) = default ;
    TravelStandardRelateAddShrinkRequest& operator=(TravelStandardRelateAddShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addListShrink_ != nullptr
        && this->fromGroup_ != nullptr && this->ruleId_ != nullptr; };
    // addListShrink Field Functions 
    bool hasAddListShrink() const { return this->addListShrink_ != nullptr;};
    void deleteAddListShrink() { this->addListShrink_ = nullptr;};
    inline string addListShrink() const { DARABONBA_PTR_GET_DEFAULT(addListShrink_, "") };
    inline TravelStandardRelateAddShrinkRequest& setAddListShrink(string addListShrink) { DARABONBA_PTR_SET_VALUE(addListShrink_, addListShrink) };


    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardRelateAddShrinkRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline TravelStandardRelateAddShrinkRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<string> addListShrink_ = nullptr;
    std::shared_ptr<bool> fromGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
