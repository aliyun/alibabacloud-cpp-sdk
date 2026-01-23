// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRules, buildRules_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRules, buildRules_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepoBuildRuleResponseBody() = default ;
    ListRepoBuildRuleResponseBody(const ListRepoBuildRuleResponseBody &) = default ;
    ListRepoBuildRuleResponseBody(ListRepoBuildRuleResponseBody &&) = default ;
    ListRepoBuildRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRuleResponseBody() = default ;
    ListRepoBuildRuleResponseBody& operator=(const ListRepoBuildRuleResponseBody &) = default ;
    ListRepoBuildRuleResponseBody& operator=(ListRepoBuildRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BuildRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildRules& obj) { 
        DARABONBA_PTR_TO_JSON(BuildArgs, buildArgs_);
        DARABONBA_PTR_TO_JSON(BuildRuleId, buildRuleId_);
        DARABONBA_PTR_TO_JSON(DestArtifactType, destArtifactType_);
        DARABONBA_PTR_TO_JSON(DockerfileLocation, dockerfileLocation_);
        DARABONBA_PTR_TO_JSON(DockerfileName, dockerfileName_);
        DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_TO_JSON(Platforms, platforms_);
        DARABONBA_PTR_TO_JSON(PushName, pushName_);
        DARABONBA_PTR_TO_JSON(PushType, pushType_);
      };
      friend void from_json(const Darabonba::Json& j, BuildRules& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildArgs, buildArgs_);
        DARABONBA_PTR_FROM_JSON(BuildRuleId, buildRuleId_);
        DARABONBA_PTR_FROM_JSON(DestArtifactType, destArtifactType_);
        DARABONBA_PTR_FROM_JSON(DockerfileLocation, dockerfileLocation_);
        DARABONBA_PTR_FROM_JSON(DockerfileName, dockerfileName_);
        DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
        DARABONBA_PTR_FROM_JSON(PushName, pushName_);
        DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      };
      BuildRules() = default ;
      BuildRules(const BuildRules &) = default ;
      BuildRules(BuildRules &&) = default ;
      BuildRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BuildRules() = default ;
      BuildRules& operator=(const BuildRules &) = default ;
      BuildRules& operator=(BuildRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buildArgs_ == nullptr
        && this->buildRuleId_ == nullptr && this->destArtifactType_ == nullptr && this->dockerfileLocation_ == nullptr && this->dockerfileName_ == nullptr && this->imageTag_ == nullptr
        && this->platforms_ == nullptr && this->pushName_ == nullptr && this->pushType_ == nullptr; };
      // buildArgs Field Functions 
      bool hasBuildArgs() const { return this->buildArgs_ != nullptr;};
      void deleteBuildArgs() { this->buildArgs_ = nullptr;};
      inline const vector<string> & getBuildArgs() const { DARABONBA_PTR_GET_CONST(buildArgs_, vector<string>) };
      inline vector<string> getBuildArgs() { DARABONBA_PTR_GET(buildArgs_, vector<string>) };
      inline BuildRules& setBuildArgs(const vector<string> & buildArgs) { DARABONBA_PTR_SET_VALUE(buildArgs_, buildArgs) };
      inline BuildRules& setBuildArgs(vector<string> && buildArgs) { DARABONBA_PTR_SET_RVALUE(buildArgs_, buildArgs) };


      // buildRuleId Field Functions 
      bool hasBuildRuleId() const { return this->buildRuleId_ != nullptr;};
      void deleteBuildRuleId() { this->buildRuleId_ = nullptr;};
      inline string getBuildRuleId() const { DARABONBA_PTR_GET_DEFAULT(buildRuleId_, "") };
      inline BuildRules& setBuildRuleId(string buildRuleId) { DARABONBA_PTR_SET_VALUE(buildRuleId_, buildRuleId) };


      // destArtifactType Field Functions 
      bool hasDestArtifactType() const { return this->destArtifactType_ != nullptr;};
      void deleteDestArtifactType() { this->destArtifactType_ = nullptr;};
      inline string getDestArtifactType() const { DARABONBA_PTR_GET_DEFAULT(destArtifactType_, "") };
      inline BuildRules& setDestArtifactType(string destArtifactType) { DARABONBA_PTR_SET_VALUE(destArtifactType_, destArtifactType) };


      // dockerfileLocation Field Functions 
      bool hasDockerfileLocation() const { return this->dockerfileLocation_ != nullptr;};
      void deleteDockerfileLocation() { this->dockerfileLocation_ = nullptr;};
      inline string getDockerfileLocation() const { DARABONBA_PTR_GET_DEFAULT(dockerfileLocation_, "") };
      inline BuildRules& setDockerfileLocation(string dockerfileLocation) { DARABONBA_PTR_SET_VALUE(dockerfileLocation_, dockerfileLocation) };


      // dockerfileName Field Functions 
      bool hasDockerfileName() const { return this->dockerfileName_ != nullptr;};
      void deleteDockerfileName() { this->dockerfileName_ = nullptr;};
      inline string getDockerfileName() const { DARABONBA_PTR_GET_DEFAULT(dockerfileName_, "") };
      inline BuildRules& setDockerfileName(string dockerfileName) { DARABONBA_PTR_SET_VALUE(dockerfileName_, dockerfileName) };


      // imageTag Field Functions 
      bool hasImageTag() const { return this->imageTag_ != nullptr;};
      void deleteImageTag() { this->imageTag_ = nullptr;};
      inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
      inline BuildRules& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


      // platforms Field Functions 
      bool hasPlatforms() const { return this->platforms_ != nullptr;};
      void deletePlatforms() { this->platforms_ = nullptr;};
      inline const vector<string> & getPlatforms() const { DARABONBA_PTR_GET_CONST(platforms_, vector<string>) };
      inline vector<string> getPlatforms() { DARABONBA_PTR_GET(platforms_, vector<string>) };
      inline BuildRules& setPlatforms(const vector<string> & platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };
      inline BuildRules& setPlatforms(vector<string> && platforms) { DARABONBA_PTR_SET_RVALUE(platforms_, platforms) };


      // pushName Field Functions 
      bool hasPushName() const { return this->pushName_ != nullptr;};
      void deletePushName() { this->pushName_ = nullptr;};
      inline string getPushName() const { DARABONBA_PTR_GET_DEFAULT(pushName_, "") };
      inline BuildRules& setPushName(string pushName) { DARABONBA_PTR_SET_VALUE(pushName_, pushName) };


      // pushType Field Functions 
      bool hasPushType() const { return this->pushType_ != nullptr;};
      void deletePushType() { this->pushType_ = nullptr;};
      inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
      inline BuildRules& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    protected:
      shared_ptr<vector<string>> buildArgs_ {};
      // The ID of the image building rule.
      shared_ptr<string> buildRuleId_ {};
      shared_ptr<string> destArtifactType_ {};
      // The directory of the Dockerfile.
      shared_ptr<string> dockerfileLocation_ {};
      // The name of the Dockerfile.
      shared_ptr<string> dockerfileName_ {};
      // The tag of the image.
      shared_ptr<string> imageTag_ {};
      shared_ptr<vector<string>> platforms_ {};
      // The name of the push that triggers the building rule.
      shared_ptr<string> pushName_ {};
      // The type of the push that triggers the image building rule. Valid values:
      // 
      // *   GIT_BRANCH: branch push
      // *   GIT_TAG: tag push
      shared_ptr<string> pushType_ {};
    };

    virtual bool empty() const override { return this->buildRules_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // buildRules Field Functions 
    bool hasBuildRules() const { return this->buildRules_ != nullptr;};
    void deleteBuildRules() { this->buildRules_ = nullptr;};
    inline const vector<ListRepoBuildRuleResponseBody::BuildRules> & getBuildRules() const { DARABONBA_PTR_GET_CONST(buildRules_, vector<ListRepoBuildRuleResponseBody::BuildRules>) };
    inline vector<ListRepoBuildRuleResponseBody::BuildRules> getBuildRules() { DARABONBA_PTR_GET(buildRules_, vector<ListRepoBuildRuleResponseBody::BuildRules>) };
    inline ListRepoBuildRuleResponseBody& setBuildRules(const vector<ListRepoBuildRuleResponseBody::BuildRules> & buildRules) { DARABONBA_PTR_SET_VALUE(buildRules_, buildRules) };
    inline ListRepoBuildRuleResponseBody& setBuildRules(vector<ListRepoBuildRuleResponseBody::BuildRules> && buildRules) { DARABONBA_PTR_SET_RVALUE(buildRules_, buildRules) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoBuildRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoBuildRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoBuildRuleResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoBuildRuleResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoBuildRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRepoBuildRuleResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of image building rules.
    shared_ptr<vector<ListRepoBuildRuleResponseBody::BuildRules>> buildRules_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
