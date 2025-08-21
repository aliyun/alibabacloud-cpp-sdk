// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODYONLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSONLINELISTRESPONSEBODYONLINEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsOnlineListResponseBodyOnlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsOnlineListResponseBodyOnlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsOnlineListResponseBodyOnlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
    };
    DescribeVsStreamsOnlineListResponseBodyOnlineInfo() = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfo(const DescribeVsStreamsOnlineListResponseBodyOnlineInfo &) = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfo(DescribeVsStreamsOnlineListResponseBodyOnlineInfo &&) = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsOnlineListResponseBodyOnlineInfo() = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfo& operator=(const DescribeVsStreamsOnlineListResponseBodyOnlineInfo &) = default ;
    DescribeVsStreamsOnlineListResponseBodyOnlineInfo& operator=(DescribeVsStreamsOnlineListResponseBodyOnlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamOnlineInfo_ != nullptr; };
    // liveStreamOnlineInfo Field Functions 
    bool hasLiveStreamOnlineInfo() const { return this->liveStreamOnlineInfo_ != nullptr;};
    void deleteLiveStreamOnlineInfo() { this->liveStreamOnlineInfo_ = nullptr;};
    inline const vector<Models::DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> & liveStreamOnlineInfo() const { DARABONBA_PTR_GET_CONST(liveStreamOnlineInfo_, vector<Models::DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>) };
    inline vector<Models::DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> liveStreamOnlineInfo() { DARABONBA_PTR_GET(liveStreamOnlineInfo_, vector<Models::DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>) };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfo& setLiveStreamOnlineInfo(const vector<Models::DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> & liveStreamOnlineInfo) { DARABONBA_PTR_SET_VALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };
    inline DescribeVsStreamsOnlineListResponseBodyOnlineInfo& setLiveStreamOnlineInfo(vector<Models::DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> && liveStreamOnlineInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>> liveStreamOnlineInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
