// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListAntCloudAuthScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListAntCloudAuthScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scenes, scenes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListAntCloudAuthScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
    };
    DescribeListAntCloudAuthScenesResponseBody() = default ;
    DescribeListAntCloudAuthScenesResponseBody(const DescribeListAntCloudAuthScenesResponseBody &) = default ;
    DescribeListAntCloudAuthScenesResponseBody(DescribeListAntCloudAuthScenesResponseBody &&) = default ;
    DescribeListAntCloudAuthScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListAntCloudAuthScenesResponseBody() = default ;
    DescribeListAntCloudAuthScenesResponseBody& operator=(const DescribeListAntCloudAuthScenesResponseBody &) = default ;
    DescribeListAntCloudAuthScenesResponseBody& operator=(DescribeListAntCloudAuthScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scenes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scenes& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Scenes& obj) { 
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
      Scenes() = default ;
      Scenes(const Scenes &) = default ;
      Scenes(Scenes &&) = default ;
      Scenes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scenes() = default ;
      Scenes& operator=(const Scenes &) = default ;
      Scenes& operator=(Scenes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->bindMiniProgram_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->domain_ == nullptr && this->miniProgramName_ == nullptr
        && this->modifier_ == nullptr && this->platform_ == nullptr && this->returnPicCount_ == nullptr && this->returnVideoLength_ == nullptr && this->sceneId_ == nullptr
        && this->sceneName_ == nullptr && this->status_ == nullptr && this->storeImage_ == nullptr && this->updateTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
      inline Scenes& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // bindMiniProgram Field Functions 
      bool hasBindMiniProgram() const { return this->bindMiniProgram_ != nullptr;};
      void deleteBindMiniProgram() { this->bindMiniProgram_ = nullptr;};
      inline string getBindMiniProgram() const { DARABONBA_PTR_GET_DEFAULT(bindMiniProgram_, "") };
      inline Scenes& setBindMiniProgram(string bindMiniProgram) { DARABONBA_PTR_SET_VALUE(bindMiniProgram_, bindMiniProgram) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Scenes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Scenes& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Scenes& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // miniProgramName Field Functions 
      bool hasMiniProgramName() const { return this->miniProgramName_ != nullptr;};
      void deleteMiniProgramName() { this->miniProgramName_ = nullptr;};
      inline string getMiniProgramName() const { DARABONBA_PTR_GET_DEFAULT(miniProgramName_, "") };
      inline Scenes& setMiniProgramName(string miniProgramName) { DARABONBA_PTR_SET_VALUE(miniProgramName_, miniProgramName) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline Scenes& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Scenes& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // returnPicCount Field Functions 
      bool hasReturnPicCount() const { return this->returnPicCount_ != nullptr;};
      void deleteReturnPicCount() { this->returnPicCount_ = nullptr;};
      inline int64_t getReturnPicCount() const { DARABONBA_PTR_GET_DEFAULT(returnPicCount_, 0L) };
      inline Scenes& setReturnPicCount(int64_t returnPicCount) { DARABONBA_PTR_SET_VALUE(returnPicCount_, returnPicCount) };


      // returnVideoLength Field Functions 
      bool hasReturnVideoLength() const { return this->returnVideoLength_ != nullptr;};
      void deleteReturnVideoLength() { this->returnVideoLength_ = nullptr;};
      inline int64_t getReturnVideoLength() const { DARABONBA_PTR_GET_DEFAULT(returnVideoLength_, 0L) };
      inline Scenes& setReturnVideoLength(int64_t returnVideoLength) { DARABONBA_PTR_SET_VALUE(returnVideoLength_, returnVideoLength) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
      inline Scenes& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Scenes& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Scenes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storeImage Field Functions 
      bool hasStoreImage() const { return this->storeImage_ != nullptr;};
      void deleteStoreImage() { this->storeImage_ = nullptr;};
      inline string getStoreImage() const { DARABONBA_PTR_GET_DEFAULT(storeImage_, "") };
      inline Scenes& setStoreImage(string storeImage) { DARABONBA_PTR_SET_VALUE(storeImage_, storeImage) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Scenes& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Application ID.
      shared_ptr<int64_t> appId_ {};
      // Whether to enable binding to a mini program:
      // - **Y**: Enabled
      // - **N (default)**: Not enabled
      shared_ptr<string> bindMiniProgram_ {};
      // Creation time.
      shared_ptr<string> createTime_ {};
      // Creator.
      shared_ptr<string> creator_ {};
      // Bound domain.
      shared_ptr<string> domain_ {};
      // Mini program name.
      shared_ptr<string> miniProgramName_ {};
      // Modifier.
      shared_ptr<string> modifier_ {};
      // Platform for binding the mini program:
      // - **WECHAT**: WeChat
      // - **ALIPAY**: Alipay
      // - **TIKTOK**: TikTok
      shared_ptr<string> platform_ {};
      shared_ptr<int64_t> returnPicCount_ {};
      shared_ptr<int64_t> returnVideoLength_ {};
      // Scenario ID.
      shared_ptr<int64_t> sceneId_ {};
      // Scenario name.
      shared_ptr<string> sceneName_ {};
      // Whether it is enabled, with 1 indicating yes.
      shared_ptr<int32_t> status_ {};
      // Whether to deliver the files generated by the authentication to the customer\\"s OSS:
      // - **Y**: Enabled
      // - **N**: Disabled
      shared_ptr<string> storeImage_ {};
      // The last update time of the instance.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scenes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListAntCloudAuthScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline const vector<DescribeListAntCloudAuthScenesResponseBody::Scenes> & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<DescribeListAntCloudAuthScenesResponseBody::Scenes>) };
    inline vector<DescribeListAntCloudAuthScenesResponseBody::Scenes> getScenes() { DARABONBA_PTR_GET(scenes_, vector<DescribeListAntCloudAuthScenesResponseBody::Scenes>) };
    inline DescribeListAntCloudAuthScenesResponseBody& setScenes(const vector<DescribeListAntCloudAuthScenesResponseBody::Scenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
    inline DescribeListAntCloudAuthScenesResponseBody& setScenes(vector<DescribeListAntCloudAuthScenesResponseBody::Scenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // List of scenarios.
    shared_ptr<vector<DescribeListAntCloudAuthScenesResponseBody::Scenes>> scenes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
