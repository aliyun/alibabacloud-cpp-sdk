// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONSUMERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONSUMERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeConsumerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerChannels, consumerChannels_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerChannels, consumerChannels_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeConsumerGroupResponseBody() = default ;
    DescribeConsumerGroupResponseBody(const DescribeConsumerGroupResponseBody &) = default ;
    DescribeConsumerGroupResponseBody(DescribeConsumerGroupResponseBody &&) = default ;
    DescribeConsumerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConsumerGroupResponseBody() = default ;
    DescribeConsumerGroupResponseBody& operator=(const DescribeConsumerGroupResponseBody &) = default ;
    DescribeConsumerGroupResponseBody& operator=(DescribeConsumerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConsumerChannels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumerChannels& obj) { 
        DARABONBA_PTR_TO_JSON(DescribeConsumerChannel, describeConsumerChannel_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumerChannels& obj) { 
        DARABONBA_PTR_FROM_JSON(DescribeConsumerChannel, describeConsumerChannel_);
      };
      ConsumerChannels() = default ;
      ConsumerChannels(const ConsumerChannels &) = default ;
      ConsumerChannels(ConsumerChannels &&) = default ;
      ConsumerChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumerChannels() = default ;
      ConsumerChannels& operator=(const ConsumerChannels &) = default ;
      ConsumerChannels& operator=(ConsumerChannels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DescribeConsumerChannel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DescribeConsumerChannel& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumerGroupID, consumerGroupID_);
          DARABONBA_PTR_TO_JSON(ConsumerGroupName, consumerGroupName_);
          DARABONBA_PTR_TO_JSON(ConsumerGroupUserName, consumerGroupUserName_);
          DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
          DARABONBA_PTR_TO_JSON(MessageDelay, messageDelay_);
          DARABONBA_PTR_TO_JSON(UnconsumedData, unconsumedData_);
        };
        friend void from_json(const Darabonba::Json& j, DescribeConsumerChannel& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumerGroupID, consumerGroupID_);
          DARABONBA_PTR_FROM_JSON(ConsumerGroupName, consumerGroupName_);
          DARABONBA_PTR_FROM_JSON(ConsumerGroupUserName, consumerGroupUserName_);
          DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
          DARABONBA_PTR_FROM_JSON(MessageDelay, messageDelay_);
          DARABONBA_PTR_FROM_JSON(UnconsumedData, unconsumedData_);
        };
        DescribeConsumerChannel() = default ;
        DescribeConsumerChannel(const DescribeConsumerChannel &) = default ;
        DescribeConsumerChannel(DescribeConsumerChannel &&) = default ;
        DescribeConsumerChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DescribeConsumerChannel() = default ;
        DescribeConsumerChannel& operator=(const DescribeConsumerChannel &) = default ;
        DescribeConsumerChannel& operator=(DescribeConsumerChannel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerGroupID_ == nullptr
        && this->consumerGroupName_ == nullptr && this->consumerGroupUserName_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->messageDelay_ == nullptr && this->unconsumedData_ == nullptr; };
        // consumerGroupID Field Functions 
        bool hasConsumerGroupID() const { return this->consumerGroupID_ != nullptr;};
        void deleteConsumerGroupID() { this->consumerGroupID_ = nullptr;};
        inline string getConsumerGroupID() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupID_, "") };
        inline DescribeConsumerChannel& setConsumerGroupID(string consumerGroupID) { DARABONBA_PTR_SET_VALUE(consumerGroupID_, consumerGroupID) };


        // consumerGroupName Field Functions 
        bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
        void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
        inline string getConsumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
        inline DescribeConsumerChannel& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


        // consumerGroupUserName Field Functions 
        bool hasConsumerGroupUserName() const { return this->consumerGroupUserName_ != nullptr;};
        void deleteConsumerGroupUserName() { this->consumerGroupUserName_ = nullptr;};
        inline string getConsumerGroupUserName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupUserName_, "") };
        inline DescribeConsumerChannel& setConsumerGroupUserName(string consumerGroupUserName) { DARABONBA_PTR_SET_VALUE(consumerGroupUserName_, consumerGroupUserName) };


        // consumptionCheckpoint Field Functions 
        bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
        void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
        inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
        inline DescribeConsumerChannel& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


        // messageDelay Field Functions 
        bool hasMessageDelay() const { return this->messageDelay_ != nullptr;};
        void deleteMessageDelay() { this->messageDelay_ = nullptr;};
        inline int64_t getMessageDelay() const { DARABONBA_PTR_GET_DEFAULT(messageDelay_, 0L) };
        inline DescribeConsumerChannel& setMessageDelay(int64_t messageDelay) { DARABONBA_PTR_SET_VALUE(messageDelay_, messageDelay) };


        // unconsumedData Field Functions 
        bool hasUnconsumedData() const { return this->unconsumedData_ != nullptr;};
        void deleteUnconsumedData() { this->unconsumedData_ = nullptr;};
        inline int64_t getUnconsumedData() const { DARABONBA_PTR_GET_DEFAULT(unconsumedData_, 0L) };
        inline DescribeConsumerChannel& setUnconsumedData(int64_t unconsumedData) { DARABONBA_PTR_SET_VALUE(unconsumedData_, unconsumedData) };


      protected:
        // The ID of the consumer group.
        shared_ptr<string> consumerGroupID_ {};
        // The name of the consumer group.
        shared_ptr<string> consumerGroupName_ {};
        // The username of the consumer group.
        shared_ptr<string> consumerGroupUserName_ {};
        // The consumption checkpoint, which is the time when the latest data record was consumed by the change tracking client. The format is *yyyy-MM-dd*T*HH:mm:ss*Z. The time is displayed in UTC.
        shared_ptr<string> consumptionCheckpoint_ {};
        // The message delay, which is the current time minus the timestamp of the earliest unconsumed message in the change tracking instance. Unit: seconds.
        // 
        // >  If the return value of this parameter is **-1**, no client is connected to the consumer group.
        shared_ptr<int64_t> messageDelay_ {};
        // The total number of unconsumed messages, which is the number of unconsumed data records plus the number of heartbeat messages.
        // 
        // >  If the return value of this parameter is **-1**, no client is connected to the consumer group.
        shared_ptr<int64_t> unconsumedData_ {};
      };

      virtual bool empty() const override { return this->describeConsumerChannel_ == nullptr; };
      // describeConsumerChannel Field Functions 
      bool hasDescribeConsumerChannel() const { return this->describeConsumerChannel_ != nullptr;};
      void deleteDescribeConsumerChannel() { this->describeConsumerChannel_ = nullptr;};
      inline const vector<ConsumerChannels::DescribeConsumerChannel> & getDescribeConsumerChannel() const { DARABONBA_PTR_GET_CONST(describeConsumerChannel_, vector<ConsumerChannels::DescribeConsumerChannel>) };
      inline vector<ConsumerChannels::DescribeConsumerChannel> getDescribeConsumerChannel() { DARABONBA_PTR_GET(describeConsumerChannel_, vector<ConsumerChannels::DescribeConsumerChannel>) };
      inline ConsumerChannels& setDescribeConsumerChannel(const vector<ConsumerChannels::DescribeConsumerChannel> & describeConsumerChannel) { DARABONBA_PTR_SET_VALUE(describeConsumerChannel_, describeConsumerChannel) };
      inline ConsumerChannels& setDescribeConsumerChannel(vector<ConsumerChannels::DescribeConsumerChannel> && describeConsumerChannel) { DARABONBA_PTR_SET_RVALUE(describeConsumerChannel_, describeConsumerChannel) };


    protected:
      shared_ptr<vector<ConsumerChannels::DescribeConsumerChannel>> describeConsumerChannel_ {};
    };

    virtual bool empty() const override { return this->consumerChannels_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // consumerChannels Field Functions 
    bool hasConsumerChannels() const { return this->consumerChannels_ != nullptr;};
    void deleteConsumerChannels() { this->consumerChannels_ = nullptr;};
    inline const DescribeConsumerGroupResponseBody::ConsumerChannels & getConsumerChannels() const { DARABONBA_PTR_GET_CONST(consumerChannels_, DescribeConsumerGroupResponseBody::ConsumerChannels) };
    inline DescribeConsumerGroupResponseBody::ConsumerChannels getConsumerChannels() { DARABONBA_PTR_GET(consumerChannels_, DescribeConsumerGroupResponseBody::ConsumerChannels) };
    inline DescribeConsumerGroupResponseBody& setConsumerChannels(const DescribeConsumerGroupResponseBody::ConsumerChannels & consumerChannels) { DARABONBA_PTR_SET_VALUE(consumerChannels_, consumerChannels) };
    inline DescribeConsumerGroupResponseBody& setConsumerChannels(DescribeConsumerGroupResponseBody::ConsumerChannels && consumerChannels) { DARABONBA_PTR_SET_RVALUE(consumerChannels_, consumerChannels) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeConsumerGroupResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeConsumerGroupResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeConsumerGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeConsumerGroupResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConsumerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeConsumerGroupResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeConsumerGroupResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of consumer groups.
    shared_ptr<DescribeConsumerGroupResponseBody::ConsumerChannels> consumerChannels_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of consumer groups that can be displayed on one page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
    // The total number of consumer groups.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
