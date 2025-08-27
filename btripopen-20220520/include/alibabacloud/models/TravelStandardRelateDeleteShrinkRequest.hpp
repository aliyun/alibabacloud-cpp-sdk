// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardRelateDeleteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(remove_list, removeListShrink_);
      DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(remove_list, removeListShrink_);
      DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
    };
    TravelStandardRelateDeleteShrinkRequest() = default ;
    TravelStandardRelateDeleteShrinkRequest(const TravelStandardRelateDeleteShrinkRequest &) = default ;
    TravelStandardRelateDeleteShrinkRequest(TravelStandardRelateDeleteShrinkRequest &&) = default ;
    TravelStandardRelateDeleteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateDeleteShrinkRequest() = default ;
    TravelStandardRelateDeleteShrinkRequest& operator=(const TravelStandardRelateDeleteShrinkRequest &) = default ;
    TravelStandardRelateDeleteShrinkRequest& operator=(TravelStandardRelateDeleteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromGroup_ != nullptr
        && this->removeListShrink_ != nullptr && this->ruleId_ != nullptr; };
    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardRelateDeleteShrinkRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // removeListShrink Field Functions 
    bool hasRemoveListShrink() const { return this->removeListShrink_ != nullptr;};
    void deleteRemoveListShrink() { this->removeListShrink_ = nullptr;};
    inline string removeListShrink() const { DARABONBA_PTR_GET_DEFAULT(removeListShrink_, "") };
    inline TravelStandardRelateDeleteShrinkRequest& setRemoveListShrink(string removeListShrink) { DARABONBA_PTR_SET_VALUE(removeListShrink_, removeListShrink) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline TravelStandardRelateDeleteShrinkRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<bool> fromGroup_ = nullptr;
    std::shared_ptr<string> removeListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
