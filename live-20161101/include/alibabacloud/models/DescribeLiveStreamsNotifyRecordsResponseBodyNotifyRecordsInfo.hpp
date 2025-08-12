// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYRECORDSRESPONSEBODYNOTIFYRECORDSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYRECORDSRESPONSEBODYNOTIFYRECORDSINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamNotifyRecordsInfo, liveStreamNotifyRecordsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamNotifyRecordsInfo, liveStreamNotifyRecordsInfo_);
    };
    DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo() = default ;
    DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo(const DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo &) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo(DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo &&) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo() = default ;
    DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo& operator=(const DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo &) = default ;
    DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo& operator=(DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamNotifyRecordsInfo_ != nullptr; };
    // liveStreamNotifyRecordsInfo Field Functions 
    bool hasLiveStreamNotifyRecordsInfo() const { return this->liveStreamNotifyRecordsInfo_ != nullptr;};
    void deleteLiveStreamNotifyRecordsInfo() { this->liveStreamNotifyRecordsInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo> & liveStreamNotifyRecordsInfo() const { DARABONBA_PTR_GET_CONST(liveStreamNotifyRecordsInfo_, vector<Models::DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo>) };
    inline vector<Models::DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo> liveStreamNotifyRecordsInfo() { DARABONBA_PTR_GET(liveStreamNotifyRecordsInfo_, vector<Models::DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo>) };
    inline DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo& setLiveStreamNotifyRecordsInfo(const vector<Models::DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo> & liveStreamNotifyRecordsInfo) { DARABONBA_PTR_SET_VALUE(liveStreamNotifyRecordsInfo_, liveStreamNotifyRecordsInfo) };
    inline DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfo& setLiveStreamNotifyRecordsInfo(vector<Models::DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo> && liveStreamNotifyRecordsInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamNotifyRecordsInfo_, liveStreamNotifyRecordsInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamsNotifyRecordsResponseBodyNotifyRecordsInfoLiveStreamNotifyRecordsInfo>> liveStreamNotifyRecordsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
