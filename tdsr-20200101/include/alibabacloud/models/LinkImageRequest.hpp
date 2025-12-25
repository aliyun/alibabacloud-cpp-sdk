// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINKIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LINKIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class LinkImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LinkImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CameraHeight, cameraHeight_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
    };
    friend void from_json(const Darabonba::Json& j, LinkImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CameraHeight, cameraHeight_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
    };
    LinkImageRequest() = default ;
    LinkImageRequest(const LinkImageRequest &) = default ;
    LinkImageRequest(LinkImageRequest &&) = default ;
    LinkImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LinkImageRequest() = default ;
    LinkImageRequest& operator=(const LinkImageRequest &) = default ;
    LinkImageRequest& operator=(LinkImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cameraHeight_ == nullptr
        && return this->fileName_ == nullptr && return this->platform_ == nullptr && return this->subSceneId_ == nullptr; };
    // cameraHeight Field Functions 
    bool hasCameraHeight() const { return this->cameraHeight_ != nullptr;};
    void deleteCameraHeight() { this->cameraHeight_ = nullptr;};
    inline int32_t cameraHeight() const { DARABONBA_PTR_GET_DEFAULT(cameraHeight_, 0) };
    inline LinkImageRequest& setCameraHeight(int32_t cameraHeight) { DARABONBA_PTR_SET_VALUE(cameraHeight_, cameraHeight) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline LinkImageRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline LinkImageRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline LinkImageRequest& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


  protected:
    std::shared_ptr<int32_t> cameraHeight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subSceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
