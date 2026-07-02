// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINEFFECTQUTHORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINEFFECTQUTHORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
namespace Models
{
  class QueryInEffectQuthOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInEffectQuthOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInEffectQuthOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryInEffectQuthOrderResponseBody() = default ;
    QueryInEffectQuthOrderResponseBody(const QueryInEffectQuthOrderResponseBody &) = default ;
    QueryInEffectQuthOrderResponseBody(QueryInEffectQuthOrderResponseBody &&) = default ;
    QueryInEffectQuthOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInEffectQuthOrderResponseBody() = default ;
    QueryInEffectQuthOrderResponseBody& operator=(const QueryInEffectQuthOrderResponseBody &) = default ;
    QueryInEffectQuthOrderResponseBody& operator=(QueryInEffectQuthOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AuthItemRecordGroupItemDTOS, authItemRecordGroupItemDTOS_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_TO_JSON(OperateTimes, operateTimes_);
          DARABONBA_PTR_TO_JSON(OrderVid, orderVid_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthItemRecordGroupItemDTOS, authItemRecordGroupItemDTOS_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_FROM_JSON(OperateTimes, operateTimes_);
          DARABONBA_PTR_FROM_JSON(OrderVid, orderVid_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OperateTimes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperateTimes& obj) { 
            DARABONBA_PTR_TO_JSON(End, end_);
            DARABONBA_PTR_TO_JSON(Start, start_);
          };
          friend void from_json(const Darabonba::Json& j, OperateTimes& obj) { 
            DARABONBA_PTR_FROM_JSON(End, end_);
            DARABONBA_PTR_FROM_JSON(Start, start_);
          };
          OperateTimes() = default ;
          OperateTimes(const OperateTimes &) = default ;
          OperateTimes(OperateTimes &&) = default ;
          OperateTimes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperateTimes() = default ;
          OperateTimes& operator=(const OperateTimes &) = default ;
          OperateTimes& operator=(OperateTimes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
          inline OperateTimes& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


          // start Field Functions 
          bool hasStart() const { return this->start_ != nullptr;};
          void deleteStart() { this->start_ = nullptr;};
          inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
          inline OperateTimes& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


        protected:
          shared_ptr<string> end_ {};
          shared_ptr<string> start_ {};
        };

        class AuthItemRecordGroupItemDTOS : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthItemRecordGroupItemDTOS& obj) { 
            DARABONBA_PTR_TO_JSON(AuthitemID, authitemID_);
            DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_TO_JSON(Msg, msg_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RemarkDataJson, remarkDataJson_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Vid, vid_);
          };
          friend void from_json(const Darabonba::Json& j, AuthItemRecordGroupItemDTOS& obj) { 
            DARABONBA_PTR_FROM_JSON(AuthitemID, authitemID_);
            DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_FROM_JSON(Msg, msg_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RemarkDataJson, remarkDataJson_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Vid, vid_);
          };
          AuthItemRecordGroupItemDTOS() = default ;
          AuthItemRecordGroupItemDTOS(const AuthItemRecordGroupItemDTOS &) = default ;
          AuthItemRecordGroupItemDTOS(AuthItemRecordGroupItemDTOS &&) = default ;
          AuthItemRecordGroupItemDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthItemRecordGroupItemDTOS() = default ;
          AuthItemRecordGroupItemDTOS& operator=(const AuthItemRecordGroupItemDTOS &) = default ;
          AuthItemRecordGroupItemDTOS& operator=(AuthItemRecordGroupItemDTOS &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->authitemID_ == nullptr
        && this->gmtCreated_ == nullptr && this->msg_ == nullptr && this->name_ == nullptr && this->remarkDataJson_ == nullptr && this->status_ == nullptr
        && this->vid_ == nullptr; };
          // authitemID Field Functions 
          bool hasAuthitemID() const { return this->authitemID_ != nullptr;};
          void deleteAuthitemID() { this->authitemID_ = nullptr;};
          inline string getAuthitemID() const { DARABONBA_PTR_GET_DEFAULT(authitemID_, "") };
          inline AuthItemRecordGroupItemDTOS& setAuthitemID(string authitemID) { DARABONBA_PTR_SET_VALUE(authitemID_, authitemID) };


          // gmtCreated Field Functions 
          bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
          void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
          inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
          inline AuthItemRecordGroupItemDTOS& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


          // msg Field Functions 
          bool hasMsg() const { return this->msg_ != nullptr;};
          void deleteMsg() { this->msg_ = nullptr;};
          inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
          inline AuthItemRecordGroupItemDTOS& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AuthItemRecordGroupItemDTOS& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // remarkDataJson Field Functions 
          bool hasRemarkDataJson() const { return this->remarkDataJson_ != nullptr;};
          void deleteRemarkDataJson() { this->remarkDataJson_ = nullptr;};
          inline string getRemarkDataJson() const { DARABONBA_PTR_GET_DEFAULT(remarkDataJson_, "") };
          inline AuthItemRecordGroupItemDTOS& setRemarkDataJson(string remarkDataJson) { DARABONBA_PTR_SET_VALUE(remarkDataJson_, remarkDataJson) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline AuthItemRecordGroupItemDTOS& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // vid Field Functions 
          bool hasVid() const { return this->vid_ != nullptr;};
          void deleteVid() { this->vid_ = nullptr;};
          inline string getVid() const { DARABONBA_PTR_GET_DEFAULT(vid_, "") };
          inline AuthItemRecordGroupItemDTOS& setVid(string vid) { DARABONBA_PTR_SET_VALUE(vid_, vid) };


        protected:
          shared_ptr<string> authitemID_ {};
          shared_ptr<string> gmtCreated_ {};
          shared_ptr<string> msg_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> remarkDataJson_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> vid_ {};
        };

        virtual bool empty() const override { return this->authItemRecordGroupItemDTOS_ == nullptr
        && this->createdTime_ == nullptr && this->lastModifyTime_ == nullptr && this->operateTimes_ == nullptr && this->orderVid_ == nullptr && this->status_ == nullptr; };
        // authItemRecordGroupItemDTOS Field Functions 
        bool hasAuthItemRecordGroupItemDTOS() const { return this->authItemRecordGroupItemDTOS_ != nullptr;};
        void deleteAuthItemRecordGroupItemDTOS() { this->authItemRecordGroupItemDTOS_ = nullptr;};
        inline const vector<List::AuthItemRecordGroupItemDTOS> & getAuthItemRecordGroupItemDTOS() const { DARABONBA_PTR_GET_CONST(authItemRecordGroupItemDTOS_, vector<List::AuthItemRecordGroupItemDTOS>) };
        inline vector<List::AuthItemRecordGroupItemDTOS> getAuthItemRecordGroupItemDTOS() { DARABONBA_PTR_GET(authItemRecordGroupItemDTOS_, vector<List::AuthItemRecordGroupItemDTOS>) };
        inline List& setAuthItemRecordGroupItemDTOS(const vector<List::AuthItemRecordGroupItemDTOS> & authItemRecordGroupItemDTOS) { DARABONBA_PTR_SET_VALUE(authItemRecordGroupItemDTOS_, authItemRecordGroupItemDTOS) };
        inline List& setAuthItemRecordGroupItemDTOS(vector<List::AuthItemRecordGroupItemDTOS> && authItemRecordGroupItemDTOS) { DARABONBA_PTR_SET_RVALUE(authItemRecordGroupItemDTOS_, authItemRecordGroupItemDTOS) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline List& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // lastModifyTime Field Functions 
        bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
        void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
        inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
        inline List& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


        // operateTimes Field Functions 
        bool hasOperateTimes() const { return this->operateTimes_ != nullptr;};
        void deleteOperateTimes() { this->operateTimes_ = nullptr;};
        inline const vector<List::OperateTimes> & getOperateTimes() const { DARABONBA_PTR_GET_CONST(operateTimes_, vector<List::OperateTimes>) };
        inline vector<List::OperateTimes> getOperateTimes() { DARABONBA_PTR_GET(operateTimes_, vector<List::OperateTimes>) };
        inline List& setOperateTimes(const vector<List::OperateTimes> & operateTimes) { DARABONBA_PTR_SET_VALUE(operateTimes_, operateTimes) };
        inline List& setOperateTimes(vector<List::OperateTimes> && operateTimes) { DARABONBA_PTR_SET_RVALUE(operateTimes_, operateTimes) };


        // orderVid Field Functions 
        bool hasOrderVid() const { return this->orderVid_ != nullptr;};
        void deleteOrderVid() { this->orderVid_ = nullptr;};
        inline string getOrderVid() const { DARABONBA_PTR_GET_DEFAULT(orderVid_, "") };
        inline List& setOrderVid(string orderVid) { DARABONBA_PTR_SET_VALUE(orderVid_, orderVid) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<vector<List::AuthItemRecordGroupItemDTOS>> authItemRecordGroupItemDTOS_ {};
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> lastModifyTime_ {};
        shared_ptr<vector<List::OperateTimes>> operateTimes_ {};
        shared_ptr<string> orderVid_ {};
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->list_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryInEffectQuthOrderResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryInEffectQuthOrderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryInEffectQuthOrderResponseBody::Data) };
    inline QueryInEffectQuthOrderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryInEffectQuthOrderResponseBody::Data) };
    inline QueryInEffectQuthOrderResponseBody& setData(const QueryInEffectQuthOrderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInEffectQuthOrderResponseBody& setData(QueryInEffectQuthOrderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryInEffectQuthOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInEffectQuthOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryInEffectQuthOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<QueryInEffectQuthOrderResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif
