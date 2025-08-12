// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODYCONTROLINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODYCONTROLINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsControlHistoryResponseBodyControlInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsControlHistoryResponseBodyControlInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamControlInfo, liveStreamControlInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsControlHistoryResponseBodyControlInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamControlInfo, liveStreamControlInfo_);
    };
    DescribeLiveStreamsControlHistoryResponseBodyControlInfo() = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfo(const DescribeLiveStreamsControlHistoryResponseBodyControlInfo &) = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfo(DescribeLiveStreamsControlHistoryResponseBodyControlInfo &&) = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsControlHistoryResponseBodyControlInfo() = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfo& operator=(const DescribeLiveStreamsControlHistoryResponseBodyControlInfo &) = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfo& operator=(DescribeLiveStreamsControlHistoryResponseBodyControlInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamControlInfo_ != nullptr; };
    // liveStreamControlInfo Field Functions 
    bool hasLiveStreamControlInfo() const { return this->liveStreamControlInfo_ != nullptr;};
    void deleteLiveStreamControlInfo() { this->liveStreamControlInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo> & liveStreamControlInfo() const { DARABONBA_PTR_GET_CONST(liveStreamControlInfo_, vector<Models::DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo>) };
    inline vector<Models::DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo> liveStreamControlInfo() { DARABONBA_PTR_GET(liveStreamControlInfo_, vector<Models::DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo>) };
    inline DescribeLiveStreamsControlHistoryResponseBodyControlInfo& setLiveStreamControlInfo(const vector<Models::DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo> & liveStreamControlInfo) { DARABONBA_PTR_SET_VALUE(liveStreamControlInfo_, liveStreamControlInfo) };
    inline DescribeLiveStreamsControlHistoryResponseBodyControlInfo& setLiveStreamControlInfo(vector<Models::DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo> && liveStreamControlInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamControlInfo_, liveStreamControlInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo>> liveStreamControlInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
