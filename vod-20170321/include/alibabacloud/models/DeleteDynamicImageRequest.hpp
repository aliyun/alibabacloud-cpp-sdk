// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDYNAMICIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDYNAMICIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteDynamicImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDynamicImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageIds, dynamicImageIds_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDynamicImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageIds, dynamicImageIds_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    DeleteDynamicImageRequest() = default ;
    DeleteDynamicImageRequest(const DeleteDynamicImageRequest &) = default ;
    DeleteDynamicImageRequest(DeleteDynamicImageRequest &&) = default ;
    DeleteDynamicImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDynamicImageRequest() = default ;
    DeleteDynamicImageRequest& operator=(const DeleteDynamicImageRequest &) = default ;
    DeleteDynamicImageRequest& operator=(DeleteDynamicImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicImageIds_ != nullptr
        && this->videoId_ != nullptr; };
    // dynamicImageIds Field Functions 
    bool hasDynamicImageIds() const { return this->dynamicImageIds_ != nullptr;};
    void deleteDynamicImageIds() { this->dynamicImageIds_ = nullptr;};
    inline string dynamicImageIds() const { DARABONBA_PTR_GET_DEFAULT(dynamicImageIds_, "") };
    inline DeleteDynamicImageRequest& setDynamicImageIds(string dynamicImageIds) { DARABONBA_PTR_SET_VALUE(dynamicImageIds_, dynamicImageIds) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline DeleteDynamicImageRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The IDs of the animated stickers.
    // 
    // - Separate multiple IDs with commas (,). You can specify a maximum of 10 IDs.
    // - If you do not set this parameter, the system finds the video specified by the VideoId parameter and deletes the information about the animated stickers associated with the video. If more than 10 animated stickers are associated with the video specified by the VideoId parameter, the deletion request is denied.
    std::shared_ptr<string> dynamicImageIds_ = nullptr;
    // The ID of the video associated with the animated stickers whose information you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
