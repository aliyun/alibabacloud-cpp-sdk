// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEVICECAPTUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEVICECAPTUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyDeviceCaptureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDeviceCaptureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDeviceCaptureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    ModifyDeviceCaptureRequest() = default ;
    ModifyDeviceCaptureRequest(const ModifyDeviceCaptureRequest &) = default ;
    ModifyDeviceCaptureRequest(ModifyDeviceCaptureRequest &&) = default ;
    ModifyDeviceCaptureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDeviceCaptureRequest() = default ;
    ModifyDeviceCaptureRequest& operator=(const ModifyDeviceCaptureRequest &) = default ;
    ModifyDeviceCaptureRequest& operator=(ModifyDeviceCaptureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->image_ == nullptr && return this->ownerId_ == nullptr && return this->video_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyDeviceCaptureRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline int32_t image() const { DARABONBA_PTR_GET_DEFAULT(image_, 0) };
    inline ModifyDeviceCaptureRequest& setImage(int32_t image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDeviceCaptureRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline int32_t video() const { DARABONBA_PTR_GET_DEFAULT(video_, 0) };
    inline ModifyDeviceCaptureRequest& setVideo(int32_t video) { DARABONBA_PTR_SET_VALUE(video_, video) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> image_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<int32_t> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
