// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoIds, videoIds_);
    };
    GetVideoInfosRequest() = default ;
    GetVideoInfosRequest(const GetVideoInfosRequest &) = default ;
    GetVideoInfosRequest(GetVideoInfosRequest &&) = default ;
    GetVideoInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfosRequest() = default ;
    GetVideoInfosRequest& operator=(const GetVideoInfosRequest &) = default ;
    GetVideoInfosRequest& operator=(GetVideoInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoIds_ != nullptr; };
    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline string videoIds() const { DARABONBA_PTR_GET_DEFAULT(videoIds_, "") };
    inline GetVideoInfosRequest& setVideoIds(string videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };


  protected:
    // The list of video IDs. Separate multiple IDs with commas (,). A maximum of 20 IDs can be specified.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
