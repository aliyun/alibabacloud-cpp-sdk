// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICERESPONSEBODYSTATS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICERESPONSEBODYSTATS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeDeviceResponseBodyStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceResponseBodyStats& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_TO_JSON(OfflineNum, offlineNum_);
      DARABONBA_PTR_TO_JSON(OnlineNum, onlineNum_);
      DARABONBA_PTR_TO_JSON(StreamNum, streamNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceResponseBodyStats& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_FROM_JSON(OfflineNum, offlineNum_);
      DARABONBA_PTR_FROM_JSON(OnlineNum, onlineNum_);
      DARABONBA_PTR_FROM_JSON(StreamNum, streamNum_);
    };
    DescribeDeviceResponseBodyStats() = default ;
    DescribeDeviceResponseBodyStats(const DescribeDeviceResponseBodyStats &) = default ;
    DescribeDeviceResponseBodyStats(DescribeDeviceResponseBodyStats &&) = default ;
    DescribeDeviceResponseBodyStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceResponseBodyStats() = default ;
    DescribeDeviceResponseBodyStats& operator=(const DescribeDeviceResponseBodyStats &) = default ;
    DescribeDeviceResponseBodyStats& operator=(DescribeDeviceResponseBodyStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelNum_ == nullptr
        && return this->failedNum_ == nullptr && return this->offlineNum_ == nullptr && return this->onlineNum_ == nullptr && return this->streamNum_ == nullptr; };
    // channelNum Field Functions 
    bool hasChannelNum() const { return this->channelNum_ != nullptr;};
    void deleteChannelNum() { this->channelNum_ = nullptr;};
    inline int64_t channelNum() const { DARABONBA_PTR_GET_DEFAULT(channelNum_, 0L) };
    inline DescribeDeviceResponseBodyStats& setChannelNum(int64_t channelNum) { DARABONBA_PTR_SET_VALUE(channelNum_, channelNum) };


    // failedNum Field Functions 
    bool hasFailedNum() const { return this->failedNum_ != nullptr;};
    void deleteFailedNum() { this->failedNum_ = nullptr;};
    inline int64_t failedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0L) };
    inline DescribeDeviceResponseBodyStats& setFailedNum(int64_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


    // offlineNum Field Functions 
    bool hasOfflineNum() const { return this->offlineNum_ != nullptr;};
    void deleteOfflineNum() { this->offlineNum_ = nullptr;};
    inline int64_t offlineNum() const { DARABONBA_PTR_GET_DEFAULT(offlineNum_, 0L) };
    inline DescribeDeviceResponseBodyStats& setOfflineNum(int64_t offlineNum) { DARABONBA_PTR_SET_VALUE(offlineNum_, offlineNum) };


    // onlineNum Field Functions 
    bool hasOnlineNum() const { return this->onlineNum_ != nullptr;};
    void deleteOnlineNum() { this->onlineNum_ = nullptr;};
    inline int64_t onlineNum() const { DARABONBA_PTR_GET_DEFAULT(onlineNum_, 0L) };
    inline DescribeDeviceResponseBodyStats& setOnlineNum(int64_t onlineNum) { DARABONBA_PTR_SET_VALUE(onlineNum_, onlineNum) };


    // streamNum Field Functions 
    bool hasStreamNum() const { return this->streamNum_ != nullptr;};
    void deleteStreamNum() { this->streamNum_ = nullptr;};
    inline int64_t streamNum() const { DARABONBA_PTR_GET_DEFAULT(streamNum_, 0L) };
    inline DescribeDeviceResponseBodyStats& setStreamNum(int64_t streamNum) { DARABONBA_PTR_SET_VALUE(streamNum_, streamNum) };


  protected:
    std::shared_ptr<int64_t> channelNum_ = nullptr;
    std::shared_ptr<int64_t> failedNum_ = nullptr;
    std::shared_ptr<int64_t> offlineNum_ = nullptr;
    std::shared_ptr<int64_t> onlineNum_ = nullptr;
    std::shared_ptr<int64_t> streamNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
