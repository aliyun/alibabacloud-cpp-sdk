// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANTCLOUDAUTHSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANTCLOUDAUTHSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class UpdateAntCloudAuthSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAntCloudAuthSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindMiniProgram, bindMiniProgram_);
      DARABONBA_PTR_TO_JSON(CheckFileBody, checkFileBody_);
      DARABONBA_PTR_TO_JSON(CheckFileName, checkFileName_);
      DARABONBA_PTR_TO_JSON(MiniProgramName, miniProgramName_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ReturnPicCount, returnPicCount_);
      DARABONBA_PTR_TO_JSON(ReturnVideoLength, returnVideoLength_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoreImage, storeImage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAntCloudAuthSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindMiniProgram, bindMiniProgram_);
      DARABONBA_PTR_FROM_JSON(CheckFileBody, checkFileBody_);
      DARABONBA_PTR_FROM_JSON(CheckFileName, checkFileName_);
      DARABONBA_PTR_FROM_JSON(MiniProgramName, miniProgramName_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ReturnPicCount, returnPicCount_);
      DARABONBA_PTR_FROM_JSON(ReturnVideoLength, returnVideoLength_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoreImage, storeImage_);
    };
    UpdateAntCloudAuthSceneRequest() = default ;
    UpdateAntCloudAuthSceneRequest(const UpdateAntCloudAuthSceneRequest &) = default ;
    UpdateAntCloudAuthSceneRequest(UpdateAntCloudAuthSceneRequest &&) = default ;
    UpdateAntCloudAuthSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAntCloudAuthSceneRequest() = default ;
    UpdateAntCloudAuthSceneRequest& operator=(const UpdateAntCloudAuthSceneRequest &) = default ;
    UpdateAntCloudAuthSceneRequest& operator=(UpdateAntCloudAuthSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindMiniProgram_ == nullptr
        && return this->checkFileBody_ == nullptr && return this->checkFileName_ == nullptr && return this->miniProgramName_ == nullptr && return this->platform_ == nullptr && return this->returnPicCount_ == nullptr
        && return this->returnVideoLength_ == nullptr && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr && return this->status_ == nullptr && return this->storeImage_ == nullptr; };
    // bindMiniProgram Field Functions 
    bool hasBindMiniProgram() const { return this->bindMiniProgram_ != nullptr;};
    void deleteBindMiniProgram() { this->bindMiniProgram_ = nullptr;};
    inline string bindMiniProgram() const { DARABONBA_PTR_GET_DEFAULT(bindMiniProgram_, "") };
    inline UpdateAntCloudAuthSceneRequest& setBindMiniProgram(string bindMiniProgram) { DARABONBA_PTR_SET_VALUE(bindMiniProgram_, bindMiniProgram) };


    // checkFileBody Field Functions 
    bool hasCheckFileBody() const { return this->checkFileBody_ != nullptr;};
    void deleteCheckFileBody() { this->checkFileBody_ = nullptr;};
    inline string checkFileBody() const { DARABONBA_PTR_GET_DEFAULT(checkFileBody_, "") };
    inline UpdateAntCloudAuthSceneRequest& setCheckFileBody(string checkFileBody) { DARABONBA_PTR_SET_VALUE(checkFileBody_, checkFileBody) };


    // checkFileName Field Functions 
    bool hasCheckFileName() const { return this->checkFileName_ != nullptr;};
    void deleteCheckFileName() { this->checkFileName_ = nullptr;};
    inline string checkFileName() const { DARABONBA_PTR_GET_DEFAULT(checkFileName_, "") };
    inline UpdateAntCloudAuthSceneRequest& setCheckFileName(string checkFileName) { DARABONBA_PTR_SET_VALUE(checkFileName_, checkFileName) };


    // miniProgramName Field Functions 
    bool hasMiniProgramName() const { return this->miniProgramName_ != nullptr;};
    void deleteMiniProgramName() { this->miniProgramName_ = nullptr;};
    inline string miniProgramName() const { DARABONBA_PTR_GET_DEFAULT(miniProgramName_, "") };
    inline UpdateAntCloudAuthSceneRequest& setMiniProgramName(string miniProgramName) { DARABONBA_PTR_SET_VALUE(miniProgramName_, miniProgramName) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline UpdateAntCloudAuthSceneRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // returnPicCount Field Functions 
    bool hasReturnPicCount() const { return this->returnPicCount_ != nullptr;};
    void deleteReturnPicCount() { this->returnPicCount_ = nullptr;};
    inline int64_t returnPicCount() const { DARABONBA_PTR_GET_DEFAULT(returnPicCount_, 0L) };
    inline UpdateAntCloudAuthSceneRequest& setReturnPicCount(int64_t returnPicCount) { DARABONBA_PTR_SET_VALUE(returnPicCount_, returnPicCount) };


    // returnVideoLength Field Functions 
    bool hasReturnVideoLength() const { return this->returnVideoLength_ != nullptr;};
    void deleteReturnVideoLength() { this->returnVideoLength_ = nullptr;};
    inline int64_t returnVideoLength() const { DARABONBA_PTR_GET_DEFAULT(returnVideoLength_, 0L) };
    inline UpdateAntCloudAuthSceneRequest& setReturnVideoLength(int64_t returnVideoLength) { DARABONBA_PTR_SET_VALUE(returnVideoLength_, returnVideoLength) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline UpdateAntCloudAuthSceneRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline UpdateAntCloudAuthSceneRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateAntCloudAuthSceneRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storeImage Field Functions 
    bool hasStoreImage() const { return this->storeImage_ != nullptr;};
    void deleteStoreImage() { this->storeImage_ = nullptr;};
    inline string storeImage() const { DARABONBA_PTR_GET_DEFAULT(storeImage_, "") };
    inline UpdateAntCloudAuthSceneRequest& setStoreImage(string storeImage) { DARABONBA_PTR_SET_VALUE(storeImage_, storeImage) };


  protected:
    // Whether to enable binding to a mini program:
    // - **Y**: Enable
    // - **N (default)**: Do not enable
    // >Notice: If enabling the binding of a mini program, please ensure all parameters for the mini program are passed.
    std::shared_ptr<string> bindMiniProgram_ = nullptr;
    // Content of the uploaded verification file.
    std::shared_ptr<string> checkFileBody_ = nullptr;
    // Name of the uploaded verification file.
    std::shared_ptr<string> checkFileName_ = nullptr;
    // Mini program name.
    std::shared_ptr<string> miniProgramName_ = nullptr;
    // Binding mini program platform:
    // - **WECHAT**: WeChat
    // - **ALIPAY**: Alipay
    // - **TIKTOK**: TikTok
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<int64_t> returnPicCount_ = nullptr;
    std::shared_ptr<int64_t> returnVideoLength_ = nullptr;
    // Scenario ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Scenario name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Currently meaningless, can be omitted.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Whether to enable delivering the authentication files generated during the authentication process to the user\\"s OSS:
    // - **Y**: Enable
    // - **N (default)**: Disable
    std::shared_ptr<string> storeImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
