// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATE2DAVATARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATE2DAVATARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class Update2dAvatarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Update2dAvatarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Orientation, orientation_);
      DARABONBA_PTR_TO_JSON(Portrait, portrait_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Transparent, transparent_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, Update2dAvatarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Orientation, orientation_);
      DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Transparent, transparent_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    Update2dAvatarRequest() = default ;
    Update2dAvatarRequest(const Update2dAvatarRequest &) = default ;
    Update2dAvatarRequest(Update2dAvatarRequest &&) = default ;
    Update2dAvatarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Update2dAvatarRequest() = default ;
    Update2dAvatarRequest& operator=(const Update2dAvatarRequest &) = default ;
    Update2dAvatarRequest& operator=(Update2dAvatarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callback_ != nullptr
        && this->code_ != nullptr && this->description_ != nullptr && this->image_ != nullptr && this->name_ != nullptr && this->orientation_ != nullptr
        && this->portrait_ != nullptr && this->tenantId_ != nullptr && this->transparent_ != nullptr && this->video_ != nullptr; };
    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline bool callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, false) };
    inline Update2dAvatarRequest& setCallback(bool callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Update2dAvatarRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Update2dAvatarRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline Update2dAvatarRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Update2dAvatarRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orientation Field Functions 
    bool hasOrientation() const { return this->orientation_ != nullptr;};
    void deleteOrientation() { this->orientation_ = nullptr;};
    inline int32_t orientation() const { DARABONBA_PTR_GET_DEFAULT(orientation_, 0) };
    inline Update2dAvatarRequest& setOrientation(int32_t orientation) { DARABONBA_PTR_SET_VALUE(orientation_, orientation) };


    // portrait Field Functions 
    bool hasPortrait() const { return this->portrait_ != nullptr;};
    void deletePortrait() { this->portrait_ = nullptr;};
    inline string portrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
    inline Update2dAvatarRequest& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline Update2dAvatarRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // transparent Field Functions 
    bool hasTransparent() const { return this->transparent_ != nullptr;};
    void deleteTransparent() { this->transparent_ = nullptr;};
    inline bool transparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
    inline Update2dAvatarRequest& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline string video() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
    inline Update2dAvatarRequest& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


  protected:
    std::shared_ptr<bool> callback_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> orientation_ = nullptr;
    std::shared_ptr<string> portrait_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<bool> transparent_ = nullptr;
    std::shared_ptr<string> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
