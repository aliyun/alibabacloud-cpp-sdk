// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADONLYINSTANCEDELAYREADONLYINSTANCEDELAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADONLYINSTANCEDELAYREADONLYINSTANCEDELAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& obj) { 
      DARABONBA_PTR_TO_JSON(FlushLag, flushLag_);
      DARABONBA_PTR_TO_JSON(FlushLatency, flushLatency_);
      DARABONBA_PTR_TO_JSON(ReadDBInstanceName, readDBInstanceName_);
      DARABONBA_PTR_TO_JSON(ReplayLag, replayLag_);
      DARABONBA_PTR_TO_JSON(ReplayLatency, replayLatency_);
      DARABONBA_PTR_TO_JSON(SendLatency, sendLatency_);
      DARABONBA_PTR_TO_JSON(WriteLag, writeLag_);
      DARABONBA_PTR_TO_JSON(WriteLatency, writeLatency_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& obj) { 
      DARABONBA_PTR_FROM_JSON(FlushLag, flushLag_);
      DARABONBA_PTR_FROM_JSON(FlushLatency, flushLatency_);
      DARABONBA_PTR_FROM_JSON(ReadDBInstanceName, readDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ReplayLag, replayLag_);
      DARABONBA_PTR_FROM_JSON(ReplayLatency, replayLatency_);
      DARABONBA_PTR_FROM_JSON(SendLatency, sendLatency_);
      DARABONBA_PTR_FROM_JSON(WriteLag, writeLag_);
      DARABONBA_PTR_FROM_JSON(WriteLatency, writeLatency_);
    };
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay &&) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& operator=(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& operator=(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flushLag_ == nullptr
        && return this->flushLatency_ == nullptr && return this->readDBInstanceName_ == nullptr && return this->replayLag_ == nullptr && return this->replayLatency_ == nullptr && return this->sendLatency_ == nullptr
        && return this->writeLag_ == nullptr && return this->writeLatency_ == nullptr; };
    // flushLag Field Functions 
    bool hasFlushLag() const { return this->flushLag_ != nullptr;};
    void deleteFlushLag() { this->flushLag_ = nullptr;};
    inline string flushLag() const { DARABONBA_PTR_GET_DEFAULT(flushLag_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setFlushLag(string flushLag) { DARABONBA_PTR_SET_VALUE(flushLag_, flushLag) };


    // flushLatency Field Functions 
    bool hasFlushLatency() const { return this->flushLatency_ != nullptr;};
    void deleteFlushLatency() { this->flushLatency_ = nullptr;};
    inline string flushLatency() const { DARABONBA_PTR_GET_DEFAULT(flushLatency_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setFlushLatency(string flushLatency) { DARABONBA_PTR_SET_VALUE(flushLatency_, flushLatency) };


    // readDBInstanceName Field Functions 
    bool hasReadDBInstanceName() const { return this->readDBInstanceName_ != nullptr;};
    void deleteReadDBInstanceName() { this->readDBInstanceName_ = nullptr;};
    inline string readDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(readDBInstanceName_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setReadDBInstanceName(string readDBInstanceName) { DARABONBA_PTR_SET_VALUE(readDBInstanceName_, readDBInstanceName) };


    // replayLag Field Functions 
    bool hasReplayLag() const { return this->replayLag_ != nullptr;};
    void deleteReplayLag() { this->replayLag_ = nullptr;};
    inline string replayLag() const { DARABONBA_PTR_GET_DEFAULT(replayLag_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setReplayLag(string replayLag) { DARABONBA_PTR_SET_VALUE(replayLag_, replayLag) };


    // replayLatency Field Functions 
    bool hasReplayLatency() const { return this->replayLatency_ != nullptr;};
    void deleteReplayLatency() { this->replayLatency_ = nullptr;};
    inline string replayLatency() const { DARABONBA_PTR_GET_DEFAULT(replayLatency_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setReplayLatency(string replayLatency) { DARABONBA_PTR_SET_VALUE(replayLatency_, replayLatency) };


    // sendLatency Field Functions 
    bool hasSendLatency() const { return this->sendLatency_ != nullptr;};
    void deleteSendLatency() { this->sendLatency_ = nullptr;};
    inline string sendLatency() const { DARABONBA_PTR_GET_DEFAULT(sendLatency_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setSendLatency(string sendLatency) { DARABONBA_PTR_SET_VALUE(sendLatency_, sendLatency) };


    // writeLag Field Functions 
    bool hasWriteLag() const { return this->writeLag_ != nullptr;};
    void deleteWriteLag() { this->writeLag_ = nullptr;};
    inline string writeLag() const { DARABONBA_PTR_GET_DEFAULT(writeLag_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setWriteLag(string writeLag) { DARABONBA_PTR_SET_VALUE(writeLag_, writeLag) };


    // writeLatency Field Functions 
    bool hasWriteLatency() const { return this->writeLatency_ != nullptr;};
    void deleteWriteLatency() { this->writeLatency_ = nullptr;};
    inline string writeLatency() const { DARABONBA_PTR_GET_DEFAULT(writeLatency_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay& setWriteLatency(string writeLatency) { DARABONBA_PTR_SET_VALUE(writeLatency_, writeLatency) };


  protected:
    // The duration that is allowed for the latency in the persistence of WAL data. Unit: seconds.
    std::shared_ptr<string> flushLag_ = nullptr;
    // The data size that is allowed for the latency in the persistence of WAL data. Unit: MB.
    std::shared_ptr<string> flushLatency_ = nullptr;
    // The read-only instance ID.
    std::shared_ptr<string> readDBInstanceName_ = nullptr;
    // The duration that is allowed for the latency in the playback of WAL data. Unit: seconds.
    std::shared_ptr<string> replayLag_ = nullptr;
    // The data size that is allowed for the latency in the playback of WAL data. Unit: MB.
    std::shared_ptr<string> replayLatency_ = nullptr;
    // The data size that is allowed for the latency in the sending of WAL data. Unit: MB.
    std::shared_ptr<string> sendLatency_ = nullptr;
    // The duration that is allowed for the latency in the write-back of WAL data. Unit: seconds.
    std::shared_ptr<string> writeLag_ = nullptr;
    // The data size that is allowed for the latency in the write-back of WAL data. Unit: MB.
    std::shared_ptr<string> writeLatency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
