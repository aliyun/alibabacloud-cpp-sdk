// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentListRuleCheck.hpp>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentListSlot.hpp>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentListUserSay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyDataIntentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyDataIntentList& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(BotName, botName_);
      DARABONBA_PTR_TO_JSON(DialogId, dialogId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleCheck, ruleCheck_);
      DARABONBA_PTR_TO_JSON(Slot, slot_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserSay, userSay_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyDataIntentList& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(BotName, botName_);
      DARABONBA_PTR_FROM_JSON(DialogId, dialogId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleCheck, ruleCheck_);
      DARABONBA_PTR_FROM_JSON(Slot, slot_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserSay, userSay_);
    };
    ListIntentionsResponseBodyDataIntentList() = default ;
    ListIntentionsResponseBodyDataIntentList(const ListIntentionsResponseBodyDataIntentList &) = default ;
    ListIntentionsResponseBodyDataIntentList(ListIntentionsResponseBodyDataIntentList &&) = default ;
    ListIntentionsResponseBodyDataIntentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyDataIntentList() = default ;
    ListIntentionsResponseBodyDataIntentList& operator=(const ListIntentionsResponseBodyDataIntentList &) = default ;
    ListIntentionsResponseBodyDataIntentList& operator=(ListIntentionsResponseBodyDataIntentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->botId_ == nullptr && return this->botName_ == nullptr && return this->dialogId_ == nullptr && return this->id_ == nullptr && return this->language_ == nullptr
        && return this->name_ == nullptr && return this->ruleCheck_ == nullptr && return this->slot_ == nullptr && return this->tableId_ == nullptr && return this->type_ == nullptr
        && return this->userSay_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const vector<string> & alias() const { DARABONBA_PTR_GET_CONST(alias_, vector<string>) };
    inline vector<string> alias() { DARABONBA_PTR_GET(alias_, vector<string>) };
    inline ListIntentionsResponseBodyDataIntentList& setAlias(const vector<string> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline ListIntentionsResponseBodyDataIntentList& setAlias(vector<string> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline int64_t botId() const { DARABONBA_PTR_GET_DEFAULT(botId_, 0L) };
    inline ListIntentionsResponseBodyDataIntentList& setBotId(int64_t botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // botName Field Functions 
    bool hasBotName() const { return this->botName_ != nullptr;};
    void deleteBotName() { this->botName_ = nullptr;};
    inline string botName() const { DARABONBA_PTR_GET_DEFAULT(botName_, "") };
    inline ListIntentionsResponseBodyDataIntentList& setBotName(string botName) { DARABONBA_PTR_SET_VALUE(botName_, botName) };


    // dialogId Field Functions 
    bool hasDialogId() const { return this->dialogId_ != nullptr;};
    void deleteDialogId() { this->dialogId_ = nullptr;};
    inline string dialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, "") };
    inline ListIntentionsResponseBodyDataIntentList& setDialogId(string dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListIntentionsResponseBodyDataIntentList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListIntentionsResponseBodyDataIntentList& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntentionsResponseBodyDataIntentList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleCheck Field Functions 
    bool hasRuleCheck() const { return this->ruleCheck_ != nullptr;};
    void deleteRuleCheck() { this->ruleCheck_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentListRuleCheck> & ruleCheck() const { DARABONBA_PTR_GET_CONST(ruleCheck_, vector<Models::ListIntentionsResponseBodyDataIntentListRuleCheck>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentListRuleCheck> ruleCheck() { DARABONBA_PTR_GET(ruleCheck_, vector<Models::ListIntentionsResponseBodyDataIntentListRuleCheck>) };
    inline ListIntentionsResponseBodyDataIntentList& setRuleCheck(const vector<Models::ListIntentionsResponseBodyDataIntentListRuleCheck> & ruleCheck) { DARABONBA_PTR_SET_VALUE(ruleCheck_, ruleCheck) };
    inline ListIntentionsResponseBodyDataIntentList& setRuleCheck(vector<Models::ListIntentionsResponseBodyDataIntentListRuleCheck> && ruleCheck) { DARABONBA_PTR_SET_RVALUE(ruleCheck_, ruleCheck) };


    // slot Field Functions 
    bool hasSlot() const { return this->slot_ != nullptr;};
    void deleteSlot() { this->slot_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentListSlot> & slot() const { DARABONBA_PTR_GET_CONST(slot_, vector<Models::ListIntentionsResponseBodyDataIntentListSlot>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentListSlot> slot() { DARABONBA_PTR_GET(slot_, vector<Models::ListIntentionsResponseBodyDataIntentListSlot>) };
    inline ListIntentionsResponseBodyDataIntentList& setSlot(const vector<Models::ListIntentionsResponseBodyDataIntentListSlot> & slot) { DARABONBA_PTR_SET_VALUE(slot_, slot) };
    inline ListIntentionsResponseBodyDataIntentList& setSlot(vector<Models::ListIntentionsResponseBodyDataIntentListSlot> && slot) { DARABONBA_PTR_SET_RVALUE(slot_, slot) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline ListIntentionsResponseBodyDataIntentList& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListIntentionsResponseBodyDataIntentList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userSay Field Functions 
    bool hasUserSay() const { return this->userSay_ != nullptr;};
    void deleteUserSay() { this->userSay_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentListUserSay> & userSay() const { DARABONBA_PTR_GET_CONST(userSay_, vector<Models::ListIntentionsResponseBodyDataIntentListUserSay>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentListUserSay> userSay() { DARABONBA_PTR_GET(userSay_, vector<Models::ListIntentionsResponseBodyDataIntentListUserSay>) };
    inline ListIntentionsResponseBodyDataIntentList& setUserSay(const vector<Models::ListIntentionsResponseBodyDataIntentListUserSay> & userSay) { DARABONBA_PTR_SET_VALUE(userSay_, userSay) };
    inline ListIntentionsResponseBodyDataIntentList& setUserSay(vector<Models::ListIntentionsResponseBodyDataIntentListUserSay> && userSay) { DARABONBA_PTR_SET_RVALUE(userSay_, userSay) };


  protected:
    std::shared_ptr<vector<string>> alias_ = nullptr;
    std::shared_ptr<int64_t> botId_ = nullptr;
    std::shared_ptr<string> botName_ = nullptr;
    std::shared_ptr<string> dialogId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentListRuleCheck>> ruleCheck_ = nullptr;
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentListSlot>> slot_ = nullptr;
    std::shared_ptr<int64_t> tableId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentListUserSay>> userSay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
