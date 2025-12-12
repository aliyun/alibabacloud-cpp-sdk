// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANTCLOUDAUTHSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANTCLOUDAUTHSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateAntCloudAuthSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAntCloudAuthSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindMiniProgram, bindMiniProgram_);
      DARABONBA_PTR_TO_JSON(CheckFileBody, checkFileBody_);
      DARABONBA_PTR_TO_JSON(CheckFileName, checkFileName_);
      DARABONBA_PTR_TO_JSON(MiniProgramName, miniProgramName_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ReturnPicCount, returnPicCount_);
      DARABONBA_PTR_TO_JSON(ReturnVideoLength, returnVideoLength_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(StoreImage, storeImage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAntCloudAuthSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindMiniProgram, bindMiniProgram_);
      DARABONBA_PTR_FROM_JSON(CheckFileBody, checkFileBody_);
      DARABONBA_PTR_FROM_JSON(CheckFileName, checkFileName_);
      DARABONBA_PTR_FROM_JSON(MiniProgramName, miniProgramName_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ReturnPicCount, returnPicCount_);
      DARABONBA_PTR_FROM_JSON(ReturnVideoLength, returnVideoLength_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(StoreImage, storeImage_);
    };
    CreateAntCloudAuthSceneRequest() = default ;
    CreateAntCloudAuthSceneRequest(const CreateAntCloudAuthSceneRequest &) = default ;
    CreateAntCloudAuthSceneRequest(CreateAntCloudAuthSceneRequest &&) = default ;
    CreateAntCloudAuthSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAntCloudAuthSceneRequest() = default ;
    CreateAntCloudAuthSceneRequest& operator=(const CreateAntCloudAuthSceneRequest &) = default ;
    CreateAntCloudAuthSceneRequest& operator=(CreateAntCloudAuthSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindMiniProgram_ == nullptr
        && return this->checkFileBody_ == nullptr && return this->checkFileName_ == nullptr && return this->miniProgramName_ == nullptr && return this->platform_ == nullptr && return this->returnPicCount_ == nullptr
        && return this->returnVideoLength_ == nullptr && return this->sceneName_ == nullptr && return this->storeImage_ == nullptr; };
    // bindMiniProgram Field Functions 
    bool hasBindMiniProgram() const { return this->bindMiniProgram_ != nullptr;};
    void deleteBindMiniProgram() { this->bindMiniProgram_ = nullptr;};
    inline string bindMiniProgram() const { DARABONBA_PTR_GET_DEFAULT(bindMiniProgram_, "") };
    inline CreateAntCloudAuthSceneRequest& setBindMiniProgram(string bindMiniProgram) { DARABONBA_PTR_SET_VALUE(bindMiniProgram_, bindMiniProgram) };


    // checkFileBody Field Functions 
    bool hasCheckFileBody() const { return this->checkFileBody_ != nullptr;};
    void deleteCheckFileBody() { this->checkFileBody_ = nullptr;};
    inline string checkFileBody() const { DARABONBA_PTR_GET_DEFAULT(checkFileBody_, "") };
    inline CreateAntCloudAuthSceneRequest& setCheckFileBody(string checkFileBody) { DARABONBA_PTR_SET_VALUE(checkFileBody_, checkFileBody) };


    // checkFileName Field Functions 
    bool hasCheckFileName() const { return this->checkFileName_ != nullptr;};
    void deleteCheckFileName() { this->checkFileName_ = nullptr;};
    inline string checkFileName() const { DARABONBA_PTR_GET_DEFAULT(checkFileName_, "") };
    inline CreateAntCloudAuthSceneRequest& setCheckFileName(string checkFileName) { DARABONBA_PTR_SET_VALUE(checkFileName_, checkFileName) };


    // miniProgramName Field Functions 
    bool hasMiniProgramName() const { return this->miniProgramName_ != nullptr;};
    void deleteMiniProgramName() { this->miniProgramName_ = nullptr;};
    inline string miniProgramName() const { DARABONBA_PTR_GET_DEFAULT(miniProgramName_, "") };
    inline CreateAntCloudAuthSceneRequest& setMiniProgramName(string miniProgramName) { DARABONBA_PTR_SET_VALUE(miniProgramName_, miniProgramName) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateAntCloudAuthSceneRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // returnPicCount Field Functions 
    bool hasReturnPicCount() const { return this->returnPicCount_ != nullptr;};
    void deleteReturnPicCount() { this->returnPicCount_ = nullptr;};
    inline int64_t returnPicCount() const { DARABONBA_PTR_GET_DEFAULT(returnPicCount_, 0L) };
    inline CreateAntCloudAuthSceneRequest& setReturnPicCount(int64_t returnPicCount) { DARABONBA_PTR_SET_VALUE(returnPicCount_, returnPicCount) };


    // returnVideoLength Field Functions 
    bool hasReturnVideoLength() const { return this->returnVideoLength_ != nullptr;};
    void deleteReturnVideoLength() { this->returnVideoLength_ = nullptr;};
    inline int64_t returnVideoLength() const { DARABONBA_PTR_GET_DEFAULT(returnVideoLength_, 0L) };
    inline CreateAntCloudAuthSceneRequest& setReturnVideoLength(int64_t returnVideoLength) { DARABONBA_PTR_SET_VALUE(returnVideoLength_, returnVideoLength) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline CreateAntCloudAuthSceneRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // storeImage Field Functions 
    bool hasStoreImage() const { return this->storeImage_ != nullptr;};
    void deleteStoreImage() { this->storeImage_ = nullptr;};
    inline string storeImage() const { DARABONBA_PTR_GET_DEFAULT(storeImage_, "") };
    inline CreateAntCloudAuthSceneRequest& setStoreImage(string storeImage) { DARABONBA_PTR_SET_VALUE(storeImage_, storeImage) };


  protected:
    // Whether to enable binding of the mini program:
    // - **Y**: Enable
    // - **N (default)**: Not enabled
    std::shared_ptr<string> bindMiniProgram_ = nullptr;
    // Content of the uploaded verification file.
    std::shared_ptr<string> checkFileBody_ = nullptr;
    // Name of the uploaded verification file.
    std::shared_ptr<string> checkFileName_ = nullptr;
    // Mini program name.
    std::shared_ptr<string> miniProgramName_ = nullptr;
    // Binding platform for the mini program:
    // - **WECHAT**: WeChat
    // - **ALIPAY**: Alipay
    // - **TIKTOK**: TikTok
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<int64_t> returnPicCount_ = nullptr;
    std::shared_ptr<int64_t> returnVideoLength_ = nullptr;
    // Scene name.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Whether to deliver the files generated from the authentication to the customer\\"s OSS:
    // - **Y**: Yes
    // - **N**: No
    std::shared_ptr<string> storeImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
