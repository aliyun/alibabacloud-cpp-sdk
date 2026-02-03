// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitVideoAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addDocumentParam, addDocumentParam_);
      DARABONBA_PTR_TO_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_TO_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_TO_JSON(excludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_TO_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_TO_JSON(frameSampleMethod, frameSampleMethod_);
      DARABONBA_PTR_TO_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_TO_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_TO_JSON(splitType, splitType_);
      DARABONBA_PTR_TO_JSON(textProcessTasks, textProcessTasks_);
      DARABONBA_PTR_TO_JSON(videoCaptionInfo, videoCaptionInfo_);
      DARABONBA_PTR_TO_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_TO_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_TO_JSON(videoRoles, videoRoles_);
      DARABONBA_PTR_TO_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
      DARABONBA_PTR_TO_JSON(videoUrls, videoUrls_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addDocumentParam, addDocumentParam_);
      DARABONBA_PTR_FROM_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_FROM_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_FROM_JSON(excludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_FROM_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_FROM_JSON(frameSampleMethod, frameSampleMethod_);
      DARABONBA_PTR_FROM_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_FROM_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_FROM_JSON(splitType, splitType_);
      DARABONBA_PTR_FROM_JSON(textProcessTasks, textProcessTasks_);
      DARABONBA_PTR_FROM_JSON(videoCaptionInfo, videoCaptionInfo_);
      DARABONBA_PTR_FROM_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_FROM_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_FROM_JSON(videoRoles, videoRoles_);
      DARABONBA_PTR_FROM_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
      DARABONBA_PTR_FROM_JSON(videoUrls, videoUrls_);
    };
    SubmitVideoAnalysisTaskRequest() = default ;
    SubmitVideoAnalysisTaskRequest(const SubmitVideoAnalysisTaskRequest &) = default ;
    SubmitVideoAnalysisTaskRequest(SubmitVideoAnalysisTaskRequest &&) = default ;
    SubmitVideoAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoAnalysisTaskRequest() = default ;
    SubmitVideoAnalysisTaskRequest& operator=(const SubmitVideoAnalysisTaskRequest &) = default ;
    SubmitVideoAnalysisTaskRequest& operator=(SubmitVideoAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoRoles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoRoles& obj) { 
        DARABONBA_PTR_TO_JSON(isAutoRecognition, isAutoRecognition_);
        DARABONBA_PTR_TO_JSON(roleInfo, roleInfo_);
        DARABONBA_PTR_TO_JSON(roleName, roleName_);
        DARABONBA_PTR_TO_JSON(timeIntervals, timeIntervals_);
        DARABONBA_PTR_TO_JSON(urls, urls_);
      };
      friend void from_json(const Darabonba::Json& j, VideoRoles& obj) { 
        DARABONBA_PTR_FROM_JSON(isAutoRecognition, isAutoRecognition_);
        DARABONBA_PTR_FROM_JSON(roleInfo, roleInfo_);
        DARABONBA_PTR_FROM_JSON(roleName, roleName_);
        DARABONBA_PTR_FROM_JSON(timeIntervals, timeIntervals_);
        DARABONBA_PTR_FROM_JSON(urls, urls_);
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
      class TimeIntervals : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeIntervals& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, TimeIntervals& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        TimeIntervals() = default ;
        TimeIntervals(const TimeIntervals &) = default ;
        TimeIntervals(TimeIntervals &&) = default ;
        TimeIntervals(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeIntervals() = default ;
        TimeIntervals& operator=(const TimeIntervals &) = default ;
        TimeIntervals& operator=(TimeIntervals &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline TimeIntervals& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline TimeIntervals& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->isAutoRecognition_ == nullptr
        && this->roleInfo_ == nullptr && this->roleName_ == nullptr && this->timeIntervals_ == nullptr && this->urls_ == nullptr; };
      // isAutoRecognition Field Functions 
      bool hasIsAutoRecognition() const { return this->isAutoRecognition_ != nullptr;};
      void deleteIsAutoRecognition() { this->isAutoRecognition_ = nullptr;};
      inline bool getIsAutoRecognition() const { DARABONBA_PTR_GET_DEFAULT(isAutoRecognition_, false) };
      inline VideoRoles& setIsAutoRecognition(bool isAutoRecognition) { DARABONBA_PTR_SET_VALUE(isAutoRecognition_, isAutoRecognition) };


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


      // timeIntervals Field Functions 
      bool hasTimeIntervals() const { return this->timeIntervals_ != nullptr;};
      void deleteTimeIntervals() { this->timeIntervals_ = nullptr;};
      inline const vector<VideoRoles::TimeIntervals> & getTimeIntervals() const { DARABONBA_PTR_GET_CONST(timeIntervals_, vector<VideoRoles::TimeIntervals>) };
      inline vector<VideoRoles::TimeIntervals> getTimeIntervals() { DARABONBA_PTR_GET(timeIntervals_, vector<VideoRoles::TimeIntervals>) };
      inline VideoRoles& setTimeIntervals(const vector<VideoRoles::TimeIntervals> & timeIntervals) { DARABONBA_PTR_SET_VALUE(timeIntervals_, timeIntervals) };
      inline VideoRoles& setTimeIntervals(vector<VideoRoles::TimeIntervals> && timeIntervals) { DARABONBA_PTR_SET_RVALUE(timeIntervals_, timeIntervals) };


      // urls Field Functions 
      bool hasUrls() const { return this->urls_ != nullptr;};
      void deleteUrls() { this->urls_ = nullptr;};
      inline const vector<string> & getUrls() const { DARABONBA_PTR_GET_CONST(urls_, vector<string>) };
      inline vector<string> getUrls() { DARABONBA_PTR_GET(urls_, vector<string>) };
      inline VideoRoles& setUrls(const vector<string> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
      inline VideoRoles& setUrls(vector<string> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


    protected:
      shared_ptr<bool> isAutoRecognition_ {};
      shared_ptr<string> roleInfo_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<vector<VideoRoles::TimeIntervals>> timeIntervals_ {};
      shared_ptr<vector<string>> urls_ {};
    };

    class VideoCaptionInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoCaptionInfo& obj) { 
        DARABONBA_PTR_TO_JSON(videoCaptionFileUrl, videoCaptionFileUrl_);
        DARABONBA_PTR_TO_JSON(videoCaptions, videoCaptions_);
      };
      friend void from_json(const Darabonba::Json& j, VideoCaptionInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(videoCaptionFileUrl, videoCaptionFileUrl_);
        DARABONBA_PTR_FROM_JSON(videoCaptions, videoCaptions_);
      };
      VideoCaptionInfo() = default ;
      VideoCaptionInfo(const VideoCaptionInfo &) = default ;
      VideoCaptionInfo(VideoCaptionInfo &&) = default ;
      VideoCaptionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoCaptionInfo() = default ;
      VideoCaptionInfo& operator=(const VideoCaptionInfo &) = default ;
      VideoCaptionInfo& operator=(VideoCaptionInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoCaptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoCaptions& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(speaker, speaker_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, VideoCaptions& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(speaker, speaker_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          DARABONBA_PTR_FROM_JSON(text, text_);
        };
        VideoCaptions() = default ;
        VideoCaptions(const VideoCaptions &) = default ;
        VideoCaptions(VideoCaptions &&) = default ;
        VideoCaptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoCaptions() = default ;
        VideoCaptions& operator=(const VideoCaptions &) = default ;
        VideoCaptions& operator=(VideoCaptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->speaker_ == nullptr && this->startTime_ == nullptr && this->text_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline VideoCaptions& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // speaker Field Functions 
        bool hasSpeaker() const { return this->speaker_ != nullptr;};
        void deleteSpeaker() { this->speaker_ = nullptr;};
        inline string getSpeaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
        inline VideoCaptions& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline VideoCaptions& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline VideoCaptions& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> speaker_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->videoCaptionFileUrl_ == nullptr
        && this->videoCaptions_ == nullptr; };
      // videoCaptionFileUrl Field Functions 
      bool hasVideoCaptionFileUrl() const { return this->videoCaptionFileUrl_ != nullptr;};
      void deleteVideoCaptionFileUrl() { this->videoCaptionFileUrl_ = nullptr;};
      inline string getVideoCaptionFileUrl() const { DARABONBA_PTR_GET_DEFAULT(videoCaptionFileUrl_, "") };
      inline VideoCaptionInfo& setVideoCaptionFileUrl(string videoCaptionFileUrl) { DARABONBA_PTR_SET_VALUE(videoCaptionFileUrl_, videoCaptionFileUrl) };


      // videoCaptions Field Functions 
      bool hasVideoCaptions() const { return this->videoCaptions_ != nullptr;};
      void deleteVideoCaptions() { this->videoCaptions_ = nullptr;};
      inline const vector<VideoCaptionInfo::VideoCaptions> & getVideoCaptions() const { DARABONBA_PTR_GET_CONST(videoCaptions_, vector<VideoCaptionInfo::VideoCaptions>) };
      inline vector<VideoCaptionInfo::VideoCaptions> getVideoCaptions() { DARABONBA_PTR_GET(videoCaptions_, vector<VideoCaptionInfo::VideoCaptions>) };
      inline VideoCaptionInfo& setVideoCaptions(const vector<VideoCaptionInfo::VideoCaptions> & videoCaptions) { DARABONBA_PTR_SET_VALUE(videoCaptions_, videoCaptions) };
      inline VideoCaptionInfo& setVideoCaptions(vector<VideoCaptionInfo::VideoCaptions> && videoCaptions) { DARABONBA_PTR_SET_RVALUE(videoCaptions_, videoCaptions) };


    protected:
      shared_ptr<string> videoCaptionFileUrl_ {};
      shared_ptr<vector<VideoCaptionInfo::VideoCaptions>> videoCaptions_ {};
    };

    class TextProcessTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TextProcessTasks& obj) { 
        DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
        DARABONBA_PTR_TO_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
      };
      friend void from_json(const Darabonba::Json& j, TextProcessTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
        DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      };
      TextProcessTasks() = default ;
      TextProcessTasks(const TextProcessTasks &) = default ;
      TextProcessTasks(TextProcessTasks &&) = default ;
      TextProcessTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TextProcessTasks() = default ;
      TextProcessTasks& operator=(const TextProcessTasks &) = default ;
      TextProcessTasks& operator=(TextProcessTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelCustomPromptTemplate_ == nullptr
        && this->modelCustomPromptTemplateId_ == nullptr && this->modelId_ == nullptr; };
      // modelCustomPromptTemplate Field Functions 
      bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
      void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
      inline string getModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
      inline TextProcessTasks& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


      // modelCustomPromptTemplateId Field Functions 
      bool hasModelCustomPromptTemplateId() const { return this->modelCustomPromptTemplateId_ != nullptr;};
      void deleteModelCustomPromptTemplateId() { this->modelCustomPromptTemplateId_ = nullptr;};
      inline string getModelCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplateId_, "") };
      inline TextProcessTasks& setModelCustomPromptTemplateId(string modelCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplateId_, modelCustomPromptTemplateId) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline TextProcessTasks& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    protected:
      shared_ptr<string> modelCustomPromptTemplate_ {};
      shared_ptr<string> modelCustomPromptTemplateId_ {};
      shared_ptr<string> modelId_ {};
    };

    class FrameSampleMethod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FrameSampleMethod& obj) { 
        DARABONBA_PTR_TO_JSON(interval, interval_);
        DARABONBA_PTR_TO_JSON(methodName, methodName_);
        DARABONBA_PTR_TO_JSON(pixel, pixel_);
      };
      friend void from_json(const Darabonba::Json& j, FrameSampleMethod& obj) { 
        DARABONBA_PTR_FROM_JSON(interval, interval_);
        DARABONBA_PTR_FROM_JSON(methodName, methodName_);
        DARABONBA_PTR_FROM_JSON(pixel, pixel_);
      };
      FrameSampleMethod() = default ;
      FrameSampleMethod(const FrameSampleMethod &) = default ;
      FrameSampleMethod(FrameSampleMethod &&) = default ;
      FrameSampleMethod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FrameSampleMethod() = default ;
      FrameSampleMethod& operator=(const FrameSampleMethod &) = default ;
      FrameSampleMethod& operator=(FrameSampleMethod &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->interval_ == nullptr
        && this->methodName_ == nullptr && this->pixel_ == nullptr; };
      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline double getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0.0) };
      inline FrameSampleMethod& setInterval(double interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // methodName Field Functions 
      bool hasMethodName() const { return this->methodName_ != nullptr;};
      void deleteMethodName() { this->methodName_ = nullptr;};
      inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
      inline FrameSampleMethod& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


      // pixel Field Functions 
      bool hasPixel() const { return this->pixel_ != nullptr;};
      void deletePixel() { this->pixel_ = nullptr;};
      inline int32_t getPixel() const { DARABONBA_PTR_GET_DEFAULT(pixel_, 0) };
      inline FrameSampleMethod& setPixel(int32_t pixel) { DARABONBA_PTR_SET_VALUE(pixel_, pixel) };


    protected:
      shared_ptr<double> interval_ {};
      shared_ptr<string> methodName_ {};
      shared_ptr<int32_t> pixel_ {};
    };

    class AddDocumentParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddDocumentParam& obj) { 
        DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(datasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(document, document_);
      };
      friend void from_json(const Darabonba::Json& j, AddDocumentParam& obj) { 
        DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(datasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(document, document_);
      };
      AddDocumentParam() = default ;
      AddDocumentParam(const AddDocumentParam &) = default ;
      AddDocumentParam(AddDocumentParam &&) = default ;
      AddDocumentParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddDocumentParam() = default ;
      AddDocumentParam& operator=(const AddDocumentParam &) = default ;
      AddDocumentParam& operator=(AddDocumentParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Document : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Document& obj) { 
          DARABONBA_PTR_TO_JSON(categoryUuid, categoryUuid_);
          DARABONBA_PTR_TO_JSON(docId, docId_);
          DARABONBA_PTR_TO_JSON(extend1, extend1_);
          DARABONBA_PTR_TO_JSON(extend2, extend2_);
          DARABONBA_PTR_TO_JSON(extend3, extend3_);
          DARABONBA_PTR_TO_JSON(metadata, metadata_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Document& obj) { 
          DARABONBA_PTR_FROM_JSON(categoryUuid, categoryUuid_);
          DARABONBA_PTR_FROM_JSON(docId, docId_);
          DARABONBA_PTR_FROM_JSON(extend1, extend1_);
          DARABONBA_PTR_FROM_JSON(extend2, extend2_);
          DARABONBA_PTR_FROM_JSON(extend3, extend3_);
          DARABONBA_PTR_FROM_JSON(metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        Document() = default ;
        Document(const Document &) = default ;
        Document(Document &&) = default ;
        Document(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Document() = default ;
        Document& operator=(const Document &) = default ;
        Document& operator=(Document &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Metadata : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
            DARABONBA_PTR_TO_JSON(keyValues, keyValues_);
          };
          friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
            DARABONBA_PTR_FROM_JSON(keyValues, keyValues_);
          };
          Metadata() = default ;
          Metadata(const Metadata &) = default ;
          Metadata(Metadata &&) = default ;
          Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Metadata() = default ;
          Metadata& operator=(const Metadata &) = default ;
          Metadata& operator=(Metadata &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class KeyValues : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const KeyValues& obj) { 
              DARABONBA_PTR_TO_JSON(key, key_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, KeyValues& obj) { 
              DARABONBA_PTR_FROM_JSON(key, key_);
              DARABONBA_PTR_FROM_JSON(value, value_);
            };
            KeyValues() = default ;
            KeyValues(const KeyValues &) = default ;
            KeyValues(KeyValues &&) = default ;
            KeyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~KeyValues() = default ;
            KeyValues& operator=(const KeyValues &) = default ;
            KeyValues& operator=(KeyValues &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline KeyValues& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline KeyValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->keyValues_ == nullptr; };
          // keyValues Field Functions 
          bool hasKeyValues() const { return this->keyValues_ != nullptr;};
          void deleteKeyValues() { this->keyValues_ = nullptr;};
          inline const vector<Metadata::KeyValues> & getKeyValues() const { DARABONBA_PTR_GET_CONST(keyValues_, vector<Metadata::KeyValues>) };
          inline vector<Metadata::KeyValues> getKeyValues() { DARABONBA_PTR_GET(keyValues_, vector<Metadata::KeyValues>) };
          inline Metadata& setKeyValues(const vector<Metadata::KeyValues> & keyValues) { DARABONBA_PTR_SET_VALUE(keyValues_, keyValues) };
          inline Metadata& setKeyValues(vector<Metadata::KeyValues> && keyValues) { DARABONBA_PTR_SET_RVALUE(keyValues_, keyValues) };


        protected:
          shared_ptr<vector<Metadata::KeyValues>> keyValues_ {};
        };

        virtual bool empty() const override { return this->categoryUuid_ == nullptr
        && this->docId_ == nullptr && this->extend1_ == nullptr && this->extend2_ == nullptr && this->extend3_ == nullptr && this->metadata_ == nullptr
        && this->tags_ == nullptr && this->title_ == nullptr; };
        // categoryUuid Field Functions 
        bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
        void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
        inline string getCategoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
        inline Document& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Document& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // extend1 Field Functions 
        bool hasExtend1() const { return this->extend1_ != nullptr;};
        void deleteExtend1() { this->extend1_ = nullptr;};
        inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
        inline Document& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


        // extend2 Field Functions 
        bool hasExtend2() const { return this->extend2_ != nullptr;};
        void deleteExtend2() { this->extend2_ = nullptr;};
        inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
        inline Document& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


        // extend3 Field Functions 
        bool hasExtend3() const { return this->extend3_ != nullptr;};
        void deleteExtend3() { this->extend3_ = nullptr;};
        inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
        inline Document& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline const Document::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Document::Metadata) };
        inline Document::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Document::Metadata) };
        inline Document& setMetadata(const Document::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
        inline Document& setMetadata(Document::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Document& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Document& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Document& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> categoryUuid_ {};
        shared_ptr<string> docId_ {};
        shared_ptr<string> extend1_ {};
        shared_ptr<string> extend2_ {};
        shared_ptr<string> extend3_ {};
        shared_ptr<Document::Metadata> metadata_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetName_ == nullptr && this->document_ == nullptr; };
      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
      inline AddDocumentParam& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline AddDocumentParam& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // document Field Functions 
      bool hasDocument() const { return this->document_ != nullptr;};
      void deleteDocument() { this->document_ = nullptr;};
      inline const AddDocumentParam::Document & getDocument() const { DARABONBA_PTR_GET_CONST(document_, AddDocumentParam::Document) };
      inline AddDocumentParam::Document getDocument() { DARABONBA_PTR_GET(document_, AddDocumentParam::Document) };
      inline AddDocumentParam& setDocument(const AddDocumentParam::Document & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
      inline AddDocumentParam& setDocument(AddDocumentParam::Document && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


    protected:
      shared_ptr<int64_t> datasetId_ {};
      shared_ptr<string> datasetName_ {};
      shared_ptr<AddDocumentParam::Document> document_ {};
    };

    virtual bool empty() const override { return this->addDocumentParam_ == nullptr
        && this->autoRoleRecognitionVideoUrl_ == nullptr && this->deduplicationId_ == nullptr && this->excludeGenerateOptions_ == nullptr && this->faceIdentitySimilarityMinScore_ == nullptr && this->frameSampleMethod_ == nullptr
        && this->generateOptions_ == nullptr && this->language_ == nullptr && this->modelCustomPromptTemplate_ == nullptr && this->modelCustomPromptTemplateId_ == nullptr && this->modelId_ == nullptr
        && this->snapshotInterval_ == nullptr && this->splitInterval_ == nullptr && this->splitType_ == nullptr && this->textProcessTasks_ == nullptr && this->videoCaptionInfo_ == nullptr
        && this->videoExtraInfo_ == nullptr && this->videoModelCustomPromptTemplate_ == nullptr && this->videoModelId_ == nullptr && this->videoRoles_ == nullptr && this->videoShotFaceIdentityCount_ == nullptr
        && this->videoUrl_ == nullptr && this->videoUrls_ == nullptr; };
    // addDocumentParam Field Functions 
    bool hasAddDocumentParam() const { return this->addDocumentParam_ != nullptr;};
    void deleteAddDocumentParam() { this->addDocumentParam_ = nullptr;};
    inline const SubmitVideoAnalysisTaskRequest::AddDocumentParam & getAddDocumentParam() const { DARABONBA_PTR_GET_CONST(addDocumentParam_, SubmitVideoAnalysisTaskRequest::AddDocumentParam) };
    inline SubmitVideoAnalysisTaskRequest::AddDocumentParam getAddDocumentParam() { DARABONBA_PTR_GET(addDocumentParam_, SubmitVideoAnalysisTaskRequest::AddDocumentParam) };
    inline SubmitVideoAnalysisTaskRequest& setAddDocumentParam(const SubmitVideoAnalysisTaskRequest::AddDocumentParam & addDocumentParam) { DARABONBA_PTR_SET_VALUE(addDocumentParam_, addDocumentParam) };
    inline SubmitVideoAnalysisTaskRequest& setAddDocumentParam(SubmitVideoAnalysisTaskRequest::AddDocumentParam && addDocumentParam) { DARABONBA_PTR_SET_RVALUE(addDocumentParam_, addDocumentParam) };


    // autoRoleRecognitionVideoUrl Field Functions 
    bool hasAutoRoleRecognitionVideoUrl() const { return this->autoRoleRecognitionVideoUrl_ != nullptr;};
    void deleteAutoRoleRecognitionVideoUrl() { this->autoRoleRecognitionVideoUrl_ = nullptr;};
    inline string getAutoRoleRecognitionVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(autoRoleRecognitionVideoUrl_, "") };
    inline SubmitVideoAnalysisTaskRequest& setAutoRoleRecognitionVideoUrl(string autoRoleRecognitionVideoUrl) { DARABONBA_PTR_SET_VALUE(autoRoleRecognitionVideoUrl_, autoRoleRecognitionVideoUrl) };


    // deduplicationId Field Functions 
    bool hasDeduplicationId() const { return this->deduplicationId_ != nullptr;};
    void deleteDeduplicationId() { this->deduplicationId_ = nullptr;};
    inline string getDeduplicationId() const { DARABONBA_PTR_GET_DEFAULT(deduplicationId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setDeduplicationId(string deduplicationId) { DARABONBA_PTR_SET_VALUE(deduplicationId_, deduplicationId) };


    // excludeGenerateOptions Field Functions 
    bool hasExcludeGenerateOptions() const { return this->excludeGenerateOptions_ != nullptr;};
    void deleteExcludeGenerateOptions() { this->excludeGenerateOptions_ = nullptr;};
    inline const vector<string> & getExcludeGenerateOptions() const { DARABONBA_PTR_GET_CONST(excludeGenerateOptions_, vector<string>) };
    inline vector<string> getExcludeGenerateOptions() { DARABONBA_PTR_GET(excludeGenerateOptions_, vector<string>) };
    inline SubmitVideoAnalysisTaskRequest& setExcludeGenerateOptions(const vector<string> & excludeGenerateOptions) { DARABONBA_PTR_SET_VALUE(excludeGenerateOptions_, excludeGenerateOptions) };
    inline SubmitVideoAnalysisTaskRequest& setExcludeGenerateOptions(vector<string> && excludeGenerateOptions) { DARABONBA_PTR_SET_RVALUE(excludeGenerateOptions_, excludeGenerateOptions) };


    // faceIdentitySimilarityMinScore Field Functions 
    bool hasFaceIdentitySimilarityMinScore() const { return this->faceIdentitySimilarityMinScore_ != nullptr;};
    void deleteFaceIdentitySimilarityMinScore() { this->faceIdentitySimilarityMinScore_ = nullptr;};
    inline float getFaceIdentitySimilarityMinScore() const { DARABONBA_PTR_GET_DEFAULT(faceIdentitySimilarityMinScore_, 0.0) };
    inline SubmitVideoAnalysisTaskRequest& setFaceIdentitySimilarityMinScore(float faceIdentitySimilarityMinScore) { DARABONBA_PTR_SET_VALUE(faceIdentitySimilarityMinScore_, faceIdentitySimilarityMinScore) };


    // frameSampleMethod Field Functions 
    bool hasFrameSampleMethod() const { return this->frameSampleMethod_ != nullptr;};
    void deleteFrameSampleMethod() { this->frameSampleMethod_ = nullptr;};
    inline const SubmitVideoAnalysisTaskRequest::FrameSampleMethod & getFrameSampleMethod() const { DARABONBA_PTR_GET_CONST(frameSampleMethod_, SubmitVideoAnalysisTaskRequest::FrameSampleMethod) };
    inline SubmitVideoAnalysisTaskRequest::FrameSampleMethod getFrameSampleMethod() { DARABONBA_PTR_GET(frameSampleMethod_, SubmitVideoAnalysisTaskRequest::FrameSampleMethod) };
    inline SubmitVideoAnalysisTaskRequest& setFrameSampleMethod(const SubmitVideoAnalysisTaskRequest::FrameSampleMethod & frameSampleMethod) { DARABONBA_PTR_SET_VALUE(frameSampleMethod_, frameSampleMethod) };
    inline SubmitVideoAnalysisTaskRequest& setFrameSampleMethod(SubmitVideoAnalysisTaskRequest::FrameSampleMethod && frameSampleMethod) { DARABONBA_PTR_SET_RVALUE(frameSampleMethod_, frameSampleMethod) };


    // generateOptions Field Functions 
    bool hasGenerateOptions() const { return this->generateOptions_ != nullptr;};
    void deleteGenerateOptions() { this->generateOptions_ = nullptr;};
    inline const vector<string> & getGenerateOptions() const { DARABONBA_PTR_GET_CONST(generateOptions_, vector<string>) };
    inline vector<string> getGenerateOptions() { DARABONBA_PTR_GET(generateOptions_, vector<string>) };
    inline SubmitVideoAnalysisTaskRequest& setGenerateOptions(const vector<string> & generateOptions) { DARABONBA_PTR_SET_VALUE(generateOptions_, generateOptions) };
    inline SubmitVideoAnalysisTaskRequest& setGenerateOptions(vector<string> && generateOptions) { DARABONBA_PTR_SET_RVALUE(generateOptions_, generateOptions) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SubmitVideoAnalysisTaskRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string getModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline SubmitVideoAnalysisTaskRequest& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelCustomPromptTemplateId Field Functions 
    bool hasModelCustomPromptTemplateId() const { return this->modelCustomPromptTemplateId_ != nullptr;};
    void deleteModelCustomPromptTemplateId() { this->modelCustomPromptTemplateId_ = nullptr;};
    inline string getModelCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplateId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setModelCustomPromptTemplateId(string modelCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplateId_, modelCustomPromptTemplateId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // snapshotInterval Field Functions 
    bool hasSnapshotInterval() const { return this->snapshotInterval_ != nullptr;};
    void deleteSnapshotInterval() { this->snapshotInterval_ = nullptr;};
    inline double getSnapshotInterval() const { DARABONBA_PTR_GET_DEFAULT(snapshotInterval_, 0.0) };
    inline SubmitVideoAnalysisTaskRequest& setSnapshotInterval(double snapshotInterval) { DARABONBA_PTR_SET_VALUE(snapshotInterval_, snapshotInterval) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t getSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline SubmitVideoAnalysisTaskRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // splitType Field Functions 
    bool hasSplitType() const { return this->splitType_ != nullptr;};
    void deleteSplitType() { this->splitType_ = nullptr;};
    inline string getSplitType() const { DARABONBA_PTR_GET_DEFAULT(splitType_, "") };
    inline SubmitVideoAnalysisTaskRequest& setSplitType(string splitType) { DARABONBA_PTR_SET_VALUE(splitType_, splitType) };


    // textProcessTasks Field Functions 
    bool hasTextProcessTasks() const { return this->textProcessTasks_ != nullptr;};
    void deleteTextProcessTasks() { this->textProcessTasks_ = nullptr;};
    inline const vector<SubmitVideoAnalysisTaskRequest::TextProcessTasks> & getTextProcessTasks() const { DARABONBA_PTR_GET_CONST(textProcessTasks_, vector<SubmitVideoAnalysisTaskRequest::TextProcessTasks>) };
    inline vector<SubmitVideoAnalysisTaskRequest::TextProcessTasks> getTextProcessTasks() { DARABONBA_PTR_GET(textProcessTasks_, vector<SubmitVideoAnalysisTaskRequest::TextProcessTasks>) };
    inline SubmitVideoAnalysisTaskRequest& setTextProcessTasks(const vector<SubmitVideoAnalysisTaskRequest::TextProcessTasks> & textProcessTasks) { DARABONBA_PTR_SET_VALUE(textProcessTasks_, textProcessTasks) };
    inline SubmitVideoAnalysisTaskRequest& setTextProcessTasks(vector<SubmitVideoAnalysisTaskRequest::TextProcessTasks> && textProcessTasks) { DARABONBA_PTR_SET_RVALUE(textProcessTasks_, textProcessTasks) };


    // videoCaptionInfo Field Functions 
    bool hasVideoCaptionInfo() const { return this->videoCaptionInfo_ != nullptr;};
    void deleteVideoCaptionInfo() { this->videoCaptionInfo_ = nullptr;};
    inline const SubmitVideoAnalysisTaskRequest::VideoCaptionInfo & getVideoCaptionInfo() const { DARABONBA_PTR_GET_CONST(videoCaptionInfo_, SubmitVideoAnalysisTaskRequest::VideoCaptionInfo) };
    inline SubmitVideoAnalysisTaskRequest::VideoCaptionInfo getVideoCaptionInfo() { DARABONBA_PTR_GET(videoCaptionInfo_, SubmitVideoAnalysisTaskRequest::VideoCaptionInfo) };
    inline SubmitVideoAnalysisTaskRequest& setVideoCaptionInfo(const SubmitVideoAnalysisTaskRequest::VideoCaptionInfo & videoCaptionInfo) { DARABONBA_PTR_SET_VALUE(videoCaptionInfo_, videoCaptionInfo) };
    inline SubmitVideoAnalysisTaskRequest& setVideoCaptionInfo(SubmitVideoAnalysisTaskRequest::VideoCaptionInfo && videoCaptionInfo) { DARABONBA_PTR_SET_RVALUE(videoCaptionInfo_, videoCaptionInfo) };


    // videoExtraInfo Field Functions 
    bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
    void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
    inline string getVideoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


    // videoModelCustomPromptTemplate Field Functions 
    bool hasVideoModelCustomPromptTemplate() const { return this->videoModelCustomPromptTemplate_ != nullptr;};
    void deleteVideoModelCustomPromptTemplate() { this->videoModelCustomPromptTemplate_ = nullptr;};
    inline string getVideoModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(videoModelCustomPromptTemplate_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoModelCustomPromptTemplate(string videoModelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(videoModelCustomPromptTemplate_, videoModelCustomPromptTemplate) };


    // videoModelId Field Functions 
    bool hasVideoModelId() const { return this->videoModelId_ != nullptr;};
    void deleteVideoModelId() { this->videoModelId_ = nullptr;};
    inline string getVideoModelId() const { DARABONBA_PTR_GET_DEFAULT(videoModelId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoModelId(string videoModelId) { DARABONBA_PTR_SET_VALUE(videoModelId_, videoModelId) };


    // videoRoles Field Functions 
    bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
    void deleteVideoRoles() { this->videoRoles_ = nullptr;};
    inline const vector<SubmitVideoAnalysisTaskRequest::VideoRoles> & getVideoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<SubmitVideoAnalysisTaskRequest::VideoRoles>) };
    inline vector<SubmitVideoAnalysisTaskRequest::VideoRoles> getVideoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<SubmitVideoAnalysisTaskRequest::VideoRoles>) };
    inline SubmitVideoAnalysisTaskRequest& setVideoRoles(const vector<SubmitVideoAnalysisTaskRequest::VideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
    inline SubmitVideoAnalysisTaskRequest& setVideoRoles(vector<SubmitVideoAnalysisTaskRequest::VideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


    // videoShotFaceIdentityCount Field Functions 
    bool hasVideoShotFaceIdentityCount() const { return this->videoShotFaceIdentityCount_ != nullptr;};
    void deleteVideoShotFaceIdentityCount() { this->videoShotFaceIdentityCount_ = nullptr;};
    inline int32_t getVideoShotFaceIdentityCount() const { DARABONBA_PTR_GET_DEFAULT(videoShotFaceIdentityCount_, 0) };
    inline SubmitVideoAnalysisTaskRequest& setVideoShotFaceIdentityCount(int32_t videoShotFaceIdentityCount) { DARABONBA_PTR_SET_VALUE(videoShotFaceIdentityCount_, videoShotFaceIdentityCount) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    // videoUrls Field Functions 
    bool hasVideoUrls() const { return this->videoUrls_ != nullptr;};
    void deleteVideoUrls() { this->videoUrls_ = nullptr;};
    inline const vector<string> & getVideoUrls() const { DARABONBA_PTR_GET_CONST(videoUrls_, vector<string>) };
    inline vector<string> getVideoUrls() { DARABONBA_PTR_GET(videoUrls_, vector<string>) };
    inline SubmitVideoAnalysisTaskRequest& setVideoUrls(const vector<string> & videoUrls) { DARABONBA_PTR_SET_VALUE(videoUrls_, videoUrls) };
    inline SubmitVideoAnalysisTaskRequest& setVideoUrls(vector<string> && videoUrls) { DARABONBA_PTR_SET_RVALUE(videoUrls_, videoUrls) };


  protected:
    shared_ptr<SubmitVideoAnalysisTaskRequest::AddDocumentParam> addDocumentParam_ {};
    shared_ptr<string> autoRoleRecognitionVideoUrl_ {};
    shared_ptr<string> deduplicationId_ {};
    shared_ptr<vector<string>> excludeGenerateOptions_ {};
    shared_ptr<float> faceIdentitySimilarityMinScore_ {};
    shared_ptr<SubmitVideoAnalysisTaskRequest::FrameSampleMethod> frameSampleMethod_ {};
    shared_ptr<vector<string>> generateOptions_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> modelCustomPromptTemplate_ {};
    shared_ptr<string> modelCustomPromptTemplateId_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<double> snapshotInterval_ {};
    shared_ptr<int32_t> splitInterval_ {};
    shared_ptr<string> splitType_ {};
    shared_ptr<vector<SubmitVideoAnalysisTaskRequest::TextProcessTasks>> textProcessTasks_ {};
    shared_ptr<SubmitVideoAnalysisTaskRequest::VideoCaptionInfo> videoCaptionInfo_ {};
    shared_ptr<string> videoExtraInfo_ {};
    shared_ptr<string> videoModelCustomPromptTemplate_ {};
    shared_ptr<string> videoModelId_ {};
    shared_ptr<vector<SubmitVideoAnalysisTaskRequest::VideoRoles>> videoRoles_ {};
    shared_ptr<int32_t> videoShotFaceIdentityCount_ {};
    shared_ptr<string> videoUrl_ {};
    shared_ptr<vector<string>> videoUrls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
