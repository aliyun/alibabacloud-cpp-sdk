// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODYLIVERECORDVIDEOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODYLIVERECORDVIDEOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLiveRecordVideoResponseBodyLiveRecordVideoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordVideoResponseBodyLiveRecordVideoList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordVideo, liveRecordVideo_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordVideoResponseBodyLiveRecordVideoList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordVideo, liveRecordVideo_);
    };
    ListLiveRecordVideoResponseBodyLiveRecordVideoList() = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoList(const ListLiveRecordVideoResponseBodyLiveRecordVideoList &) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoList(ListLiveRecordVideoResponseBodyLiveRecordVideoList &&) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordVideoResponseBodyLiveRecordVideoList() = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoList& operator=(const ListLiveRecordVideoResponseBodyLiveRecordVideoList &) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoList& operator=(ListLiveRecordVideoResponseBodyLiveRecordVideoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveRecordVideo_ != nullptr; };
    // liveRecordVideo Field Functions 
    bool hasLiveRecordVideo() const { return this->liveRecordVideo_ != nullptr;};
    void deleteLiveRecordVideo() { this->liveRecordVideo_ = nullptr;};
    inline const vector<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo> & liveRecordVideo() const { DARABONBA_PTR_GET_CONST(liveRecordVideo_, vector<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo>) };
    inline vector<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo> liveRecordVideo() { DARABONBA_PTR_GET(liveRecordVideo_, vector<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo>) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoList& setLiveRecordVideo(const vector<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo> & liveRecordVideo) { DARABONBA_PTR_SET_VALUE(liveRecordVideo_, liveRecordVideo) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoList& setLiveRecordVideo(vector<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo> && liveRecordVideo) { DARABONBA_PTR_SET_RVALUE(liveRecordVideo_, liveRecordVideo) };


  protected:
    std::shared_ptr<vector<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo>> liveRecordVideo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
