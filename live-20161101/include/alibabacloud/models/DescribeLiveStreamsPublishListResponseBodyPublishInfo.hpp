// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTRESPONSEBODYPUBLISHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTRESPONSEBODYPUBLISHINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsPublishListResponseBodyPublishInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsPublishListResponseBodyPublishInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamPublishInfo, liveStreamPublishInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsPublishListResponseBodyPublishInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamPublishInfo, liveStreamPublishInfo_);
    };
    DescribeLiveStreamsPublishListResponseBodyPublishInfo() = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfo(const DescribeLiveStreamsPublishListResponseBodyPublishInfo &) = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfo(DescribeLiveStreamsPublishListResponseBodyPublishInfo &&) = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsPublishListResponseBodyPublishInfo() = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfo& operator=(const DescribeLiveStreamsPublishListResponseBodyPublishInfo &) = default ;
    DescribeLiveStreamsPublishListResponseBodyPublishInfo& operator=(DescribeLiveStreamsPublishListResponseBodyPublishInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamPublishInfo_ != nullptr; };
    // liveStreamPublishInfo Field Functions 
    bool hasLiveStreamPublishInfo() const { return this->liveStreamPublishInfo_ != nullptr;};
    void deleteLiveStreamPublishInfo() { this->liveStreamPublishInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> & liveStreamPublishInfo() const { DARABONBA_PTR_GET_CONST(liveStreamPublishInfo_, vector<Models::DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>) };
    inline vector<Models::DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> liveStreamPublishInfo() { DARABONBA_PTR_GET(liveStreamPublishInfo_, vector<Models::DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>) };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfo& setLiveStreamPublishInfo(const vector<Models::DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> & liveStreamPublishInfo) { DARABONBA_PTR_SET_VALUE(liveStreamPublishInfo_, liveStreamPublishInfo) };
    inline DescribeLiveStreamsPublishListResponseBodyPublishInfo& setLiveStreamPublishInfo(vector<Models::DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo> && liveStreamPublishInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamPublishInfo_, liveStreamPublishInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamsPublishListResponseBodyPublishInfoLiveStreamPublishInfo>> liveStreamPublishInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
