// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESRESPONSEBODYSCENES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESRESPONSEBODYSCENES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListAntCloudAuthScenesResponseBodyScenes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListAntCloudAuthScenesResponseBodyScenes& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BindMiniProgram, bindMiniProgram_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(MiniProgramName, miniProgramName_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ReturnPicCount, returnPicCount_);
      DARABONBA_PTR_TO_JSON(ReturnVideoLength, returnVideoLength_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoreImage, storeImage_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListAntCloudAuthScenesResponseBodyScenes& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BindMiniProgram, bindMiniProgram_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(MiniProgramName, miniProgramName_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ReturnPicCount, returnPicCount_);
      DARABONBA_PTR_FROM_JSON(ReturnVideoLength, returnVideoLength_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoreImage, storeImage_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeListAntCloudAuthScenesResponseBodyScenes() = default ;
    DescribeListAntCloudAuthScenesResponseBodyScenes(const DescribeListAntCloudAuthScenesResponseBodyScenes &) = default ;
    DescribeListAntCloudAuthScenesResponseBodyScenes(DescribeListAntCloudAuthScenesResponseBodyScenes &&) = default ;
    DescribeListAntCloudAuthScenesResponseBodyScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListAntCloudAuthScenesResponseBodyScenes() = default ;
    DescribeListAntCloudAuthScenesResponseBodyScenes& operator=(const DescribeListAntCloudAuthScenesResponseBodyScenes &) = default ;
    DescribeListAntCloudAuthScenesResponseBodyScenes& operator=(DescribeListAntCloudAuthScenesResponseBodyScenes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->bindMiniProgram_ == nullptr && return this->createTime_ == nullptr && return this->creator_ == nullptr && return this->domain_ == nullptr && return this->miniProgramName_ == nullptr
        && return this->modifier_ == nullptr && return this->platform_ == nullptr && return this->returnPicCount_ == nullptr && return this->returnVideoLength_ == nullptr && return this->sceneId_ == nullptr
        && return this->sceneName_ == nullptr && return this->status_ == nullptr && return this->storeImage_ == nullptr && return this->updateTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bindMiniProgram Field Functions 
    bool hasBindMiniProgram() const { return this->bindMiniProgram_ != nullptr;};
    void deleteBindMiniProgram() { this->bindMiniProgram_ = nullptr;};
    inline string bindMiniProgram() const { DARABONBA_PTR_GET_DEFAULT(bindMiniProgram_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setBindMiniProgram(string bindMiniProgram) { DARABONBA_PTR_SET_VALUE(bindMiniProgram_, bindMiniProgram) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // miniProgramName Field Functions 
    bool hasMiniProgramName() const { return this->miniProgramName_ != nullptr;};
    void deleteMiniProgramName() { this->miniProgramName_ = nullptr;};
    inline string miniProgramName() const { DARABONBA_PTR_GET_DEFAULT(miniProgramName_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setMiniProgramName(string miniProgramName) { DARABONBA_PTR_SET_VALUE(miniProgramName_, miniProgramName) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // returnPicCount Field Functions 
    bool hasReturnPicCount() const { return this->returnPicCount_ != nullptr;};
    void deleteReturnPicCount() { this->returnPicCount_ = nullptr;};
    inline int64_t returnPicCount() const { DARABONBA_PTR_GET_DEFAULT(returnPicCount_, 0L) };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setReturnPicCount(int64_t returnPicCount) { DARABONBA_PTR_SET_VALUE(returnPicCount_, returnPicCount) };


    // returnVideoLength Field Functions 
    bool hasReturnVideoLength() const { return this->returnVideoLength_ != nullptr;};
    void deleteReturnVideoLength() { this->returnVideoLength_ = nullptr;};
    inline int64_t returnVideoLength() const { DARABONBA_PTR_GET_DEFAULT(returnVideoLength_, 0L) };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setReturnVideoLength(int64_t returnVideoLength) { DARABONBA_PTR_SET_VALUE(returnVideoLength_, returnVideoLength) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storeImage Field Functions 
    bool hasStoreImage() const { return this->storeImage_ != nullptr;};
    void deleteStoreImage() { this->storeImage_ = nullptr;};
    inline string storeImage() const { DARABONBA_PTR_GET_DEFAULT(storeImage_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setStoreImage(string storeImage) { DARABONBA_PTR_SET_VALUE(storeImage_, storeImage) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeListAntCloudAuthScenesResponseBodyScenes& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Application ID.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // Whether to enable binding to a mini program:
    // - **Y**: Enabled
    // - **N (default)**: Not enabled
    std::shared_ptr<string> bindMiniProgram_ = nullptr;
    // Creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Creator.
    std::shared_ptr<string> creator_ = nullptr;
    // Bound domain.
    std::shared_ptr<string> domain_ = nullptr;
    // Mini program name.
    std::shared_ptr<string> miniProgramName_ = nullptr;
    // Modifier.
    std::shared_ptr<string> modifier_ = nullptr;
    // Platform for binding the mini program:
    // - **WECHAT**: WeChat
    // - **ALIPAY**: Alipay
    // - **TIKTOK**: TikTok
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<int64_t> returnPicCount_ = nullptr;
    std::shared_ptr<int64_t> returnVideoLength_ = nullptr;
    // Scenario ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Scenario name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Whether it is enabled, with 1 indicating yes.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Whether to deliver the files generated by the authentication to the customer\\"s OSS:
    // - **Y**: Enabled
    // - **N**: Disabled
    std::shared_ptr<string> storeImage_ = nullptr;
    // The last update time of the instance.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
