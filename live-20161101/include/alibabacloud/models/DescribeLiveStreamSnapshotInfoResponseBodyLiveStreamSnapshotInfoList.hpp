// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODYLIVESTREAMSNAPSHOTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODYLIVESTREAMSNAPSHOTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamSnapshotInfo, liveStreamSnapshotInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamSnapshotInfo, liveStreamSnapshotInfo_);
    };
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList() = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList(const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList &) = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList(DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList &&) = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList() = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList& operator=(const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList &) = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList& operator=(DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamSnapshotInfo_ != nullptr; };
    // liveStreamSnapshotInfo Field Functions 
    bool hasLiveStreamSnapshotInfo() const { return this->liveStreamSnapshotInfo_ != nullptr;};
    void deleteLiveStreamSnapshotInfo() { this->liveStreamSnapshotInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo> & liveStreamSnapshotInfo() const { DARABONBA_PTR_GET_CONST(liveStreamSnapshotInfo_, vector<Models::DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo>) };
    inline vector<Models::DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo> liveStreamSnapshotInfo() { DARABONBA_PTR_GET(liveStreamSnapshotInfo_, vector<Models::DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo>) };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList& setLiveStreamSnapshotInfo(const vector<Models::DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo> & liveStreamSnapshotInfo) { DARABONBA_PTR_SET_VALUE(liveStreamSnapshotInfo_, liveStreamSnapshotInfo) };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoList& setLiveStreamSnapshotInfo(vector<Models::DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo> && liveStreamSnapshotInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamSnapshotInfo_, liveStreamSnapshotInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo>> liveStreamSnapshotInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
