// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODYVIDEOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODYVIDEOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoListResponseBodyVideoListVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoListResponseBodyVideoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoListResponseBodyVideoList& obj) { 
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoListResponseBodyVideoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GetVideoListResponseBodyVideoList() = default ;
    GetVideoListResponseBodyVideoList(const GetVideoListResponseBodyVideoList &) = default ;
    GetVideoListResponseBodyVideoList(GetVideoListResponseBodyVideoList &&) = default ;
    GetVideoListResponseBodyVideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoListResponseBodyVideoList() = default ;
    GetVideoListResponseBodyVideoList& operator=(const GetVideoListResponseBodyVideoList &) = default ;
    GetVideoListResponseBodyVideoList& operator=(GetVideoListResponseBodyVideoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->video_ == nullptr; };
    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const vector<Models::GetVideoListResponseBodyVideoListVideo> & video() const { DARABONBA_PTR_GET_CONST(video_, vector<Models::GetVideoListResponseBodyVideoListVideo>) };
    inline vector<Models::GetVideoListResponseBodyVideoListVideo> video() { DARABONBA_PTR_GET(video_, vector<Models::GetVideoListResponseBodyVideoListVideo>) };
    inline GetVideoListResponseBodyVideoList& setVideo(const vector<Models::GetVideoListResponseBodyVideoListVideo> & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline GetVideoListResponseBodyVideoList& setVideo(vector<Models::GetVideoListResponseBodyVideoListVideo> && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    std::shared_ptr<vector<Models::GetVideoListResponseBodyVideoListVideo>> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
