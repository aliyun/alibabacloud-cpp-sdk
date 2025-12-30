// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertNotificationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ListResult, listResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ListResult, listResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAlertNotificationsResponseBody() = default ;
    ListAlertNotificationsResponseBody(const ListAlertNotificationsResponseBody &) = default ;
    ListAlertNotificationsResponseBody(ListAlertNotificationsResponseBody &&) = default ;
    ListAlertNotificationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsResponseBody() = default ;
    ListAlertNotificationsResponseBody& operator=(const ListAlertNotificationsResponseBody &) = default ;
    ListAlertNotificationsResponseBody& operator=(ListAlertNotificationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListResult() = default ;
      ListResult(const ListResult &) = default ;
      ListResult(ListResult &&) = default ;
      ListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListResult() = default ;
      ListResult& operator=(const ListResult &) = default ;
      ListResult& operator=(ListResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(AlertEventId, alertEventId_);
          DARABONBA_PTR_TO_JSON(AlertObject, alertObject_);
          DARABONBA_PTR_TO_JSON(AlertReason, alertReason_);
          DARABONBA_PTR_TO_JSON(AlertReceiver, alertReceiver_);
          DARABONBA_PTR_TO_JSON(AlertSend, alertSend_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertEventId, alertEventId_);
          DARABONBA_PTR_FROM_JSON(AlertObject, alertObject_);
          DARABONBA_PTR_FROM_JSON(AlertReason, alertReason_);
          DARABONBA_PTR_FROM_JSON(AlertReceiver, alertReceiver_);
          DARABONBA_PTR_FROM_JSON(AlertSend, alertSend_);
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
        class AlertSend : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertSend& obj) { 
            DARABONBA_PTR_TO_JSON(FailReason, failReason_);
            DARABONBA_PTR_TO_JSON(SendContent, sendContent_);
            DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, AlertSend& obj) { 
            DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
            DARABONBA_PTR_FROM_JSON(SendContent, sendContent_);
            DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          AlertSend() = default ;
          AlertSend(const AlertSend &) = default ;
          AlertSend(AlertSend &&) = default ;
          AlertSend(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertSend() = default ;
          AlertSend& operator=(const AlertSend &) = default ;
          AlertSend& operator=(AlertSend &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->failReason_ == nullptr
        && this->sendContent_ == nullptr && this->sendTime_ == nullptr && this->status_ == nullptr; };
          // failReason Field Functions 
          bool hasFailReason() const { return this->failReason_ != nullptr;};
          void deleteFailReason() { this->failReason_ = nullptr;};
          inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
          inline AlertSend& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


          // sendContent Field Functions 
          bool hasSendContent() const { return this->sendContent_ != nullptr;};
          void deleteSendContent() { this->sendContent_ = nullptr;};
          inline string getSendContent() const { DARABONBA_PTR_GET_DEFAULT(sendContent_, "") };
          inline AlertSend& setSendContent(string sendContent) { DARABONBA_PTR_SET_VALUE(sendContent_, sendContent) };


          // sendTime Field Functions 
          bool hasSendTime() const { return this->sendTime_ != nullptr;};
          void deleteSendTime() { this->sendTime_ = nullptr;};
          inline string getSendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, "") };
          inline AlertSend& setSendTime(string sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline AlertSend& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> failReason_ {};
          shared_ptr<string> sendContent_ {};
          shared_ptr<string> sendTime_ {};
          shared_ptr<string> status_ {};
        };

        class AlertReceiver : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertReceiver& obj) { 
            DARABONBA_PTR_TO_JSON(AlertChannelType, alertChannelType_);
            DARABONBA_PTR_TO_JSON(CustomAlertChannelId, customAlertChannelId_);
            DARABONBA_PTR_TO_JSON(OnCallTableId, onCallTableId_);
            DARABONBA_PTR_TO_JSON(OnCallTableName, onCallTableName_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(User, user_);
          };
          friend void from_json(const Darabonba::Json& j, AlertReceiver& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertChannelType, alertChannelType_);
            DARABONBA_PTR_FROM_JSON(CustomAlertChannelId, customAlertChannelId_);
            DARABONBA_PTR_FROM_JSON(OnCallTableId, onCallTableId_);
            DARABONBA_PTR_FROM_JSON(OnCallTableName, onCallTableName_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(User, user_);
          };
          AlertReceiver() = default ;
          AlertReceiver(const AlertReceiver &) = default ;
          AlertReceiver(AlertReceiver &&) = default ;
          AlertReceiver(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertReceiver() = default ;
          AlertReceiver& operator=(const AlertReceiver &) = default ;
          AlertReceiver& operator=(AlertReceiver &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class User : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const User& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, User& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            User() = default ;
            User(const User &) = default ;
            User(User &&) = default ;
            User(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~User() = default ;
            User& operator=(const User &) = default ;
            User& operator=(User &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline User& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->alertChannelType_ == nullptr
        && this->customAlertChannelId_ == nullptr && this->onCallTableId_ == nullptr && this->onCallTableName_ == nullptr && this->type_ == nullptr && this->user_ == nullptr; };
          // alertChannelType Field Functions 
          bool hasAlertChannelType() const { return this->alertChannelType_ != nullptr;};
          void deleteAlertChannelType() { this->alertChannelType_ = nullptr;};
          inline string getAlertChannelType() const { DARABONBA_PTR_GET_DEFAULT(alertChannelType_, "") };
          inline AlertReceiver& setAlertChannelType(string alertChannelType) { DARABONBA_PTR_SET_VALUE(alertChannelType_, alertChannelType) };


          // customAlertChannelId Field Functions 
          bool hasCustomAlertChannelId() const { return this->customAlertChannelId_ != nullptr;};
          void deleteCustomAlertChannelId() { this->customAlertChannelId_ = nullptr;};
          inline string getCustomAlertChannelId() const { DARABONBA_PTR_GET_DEFAULT(customAlertChannelId_, "") };
          inline AlertReceiver& setCustomAlertChannelId(string customAlertChannelId) { DARABONBA_PTR_SET_VALUE(customAlertChannelId_, customAlertChannelId) };


          // onCallTableId Field Functions 
          bool hasOnCallTableId() const { return this->onCallTableId_ != nullptr;};
          void deleteOnCallTableId() { this->onCallTableId_ = nullptr;};
          inline string getOnCallTableId() const { DARABONBA_PTR_GET_DEFAULT(onCallTableId_, "") };
          inline AlertReceiver& setOnCallTableId(string onCallTableId) { DARABONBA_PTR_SET_VALUE(onCallTableId_, onCallTableId) };


          // onCallTableName Field Functions 
          bool hasOnCallTableName() const { return this->onCallTableName_ != nullptr;};
          void deleteOnCallTableName() { this->onCallTableName_ = nullptr;};
          inline string getOnCallTableName() const { DARABONBA_PTR_GET_DEFAULT(onCallTableName_, "") };
          inline AlertReceiver& setOnCallTableName(string onCallTableName) { DARABONBA_PTR_SET_VALUE(onCallTableName_, onCallTableName) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline AlertReceiver& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // user Field Functions 
          bool hasUser() const { return this->user_ != nullptr;};
          void deleteUser() { this->user_ = nullptr;};
          inline const AlertReceiver::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, AlertReceiver::User) };
          inline AlertReceiver::User getUser() { DARABONBA_PTR_GET(user_, AlertReceiver::User) };
          inline AlertReceiver& setUser(const AlertReceiver::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
          inline AlertReceiver& setUser(AlertReceiver::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


        protected:
          shared_ptr<string> alertChannelType_ {};
          shared_ptr<string> customAlertChannelId_ {};
          shared_ptr<string> onCallTableId_ {};
          shared_ptr<string> onCallTableName_ {};
          shared_ptr<string> type_ {};
          shared_ptr<AlertReceiver::User> user_ {};
        };

        class AlertReason : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertReason& obj) { 
            DARABONBA_PTR_TO_JSON(AlertReasonParamList, alertReasonParamList_);
            DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(UniqueKey, uniqueKey_);
          };
          friend void from_json(const Darabonba::Json& j, AlertReason& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertReasonParamList, alertReasonParamList_);
            DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(UniqueKey, uniqueKey_);
          };
          AlertReason() = default ;
          AlertReason(const AlertReason &) = default ;
          AlertReason(AlertReason &&) = default ;
          AlertReason(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertReason() = default ;
          AlertReason& operator=(const AlertReason &) = default ;
          AlertReason& operator=(AlertReason &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AlertReasonParamList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AlertReasonParamList& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AlertReasonParamList& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AlertReasonParamList() = default ;
            AlertReasonParamList(const AlertReasonParamList &) = default ;
            AlertReasonParamList(AlertReasonParamList &&) = default ;
            AlertReasonParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AlertReasonParamList() = default ;
            AlertReasonParamList& operator=(const AlertReasonParamList &) = default ;
            AlertReasonParamList& operator=(AlertReasonParamList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline AlertReasonParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline AlertReasonParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->alertReasonParamList_ == nullptr
        && this->bizDate_ == nullptr && this->type_ == nullptr && this->uniqueKey_ == nullptr; };
          // alertReasonParamList Field Functions 
          bool hasAlertReasonParamList() const { return this->alertReasonParamList_ != nullptr;};
          void deleteAlertReasonParamList() { this->alertReasonParamList_ = nullptr;};
          inline const vector<AlertReason::AlertReasonParamList> & getAlertReasonParamList() const { DARABONBA_PTR_GET_CONST(alertReasonParamList_, vector<AlertReason::AlertReasonParamList>) };
          inline vector<AlertReason::AlertReasonParamList> getAlertReasonParamList() { DARABONBA_PTR_GET(alertReasonParamList_, vector<AlertReason::AlertReasonParamList>) };
          inline AlertReason& setAlertReasonParamList(const vector<AlertReason::AlertReasonParamList> & alertReasonParamList) { DARABONBA_PTR_SET_VALUE(alertReasonParamList_, alertReasonParamList) };
          inline AlertReason& setAlertReasonParamList(vector<AlertReason::AlertReasonParamList> && alertReasonParamList) { DARABONBA_PTR_SET_RVALUE(alertReasonParamList_, alertReasonParamList) };


          // bizDate Field Functions 
          bool hasBizDate() const { return this->bizDate_ != nullptr;};
          void deleteBizDate() { this->bizDate_ = nullptr;};
          inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
          inline AlertReason& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline AlertReason& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // uniqueKey Field Functions 
          bool hasUniqueKey() const { return this->uniqueKey_ != nullptr;};
          void deleteUniqueKey() { this->uniqueKey_ = nullptr;};
          inline string getUniqueKey() const { DARABONBA_PTR_GET_DEFAULT(uniqueKey_, "") };
          inline AlertReason& setUniqueKey(string uniqueKey) { DARABONBA_PTR_SET_VALUE(uniqueKey_, uniqueKey) };


        protected:
          shared_ptr<vector<AlertReason::AlertReasonParamList>> alertReasonParamList_ {};
          shared_ptr<string> bizDate_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> uniqueKey_ {};
        };

        class AlertObject : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertObject& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(SourceSystemType, sourceSystemType_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, AlertObject& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(SourceSystemType, sourceSystemType_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          AlertObject() = default ;
          AlertObject(const AlertObject &) = default ;
          AlertObject(AlertObject &&) = default ;
          AlertObject(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertObject() = default ;
          AlertObject& operator=(const AlertObject &) = default ;
          AlertObject& operator=(AlertObject &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->sourceSystemType_ == nullptr && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AlertObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // sourceSystemType Field Functions 
          bool hasSourceSystemType() const { return this->sourceSystemType_ != nullptr;};
          void deleteSourceSystemType() { this->sourceSystemType_ = nullptr;};
          inline string getSourceSystemType() const { DARABONBA_PTR_GET_DEFAULT(sourceSystemType_, "") };
          inline AlertObject& setSourceSystemType(string sourceSystemType) { DARABONBA_PTR_SET_VALUE(sourceSystemType_, sourceSystemType) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline AlertObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> sourceSystemType_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->alertEventId_ == nullptr
        && this->alertObject_ == nullptr && this->alertReason_ == nullptr && this->alertReceiver_ == nullptr && this->alertSend_ == nullptr; };
        // alertEventId Field Functions 
        bool hasAlertEventId() const { return this->alertEventId_ != nullptr;};
        void deleteAlertEventId() { this->alertEventId_ = nullptr;};
        inline string getAlertEventId() const { DARABONBA_PTR_GET_DEFAULT(alertEventId_, "") };
        inline Data& setAlertEventId(string alertEventId) { DARABONBA_PTR_SET_VALUE(alertEventId_, alertEventId) };


        // alertObject Field Functions 
        bool hasAlertObject() const { return this->alertObject_ != nullptr;};
        void deleteAlertObject() { this->alertObject_ = nullptr;};
        inline const Data::AlertObject & getAlertObject() const { DARABONBA_PTR_GET_CONST(alertObject_, Data::AlertObject) };
        inline Data::AlertObject getAlertObject() { DARABONBA_PTR_GET(alertObject_, Data::AlertObject) };
        inline Data& setAlertObject(const Data::AlertObject & alertObject) { DARABONBA_PTR_SET_VALUE(alertObject_, alertObject) };
        inline Data& setAlertObject(Data::AlertObject && alertObject) { DARABONBA_PTR_SET_RVALUE(alertObject_, alertObject) };


        // alertReason Field Functions 
        bool hasAlertReason() const { return this->alertReason_ != nullptr;};
        void deleteAlertReason() { this->alertReason_ = nullptr;};
        inline const Data::AlertReason & getAlertReason() const { DARABONBA_PTR_GET_CONST(alertReason_, Data::AlertReason) };
        inline Data::AlertReason getAlertReason() { DARABONBA_PTR_GET(alertReason_, Data::AlertReason) };
        inline Data& setAlertReason(const Data::AlertReason & alertReason) { DARABONBA_PTR_SET_VALUE(alertReason_, alertReason) };
        inline Data& setAlertReason(Data::AlertReason && alertReason) { DARABONBA_PTR_SET_RVALUE(alertReason_, alertReason) };


        // alertReceiver Field Functions 
        bool hasAlertReceiver() const { return this->alertReceiver_ != nullptr;};
        void deleteAlertReceiver() { this->alertReceiver_ = nullptr;};
        inline const Data::AlertReceiver & getAlertReceiver() const { DARABONBA_PTR_GET_CONST(alertReceiver_, Data::AlertReceiver) };
        inline Data::AlertReceiver getAlertReceiver() { DARABONBA_PTR_GET(alertReceiver_, Data::AlertReceiver) };
        inline Data& setAlertReceiver(const Data::AlertReceiver & alertReceiver) { DARABONBA_PTR_SET_VALUE(alertReceiver_, alertReceiver) };
        inline Data& setAlertReceiver(Data::AlertReceiver && alertReceiver) { DARABONBA_PTR_SET_RVALUE(alertReceiver_, alertReceiver) };


        // alertSend Field Functions 
        bool hasAlertSend() const { return this->alertSend_ != nullptr;};
        void deleteAlertSend() { this->alertSend_ = nullptr;};
        inline const Data::AlertSend & getAlertSend() const { DARABONBA_PTR_GET_CONST(alertSend_, Data::AlertSend) };
        inline Data::AlertSend getAlertSend() { DARABONBA_PTR_GET(alertSend_, Data::AlertSend) };
        inline Data& setAlertSend(const Data::AlertSend & alertSend) { DARABONBA_PTR_SET_VALUE(alertSend_, alertSend) };
        inline Data& setAlertSend(Data::AlertSend && alertSend) { DARABONBA_PTR_SET_RVALUE(alertSend_, alertSend) };


      protected:
        shared_ptr<string> alertEventId_ {};
        shared_ptr<Data::AlertObject> alertObject_ {};
        shared_ptr<Data::AlertReason> alertReason_ {};
        shared_ptr<Data::AlertReceiver> alertReceiver_ {};
        shared_ptr<Data::AlertSend> alertSend_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<ListResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListResult::Data>) };
      inline vector<ListResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListResult::Data>) };
      inline ListResult& setData(const vector<ListResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ListResult& setData(vector<ListResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ListResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<ListResult::Data>> data_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->listResult_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAlertNotificationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAlertNotificationsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // listResult Field Functions 
    bool hasListResult() const { return this->listResult_ != nullptr;};
    void deleteListResult() { this->listResult_ = nullptr;};
    inline const ListAlertNotificationsResponseBody::ListResult & getListResult() const { DARABONBA_PTR_GET_CONST(listResult_, ListAlertNotificationsResponseBody::ListResult) };
    inline ListAlertNotificationsResponseBody::ListResult getListResult() { DARABONBA_PTR_GET(listResult_, ListAlertNotificationsResponseBody::ListResult) };
    inline ListAlertNotificationsResponseBody& setListResult(const ListAlertNotificationsResponseBody::ListResult & listResult) { DARABONBA_PTR_SET_VALUE(listResult_, listResult) };
    inline ListAlertNotificationsResponseBody& setListResult(ListAlertNotificationsResponseBody::ListResult && listResult) { DARABONBA_PTR_SET_RVALUE(listResult_, listResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAlertNotificationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertNotificationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAlertNotificationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<ListAlertNotificationsResponseBody::ListResult> listResult_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
