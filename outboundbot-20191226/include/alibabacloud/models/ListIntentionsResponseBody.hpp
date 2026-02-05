// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIntentionsResponseBody() = default ;
    ListIntentionsResponseBody(const ListIntentionsResponseBody &) = default ;
    ListIntentionsResponseBody(ListIntentionsResponseBody &&) = default ;
    ListIntentionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBody() = default ;
    ListIntentionsResponseBody& operator=(const ListIntentionsResponseBody &) = default ;
    ListIntentionsResponseBody& operator=(ListIntentionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BotId, botId_);
        DARABONBA_PTR_TO_JSON(IntentList, intentList_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BotId, botId_);
        DARABONBA_PTR_FROM_JSON(IntentList, intentList_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IntentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IntentList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, IntentList& obj) { 
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
        IntentList() = default ;
        IntentList(const IntentList &) = default ;
        IntentList(IntentList &&) = default ;
        IntentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IntentList() = default ;
        IntentList& operator=(const IntentList &) = default ;
        IntentList& operator=(IntentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserSay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserSay& obj) { 
            DARABONBA_PTR_TO_JSON(FromId, fromId_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Strict, strict_);
            DARABONBA_PTR_TO_JSON(UserSayData, userSayData_);
          };
          friend void from_json(const Darabonba::Json& j, UserSay& obj) { 
            DARABONBA_PTR_FROM_JSON(FromId, fromId_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Strict, strict_);
            DARABONBA_PTR_FROM_JSON(UserSayData, userSayData_);
          };
          UserSay() = default ;
          UserSay(const UserSay &) = default ;
          UserSay(UserSay &&) = default ;
          UserSay(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserSay() = default ;
          UserSay& operator=(const UserSay &) = default ;
          UserSay& operator=(UserSay &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class UserSayData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UserSayData& obj) { 
              DARABONBA_PTR_TO_JSON(SlotId, slotId_);
              DARABONBA_PTR_TO_JSON(Text, text_);
            };
            friend void from_json(const Darabonba::Json& j, UserSayData& obj) { 
              DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
              DARABONBA_PTR_FROM_JSON(Text, text_);
            };
            UserSayData() = default ;
            UserSayData(const UserSayData &) = default ;
            UserSayData(UserSayData &&) = default ;
            UserSayData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UserSayData() = default ;
            UserSayData& operator=(const UserSayData &) = default ;
            UserSayData& operator=(UserSayData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->slotId_ == nullptr
        && this->text_ == nullptr; };
            // slotId Field Functions 
            bool hasSlotId() const { return this->slotId_ != nullptr;};
            void deleteSlotId() { this->slotId_ = nullptr;};
            inline string getSlotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
            inline UserSayData& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline UserSayData& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          protected:
            shared_ptr<string> slotId_ {};
            shared_ptr<string> text_ {};
          };

          virtual bool empty() const override { return this->fromId_ == nullptr
        && this->id_ == nullptr && this->strict_ == nullptr && this->userSayData_ == nullptr; };
          // fromId Field Functions 
          bool hasFromId() const { return this->fromId_ != nullptr;};
          void deleteFromId() { this->fromId_ = nullptr;};
          inline string getFromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, "") };
          inline UserSay& setFromId(string fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline UserSay& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // strict Field Functions 
          bool hasStrict() const { return this->strict_ != nullptr;};
          void deleteStrict() { this->strict_ = nullptr;};
          inline bool getStrict() const { DARABONBA_PTR_GET_DEFAULT(strict_, false) };
          inline UserSay& setStrict(bool strict) { DARABONBA_PTR_SET_VALUE(strict_, strict) };


          // userSayData Field Functions 
          bool hasUserSayData() const { return this->userSayData_ != nullptr;};
          void deleteUserSayData() { this->userSayData_ = nullptr;};
          inline const vector<UserSay::UserSayData> & getUserSayData() const { DARABONBA_PTR_GET_CONST(userSayData_, vector<UserSay::UserSayData>) };
          inline vector<UserSay::UserSayData> getUserSayData() { DARABONBA_PTR_GET(userSayData_, vector<UserSay::UserSayData>) };
          inline UserSay& setUserSayData(const vector<UserSay::UserSayData> & userSayData) { DARABONBA_PTR_SET_VALUE(userSayData_, userSayData) };
          inline UserSay& setUserSayData(vector<UserSay::UserSayData> && userSayData) { DARABONBA_PTR_SET_RVALUE(userSayData_, userSayData) };


        protected:
          shared_ptr<string> fromId_ {};
          shared_ptr<string> id_ {};
          shared_ptr<bool> strict_ {};
          shared_ptr<vector<UserSay::UserSayData>> userSayData_ {};
        };

        class Slot : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Slot& obj) { 
            DARABONBA_PTR_TO_JSON(FeedbackFunctions, feedbackFunctions_);
            DARABONBA_PTR_TO_JSON(FeedbackType, feedbackType_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IsArray, isArray_);
            DARABONBA_PTR_TO_JSON(IsEncrypt, isEncrypt_);
            DARABONBA_PTR_TO_JSON(IsInteractive, isInteractive_);
            DARABONBA_PTR_TO_JSON(IsNecessary, isNecessary_);
            DARABONBA_PTR_TO_JSON(LifeSpan, lifeSpan_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Question, question_);
            DARABONBA_PTR_TO_JSON(Tags, tags_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Slot& obj) { 
            DARABONBA_PTR_FROM_JSON(FeedbackFunctions, feedbackFunctions_);
            DARABONBA_PTR_FROM_JSON(FeedbackType, feedbackType_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IsArray, isArray_);
            DARABONBA_PTR_FROM_JSON(IsEncrypt, isEncrypt_);
            DARABONBA_PTR_FROM_JSON(IsInteractive, isInteractive_);
            DARABONBA_PTR_FROM_JSON(IsNecessary, isNecessary_);
            DARABONBA_PTR_FROM_JSON(LifeSpan, lifeSpan_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Question, question_);
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Slot() = default ;
          Slot(const Slot &) = default ;
          Slot(Slot &&) = default ;
          Slot(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Slot() = default ;
          Slot& operator=(const Slot &) = default ;
          Slot& operator=(Slot &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tags& obj) { 
              DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tags& obj) { 
              DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tags() = default ;
            Tags(const Tags &) = default ;
            Tags(Tags &&) = default ;
            Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tags() = default ;
            Tags& operator=(const Tags &) = default ;
            Tags& operator=(Tags &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->userSayId_ == nullptr
        && this->value_ == nullptr; };
            // userSayId Field Functions 
            bool hasUserSayId() const { return this->userSayId_ != nullptr;};
            void deleteUserSayId() { this->userSayId_ = nullptr;};
            inline string getUserSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, "") };
            inline Tags& setUserSayId(string userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> userSayId_ {};
            shared_ptr<string> value_ {};
          };

          class FeedbackFunctions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FeedbackFunctions& obj) { 
              DARABONBA_PTR_TO_JSON(AliyunFunction, aliyunFunction_);
              DARABONBA_PTR_TO_JSON(AliyunService, aliyunService_);
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
              DARABONBA_PTR_TO_JSON(Function, function_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_ANY_TO_JSON(Params, params_);
              DARABONBA_PTR_TO_JSON(Switch, switch_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, FeedbackFunctions& obj) { 
              DARABONBA_PTR_FROM_JSON(AliyunFunction, aliyunFunction_);
              DARABONBA_PTR_FROM_JSON(AliyunService, aliyunService_);
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
              DARABONBA_PTR_FROM_JSON(Function, function_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_ANY_FROM_JSON(Params, params_);
              DARABONBA_PTR_FROM_JSON(Switch, switch_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            FeedbackFunctions() = default ;
            FeedbackFunctions(const FeedbackFunctions &) = default ;
            FeedbackFunctions(FeedbackFunctions &&) = default ;
            FeedbackFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FeedbackFunctions() = default ;
            FeedbackFunctions& operator=(const FeedbackFunctions &) = default ;
            FeedbackFunctions& operator=(FeedbackFunctions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Switch : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Switch& obj) { 
                DARABONBA_PTR_TO_JSON(Id, id_);
                DARABONBA_PTR_TO_JSON(Label, label_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Switch& obj) { 
                DARABONBA_PTR_FROM_JSON(Id, id_);
                DARABONBA_PTR_FROM_JSON(Label, label_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              Switch() = default ;
              Switch(const Switch &) = default ;
              Switch(Switch &&) = default ;
              Switch(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Switch() = default ;
              Switch& operator=(const Switch &) = default ;
              Switch& operator=(Switch &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
              inline Switch& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


              // label Field Functions 
              bool hasLabel() const { return this->label_ != nullptr;};
              void deleteLabel() { this->label_ = nullptr;};
              inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
              inline Switch& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Switch& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Switch& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline Switch& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              shared_ptr<string> id_ {};
              shared_ptr<string> label_ {};
              shared_ptr<string> name_ {};
              shared_ptr<string> type_ {};
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->aliyunFunction_ == nullptr
        && this->aliyunService_ == nullptr && this->code_ == nullptr && this->description_ == nullptr && this->endPoint_ == nullptr && this->function_ == nullptr
        && this->name_ == nullptr && this->params_ == nullptr && this->switch_ == nullptr && this->type_ == nullptr; };
            // aliyunFunction Field Functions 
            bool hasAliyunFunction() const { return this->aliyunFunction_ != nullptr;};
            void deleteAliyunFunction() { this->aliyunFunction_ = nullptr;};
            inline string getAliyunFunction() const { DARABONBA_PTR_GET_DEFAULT(aliyunFunction_, "") };
            inline FeedbackFunctions& setAliyunFunction(string aliyunFunction) { DARABONBA_PTR_SET_VALUE(aliyunFunction_, aliyunFunction) };


            // aliyunService Field Functions 
            bool hasAliyunService() const { return this->aliyunService_ != nullptr;};
            void deleteAliyunService() { this->aliyunService_ = nullptr;};
            inline string getAliyunService() const { DARABONBA_PTR_GET_DEFAULT(aliyunService_, "") };
            inline FeedbackFunctions& setAliyunService(string aliyunService) { DARABONBA_PTR_SET_VALUE(aliyunService_, aliyunService) };


            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline FeedbackFunctions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline FeedbackFunctions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // endPoint Field Functions 
            bool hasEndPoint() const { return this->endPoint_ != nullptr;};
            void deleteEndPoint() { this->endPoint_ = nullptr;};
            inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
            inline FeedbackFunctions& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


            // function Field Functions 
            bool hasFunction() const { return this->function_ != nullptr;};
            void deleteFunction() { this->function_ = nullptr;};
            inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
            inline FeedbackFunctions& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline FeedbackFunctions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // params Field Functions 
            bool hasParams() const { return this->params_ != nullptr;};
            void deleteParams() { this->params_ = nullptr;};
            inline             const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
            Darabonba::Json & getParams() { DARABONBA_GET(params_) };
            inline FeedbackFunctions& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
            inline FeedbackFunctions& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


            // switch Field Functions 
            bool hasSwitch() const { return this->switch_ != nullptr;};
            void deleteSwitch() { this->switch_ = nullptr;};
            inline const vector<FeedbackFunctions::Switch> & getSwitch() const { DARABONBA_PTR_GET_CONST(switch_, vector<FeedbackFunctions::Switch>) };
            inline vector<FeedbackFunctions::Switch> getSwitch() { DARABONBA_PTR_GET(switch_, vector<FeedbackFunctions::Switch>) };
            inline FeedbackFunctions& setSwitch(const vector<FeedbackFunctions::Switch> & _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };
            inline FeedbackFunctions& setSwitch(vector<FeedbackFunctions::Switch> && _switch) { DARABONBA_PTR_SET_RVALUE(switch_, _switch) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline FeedbackFunctions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> aliyunFunction_ {};
            shared_ptr<string> aliyunService_ {};
            shared_ptr<string> code_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> endPoint_ {};
            shared_ptr<string> function_ {};
            shared_ptr<string> name_ {};
            Darabonba::Json params_ {};
            shared_ptr<vector<FeedbackFunctions::Switch>> switch_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->feedbackFunctions_ == nullptr
        && this->feedbackType_ == nullptr && this->id_ == nullptr && this->isArray_ == nullptr && this->isEncrypt_ == nullptr && this->isInteractive_ == nullptr
        && this->isNecessary_ == nullptr && this->lifeSpan_ == nullptr && this->name_ == nullptr && this->question_ == nullptr && this->tags_ == nullptr
        && this->value_ == nullptr; };
          // feedbackFunctions Field Functions 
          bool hasFeedbackFunctions() const { return this->feedbackFunctions_ != nullptr;};
          void deleteFeedbackFunctions() { this->feedbackFunctions_ = nullptr;};
          inline const vector<Slot::FeedbackFunctions> & getFeedbackFunctions() const { DARABONBA_PTR_GET_CONST(feedbackFunctions_, vector<Slot::FeedbackFunctions>) };
          inline vector<Slot::FeedbackFunctions> getFeedbackFunctions() { DARABONBA_PTR_GET(feedbackFunctions_, vector<Slot::FeedbackFunctions>) };
          inline Slot& setFeedbackFunctions(const vector<Slot::FeedbackFunctions> & feedbackFunctions) { DARABONBA_PTR_SET_VALUE(feedbackFunctions_, feedbackFunctions) };
          inline Slot& setFeedbackFunctions(vector<Slot::FeedbackFunctions> && feedbackFunctions) { DARABONBA_PTR_SET_RVALUE(feedbackFunctions_, feedbackFunctions) };


          // feedbackType Field Functions 
          bool hasFeedbackType() const { return this->feedbackType_ != nullptr;};
          void deleteFeedbackType() { this->feedbackType_ = nullptr;};
          inline string getFeedbackType() const { DARABONBA_PTR_GET_DEFAULT(feedbackType_, "") };
          inline Slot& setFeedbackType(string feedbackType) { DARABONBA_PTR_SET_VALUE(feedbackType_, feedbackType) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Slot& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // isArray Field Functions 
          bool hasIsArray() const { return this->isArray_ != nullptr;};
          void deleteIsArray() { this->isArray_ = nullptr;};
          inline bool getIsArray() const { DARABONBA_PTR_GET_DEFAULT(isArray_, false) };
          inline Slot& setIsArray(bool isArray) { DARABONBA_PTR_SET_VALUE(isArray_, isArray) };


          // isEncrypt Field Functions 
          bool hasIsEncrypt() const { return this->isEncrypt_ != nullptr;};
          void deleteIsEncrypt() { this->isEncrypt_ = nullptr;};
          inline bool getIsEncrypt() const { DARABONBA_PTR_GET_DEFAULT(isEncrypt_, false) };
          inline Slot& setIsEncrypt(bool isEncrypt) { DARABONBA_PTR_SET_VALUE(isEncrypt_, isEncrypt) };


          // isInteractive Field Functions 
          bool hasIsInteractive() const { return this->isInteractive_ != nullptr;};
          void deleteIsInteractive() { this->isInteractive_ = nullptr;};
          inline bool getIsInteractive() const { DARABONBA_PTR_GET_DEFAULT(isInteractive_, false) };
          inline Slot& setIsInteractive(bool isInteractive) { DARABONBA_PTR_SET_VALUE(isInteractive_, isInteractive) };


          // isNecessary Field Functions 
          bool hasIsNecessary() const { return this->isNecessary_ != nullptr;};
          void deleteIsNecessary() { this->isNecessary_ = nullptr;};
          inline bool getIsNecessary() const { DARABONBA_PTR_GET_DEFAULT(isNecessary_, false) };
          inline Slot& setIsNecessary(bool isNecessary) { DARABONBA_PTR_SET_VALUE(isNecessary_, isNecessary) };


          // lifeSpan Field Functions 
          bool hasLifeSpan() const { return this->lifeSpan_ != nullptr;};
          void deleteLifeSpan() { this->lifeSpan_ = nullptr;};
          inline int32_t getLifeSpan() const { DARABONBA_PTR_GET_DEFAULT(lifeSpan_, 0) };
          inline Slot& setLifeSpan(int32_t lifeSpan) { DARABONBA_PTR_SET_VALUE(lifeSpan_, lifeSpan) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Slot& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // question Field Functions 
          bool hasQuestion() const { return this->question_ != nullptr;};
          void deleteQuestion() { this->question_ = nullptr;};
          inline const vector<string> & getQuestion() const { DARABONBA_PTR_GET_CONST(question_, vector<string>) };
          inline vector<string> getQuestion() { DARABONBA_PTR_GET(question_, vector<string>) };
          inline Slot& setQuestion(const vector<string> & question) { DARABONBA_PTR_SET_VALUE(question_, question) };
          inline Slot& setQuestion(vector<string> && question) { DARABONBA_PTR_SET_RVALUE(question_, question) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Slot::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Slot::Tags>) };
          inline vector<Slot::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Slot::Tags>) };
          inline Slot& setTags(const vector<Slot::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Slot& setTags(vector<Slot::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Slot& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<vector<Slot::FeedbackFunctions>> feedbackFunctions_ {};
          shared_ptr<string> feedbackType_ {};
          shared_ptr<string> id_ {};
          shared_ptr<bool> isArray_ {};
          shared_ptr<bool> isEncrypt_ {};
          shared_ptr<bool> isInteractive_ {};
          shared_ptr<bool> isNecessary_ {};
          shared_ptr<int32_t> lifeSpan_ {};
          shared_ptr<string> name_ {};
          shared_ptr<vector<string>> question_ {};
          shared_ptr<vector<Slot::Tags>> tags_ {};
          shared_ptr<string> value_ {};
        };

        class RuleCheck : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleCheck& obj) { 
            DARABONBA_PTR_TO_JSON(Error, error_);
            DARABONBA_PTR_TO_JSON(Strict, strict_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Warning, warning_);
          };
          friend void from_json(const Darabonba::Json& j, RuleCheck& obj) { 
            DARABONBA_PTR_FROM_JSON(Error, error_);
            DARABONBA_PTR_FROM_JSON(Strict, strict_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Warning, warning_);
          };
          RuleCheck() = default ;
          RuleCheck(const RuleCheck &) = default ;
          RuleCheck(RuleCheck &&) = default ;
          RuleCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleCheck() = default ;
          RuleCheck& operator=(const RuleCheck &) = default ;
          RuleCheck& operator=(RuleCheck &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->error_ == nullptr
        && this->strict_ == nullptr && this->text_ == nullptr && this->warning_ == nullptr; };
          // error Field Functions 
          bool hasError() const { return this->error_ != nullptr;};
          void deleteError() { this->error_ = nullptr;};
          inline const vector<string> & getError() const { DARABONBA_PTR_GET_CONST(error_, vector<string>) };
          inline vector<string> getError() { DARABONBA_PTR_GET(error_, vector<string>) };
          inline RuleCheck& setError(const vector<string> & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
          inline RuleCheck& setError(vector<string> && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


          // strict Field Functions 
          bool hasStrict() const { return this->strict_ != nullptr;};
          void deleteStrict() { this->strict_ = nullptr;};
          inline bool getStrict() const { DARABONBA_PTR_GET_DEFAULT(strict_, false) };
          inline RuleCheck& setStrict(bool strict) { DARABONBA_PTR_SET_VALUE(strict_, strict) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline RuleCheck& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // warning Field Functions 
          bool hasWarning() const { return this->warning_ != nullptr;};
          void deleteWarning() { this->warning_ = nullptr;};
          inline const vector<string> & getWarning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
          inline vector<string> getWarning() { DARABONBA_PTR_GET(warning_, vector<string>) };
          inline RuleCheck& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
          inline RuleCheck& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


        protected:
          shared_ptr<vector<string>> error_ {};
          shared_ptr<bool> strict_ {};
          shared_ptr<string> text_ {};
          shared_ptr<vector<string>> warning_ {};
        };

        virtual bool empty() const override { return this->alias_ == nullptr
        && this->botId_ == nullptr && this->botName_ == nullptr && this->dialogId_ == nullptr && this->id_ == nullptr && this->language_ == nullptr
        && this->name_ == nullptr && this->ruleCheck_ == nullptr && this->slot_ == nullptr && this->tableId_ == nullptr && this->type_ == nullptr
        && this->userSay_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline const vector<string> & getAlias() const { DARABONBA_PTR_GET_CONST(alias_, vector<string>) };
        inline vector<string> getAlias() { DARABONBA_PTR_GET(alias_, vector<string>) };
        inline IntentList& setAlias(const vector<string> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
        inline IntentList& setAlias(vector<string> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


        // botId Field Functions 
        bool hasBotId() const { return this->botId_ != nullptr;};
        void deleteBotId() { this->botId_ = nullptr;};
        inline int64_t getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, 0L) };
        inline IntentList& setBotId(int64_t botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


        // botName Field Functions 
        bool hasBotName() const { return this->botName_ != nullptr;};
        void deleteBotName() { this->botName_ = nullptr;};
        inline string getBotName() const { DARABONBA_PTR_GET_DEFAULT(botName_, "") };
        inline IntentList& setBotName(string botName) { DARABONBA_PTR_SET_VALUE(botName_, botName) };


        // dialogId Field Functions 
        bool hasDialogId() const { return this->dialogId_ != nullptr;};
        void deleteDialogId() { this->dialogId_ = nullptr;};
        inline string getDialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, "") };
        inline IntentList& setDialogId(string dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline IntentList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline IntentList& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IntentList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleCheck Field Functions 
        bool hasRuleCheck() const { return this->ruleCheck_ != nullptr;};
        void deleteRuleCheck() { this->ruleCheck_ = nullptr;};
        inline const vector<IntentList::RuleCheck> & getRuleCheck() const { DARABONBA_PTR_GET_CONST(ruleCheck_, vector<IntentList::RuleCheck>) };
        inline vector<IntentList::RuleCheck> getRuleCheck() { DARABONBA_PTR_GET(ruleCheck_, vector<IntentList::RuleCheck>) };
        inline IntentList& setRuleCheck(const vector<IntentList::RuleCheck> & ruleCheck) { DARABONBA_PTR_SET_VALUE(ruleCheck_, ruleCheck) };
        inline IntentList& setRuleCheck(vector<IntentList::RuleCheck> && ruleCheck) { DARABONBA_PTR_SET_RVALUE(ruleCheck_, ruleCheck) };


        // slot Field Functions 
        bool hasSlot() const { return this->slot_ != nullptr;};
        void deleteSlot() { this->slot_ = nullptr;};
        inline const vector<IntentList::Slot> & getSlot() const { DARABONBA_PTR_GET_CONST(slot_, vector<IntentList::Slot>) };
        inline vector<IntentList::Slot> getSlot() { DARABONBA_PTR_GET(slot_, vector<IntentList::Slot>) };
        inline IntentList& setSlot(const vector<IntentList::Slot> & slot) { DARABONBA_PTR_SET_VALUE(slot_, slot) };
        inline IntentList& setSlot(vector<IntentList::Slot> && slot) { DARABONBA_PTR_SET_RVALUE(slot_, slot) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
        inline IntentList& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline IntentList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userSay Field Functions 
        bool hasUserSay() const { return this->userSay_ != nullptr;};
        void deleteUserSay() { this->userSay_ = nullptr;};
        inline const vector<IntentList::UserSay> & getUserSay() const { DARABONBA_PTR_GET_CONST(userSay_, vector<IntentList::UserSay>) };
        inline vector<IntentList::UserSay> getUserSay() { DARABONBA_PTR_GET(userSay_, vector<IntentList::UserSay>) };
        inline IntentList& setUserSay(const vector<IntentList::UserSay> & userSay) { DARABONBA_PTR_SET_VALUE(userSay_, userSay) };
        inline IntentList& setUserSay(vector<IntentList::UserSay> && userSay) { DARABONBA_PTR_SET_RVALUE(userSay_, userSay) };


      protected:
        shared_ptr<vector<string>> alias_ {};
        shared_ptr<int64_t> botId_ {};
        shared_ptr<string> botName_ {};
        shared_ptr<string> dialogId_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> language_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<IntentList::RuleCheck>> ruleCheck_ {};
        shared_ptr<vector<IntentList::Slot>> slot_ {};
        shared_ptr<int64_t> tableId_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<vector<IntentList::UserSay>> userSay_ {};
      };

      virtual bool empty() const override { return this->botId_ == nullptr
        && this->intentList_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
      // botId Field Functions 
      bool hasBotId() const { return this->botId_ != nullptr;};
      void deleteBotId() { this->botId_ = nullptr;};
      inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
      inline Data& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


      // intentList Field Functions 
      bool hasIntentList() const { return this->intentList_ != nullptr;};
      void deleteIntentList() { this->intentList_ = nullptr;};
      inline const vector<Data::IntentList> & getIntentList() const { DARABONBA_PTR_GET_CONST(intentList_, vector<Data::IntentList>) };
      inline vector<Data::IntentList> getIntentList() { DARABONBA_PTR_GET(intentList_, vector<Data::IntentList>) };
      inline Data& setIntentList(const vector<Data::IntentList> & intentList) { DARABONBA_PTR_SET_VALUE(intentList_, intentList) };
      inline Data& setIntentList(vector<Data::IntentList> && intentList) { DARABONBA_PTR_SET_RVALUE(intentList_, intentList) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> botId_ {};
      shared_ptr<vector<Data::IntentList>> intentList_ {};
      shared_ptr<string> message_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIntentionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIntentionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIntentionsResponseBody::Data) };
    inline ListIntentionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIntentionsResponseBody::Data) };
    inline ListIntentionsResponseBody& setData(const ListIntentionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIntentionsResponseBody& setData(ListIntentionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIntentionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntentionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntentionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIntentionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListIntentionsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
