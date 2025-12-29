// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class VideoRoles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoRoles& obj) { 
        DARABONBA_PTR_TO_JSON(RoleInfo, roleInfo_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(RoleUrls, roleUrls_);
      };
      friend void from_json(const Darabonba::Json& j, VideoRoles& obj) { 
        DARABONBA_PTR_FROM_JSON(RoleInfo, roleInfo_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(RoleUrls, roleUrls_);
      };
      VideoRoles() = default ;
      VideoRoles(const VideoRoles &) = default ;
      VideoRoles(VideoRoles &&) = default ;
      VideoRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoRoles() = default ;
      VideoRoles& operator=(const VideoRoles &) = default ;
      VideoRoles& operator=(VideoRoles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoleUrls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoleUrls& obj) { 
          DARABONBA_PTR_TO_JSON(RoleFileName, roleFileName_);
          DARABONBA_PTR_TO_JSON(RoleFileUrl, roleFileUrl_);
        };
        friend void from_json(const Darabonba::Json& j, RoleUrls& obj) { 
          DARABONBA_PTR_FROM_JSON(RoleFileName, roleFileName_);
          DARABONBA_PTR_FROM_JSON(RoleFileUrl, roleFileUrl_);
        };
        RoleUrls() = default ;
        RoleUrls(const RoleUrls &) = default ;
        RoleUrls(RoleUrls &&) = default ;
        RoleUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoleUrls() = default ;
        RoleUrls& operator=(const RoleUrls &) = default ;
        RoleUrls& operator=(RoleUrls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->roleFileName_ == nullptr
        && this->roleFileUrl_ == nullptr; };
        // roleFileName Field Functions 
        bool hasRoleFileName() const { return this->roleFileName_ != nullptr;};
        void deleteRoleFileName() { this->roleFileName_ = nullptr;};
        inline string getRoleFileName() const { DARABONBA_PTR_GET_DEFAULT(roleFileName_, "") };
        inline RoleUrls& setRoleFileName(string roleFileName) { DARABONBA_PTR_SET_VALUE(roleFileName_, roleFileName) };


        // roleFileUrl Field Functions 
        bool hasRoleFileUrl() const { return this->roleFileUrl_ != nullptr;};
        void deleteRoleFileUrl() { this->roleFileUrl_ = nullptr;};
        inline string getRoleFileUrl() const { DARABONBA_PTR_GET_DEFAULT(roleFileUrl_, "") };
        inline RoleUrls& setRoleFileUrl(string roleFileUrl) { DARABONBA_PTR_SET_VALUE(roleFileUrl_, roleFileUrl) };


      protected:
        shared_ptr<string> roleFileName_ {};
        shared_ptr<string> roleFileUrl_ {};
      };

      virtual bool empty() const override { return this->roleInfo_ == nullptr
        && this->roleName_ == nullptr && this->roleUrls_ == nullptr; };
      // roleInfo Field Functions 
      bool hasRoleInfo() const { return this->roleInfo_ != nullptr;};
      void deleteRoleInfo() { this->roleInfo_ = nullptr;};
      inline string getRoleInfo() const { DARABONBA_PTR_GET_DEFAULT(roleInfo_, "") };
      inline VideoRoles& setRoleInfo(string roleInfo) { DARABONBA_PTR_SET_VALUE(roleInfo_, roleInfo) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline VideoRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // roleUrls Field Functions 
      bool hasRoleUrls() const { return this->roleUrls_ != nullptr;};
      void deleteRoleUrls() { this->roleUrls_ = nullptr;};
      inline const vector<VideoRoles::RoleUrls> & getRoleUrls() const { DARABONBA_PTR_GET_CONST(roleUrls_, vector<VideoRoles::RoleUrls>) };
      inline vector<VideoRoles::RoleUrls> getRoleUrls() { DARABONBA_PTR_GET(roleUrls_, vector<VideoRoles::RoleUrls>) };
      inline VideoRoles& setRoleUrls(const vector<VideoRoles::RoleUrls> & roleUrls) { DARABONBA_PTR_SET_VALUE(roleUrls_, roleUrls) };
      inline VideoRoles& setRoleUrls(vector<VideoRoles::RoleUrls> && roleUrls) { DARABONBA_PTR_SET_RVALUE(roleUrls_, roleUrls) };


    protected:
      shared_ptr<string> roleInfo_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<vector<VideoRoles::RoleUrls>> roleUrls_ {};
    };

    class SourceVideos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceVideos& obj) { 
        DARABONBA_PTR_TO_JSON(VideoExtraInfo, videoExtraInfo_);
        DARABONBA_PTR_TO_JSON(VideoName, videoName_);
        DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
      };
      friend void from_json(const Darabonba::Json& j, SourceVideos& obj) { 
        DARABONBA_PTR_FROM_JSON(VideoExtraInfo, videoExtraInfo_);
        DARABONBA_PTR_FROM_JSON(VideoName, videoName_);
        DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
      };
      SourceVideos() = default ;
      SourceVideos(const SourceVideos &) = default ;
      SourceVideos(SourceVideos &&) = default ;
      SourceVideos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceVideos() = default ;
      SourceVideos& operator=(const SourceVideos &) = default ;
      SourceVideos& operator=(SourceVideos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->videoExtraInfo_ == nullptr
        && this->videoName_ == nullptr && this->videoUrl_ == nullptr; };
      // videoExtraInfo Field Functions 
      bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
      void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
      inline string getVideoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
      inline SourceVideos& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


      // videoName Field Functions 
      bool hasVideoName() const { return this->videoName_ != nullptr;};
      void deleteVideoName() { this->videoName_ = nullptr;};
      inline string getVideoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
      inline SourceVideos& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


      // videoUrl Field Functions 
      bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
      void deleteVideoUrl() { this->videoUrl_ = nullptr;};
      inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
      inline SourceVideos& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    protected:
      shared_ptr<string> videoExtraInfo_ {};
      // This parameter is required.
      shared_ptr<string> videoName_ {};
      // This parameter is required.
      shared_ptr<string> videoUrl_ {};
    };

    class ReferenceVideo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReferenceVideo& obj) { 
        DARABONBA_PTR_TO_JSON(VideoExtraInfo, videoExtraInfo_);
        DARABONBA_PTR_TO_JSON(VideoName, videoName_);
        DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ReferenceVideo& obj) { 
        DARABONBA_PTR_FROM_JSON(VideoExtraInfo, videoExtraInfo_);
        DARABONBA_PTR_FROM_JSON(VideoName, videoName_);
        DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
      };
      ReferenceVideo() = default ;
      ReferenceVideo(const ReferenceVideo &) = default ;
      ReferenceVideo(ReferenceVideo &&) = default ;
      ReferenceVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReferenceVideo() = default ;
      ReferenceVideo& operator=(const ReferenceVideo &) = default ;
      ReferenceVideo& operator=(ReferenceVideo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->videoExtraInfo_ == nullptr
        && this->videoName_ == nullptr && this->videoUrl_ == nullptr; };
      // videoExtraInfo Field Functions 
      bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
      void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
      inline string getVideoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
      inline ReferenceVideo& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


      // videoName Field Functions 
      bool hasVideoName() const { return this->videoName_ != nullptr;};
      void deleteVideoName() { this->videoName_ = nullptr;};
      inline string getVideoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
      inline ReferenceVideo& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


      // videoUrl Field Functions 
      bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
      void deleteVideoUrl() { this->videoUrl_ = nullptr;};
      inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
      inline ReferenceVideo& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    protected:
      shared_ptr<string> videoExtraInfo_ {};
      shared_ptr<string> videoName_ {};
      shared_ptr<string> videoUrl_ {};
    };

    virtual bool empty() const override { return this->anlysisPrompt_ == nullptr
        && this->faceIdentitySimilarityMinScore_ == nullptr && this->referenceVideo_ == nullptr && this->removeSubtitle_ == nullptr && this->sourceVideos_ == nullptr && this->splitInterval_ == nullptr
        && this->videoRoles_ == nullptr && this->videoShotFaceIdentityCount_ == nullptr && this->workspaceId_ == nullptr; };
    // anlysisPrompt Field Functions 
    bool hasAnlysisPrompt() const { return this->anlysisPrompt_ != nullptr;};
    void deleteAnlysisPrompt() { this->anlysisPrompt_ = nullptr;};
    inline string getAnlysisPrompt() const { DARABONBA_PTR_GET_DEFAULT(anlysisPrompt_, "") };
    inline AsyncUploadVideoRequest& setAnlysisPrompt(string anlysisPrompt) { DARABONBA_PTR_SET_VALUE(anlysisPrompt_, anlysisPrompt) };


    // faceIdentitySimilarityMinScore Field Functions 
    bool hasFaceIdentitySimilarityMinScore() const { return this->faceIdentitySimilarityMinScore_ != nullptr;};
    void deleteFaceIdentitySimilarityMinScore() { this->faceIdentitySimilarityMinScore_ = nullptr;};
    inline double getFaceIdentitySimilarityMinScore() const { DARABONBA_PTR_GET_DEFAULT(faceIdentitySimilarityMinScore_, 0.0) };
    inline AsyncUploadVideoRequest& setFaceIdentitySimilarityMinScore(double faceIdentitySimilarityMinScore) { DARABONBA_PTR_SET_VALUE(faceIdentitySimilarityMinScore_, faceIdentitySimilarityMinScore) };


    // referenceVideo Field Functions 
    bool hasReferenceVideo() const { return this->referenceVideo_ != nullptr;};
    void deleteReferenceVideo() { this->referenceVideo_ = nullptr;};
    inline const AsyncUploadVideoRequest::ReferenceVideo & getReferenceVideo() const { DARABONBA_PTR_GET_CONST(referenceVideo_, AsyncUploadVideoRequest::ReferenceVideo) };
    inline AsyncUploadVideoRequest::ReferenceVideo getReferenceVideo() { DARABONBA_PTR_GET(referenceVideo_, AsyncUploadVideoRequest::ReferenceVideo) };
    inline AsyncUploadVideoRequest& setReferenceVideo(const AsyncUploadVideoRequest::ReferenceVideo & referenceVideo) { DARABONBA_PTR_SET_VALUE(referenceVideo_, referenceVideo) };
    inline AsyncUploadVideoRequest& setReferenceVideo(AsyncUploadVideoRequest::ReferenceVideo && referenceVideo) { DARABONBA_PTR_SET_RVALUE(referenceVideo_, referenceVideo) };


    // removeSubtitle Field Functions 
    bool hasRemoveSubtitle() const { return this->removeSubtitle_ != nullptr;};
    void deleteRemoveSubtitle() { this->removeSubtitle_ = nullptr;};
    inline bool getRemoveSubtitle() const { DARABONBA_PTR_GET_DEFAULT(removeSubtitle_, false) };
    inline AsyncUploadVideoRequest& setRemoveSubtitle(bool removeSubtitle) { DARABONBA_PTR_SET_VALUE(removeSubtitle_, removeSubtitle) };


    // sourceVideos Field Functions 
    bool hasSourceVideos() const { return this->sourceVideos_ != nullptr;};
    void deleteSourceVideos() { this->sourceVideos_ = nullptr;};
    inline const vector<AsyncUploadVideoRequest::SourceVideos> & getSourceVideos() const { DARABONBA_PTR_GET_CONST(sourceVideos_, vector<AsyncUploadVideoRequest::SourceVideos>) };
    inline vector<AsyncUploadVideoRequest::SourceVideos> getSourceVideos() { DARABONBA_PTR_GET(sourceVideos_, vector<AsyncUploadVideoRequest::SourceVideos>) };
    inline AsyncUploadVideoRequest& setSourceVideos(const vector<AsyncUploadVideoRequest::SourceVideos> & sourceVideos) { DARABONBA_PTR_SET_VALUE(sourceVideos_, sourceVideos) };
    inline AsyncUploadVideoRequest& setSourceVideos(vector<AsyncUploadVideoRequest::SourceVideos> && sourceVideos) { DARABONBA_PTR_SET_RVALUE(sourceVideos_, sourceVideos) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t getSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline AsyncUploadVideoRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // videoRoles Field Functions 
    bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
    void deleteVideoRoles() { this->videoRoles_ = nullptr;};
    inline const vector<AsyncUploadVideoRequest::VideoRoles> & getVideoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<AsyncUploadVideoRequest::VideoRoles>) };
    inline vector<AsyncUploadVideoRequest::VideoRoles> getVideoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<AsyncUploadVideoRequest::VideoRoles>) };
    inline AsyncUploadVideoRequest& setVideoRoles(const vector<AsyncUploadVideoRequest::VideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
    inline AsyncUploadVideoRequest& setVideoRoles(vector<AsyncUploadVideoRequest::VideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


    // videoShotFaceIdentityCount Field Functions 
    bool hasVideoShotFaceIdentityCount() const { return this->videoShotFaceIdentityCount_ != nullptr;};
    void deleteVideoShotFaceIdentityCount() { this->videoShotFaceIdentityCount_ = nullptr;};
    inline int32_t getVideoShotFaceIdentityCount() const { DARABONBA_PTR_GET_DEFAULT(videoShotFaceIdentityCount_, 0) };
    inline AsyncUploadVideoRequest& setVideoShotFaceIdentityCount(int32_t videoShotFaceIdentityCount) { DARABONBA_PTR_SET_VALUE(videoShotFaceIdentityCount_, videoShotFaceIdentityCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncUploadVideoRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> anlysisPrompt_ {};
    shared_ptr<double> faceIdentitySimilarityMinScore_ {};
    shared_ptr<AsyncUploadVideoRequest::ReferenceVideo> referenceVideo_ {};
    shared_ptr<bool> removeSubtitle_ {};
    // This parameter is required.
    shared_ptr<vector<AsyncUploadVideoRequest::SourceVideos>> sourceVideos_ {};
    shared_ptr<int32_t> splitInterval_ {};
    shared_ptr<vector<AsyncUploadVideoRequest::VideoRoles>> videoRoles_ {};
    shared_ptr<int32_t> videoShotFaceIdentityCount_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
