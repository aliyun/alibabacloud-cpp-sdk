// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEROBOTEXTEND_HPP_
#define ALIBABACLOUD_MODELS_MERGEROBOTEXTEND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MergeRobotExtend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeRobotExtend& obj) { 
      DARABONBA_PTR_TO_JSON(cardTemplate, cardTemplate_);
      DARABONBA_PTR_TO_JSON(dailyNoc, dailyNoc_);
      DARABONBA_PTR_TO_JSON(dailyNocTime, dailyNocTime_);
      DARABONBA_PTR_TO_JSON(dingSignKey, dingSignKey_);
      DARABONBA_PTR_TO_JSON(enableOutgoing, enableOutgoing_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, MergeRobotExtend& obj) { 
      DARABONBA_PTR_FROM_JSON(cardTemplate, cardTemplate_);
      DARABONBA_PTR_FROM_JSON(dailyNoc, dailyNoc_);
      DARABONBA_PTR_FROM_JSON(dailyNocTime, dailyNocTime_);
      DARABONBA_PTR_FROM_JSON(dingSignKey, dingSignKey_);
      DARABONBA_PTR_FROM_JSON(enableOutgoing, enableOutgoing_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    MergeRobotExtend() = default ;
    MergeRobotExtend(const MergeRobotExtend &) = default ;
    MergeRobotExtend(MergeRobotExtend &&) = default ;
    MergeRobotExtend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeRobotExtend() = default ;
    MergeRobotExtend& operator=(const MergeRobotExtend &) = default ;
    MergeRobotExtend& operator=(MergeRobotExtend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardTemplate_ != nullptr
        && this->dailyNoc_ != nullptr && this->dailyNocTime_ != nullptr && this->dingSignKey_ != nullptr && this->enableOutgoing_ != nullptr && this->token_ != nullptr; };
    // cardTemplate Field Functions 
    bool hasCardTemplate() const { return this->cardTemplate_ != nullptr;};
    void deleteCardTemplate() { this->cardTemplate_ = nullptr;};
    inline string cardTemplate() const { DARABONBA_PTR_GET_DEFAULT(cardTemplate_, "") };
    inline MergeRobotExtend& setCardTemplate(string cardTemplate) { DARABONBA_PTR_SET_VALUE(cardTemplate_, cardTemplate) };


    // dailyNoc Field Functions 
    bool hasDailyNoc() const { return this->dailyNoc_ != nullptr;};
    void deleteDailyNoc() { this->dailyNoc_ = nullptr;};
    inline bool dailyNoc() const { DARABONBA_PTR_GET_DEFAULT(dailyNoc_, false) };
    inline MergeRobotExtend& setDailyNoc(bool dailyNoc) { DARABONBA_PTR_SET_VALUE(dailyNoc_, dailyNoc) };


    // dailyNocTime Field Functions 
    bool hasDailyNocTime() const { return this->dailyNocTime_ != nullptr;};
    void deleteDailyNocTime() { this->dailyNocTime_ = nullptr;};
    inline string dailyNocTime() const { DARABONBA_PTR_GET_DEFAULT(dailyNocTime_, "") };
    inline MergeRobotExtend& setDailyNocTime(string dailyNocTime) { DARABONBA_PTR_SET_VALUE(dailyNocTime_, dailyNocTime) };


    // dingSignKey Field Functions 
    bool hasDingSignKey() const { return this->dingSignKey_ != nullptr;};
    void deleteDingSignKey() { this->dingSignKey_ = nullptr;};
    inline string dingSignKey() const { DARABONBA_PTR_GET_DEFAULT(dingSignKey_, "") };
    inline MergeRobotExtend& setDingSignKey(string dingSignKey) { DARABONBA_PTR_SET_VALUE(dingSignKey_, dingSignKey) };


    // enableOutgoing Field Functions 
    bool hasEnableOutgoing() const { return this->enableOutgoing_ != nullptr;};
    void deleteEnableOutgoing() { this->enableOutgoing_ = nullptr;};
    inline bool enableOutgoing() const { DARABONBA_PTR_GET_DEFAULT(enableOutgoing_, false) };
    inline MergeRobotExtend& setEnableOutgoing(bool enableOutgoing) { DARABONBA_PTR_SET_VALUE(enableOutgoing_, enableOutgoing) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline MergeRobotExtend& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> cardTemplate_ = nullptr;
    std::shared_ptr<bool> dailyNoc_ = nullptr;
    std::shared_ptr<string> dailyNocTime_ = nullptr;
    std::shared_ptr<string> dingSignKey_ = nullptr;
    std::shared_ptr<bool> enableOutgoing_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
