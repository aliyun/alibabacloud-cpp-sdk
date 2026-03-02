// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACKINFOBYINTERVALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACKINFOBYINTERVALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetAckInfoByIntervalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAckInfoByIntervalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAckInfoByIntervalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAckInfoByIntervalResponseBody() = default ;
    GetAckInfoByIntervalResponseBody(const GetAckInfoByIntervalResponseBody &) = default ;
    GetAckInfoByIntervalResponseBody(GetAckInfoByIntervalResponseBody &&) = default ;
    GetAckInfoByIntervalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAckInfoByIntervalResponseBody() = default ;
    GetAckInfoByIntervalResponseBody& operator=(const GetAckInfoByIntervalResponseBody &) = default ;
    GetAckInfoByIntervalResponseBody& operator=(GetAckInfoByIntervalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(VoList, voList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoList, voList_);
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
      class VoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoList& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
          DARABONBA_PTR_TO_JSON(DeliveryTag, deliveryTag_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(RocketMqMsgId, rocketMqMsgId_);
          DARABONBA_PTR_TO_JSON(Rt, rt_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
          DARABONBA_PTR_FROM_JSON(DeliveryTag, deliveryTag_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(RocketMqMsgId, rocketMqMsgId_);
          DARABONBA_PTR_FROM_JSON(Rt, rt_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        VoList() = default ;
        VoList(const VoList &) = default ;
        VoList(VoList &&) = default ;
        VoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoList() = default ;
        VoList& operator=(const VoList &) = default ;
        VoList& operator=(VoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->channelId_ == nullptr && this->connectionId_ == nullptr && this->deliveryTag_ == nullptr && this->queueName_ == nullptr && this->rocketMqMsgId_ == nullptr
        && this->rt_ == nullptr && this->timeStamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline VoList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline VoList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // connectionId Field Functions 
        bool hasConnectionId() const { return this->connectionId_ != nullptr;};
        void deleteConnectionId() { this->connectionId_ = nullptr;};
        inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
        inline VoList& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


        // deliveryTag Field Functions 
        bool hasDeliveryTag() const { return this->deliveryTag_ != nullptr;};
        void deleteDeliveryTag() { this->deliveryTag_ = nullptr;};
        inline int64_t getDeliveryTag() const { DARABONBA_PTR_GET_DEFAULT(deliveryTag_, 0L) };
        inline VoList& setDeliveryTag(int64_t deliveryTag) { DARABONBA_PTR_SET_VALUE(deliveryTag_, deliveryTag) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline VoList& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // rocketMqMsgId Field Functions 
        bool hasRocketMqMsgId() const { return this->rocketMqMsgId_ != nullptr;};
        void deleteRocketMqMsgId() { this->rocketMqMsgId_ = nullptr;};
        inline string getRocketMqMsgId() const { DARABONBA_PTR_GET_DEFAULT(rocketMqMsgId_, "") };
        inline VoList& setRocketMqMsgId(string rocketMqMsgId) { DARABONBA_PTR_SET_VALUE(rocketMqMsgId_, rocketMqMsgId) };


        // rt Field Functions 
        bool hasRt() const { return this->rt_ != nullptr;};
        void deleteRt() { this->rt_ = nullptr;};
        inline int32_t getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0) };
        inline VoList& setRt(int32_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline VoList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<string> channelId_ {};
        shared_ptr<string> connectionId_ {};
        shared_ptr<int64_t> deliveryTag_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<string> rocketMqMsgId_ {};
        shared_ptr<int32_t> rt_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voList_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // voList Field Functions 
      bool hasVoList() const { return this->voList_ != nullptr;};
      void deleteVoList() { this->voList_ = nullptr;};
      inline const vector<Data::VoList> & getVoList() const { DARABONBA_PTR_GET_CONST(voList_, vector<Data::VoList>) };
      inline vector<Data::VoList> getVoList() { DARABONBA_PTR_GET(voList_, vector<Data::VoList>) };
      inline Data& setVoList(const vector<Data::VoList> & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
      inline Data& setVoList(vector<Data::VoList> && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<Data::VoList>> voList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAckInfoByIntervalResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAckInfoByIntervalResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAckInfoByIntervalResponseBody::Data) };
    inline GetAckInfoByIntervalResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAckInfoByIntervalResponseBody::Data) };
    inline GetAckInfoByIntervalResponseBody& setData(const GetAckInfoByIntervalResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAckInfoByIntervalResponseBody& setData(GetAckInfoByIntervalResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAckInfoByIntervalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAckInfoByIntervalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAckInfoByIntervalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetAckInfoByIntervalResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
