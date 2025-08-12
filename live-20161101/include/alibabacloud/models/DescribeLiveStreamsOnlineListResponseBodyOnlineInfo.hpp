// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODYONLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSONLINELISTRESPONSEBODYONLINEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsOnlineListResponseBodyOnlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsOnlineListResponseBodyOnlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsOnlineListResponseBodyOnlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamOnlineInfo, liveStreamOnlineInfo_);
    };
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfo() = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfo(const DescribeLiveStreamsOnlineListResponseBodyOnlineInfo &) = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfo(DescribeLiveStreamsOnlineListResponseBodyOnlineInfo &&) = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsOnlineListResponseBodyOnlineInfo() = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfo& operator=(const DescribeLiveStreamsOnlineListResponseBodyOnlineInfo &) = default ;
    DescribeLiveStreamsOnlineListResponseBodyOnlineInfo& operator=(DescribeLiveStreamsOnlineListResponseBodyOnlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamOnlineInfo_ != nullptr; };
    // liveStreamOnlineInfo Field Functions 
    bool hasLiveStreamOnlineInfo() const { return this->liveStreamOnlineInfo_ != nullptr;};
    void deleteLiveStreamOnlineInfo() { this->liveStreamOnlineInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> & liveStreamOnlineInfo() const { DARABONBA_PTR_GET_CONST(liveStreamOnlineInfo_, vector<Models::DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>) };
    inline vector<Models::DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> liveStreamOnlineInfo() { DARABONBA_PTR_GET(liveStreamOnlineInfo_, vector<Models::DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfo& setLiveStreamOnlineInfo(const vector<Models::DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> & liveStreamOnlineInfo) { DARABONBA_PTR_SET_VALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };
    inline DescribeLiveStreamsOnlineListResponseBodyOnlineInfo& setLiveStreamOnlineInfo(vector<Models::DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo> && liveStreamOnlineInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamOnlineInfo_, liveStreamOnlineInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamsOnlineListResponseBodyOnlineInfoLiveStreamOnlineInfo>> liveStreamOnlineInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
