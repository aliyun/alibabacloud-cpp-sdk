// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDISPOSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEventDisposeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDisposeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDisposeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEventDisposeResponseBody() = default ;
    DescribeEventDisposeResponseBody(const DescribeEventDisposeResponseBody &) = default ;
    DescribeEventDisposeResponseBody(DescribeEventDisposeResponseBody &&) = default ;
    DescribeEventDisposeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDisposeResponseBody() = default ;
    DescribeEventDisposeResponseBody& operator=(const DescribeEventDisposeResponseBody &) = default ;
    DescribeEventDisposeResponseBody& operator=(DescribeEventDisposeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventDispose, eventDispose_);
        DARABONBA_PTR_TO_JSON(ReceiverInfo, receiverInfo_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventDispose, eventDispose_);
        DARABONBA_PTR_FROM_JSON(ReceiverInfo, receiverInfo_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class ReceiverInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReceiverInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Channel, channel_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_TO_JSON(MessageTitle, messageTitle_);
          DARABONBA_PTR_TO_JSON(Receiver, receiver_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ReceiverInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Channel, channel_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_FROM_JSON(MessageTitle, messageTitle_);
          DARABONBA_PTR_FROM_JSON(Receiver, receiver_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ReceiverInfo() = default ;
        ReceiverInfo(const ReceiverInfo &) = default ;
        ReceiverInfo(ReceiverInfo &&) = default ;
        ReceiverInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReceiverInfo() = default ;
        ReceiverInfo& operator=(const ReceiverInfo &) = default ;
        ReceiverInfo& operator=(ReceiverInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channel_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->incidentUuid_ == nullptr && this->messageTitle_ == nullptr
        && this->receiver_ == nullptr && this->status_ == nullptr; };
        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline ReceiverInfo& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ReceiverInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ReceiverInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ReceiverInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // incidentUuid Field Functions 
        bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
        void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
        inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
        inline ReceiverInfo& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


        // messageTitle Field Functions 
        bool hasMessageTitle() const { return this->messageTitle_ != nullptr;};
        void deleteMessageTitle() { this->messageTitle_ = nullptr;};
        inline string getMessageTitle() const { DARABONBA_PTR_GET_DEFAULT(messageTitle_, "") };
        inline ReceiverInfo& setMessageTitle(string messageTitle) { DARABONBA_PTR_SET_VALUE(messageTitle_, messageTitle) };


        // receiver Field Functions 
        bool hasReceiver() const { return this->receiver_ != nullptr;};
        void deleteReceiver() { this->receiver_ = nullptr;};
        inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
        inline ReceiverInfo& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ReceiverInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The channel of the contact information. Valid values:
        // 
        // *   message
        // *   mail
        shared_ptr<string> channel_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The ID of the recipient who receives the event handling result.
        shared_ptr<int64_t> id_ {};
        // The UUID of the event.
        shared_ptr<string> incidentUuid_ {};
        // The message title.
        shared_ptr<string> messageTitle_ {};
        // The contact information of the recipient.
        shared_ptr<string> receiver_ {};
        // Indicates whether the message is sent. Valid values:
        // 
        // *   0: not sent
        // *   1: sent
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->eventDispose_ == nullptr
        && this->receiverInfo_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr; };
      // eventDispose Field Functions 
      bool hasEventDispose() const { return this->eventDispose_ != nullptr;};
      void deleteEventDispose() { this->eventDispose_ = nullptr;};
      inline const vector<Darabonba::Json> & getEventDispose() const { DARABONBA_PTR_GET_CONST(eventDispose_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getEventDispose() { DARABONBA_PTR_GET(eventDispose_, vector<Darabonba::Json>) };
      inline Data& setEventDispose(const vector<Darabonba::Json> & eventDispose) { DARABONBA_PTR_SET_VALUE(eventDispose_, eventDispose) };
      inline Data& setEventDispose(vector<Darabonba::Json> && eventDispose) { DARABONBA_PTR_SET_RVALUE(eventDispose_, eventDispose) };


      // receiverInfo Field Functions 
      bool hasReceiverInfo() const { return this->receiverInfo_ != nullptr;};
      void deleteReceiverInfo() { this->receiverInfo_ = nullptr;};
      inline const Data::ReceiverInfo & getReceiverInfo() const { DARABONBA_PTR_GET_CONST(receiverInfo_, Data::ReceiverInfo) };
      inline Data::ReceiverInfo getReceiverInfo() { DARABONBA_PTR_GET(receiverInfo_, Data::ReceiverInfo) };
      inline Data& setReceiverInfo(const Data::ReceiverInfo & receiverInfo) { DARABONBA_PTR_SET_VALUE(receiverInfo_, receiverInfo) };
      inline Data& setReceiverInfo(Data::ReceiverInfo && receiverInfo) { DARABONBA_PTR_SET_RVALUE(receiverInfo_, receiverInfo) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // An array consisting of JSON objects that are configured for event handling.
      shared_ptr<vector<Darabonba::Json>> eventDispose_ {};
      // The JSON object that is configured for an alert recipient.
      shared_ptr<Data::ReceiverInfo> receiverInfo_ {};
      // The description of the event.
      shared_ptr<string> remark_ {};
      // The status of the event. Valid values:
      // 
      // *   0: not handled
      // *   1: handing
      // *   5: handling failed
      // *   10: handled
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEventDisposeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEventDisposeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEventDisposeResponseBody::Data) };
    inline DescribeEventDisposeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEventDisposeResponseBody::Data) };
    inline DescribeEventDisposeResponseBody& setData(const DescribeEventDisposeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEventDisposeResponseBody& setData(DescribeEventDisposeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventDisposeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventDisposeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEventDisposeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeEventDisposeResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
