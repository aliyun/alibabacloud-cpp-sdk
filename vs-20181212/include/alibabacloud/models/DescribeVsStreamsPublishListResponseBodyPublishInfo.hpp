// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSPUBLISHLISTRESPONSEBODYPUBLISHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSPUBLISHLISTRESPONSEBODYPUBLISHINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsPublishListResponseBodyPublishInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsPublishListResponseBodyPublishInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamPublishInfo, liveStreamPublishInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsPublishListResponseBodyPublishInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamPublishInfo, liveStreamPublishInfo_);
    };
    DescribeVsStreamsPublishListResponseBodyPublishInfo() = default ;
    DescribeVsStreamsPublishListResponseBodyPublishInfo(const DescribeVsStreamsPublishListResponseBodyPublishInfo &) = default ;
    DescribeVsStreamsPublishListResponseBodyPublishInfo(DescribeVsStreamsPublishListResponseBodyPublishInfo &&) = default ;
    DescribeVsStreamsPublishListResponseBodyPublishInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsPublishListResponseBodyPublishInfo() = default ;
    DescribeVsStreamsPublishListResponseBodyPublishInfo& operator=(const DescribeVsStreamsPublishListResponseBodyPublishInfo &) = default ;
    DescribeVsStreamsPublishListResponseBodyPublishInfo& operator=(DescribeVsStreamsPublishListResponseBodyPublishInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamPublishInfo_ != nullptr; };
    // liveStreamPublishInfo Field Functions 
    bool hasLiveStreamPublishInfo() const { return this->liveStreamPublishInfo_ != nullptr;};
    void deleteLiveStreamPublishInfo() { this->liveStreamPublishInfo_ = nullptr;};
    inline const vector<Models::DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> & liveStreamPublishInfo() const { DARABONBA_PTR_GET_CONST(liveStreamPublishInfo_, vector<Models::DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>) };
    inline vector<Models::DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> liveStreamPublishInfo() { DARABONBA_PTR_GET(liveStreamPublishInfo_, vector<Models::DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>) };
    inline DescribeVsStreamsPublishListResponseBodyPublishInfo& setLiveStreamPublishInfo(const vector<Models::DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> & liveStreamPublishInfo) { DARABONBA_PTR_SET_VALUE(liveStreamPublishInfo_, liveStreamPublishInfo) };
    inline DescribeVsStreamsPublishListResponseBodyPublishInfo& setLiveStreamPublishInfo(vector<Models::DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> && liveStreamPublishInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamPublishInfo_, liveStreamPublishInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>> liveStreamPublishInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
