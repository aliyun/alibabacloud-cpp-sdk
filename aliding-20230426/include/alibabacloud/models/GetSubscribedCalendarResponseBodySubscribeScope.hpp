// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIBEDCALENDARRESPONSEBODYSUBSCRIBESCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIBEDCALENDARRESPONSEBODYSUBSCRIBESCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSubscribedCalendarResponseBodySubscribeScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscribedCalendarResponseBodySubscribeScope& obj) { 
      DARABONBA_PTR_TO_JSON(CorpIds, corpIds_);
      DARABONBA_PTR_TO_JSON(OpenConversationIds, openConversationIds_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscribedCalendarResponseBodySubscribeScope& obj) { 
      DARABONBA_PTR_FROM_JSON(CorpIds, corpIds_);
      DARABONBA_PTR_FROM_JSON(OpenConversationIds, openConversationIds_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    GetSubscribedCalendarResponseBodySubscribeScope() = default ;
    GetSubscribedCalendarResponseBodySubscribeScope(const GetSubscribedCalendarResponseBodySubscribeScope &) = default ;
    GetSubscribedCalendarResponseBodySubscribeScope(GetSubscribedCalendarResponseBodySubscribeScope &&) = default ;
    GetSubscribedCalendarResponseBodySubscribeScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscribedCalendarResponseBodySubscribeScope() = default ;
    GetSubscribedCalendarResponseBodySubscribeScope& operator=(const GetSubscribedCalendarResponseBodySubscribeScope &) = default ;
    GetSubscribedCalendarResponseBodySubscribeScope& operator=(GetSubscribedCalendarResponseBodySubscribeScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->corpIds_ == nullptr
        && return this->openConversationIds_ == nullptr && return this->userIds_ == nullptr; };
    // corpIds Field Functions 
    bool hasCorpIds() const { return this->corpIds_ != nullptr;};
    void deleteCorpIds() { this->corpIds_ = nullptr;};
    inline const vector<string> & corpIds() const { DARABONBA_PTR_GET_CONST(corpIds_, vector<string>) };
    inline vector<string> corpIds() { DARABONBA_PTR_GET(corpIds_, vector<string>) };
    inline GetSubscribedCalendarResponseBodySubscribeScope& setCorpIds(const vector<string> & corpIds) { DARABONBA_PTR_SET_VALUE(corpIds_, corpIds) };
    inline GetSubscribedCalendarResponseBodySubscribeScope& setCorpIds(vector<string> && corpIds) { DARABONBA_PTR_SET_RVALUE(corpIds_, corpIds) };


    // openConversationIds Field Functions 
    bool hasOpenConversationIds() const { return this->openConversationIds_ != nullptr;};
    void deleteOpenConversationIds() { this->openConversationIds_ = nullptr;};
    inline const vector<string> & openConversationIds() const { DARABONBA_PTR_GET_CONST(openConversationIds_, vector<string>) };
    inline vector<string> openConversationIds() { DARABONBA_PTR_GET(openConversationIds_, vector<string>) };
    inline GetSubscribedCalendarResponseBodySubscribeScope& setOpenConversationIds(const vector<string> & openConversationIds) { DARABONBA_PTR_SET_VALUE(openConversationIds_, openConversationIds) };
    inline GetSubscribedCalendarResponseBodySubscribeScope& setOpenConversationIds(vector<string> && openConversationIds) { DARABONBA_PTR_SET_RVALUE(openConversationIds_, openConversationIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline GetSubscribedCalendarResponseBodySubscribeScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline GetSubscribedCalendarResponseBodySubscribeScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    std::shared_ptr<vector<string>> corpIds_ = nullptr;
    std::shared_ptr<vector<string>> openConversationIds_ = nullptr;
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
