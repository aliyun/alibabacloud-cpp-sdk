// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODYCHANNELLISTCHANNELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODYCHANNELLISTCHANNELLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcChannelListResponseBodyChannelListChannelListCallArea.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelListResponseBodyChannelListChannelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelListResponseBodyChannelListChannelList& obj) { 
      DARABONBA_PTR_TO_JSON(CallArea, callArea_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalUserCnt, totalUserCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelListResponseBodyChannelListChannelList& obj) { 
      DARABONBA_PTR_FROM_JSON(CallArea, callArea_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalUserCnt, totalUserCnt_);
    };
    DescribeRtcChannelListResponseBodyChannelListChannelList() = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelList(const DescribeRtcChannelListResponseBodyChannelListChannelList &) = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelList(DescribeRtcChannelListResponseBodyChannelListChannelList &&) = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelListResponseBodyChannelListChannelList() = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelList& operator=(const DescribeRtcChannelListResponseBodyChannelListChannelList &) = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelList& operator=(DescribeRtcChannelListResponseBodyChannelListChannelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callArea_ != nullptr
        && this->channelId_ != nullptr && this->endTime_ != nullptr && this->startTime_ != nullptr && this->totalUserCnt_ != nullptr; };
    // callArea Field Functions 
    bool hasCallArea() const { return this->callArea_ != nullptr;};
    void deleteCallArea() { this->callArea_ = nullptr;};
    inline const Models::DescribeRtcChannelListResponseBodyChannelListChannelListCallArea & callArea() const { DARABONBA_PTR_GET_CONST(callArea_, Models::DescribeRtcChannelListResponseBodyChannelListChannelListCallArea) };
    inline Models::DescribeRtcChannelListResponseBodyChannelListChannelListCallArea callArea() { DARABONBA_PTR_GET(callArea_, Models::DescribeRtcChannelListResponseBodyChannelListChannelListCallArea) };
    inline DescribeRtcChannelListResponseBodyChannelListChannelList& setCallArea(const Models::DescribeRtcChannelListResponseBodyChannelListChannelListCallArea & callArea) { DARABONBA_PTR_SET_VALUE(callArea_, callArea) };
    inline DescribeRtcChannelListResponseBodyChannelListChannelList& setCallArea(Models::DescribeRtcChannelListResponseBodyChannelListChannelListCallArea && callArea) { DARABONBA_PTR_SET_RVALUE(callArea_, callArea) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeRtcChannelListResponseBodyChannelListChannelList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRtcChannelListResponseBodyChannelListChannelList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRtcChannelListResponseBodyChannelListChannelList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalUserCnt Field Functions 
    bool hasTotalUserCnt() const { return this->totalUserCnt_ != nullptr;};
    void deleteTotalUserCnt() { this->totalUserCnt_ = nullptr;};
    inline int64_t totalUserCnt() const { DARABONBA_PTR_GET_DEFAULT(totalUserCnt_, 0L) };
    inline DescribeRtcChannelListResponseBodyChannelListChannelList& setTotalUserCnt(int64_t totalUserCnt) { DARABONBA_PTR_SET_VALUE(totalUserCnt_, totalUserCnt) };


  protected:
    std::shared_ptr<Models::DescribeRtcChannelListResponseBodyChannelListChannelListCallArea> callArea_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int64_t> totalUserCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
