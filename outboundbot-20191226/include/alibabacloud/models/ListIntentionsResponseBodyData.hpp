// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(IntentList, intentList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(IntentList, intentList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIntentionsResponseBodyData() = default ;
    ListIntentionsResponseBodyData(const ListIntentionsResponseBodyData &) = default ;
    ListIntentionsResponseBodyData(ListIntentionsResponseBodyData &&) = default ;
    ListIntentionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyData() = default ;
    ListIntentionsResponseBodyData& operator=(const ListIntentionsResponseBodyData &) = default ;
    ListIntentionsResponseBodyData& operator=(ListIntentionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botId_ == nullptr
        && return this->intentList_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr; };
    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string botId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline ListIntentionsResponseBodyData& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // intentList Field Functions 
    bool hasIntentList() const { return this->intentList_ != nullptr;};
    void deleteIntentList() { this->intentList_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentList> & intentList() const { DARABONBA_PTR_GET_CONST(intentList_, vector<Models::ListIntentionsResponseBodyDataIntentList>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentList> intentList() { DARABONBA_PTR_GET(intentList_, vector<Models::ListIntentionsResponseBodyDataIntentList>) };
    inline ListIntentionsResponseBodyData& setIntentList(const vector<Models::ListIntentionsResponseBodyDataIntentList> & intentList) { DARABONBA_PTR_SET_VALUE(intentList_, intentList) };
    inline ListIntentionsResponseBodyData& setIntentList(vector<Models::ListIntentionsResponseBodyDataIntentList> && intentList) { DARABONBA_PTR_SET_RVALUE(intentList_, intentList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntentionsResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIntentionsResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> botId_ = nullptr;
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentList>> intentList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
