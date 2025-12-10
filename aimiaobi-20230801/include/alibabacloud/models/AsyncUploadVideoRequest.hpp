// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AsyncUploadVideoRequestReferenceVideo.hpp>
#include <vector>
#include <alibabacloud/models/AsyncUploadVideoRequestSourceVideos.hpp>
#include <alibabacloud/models/AsyncUploadVideoRequestVideoRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnlysisPrompt, anlysisPrompt_);
      DARABONBA_PTR_TO_JSON(FaceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_TO_JSON(ReferenceVideo, referenceVideo_);
      DARABONBA_PTR_TO_JSON(RemoveSubtitle, removeSubtitle_);
      DARABONBA_PTR_TO_JSON(SourceVideos, sourceVideos_);
      DARABONBA_PTR_TO_JSON(SplitInterval, splitInterval_);
      DARABONBA_PTR_TO_JSON(VideoRoles, videoRoles_);
      DARABONBA_PTR_TO_JSON(VideoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnlysisPrompt, anlysisPrompt_);
      DARABONBA_PTR_FROM_JSON(FaceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_FROM_JSON(ReferenceVideo, referenceVideo_);
      DARABONBA_PTR_FROM_JSON(RemoveSubtitle, removeSubtitle_);
      DARABONBA_PTR_FROM_JSON(SourceVideos, sourceVideos_);
      DARABONBA_PTR_FROM_JSON(SplitInterval, splitInterval_);
      DARABONBA_PTR_FROM_JSON(VideoRoles, videoRoles_);
      DARABONBA_PTR_FROM_JSON(VideoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncUploadVideoRequest() = default ;
    AsyncUploadVideoRequest(const AsyncUploadVideoRequest &) = default ;
    AsyncUploadVideoRequest(AsyncUploadVideoRequest &&) = default ;
    AsyncUploadVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoRequest() = default ;
    AsyncUploadVideoRequest& operator=(const AsyncUploadVideoRequest &) = default ;
    AsyncUploadVideoRequest& operator=(AsyncUploadVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anlysisPrompt_ == nullptr
        && return this->faceIdentitySimilarityMinScore_ == nullptr && return this->referenceVideo_ == nullptr && return this->removeSubtitle_ == nullptr && return this->sourceVideos_ == nullptr && return this->splitInterval_ == nullptr
        && return this->videoRoles_ == nullptr && return this->videoShotFaceIdentityCount_ == nullptr && return this->workspaceId_ == nullptr; };
    // anlysisPrompt Field Functions 
    bool hasAnlysisPrompt() const { return this->anlysisPrompt_ != nullptr;};
    void deleteAnlysisPrompt() { this->anlysisPrompt_ = nullptr;};
    inline string anlysisPrompt() const { DARABONBA_PTR_GET_DEFAULT(anlysisPrompt_, "") };
    inline AsyncUploadVideoRequest& setAnlysisPrompt(string anlysisPrompt) { DARABONBA_PTR_SET_VALUE(anlysisPrompt_, anlysisPrompt) };


    // faceIdentitySimilarityMinScore Field Functions 
    bool hasFaceIdentitySimilarityMinScore() const { return this->faceIdentitySimilarityMinScore_ != nullptr;};
    void deleteFaceIdentitySimilarityMinScore() { this->faceIdentitySimilarityMinScore_ = nullptr;};
    inline double faceIdentitySimilarityMinScore() const { DARABONBA_PTR_GET_DEFAULT(faceIdentitySimilarityMinScore_, 0.0) };
    inline AsyncUploadVideoRequest& setFaceIdentitySimilarityMinScore(double faceIdentitySimilarityMinScore) { DARABONBA_PTR_SET_VALUE(faceIdentitySimilarityMinScore_, faceIdentitySimilarityMinScore) };


    // referenceVideo Field Functions 
    bool hasReferenceVideo() const { return this->referenceVideo_ != nullptr;};
    void deleteReferenceVideo() { this->referenceVideo_ = nullptr;};
    inline const AsyncUploadVideoRequestReferenceVideo & referenceVideo() const { DARABONBA_PTR_GET_CONST(referenceVideo_, AsyncUploadVideoRequestReferenceVideo) };
    inline AsyncUploadVideoRequestReferenceVideo referenceVideo() { DARABONBA_PTR_GET(referenceVideo_, AsyncUploadVideoRequestReferenceVideo) };
    inline AsyncUploadVideoRequest& setReferenceVideo(const AsyncUploadVideoRequestReferenceVideo & referenceVideo) { DARABONBA_PTR_SET_VALUE(referenceVideo_, referenceVideo) };
    inline AsyncUploadVideoRequest& setReferenceVideo(AsyncUploadVideoRequestReferenceVideo && referenceVideo) { DARABONBA_PTR_SET_RVALUE(referenceVideo_, referenceVideo) };


    // removeSubtitle Field Functions 
    bool hasRemoveSubtitle() const { return this->removeSubtitle_ != nullptr;};
    void deleteRemoveSubtitle() { this->removeSubtitle_ = nullptr;};
    inline bool removeSubtitle() const { DARABONBA_PTR_GET_DEFAULT(removeSubtitle_, false) };
    inline AsyncUploadVideoRequest& setRemoveSubtitle(bool removeSubtitle) { DARABONBA_PTR_SET_VALUE(removeSubtitle_, removeSubtitle) };


    // sourceVideos Field Functions 
    bool hasSourceVideos() const { return this->sourceVideos_ != nullptr;};
    void deleteSourceVideos() { this->sourceVideos_ = nullptr;};
    inline const vector<AsyncUploadVideoRequestSourceVideos> & sourceVideos() const { DARABONBA_PTR_GET_CONST(sourceVideos_, vector<AsyncUploadVideoRequestSourceVideos>) };
    inline vector<AsyncUploadVideoRequestSourceVideos> sourceVideos() { DARABONBA_PTR_GET(sourceVideos_, vector<AsyncUploadVideoRequestSourceVideos>) };
    inline AsyncUploadVideoRequest& setSourceVideos(const vector<AsyncUploadVideoRequestSourceVideos> & sourceVideos) { DARABONBA_PTR_SET_VALUE(sourceVideos_, sourceVideos) };
    inline AsyncUploadVideoRequest& setSourceVideos(vector<AsyncUploadVideoRequestSourceVideos> && sourceVideos) { DARABONBA_PTR_SET_RVALUE(sourceVideos_, sourceVideos) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t splitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline AsyncUploadVideoRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // videoRoles Field Functions 
    bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
    void deleteVideoRoles() { this->videoRoles_ = nullptr;};
    inline const vector<AsyncUploadVideoRequestVideoRoles> & videoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<AsyncUploadVideoRequestVideoRoles>) };
    inline vector<AsyncUploadVideoRequestVideoRoles> videoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<AsyncUploadVideoRequestVideoRoles>) };
    inline AsyncUploadVideoRequest& setVideoRoles(const vector<AsyncUploadVideoRequestVideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
    inline AsyncUploadVideoRequest& setVideoRoles(vector<AsyncUploadVideoRequestVideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


    // videoShotFaceIdentityCount Field Functions 
    bool hasVideoShotFaceIdentityCount() const { return this->videoShotFaceIdentityCount_ != nullptr;};
    void deleteVideoShotFaceIdentityCount() { this->videoShotFaceIdentityCount_ = nullptr;};
    inline int32_t videoShotFaceIdentityCount() const { DARABONBA_PTR_GET_DEFAULT(videoShotFaceIdentityCount_, 0) };
    inline AsyncUploadVideoRequest& setVideoShotFaceIdentityCount(int32_t videoShotFaceIdentityCount) { DARABONBA_PTR_SET_VALUE(videoShotFaceIdentityCount_, videoShotFaceIdentityCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncUploadVideoRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> anlysisPrompt_ = nullptr;
    std::shared_ptr<double> faceIdentitySimilarityMinScore_ = nullptr;
    std::shared_ptr<AsyncUploadVideoRequestReferenceVideo> referenceVideo_ = nullptr;
    std::shared_ptr<bool> removeSubtitle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<AsyncUploadVideoRequestSourceVideos>> sourceVideos_ = nullptr;
    std::shared_ptr<int32_t> splitInterval_ = nullptr;
    std::shared_ptr<vector<AsyncUploadVideoRequestVideoRoles>> videoRoles_ = nullptr;
    std::shared_ptr<int32_t> videoShotFaceIdentityCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
