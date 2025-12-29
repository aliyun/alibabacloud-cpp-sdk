// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadVideoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnlysisPrompt, anlysisPrompt_);
      DARABONBA_PTR_TO_JSON(FaceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_TO_JSON(ReferenceVideo, referenceVideoShrink_);
      DARABONBA_PTR_TO_JSON(RemoveSubtitle, removeSubtitle_);
      DARABONBA_PTR_TO_JSON(SourceVideos, sourceVideosShrink_);
      DARABONBA_PTR_TO_JSON(SplitInterval, splitInterval_);
      DARABONBA_PTR_TO_JSON(VideoRoles, videoRolesShrink_);
      DARABONBA_PTR_TO_JSON(VideoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnlysisPrompt, anlysisPrompt_);
      DARABONBA_PTR_FROM_JSON(FaceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_FROM_JSON(ReferenceVideo, referenceVideoShrink_);
      DARABONBA_PTR_FROM_JSON(RemoveSubtitle, removeSubtitle_);
      DARABONBA_PTR_FROM_JSON(SourceVideos, sourceVideosShrink_);
      DARABONBA_PTR_FROM_JSON(SplitInterval, splitInterval_);
      DARABONBA_PTR_FROM_JSON(VideoRoles, videoRolesShrink_);
      DARABONBA_PTR_FROM_JSON(VideoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncUploadVideoShrinkRequest() = default ;
    AsyncUploadVideoShrinkRequest(const AsyncUploadVideoShrinkRequest &) = default ;
    AsyncUploadVideoShrinkRequest(AsyncUploadVideoShrinkRequest &&) = default ;
    AsyncUploadVideoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoShrinkRequest() = default ;
    AsyncUploadVideoShrinkRequest& operator=(const AsyncUploadVideoShrinkRequest &) = default ;
    AsyncUploadVideoShrinkRequest& operator=(AsyncUploadVideoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anlysisPrompt_ == nullptr
        && this->faceIdentitySimilarityMinScore_ == nullptr && this->referenceVideoShrink_ == nullptr && this->removeSubtitle_ == nullptr && this->sourceVideosShrink_ == nullptr && this->splitInterval_ == nullptr
        && this->videoRolesShrink_ == nullptr && this->videoShotFaceIdentityCount_ == nullptr && this->workspaceId_ == nullptr; };
    // anlysisPrompt Field Functions 
    bool hasAnlysisPrompt() const { return this->anlysisPrompt_ != nullptr;};
    void deleteAnlysisPrompt() { this->anlysisPrompt_ = nullptr;};
    inline string getAnlysisPrompt() const { DARABONBA_PTR_GET_DEFAULT(anlysisPrompt_, "") };
    inline AsyncUploadVideoShrinkRequest& setAnlysisPrompt(string anlysisPrompt) { DARABONBA_PTR_SET_VALUE(anlysisPrompt_, anlysisPrompt) };


    // faceIdentitySimilarityMinScore Field Functions 
    bool hasFaceIdentitySimilarityMinScore() const { return this->faceIdentitySimilarityMinScore_ != nullptr;};
    void deleteFaceIdentitySimilarityMinScore() { this->faceIdentitySimilarityMinScore_ = nullptr;};
    inline double getFaceIdentitySimilarityMinScore() const { DARABONBA_PTR_GET_DEFAULT(faceIdentitySimilarityMinScore_, 0.0) };
    inline AsyncUploadVideoShrinkRequest& setFaceIdentitySimilarityMinScore(double faceIdentitySimilarityMinScore) { DARABONBA_PTR_SET_VALUE(faceIdentitySimilarityMinScore_, faceIdentitySimilarityMinScore) };


    // referenceVideoShrink Field Functions 
    bool hasReferenceVideoShrink() const { return this->referenceVideoShrink_ != nullptr;};
    void deleteReferenceVideoShrink() { this->referenceVideoShrink_ = nullptr;};
    inline string getReferenceVideoShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceVideoShrink_, "") };
    inline AsyncUploadVideoShrinkRequest& setReferenceVideoShrink(string referenceVideoShrink) { DARABONBA_PTR_SET_VALUE(referenceVideoShrink_, referenceVideoShrink) };


    // removeSubtitle Field Functions 
    bool hasRemoveSubtitle() const { return this->removeSubtitle_ != nullptr;};
    void deleteRemoveSubtitle() { this->removeSubtitle_ = nullptr;};
    inline bool getRemoveSubtitle() const { DARABONBA_PTR_GET_DEFAULT(removeSubtitle_, false) };
    inline AsyncUploadVideoShrinkRequest& setRemoveSubtitle(bool removeSubtitle) { DARABONBA_PTR_SET_VALUE(removeSubtitle_, removeSubtitle) };


    // sourceVideosShrink Field Functions 
    bool hasSourceVideosShrink() const { return this->sourceVideosShrink_ != nullptr;};
    void deleteSourceVideosShrink() { this->sourceVideosShrink_ = nullptr;};
    inline string getSourceVideosShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceVideosShrink_, "") };
    inline AsyncUploadVideoShrinkRequest& setSourceVideosShrink(string sourceVideosShrink) { DARABONBA_PTR_SET_VALUE(sourceVideosShrink_, sourceVideosShrink) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t getSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline AsyncUploadVideoShrinkRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // videoRolesShrink Field Functions 
    bool hasVideoRolesShrink() const { return this->videoRolesShrink_ != nullptr;};
    void deleteVideoRolesShrink() { this->videoRolesShrink_ = nullptr;};
    inline string getVideoRolesShrink() const { DARABONBA_PTR_GET_DEFAULT(videoRolesShrink_, "") };
    inline AsyncUploadVideoShrinkRequest& setVideoRolesShrink(string videoRolesShrink) { DARABONBA_PTR_SET_VALUE(videoRolesShrink_, videoRolesShrink) };


    // videoShotFaceIdentityCount Field Functions 
    bool hasVideoShotFaceIdentityCount() const { return this->videoShotFaceIdentityCount_ != nullptr;};
    void deleteVideoShotFaceIdentityCount() { this->videoShotFaceIdentityCount_ = nullptr;};
    inline int32_t getVideoShotFaceIdentityCount() const { DARABONBA_PTR_GET_DEFAULT(videoShotFaceIdentityCount_, 0) };
    inline AsyncUploadVideoShrinkRequest& setVideoShotFaceIdentityCount(int32_t videoShotFaceIdentityCount) { DARABONBA_PTR_SET_VALUE(videoShotFaceIdentityCount_, videoShotFaceIdentityCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncUploadVideoShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> anlysisPrompt_ {};
    shared_ptr<double> faceIdentitySimilarityMinScore_ {};
    shared_ptr<string> referenceVideoShrink_ {};
    shared_ptr<bool> removeSubtitle_ {};
    // This parameter is required.
    shared_ptr<string> sourceVideosShrink_ {};
    shared_ptr<int32_t> splitInterval_ {};
    shared_ptr<string> videoRolesShrink_ {};
    shared_ptr<int32_t> videoShotFaceIdentityCount_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
