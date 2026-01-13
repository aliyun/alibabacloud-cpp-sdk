// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReadDBInstanceDelayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ReadDBInstanceId, readDBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ReadDBInstanceId, readDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeReadDBInstanceDelayResponseBody() = default ;
    DescribeReadDBInstanceDelayResponseBody(const DescribeReadDBInstanceDelayResponseBody &) = default ;
    DescribeReadDBInstanceDelayResponseBody(DescribeReadDBInstanceDelayResponseBody &&) = default ;
    DescribeReadDBInstanceDelayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBody() = default ;
    DescribeReadDBInstanceDelayResponseBody& operator=(const DescribeReadDBInstanceDelayResponseBody &) = default ;
    DescribeReadDBInstanceDelayResponseBody& operator=(DescribeReadDBInstanceDelayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(ReadDBInstanceNames, readDBInstanceNames_);
          DARABONBA_PTR_TO_JSON(ReadDelayTimes, readDelayTimes_);
          DARABONBA_PTR_TO_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
        };
        friend void from_json(const Darabonba::Json& j, ItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(ReadDBInstanceNames, readDBInstanceNames_);
          DARABONBA_PTR_FROM_JSON(ReadDelayTimes, readDelayTimes_);
          DARABONBA_PTR_FROM_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
        };
        ItemsItem() = default ;
        ItemsItem(const ItemsItem &) = default ;
        ItemsItem(ItemsItem &&) = default ;
        ItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemsItem() = default ;
        ItemsItem& operator=(const ItemsItem &) = default ;
        ItemsItem& operator=(ItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReadonlyInstanceDelay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadonlyInstanceDelay& obj) { 
            DARABONBA_PTR_TO_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
          };
          friend void from_json(const Darabonba::Json& j, ReadonlyInstanceDelay& obj) { 
            DARABONBA_PTR_FROM_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
          };
          ReadonlyInstanceDelay() = default ;
          ReadonlyInstanceDelay(const ReadonlyInstanceDelay &) = default ;
          ReadonlyInstanceDelay(ReadonlyInstanceDelay &&) = default ;
          ReadonlyInstanceDelay(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadonlyInstanceDelay() = default ;
          ReadonlyInstanceDelay& operator=(const ReadonlyInstanceDelay &) = default ;
          ReadonlyInstanceDelay& operator=(ReadonlyInstanceDelay &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReadonlyInstanceDelayItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReadonlyInstanceDelayItem& obj) { 
              DARABONBA_PTR_TO_JSON(FlushLag, flushLag_);
              DARABONBA_PTR_TO_JSON(FlushLatency, flushLatency_);
              DARABONBA_PTR_TO_JSON(ReadDBInstanceName, readDBInstanceName_);
              DARABONBA_PTR_TO_JSON(ReplayLag, replayLag_);
              DARABONBA_PTR_TO_JSON(ReplayLatency, replayLatency_);
              DARABONBA_PTR_TO_JSON(SendLatency, sendLatency_);
              DARABONBA_PTR_TO_JSON(WriteLag, writeLag_);
              DARABONBA_PTR_TO_JSON(WriteLatency, writeLatency_);
            };
            friend void from_json(const Darabonba::Json& j, ReadonlyInstanceDelayItem& obj) { 
              DARABONBA_PTR_FROM_JSON(FlushLag, flushLag_);
              DARABONBA_PTR_FROM_JSON(FlushLatency, flushLatency_);
              DARABONBA_PTR_FROM_JSON(ReadDBInstanceName, readDBInstanceName_);
              DARABONBA_PTR_FROM_JSON(ReplayLag, replayLag_);
              DARABONBA_PTR_FROM_JSON(ReplayLatency, replayLatency_);
              DARABONBA_PTR_FROM_JSON(SendLatency, sendLatency_);
              DARABONBA_PTR_FROM_JSON(WriteLag, writeLag_);
              DARABONBA_PTR_FROM_JSON(WriteLatency, writeLatency_);
            };
            ReadonlyInstanceDelayItem() = default ;
            ReadonlyInstanceDelayItem(const ReadonlyInstanceDelayItem &) = default ;
            ReadonlyInstanceDelayItem(ReadonlyInstanceDelayItem &&) = default ;
            ReadonlyInstanceDelayItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReadonlyInstanceDelayItem() = default ;
            ReadonlyInstanceDelayItem& operator=(const ReadonlyInstanceDelayItem &) = default ;
            ReadonlyInstanceDelayItem& operator=(ReadonlyInstanceDelayItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->flushLag_ == nullptr
        && this->flushLatency_ == nullptr && this->readDBInstanceName_ == nullptr && this->replayLag_ == nullptr && this->replayLatency_ == nullptr && this->sendLatency_ == nullptr
        && this->writeLag_ == nullptr && this->writeLatency_ == nullptr; };
            // flushLag Field Functions 
            bool hasFlushLag() const { return this->flushLag_ != nullptr;};
            void deleteFlushLag() { this->flushLag_ = nullptr;};
            inline string getFlushLag() const { DARABONBA_PTR_GET_DEFAULT(flushLag_, "") };
            inline ReadonlyInstanceDelayItem& setFlushLag(string flushLag) { DARABONBA_PTR_SET_VALUE(flushLag_, flushLag) };


            // flushLatency Field Functions 
            bool hasFlushLatency() const { return this->flushLatency_ != nullptr;};
            void deleteFlushLatency() { this->flushLatency_ = nullptr;};
            inline string getFlushLatency() const { DARABONBA_PTR_GET_DEFAULT(flushLatency_, "") };
            inline ReadonlyInstanceDelayItem& setFlushLatency(string flushLatency) { DARABONBA_PTR_SET_VALUE(flushLatency_, flushLatency) };


            // readDBInstanceName Field Functions 
            bool hasReadDBInstanceName() const { return this->readDBInstanceName_ != nullptr;};
            void deleteReadDBInstanceName() { this->readDBInstanceName_ = nullptr;};
            inline string getReadDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(readDBInstanceName_, "") };
            inline ReadonlyInstanceDelayItem& setReadDBInstanceName(string readDBInstanceName) { DARABONBA_PTR_SET_VALUE(readDBInstanceName_, readDBInstanceName) };


            // replayLag Field Functions 
            bool hasReplayLag() const { return this->replayLag_ != nullptr;};
            void deleteReplayLag() { this->replayLag_ = nullptr;};
            inline string getReplayLag() const { DARABONBA_PTR_GET_DEFAULT(replayLag_, "") };
            inline ReadonlyInstanceDelayItem& setReplayLag(string replayLag) { DARABONBA_PTR_SET_VALUE(replayLag_, replayLag) };


            // replayLatency Field Functions 
            bool hasReplayLatency() const { return this->replayLatency_ != nullptr;};
            void deleteReplayLatency() { this->replayLatency_ = nullptr;};
            inline string getReplayLatency() const { DARABONBA_PTR_GET_DEFAULT(replayLatency_, "") };
            inline ReadonlyInstanceDelayItem& setReplayLatency(string replayLatency) { DARABONBA_PTR_SET_VALUE(replayLatency_, replayLatency) };


            // sendLatency Field Functions 
            bool hasSendLatency() const { return this->sendLatency_ != nullptr;};
            void deleteSendLatency() { this->sendLatency_ = nullptr;};
            inline string getSendLatency() const { DARABONBA_PTR_GET_DEFAULT(sendLatency_, "") };
            inline ReadonlyInstanceDelayItem& setSendLatency(string sendLatency) { DARABONBA_PTR_SET_VALUE(sendLatency_, sendLatency) };


            // writeLag Field Functions 
            bool hasWriteLag() const { return this->writeLag_ != nullptr;};
            void deleteWriteLag() { this->writeLag_ = nullptr;};
            inline string getWriteLag() const { DARABONBA_PTR_GET_DEFAULT(writeLag_, "") };
            inline ReadonlyInstanceDelayItem& setWriteLag(string writeLag) { DARABONBA_PTR_SET_VALUE(writeLag_, writeLag) };


            // writeLatency Field Functions 
            bool hasWriteLatency() const { return this->writeLatency_ != nullptr;};
            void deleteWriteLatency() { this->writeLatency_ = nullptr;};
            inline string getWriteLatency() const { DARABONBA_PTR_GET_DEFAULT(writeLatency_, "") };
            inline ReadonlyInstanceDelayItem& setWriteLatency(string writeLatency) { DARABONBA_PTR_SET_VALUE(writeLatency_, writeLatency) };


          protected:
            // The duration that is allowed for the latency in the persistence of WAL data. Unit: seconds.
            shared_ptr<string> flushLag_ {};
            // The data size that is allowed for the latency in the persistence of WAL data. Unit: MB.
            shared_ptr<string> flushLatency_ {};
            // The read-only instance ID.
            shared_ptr<string> readDBInstanceName_ {};
            // The duration that is allowed for the latency in the playback of WAL data. Unit: seconds.
            shared_ptr<string> replayLag_ {};
            // The data size that is allowed for the latency in the playback of WAL data. Unit: MB.
            shared_ptr<string> replayLatency_ {};
            // The data size that is allowed for the latency in the sending of WAL data. Unit: MB.
            shared_ptr<string> sendLatency_ {};
            // The duration that is allowed for the latency in the write-back of WAL data. Unit: seconds.
            shared_ptr<string> writeLag_ {};
            // The data size that is allowed for the latency in the write-back of WAL data. Unit: MB.
            shared_ptr<string> writeLatency_ {};
          };

          virtual bool empty() const override { return this->readonlyInstanceDelay_ == nullptr; };
          // readonlyInstanceDelay Field Functions 
          bool hasReadonlyInstanceDelay() const { return this->readonlyInstanceDelay_ != nullptr;};
          void deleteReadonlyInstanceDelay() { this->readonlyInstanceDelay_ = nullptr;};
          inline const vector<ReadonlyInstanceDelay::ReadonlyInstanceDelayItem> & getReadonlyInstanceDelay() const { DARABONBA_PTR_GET_CONST(readonlyInstanceDelay_, vector<ReadonlyInstanceDelay::ReadonlyInstanceDelayItem>) };
          inline vector<ReadonlyInstanceDelay::ReadonlyInstanceDelayItem> getReadonlyInstanceDelay() { DARABONBA_PTR_GET(readonlyInstanceDelay_, vector<ReadonlyInstanceDelay::ReadonlyInstanceDelayItem>) };
          inline ReadonlyInstanceDelay& setReadonlyInstanceDelay(const vector<ReadonlyInstanceDelay::ReadonlyInstanceDelayItem> & readonlyInstanceDelay) { DARABONBA_PTR_SET_VALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };
          inline ReadonlyInstanceDelay& setReadonlyInstanceDelay(vector<ReadonlyInstanceDelay::ReadonlyInstanceDelayItem> && readonlyInstanceDelay) { DARABONBA_PTR_SET_RVALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };


        protected:
          shared_ptr<vector<ReadonlyInstanceDelay::ReadonlyInstanceDelayItem>> readonlyInstanceDelay_ {};
        };

        class ReadDelayTimes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadDelayTimes& obj) { 
            DARABONBA_PTR_TO_JSON(ReadDelayTime, readDelayTime_);
          };
          friend void from_json(const Darabonba::Json& j, ReadDelayTimes& obj) { 
            DARABONBA_PTR_FROM_JSON(ReadDelayTime, readDelayTime_);
          };
          ReadDelayTimes() = default ;
          ReadDelayTimes(const ReadDelayTimes &) = default ;
          ReadDelayTimes(ReadDelayTimes &&) = default ;
          ReadDelayTimes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadDelayTimes() = default ;
          ReadDelayTimes& operator=(const ReadDelayTimes &) = default ;
          ReadDelayTimes& operator=(ReadDelayTimes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->readDelayTime_ == nullptr; };
          // readDelayTime Field Functions 
          bool hasReadDelayTime() const { return this->readDelayTime_ != nullptr;};
          void deleteReadDelayTime() { this->readDelayTime_ = nullptr;};
          inline const vector<string> & getReadDelayTime() const { DARABONBA_PTR_GET_CONST(readDelayTime_, vector<string>) };
          inline vector<string> getReadDelayTime() { DARABONBA_PTR_GET(readDelayTime_, vector<string>) };
          inline ReadDelayTimes& setReadDelayTime(const vector<string> & readDelayTime) { DARABONBA_PTR_SET_VALUE(readDelayTime_, readDelayTime) };
          inline ReadDelayTimes& setReadDelayTime(vector<string> && readDelayTime) { DARABONBA_PTR_SET_RVALUE(readDelayTime_, readDelayTime) };


        protected:
          shared_ptr<vector<string>> readDelayTime_ {};
        };

        class ReadDBInstanceNames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadDBInstanceNames& obj) { 
            DARABONBA_PTR_TO_JSON(ReadDBInstanceName, readDBInstanceName_);
          };
          friend void from_json(const Darabonba::Json& j, ReadDBInstanceNames& obj) { 
            DARABONBA_PTR_FROM_JSON(ReadDBInstanceName, readDBInstanceName_);
          };
          ReadDBInstanceNames() = default ;
          ReadDBInstanceNames(const ReadDBInstanceNames &) = default ;
          ReadDBInstanceNames(ReadDBInstanceNames &&) = default ;
          ReadDBInstanceNames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadDBInstanceNames() = default ;
          ReadDBInstanceNames& operator=(const ReadDBInstanceNames &) = default ;
          ReadDBInstanceNames& operator=(ReadDBInstanceNames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->readDBInstanceName_ == nullptr; };
          // readDBInstanceName Field Functions 
          bool hasReadDBInstanceName() const { return this->readDBInstanceName_ != nullptr;};
          void deleteReadDBInstanceName() { this->readDBInstanceName_ = nullptr;};
          inline const vector<string> & getReadDBInstanceName() const { DARABONBA_PTR_GET_CONST(readDBInstanceName_, vector<string>) };
          inline vector<string> getReadDBInstanceName() { DARABONBA_PTR_GET(readDBInstanceName_, vector<string>) };
          inline ReadDBInstanceNames& setReadDBInstanceName(const vector<string> & readDBInstanceName) { DARABONBA_PTR_SET_VALUE(readDBInstanceName_, readDBInstanceName) };
          inline ReadDBInstanceNames& setReadDBInstanceName(vector<string> && readDBInstanceName) { DARABONBA_PTR_SET_RVALUE(readDBInstanceName_, readDBInstanceName) };


        protected:
          shared_ptr<vector<string>> readDBInstanceName_ {};
        };

        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->readDBInstanceNames_ == nullptr && this->readDelayTimes_ == nullptr && this->readonlyInstanceDelay_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline ItemsItem& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // readDBInstanceNames Field Functions 
        bool hasReadDBInstanceNames() const { return this->readDBInstanceNames_ != nullptr;};
        void deleteReadDBInstanceNames() { this->readDBInstanceNames_ = nullptr;};
        inline const ItemsItem::ReadDBInstanceNames & getReadDBInstanceNames() const { DARABONBA_PTR_GET_CONST(readDBInstanceNames_, ItemsItem::ReadDBInstanceNames) };
        inline ItemsItem::ReadDBInstanceNames getReadDBInstanceNames() { DARABONBA_PTR_GET(readDBInstanceNames_, ItemsItem::ReadDBInstanceNames) };
        inline ItemsItem& setReadDBInstanceNames(const ItemsItem::ReadDBInstanceNames & readDBInstanceNames) { DARABONBA_PTR_SET_VALUE(readDBInstanceNames_, readDBInstanceNames) };
        inline ItemsItem& setReadDBInstanceNames(ItemsItem::ReadDBInstanceNames && readDBInstanceNames) { DARABONBA_PTR_SET_RVALUE(readDBInstanceNames_, readDBInstanceNames) };


        // readDelayTimes Field Functions 
        bool hasReadDelayTimes() const { return this->readDelayTimes_ != nullptr;};
        void deleteReadDelayTimes() { this->readDelayTimes_ = nullptr;};
        inline const ItemsItem::ReadDelayTimes & getReadDelayTimes() const { DARABONBA_PTR_GET_CONST(readDelayTimes_, ItemsItem::ReadDelayTimes) };
        inline ItemsItem::ReadDelayTimes getReadDelayTimes() { DARABONBA_PTR_GET(readDelayTimes_, ItemsItem::ReadDelayTimes) };
        inline ItemsItem& setReadDelayTimes(const ItemsItem::ReadDelayTimes & readDelayTimes) { DARABONBA_PTR_SET_VALUE(readDelayTimes_, readDelayTimes) };
        inline ItemsItem& setReadDelayTimes(ItemsItem::ReadDelayTimes && readDelayTimes) { DARABONBA_PTR_SET_RVALUE(readDelayTimes_, readDelayTimes) };


        // readonlyInstanceDelay Field Functions 
        bool hasReadonlyInstanceDelay() const { return this->readonlyInstanceDelay_ != nullptr;};
        void deleteReadonlyInstanceDelay() { this->readonlyInstanceDelay_ = nullptr;};
        inline const ItemsItem::ReadonlyInstanceDelay & getReadonlyInstanceDelay() const { DARABONBA_PTR_GET_CONST(readonlyInstanceDelay_, ItemsItem::ReadonlyInstanceDelay) };
        inline ItemsItem::ReadonlyInstanceDelay getReadonlyInstanceDelay() { DARABONBA_PTR_GET(readonlyInstanceDelay_, ItemsItem::ReadonlyInstanceDelay) };
        inline ItemsItem& setReadonlyInstanceDelay(const ItemsItem::ReadonlyInstanceDelay & readonlyInstanceDelay) { DARABONBA_PTR_SET_VALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };
        inline ItemsItem& setReadonlyInstanceDelay(ItemsItem::ReadonlyInstanceDelay && readonlyInstanceDelay) { DARABONBA_PTR_SET_RVALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };


      protected:
        // The primary instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // An array that consists of information about the read-only instance.
        shared_ptr<ItemsItem::ReadDBInstanceNames> readDBInstanceNames_ {};
        // The latency of data replication.
        shared_ptr<ItemsItem::ReadDelayTimes> readDelayTimes_ {};
        // The information about the write-ahead log (WAL) latency.
        // 
        // >  This parameter is returned only when the primary instance runs PostgreSQL.
        shared_ptr<ItemsItem::ReadonlyInstanceDelay> readonlyInstanceDelay_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Items::ItemsItem> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Items::ItemsItem>) };
      inline vector<Items::ItemsItem> getItems() { DARABONBA_PTR_GET(items_, vector<Items::ItemsItem>) };
      inline Items& setItems(const vector<Items::ItemsItem> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Items& setItems(vector<Items::ItemsItem> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<vector<Items::ItemsItem>> items_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->delayTime_ == nullptr && this->items_ == nullptr && this->readDBInstanceId_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeReadDBInstanceDelayResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline DescribeReadDBInstanceDelayResponseBody& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeReadDBInstanceDelayResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeReadDBInstanceDelayResponseBody::Items) };
    inline DescribeReadDBInstanceDelayResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeReadDBInstanceDelayResponseBody::Items) };
    inline DescribeReadDBInstanceDelayResponseBody& setItems(const DescribeReadDBInstanceDelayResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeReadDBInstanceDelayResponseBody& setItems(DescribeReadDBInstanceDelayResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // readDBInstanceId Field Functions 
    bool hasReadDBInstanceId() const { return this->readDBInstanceId_ != nullptr;};
    void deleteReadDBInstanceId() { this->readDBInstanceId_ = nullptr;};
    inline string getReadDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(readDBInstanceId_, "") };
    inline DescribeReadDBInstanceDelayResponseBody& setReadDBInstanceId(string readDBInstanceId) { DARABONBA_PTR_SET_VALUE(readDBInstanceId_, readDBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReadDBInstanceDelayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The primary instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The latency of data replication. Unit: seconds.
    shared_ptr<int32_t> delayTime_ {};
    // The latency information.
    shared_ptr<DescribeReadDBInstanceDelayResponseBody::Items> items_ {};
    // The read-only instance ID.
    shared_ptr<string> readDBInstanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
