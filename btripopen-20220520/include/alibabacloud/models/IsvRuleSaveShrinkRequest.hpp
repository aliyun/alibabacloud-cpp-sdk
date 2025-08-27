// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVRULESAVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISVRULESAVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IsvRuleSaveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvRuleSaveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_need, applyNeed_);
      DARABONBA_PTR_TO_JSON(book_type, bookType_);
      DARABONBA_PTR_TO_JSON(bookuser_list, bookuserListShrink_);
      DARABONBA_PTR_TO_JSON(rule_need, ruleNeed_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IsvRuleSaveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_need, applyNeed_);
      DARABONBA_PTR_FROM_JSON(book_type, bookType_);
      DARABONBA_PTR_FROM_JSON(bookuser_list, bookuserListShrink_);
      DARABONBA_PTR_FROM_JSON(rule_need, ruleNeed_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    IsvRuleSaveShrinkRequest() = default ;
    IsvRuleSaveShrinkRequest(const IsvRuleSaveShrinkRequest &) = default ;
    IsvRuleSaveShrinkRequest(IsvRuleSaveShrinkRequest &&) = default ;
    IsvRuleSaveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvRuleSaveShrinkRequest() = default ;
    IsvRuleSaveShrinkRequest& operator=(const IsvRuleSaveShrinkRequest &) = default ;
    IsvRuleSaveShrinkRequest& operator=(IsvRuleSaveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyNeed_ != nullptr
        && this->bookType_ != nullptr && this->bookuserListShrink_ != nullptr && this->ruleNeed_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr; };
    // applyNeed Field Functions 
    bool hasApplyNeed() const { return this->applyNeed_ != nullptr;};
    void deleteApplyNeed() { this->applyNeed_ = nullptr;};
    inline bool applyNeed() const { DARABONBA_PTR_GET_DEFAULT(applyNeed_, false) };
    inline IsvRuleSaveShrinkRequest& setApplyNeed(bool applyNeed) { DARABONBA_PTR_SET_VALUE(applyNeed_, applyNeed) };


    // bookType Field Functions 
    bool hasBookType() const { return this->bookType_ != nullptr;};
    void deleteBookType() { this->bookType_ = nullptr;};
    inline string bookType() const { DARABONBA_PTR_GET_DEFAULT(bookType_, "") };
    inline IsvRuleSaveShrinkRequest& setBookType(string bookType) { DARABONBA_PTR_SET_VALUE(bookType_, bookType) };


    // bookuserListShrink Field Functions 
    bool hasBookuserListShrink() const { return this->bookuserListShrink_ != nullptr;};
    void deleteBookuserListShrink() { this->bookuserListShrink_ = nullptr;};
    inline string bookuserListShrink() const { DARABONBA_PTR_GET_DEFAULT(bookuserListShrink_, "") };
    inline IsvRuleSaveShrinkRequest& setBookuserListShrink(string bookuserListShrink) { DARABONBA_PTR_SET_VALUE(bookuserListShrink_, bookuserListShrink) };


    // ruleNeed Field Functions 
    bool hasRuleNeed() const { return this->ruleNeed_ != nullptr;};
    void deleteRuleNeed() { this->ruleNeed_ = nullptr;};
    inline bool ruleNeed() const { DARABONBA_PTR_GET_DEFAULT(ruleNeed_, false) };
    inline IsvRuleSaveShrinkRequest& setRuleNeed(bool ruleNeed) { DARABONBA_PTR_SET_VALUE(ruleNeed_, ruleNeed) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline IsvRuleSaveShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IsvRuleSaveShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> applyNeed_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bookType_ = nullptr;
    std::shared_ptr<string> bookuserListShrink_ = nullptr;
    std::shared_ptr<bool> ruleNeed_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
