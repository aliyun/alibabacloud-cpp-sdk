// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEATTACHEDMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEATTACHEDMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteAttachedMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAttachedMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAttachedMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    DeleteAttachedMediaRequest() = default ;
    DeleteAttachedMediaRequest(const DeleteAttachedMediaRequest &) = default ;
    DeleteAttachedMediaRequest(DeleteAttachedMediaRequest &&) = default ;
    DeleteAttachedMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAttachedMediaRequest() = default ;
    DeleteAttachedMediaRequest& operator=(const DeleteAttachedMediaRequest &) = default ;
    DeleteAttachedMediaRequest& operator=(DeleteAttachedMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline DeleteAttachedMediaRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    // The ID of the auxiliary media asset that you want to delete.
    // 
    // *   Separate multiple IDs with commas (,). You can specify up to 20 IDs.
    // *   You can obtain the ID from the response to the [CreateUploadAttachedMedia](~~CreateUploadAttachedMedia~~) operation that you call to obtain the upload URL and credential.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
