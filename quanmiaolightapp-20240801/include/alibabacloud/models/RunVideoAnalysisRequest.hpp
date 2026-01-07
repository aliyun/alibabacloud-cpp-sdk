// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUEST_HPP_
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
  class RunVideoAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addDocumentParam, addDocumentParam_);
      DARABONBA_PTR_TO_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_TO_JSON(excludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_TO_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_TO_JSON(frameSampleMethod, frameSampleMethod_);
      DARABONBA_PTR_TO_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_TO_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_TO_JSON(splitType, splitType_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(textProcessTasks, textProcessTasks_);
      DARABONBA_PTR_TO_JSON(videoCaptionInfo, videoCaptionInfo_);
      DARABONBA_PTR_TO_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_TO_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_TO_JSON(videoRoles, videoRoles_);
      DARABONBA_PTR_TO_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addDocumentParam, addDocumentParam_);
      DARABONBA_PTR_FROM_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_FROM_JSON(excludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_FROM_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_FROM_JSON(frameSampleMethod, frameSampleMethod_);
      DARABONBA_PTR_FROM_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_FROM_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_FROM_JSON(splitType, splitType_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(textProcessTasks, textProcessTasks_);
      DARABONBA_PTR_FROM_JSON(videoCaptionInfo, videoCaptionInfo_);
      DARABONBA_PTR_FROM_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_FROM_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_FROM_JSON(videoRoles, videoRoles_);
      DARABONBA_PTR_FROM_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
    };
    RunVideoAnalysisRequest() = default ;
    RunVideoAnalysisRequest(const RunVideoAnalysisRequest &) = default ;
    RunVideoAnalysisRequest(RunVideoAnalysisRequest &&) = default ;
    RunVideoAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisRequest() = default ;
    RunVideoAnalysisRequest& operator=(const RunVideoAnalysisRequest &) = default ;
    RunVideoAnalysisRequest& operator=(RunVideoAnalysisRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(docId, docId_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Document& obj) { 
          DARABONBA_PTR_FROM_JSON(docId, docId_);
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
        virtual bool empty() const override { return this->docId_ == nullptr
        && this->title_ == nullptr; };
        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Document& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Document& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> docId_ {};
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
        && this->autoRoleRecognitionVideoUrl_ == nullptr && this->excludeGenerateOptions_ == nullptr && this->faceIdentitySimilarityMinScore_ == nullptr && this->frameSampleMethod_ == nullptr && this->generateOptions_ == nullptr
        && this->language_ == nullptr && this->modelCustomPromptTemplate_ == nullptr && this->modelCustomPromptTemplateId_ == nullptr && this->modelId_ == nullptr && this->originalSessionId_ == nullptr
        && this->snapshotInterval_ == nullptr && this->splitInterval_ == nullptr && this->splitType_ == nullptr && this->taskId_ == nullptr && this->textProcessTasks_ == nullptr
        && this->videoCaptionInfo_ == nullptr && this->videoExtraInfo_ == nullptr && this->videoModelCustomPromptTemplate_ == nullptr && this->videoModelId_ == nullptr && this->videoRoles_ == nullptr
        && this->videoShotFaceIdentityCount_ == nullptr && this->videoUrl_ == nullptr; };
    // addDocumentParam Field Functions 
    bool hasAddDocumentParam() const { return this->addDocumentParam_ != nullptr;};
    void deleteAddDocumentParam() { this->addDocumentParam_ = nullptr;};
    inline const RunVideoAnalysisRequest::AddDocumentParam & getAddDocumentParam() const { DARABONBA_PTR_GET_CONST(addDocumentParam_, RunVideoAnalysisRequest::AddDocumentParam) };
    inline RunVideoAnalysisRequest::AddDocumentParam getAddDocumentParam() { DARABONBA_PTR_GET(addDocumentParam_, RunVideoAnalysisRequest::AddDocumentParam) };
    inline RunVideoAnalysisRequest& setAddDocumentParam(const RunVideoAnalysisRequest::AddDocumentParam & addDocumentParam) { DARABONBA_PTR_SET_VALUE(addDocumentParam_, addDocumentParam) };
    inline RunVideoAnalysisRequest& setAddDocumentParam(RunVideoAnalysisRequest::AddDocumentParam && addDocumentParam) { DARABONBA_PTR_SET_RVALUE(addDocumentParam_, addDocumentParam) };


    // autoRoleRecognitionVideoUrl Field Functions 
    bool hasAutoRoleRecognitionVideoUrl() const { return this->autoRoleRecognitionVideoUrl_ != nullptr;};
    void deleteAutoRoleRecognitionVideoUrl() { this->autoRoleRecognitionVideoUrl_ = nullptr;};
    inline string getAutoRoleRecognitionVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(autoRoleRecognitionVideoUrl_, "") };
    inline RunVideoAnalysisRequest& setAutoRoleRecognitionVideoUrl(string autoRoleRecognitionVideoUrl) { DARABONBA_PTR_SET_VALUE(autoRoleRecognitionVideoUrl_, autoRoleRecognitionVideoUrl) };


    // excludeGenerateOptions Field Functions 
    bool hasExcludeGenerateOptions() const { return this->excludeGenerateOptions_ != nullptr;};
    void deleteExcludeGenerateOptions() { this->excludeGenerateOptions_ = nullptr;};
    inline const vector<string> & getExcludeGenerateOptions() const { DARABONBA_PTR_GET_CONST(excludeGenerateOptions_, vector<string>) };
    inline vector<string> getExcludeGenerateOptions() { DARABONBA_PTR_GET(excludeGenerateOptions_, vector<string>) };
    inline RunVideoAnalysisRequest& setExcludeGenerateOptions(const vector<string> & excludeGenerateOptions) { DARABONBA_PTR_SET_VALUE(excludeGenerateOptions_, excludeGenerateOptions) };
    inline RunVideoAnalysisRequest& setExcludeGenerateOptions(vector<string> && excludeGenerateOptions) { DARABONBA_PTR_SET_RVALUE(excludeGenerateOptions_, excludeGenerateOptions) };


    // faceIdentitySimilarityMinScore Field Functions 
    bool hasFaceIdentitySimilarityMinScore() const { return this->faceIdentitySimilarityMinScore_ != nullptr;};
    void deleteFaceIdentitySimilarityMinScore() { this->faceIdentitySimilarityMinScore_ = nullptr;};
    inline float getFaceIdentitySimilarityMinScore() const { DARABONBA_PTR_GET_DEFAULT(faceIdentitySimilarityMinScore_, 0.0) };
    inline RunVideoAnalysisRequest& setFaceIdentitySimilarityMinScore(float faceIdentitySimilarityMinScore) { DARABONBA_PTR_SET_VALUE(faceIdentitySimilarityMinScore_, faceIdentitySimilarityMinScore) };


    // frameSampleMethod Field Functions 
    bool hasFrameSampleMethod() const { return this->frameSampleMethod_ != nullptr;};
    void deleteFrameSampleMethod() { this->frameSampleMethod_ = nullptr;};
    inline const RunVideoAnalysisRequest::FrameSampleMethod & getFrameSampleMethod() const { DARABONBA_PTR_GET_CONST(frameSampleMethod_, RunVideoAnalysisRequest::FrameSampleMethod) };
    inline RunVideoAnalysisRequest::FrameSampleMethod getFrameSampleMethod() { DARABONBA_PTR_GET(frameSampleMethod_, RunVideoAnalysisRequest::FrameSampleMethod) };
    inline RunVideoAnalysisRequest& setFrameSampleMethod(const RunVideoAnalysisRequest::FrameSampleMethod & frameSampleMethod) { DARABONBA_PTR_SET_VALUE(frameSampleMethod_, frameSampleMethod) };
    inline RunVideoAnalysisRequest& setFrameSampleMethod(RunVideoAnalysisRequest::FrameSampleMethod && frameSampleMethod) { DARABONBA_PTR_SET_RVALUE(frameSampleMethod_, frameSampleMethod) };


    // generateOptions Field Functions 
    bool hasGenerateOptions() const { return this->generateOptions_ != nullptr;};
    void deleteGenerateOptions() { this->generateOptions_ = nullptr;};
    inline const vector<string> & getGenerateOptions() const { DARABONBA_PTR_GET_CONST(generateOptions_, vector<string>) };
    inline vector<string> getGenerateOptions() { DARABONBA_PTR_GET(generateOptions_, vector<string>) };
    inline RunVideoAnalysisRequest& setGenerateOptions(const vector<string> & generateOptions) { DARABONBA_PTR_SET_VALUE(generateOptions_, generateOptions) };
    inline RunVideoAnalysisRequest& setGenerateOptions(vector<string> && generateOptions) { DARABONBA_PTR_SET_RVALUE(generateOptions_, generateOptions) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RunVideoAnalysisRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string getModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline RunVideoAnalysisRequest& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelCustomPromptTemplateId Field Functions 
    bool hasModelCustomPromptTemplateId() const { return this->modelCustomPromptTemplateId_ != nullptr;};
    void deleteModelCustomPromptTemplateId() { this->modelCustomPromptTemplateId_ = nullptr;};
    inline string getModelCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplateId_, "") };
    inline RunVideoAnalysisRequest& setModelCustomPromptTemplateId(string modelCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplateId_, modelCustomPromptTemplateId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunVideoAnalysisRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string getOriginalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunVideoAnalysisRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // snapshotInterval Field Functions 
    bool hasSnapshotInterval() const { return this->snapshotInterval_ != nullptr;};
    void deleteSnapshotInterval() { this->snapshotInterval_ = nullptr;};
    inline double getSnapshotInterval() const { DARABONBA_PTR_GET_DEFAULT(snapshotInterval_, 0.0) };
    inline RunVideoAnalysisRequest& setSnapshotInterval(double snapshotInterval) { DARABONBA_PTR_SET_VALUE(snapshotInterval_, snapshotInterval) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t getSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline RunVideoAnalysisRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // splitType Field Functions 
    bool hasSplitType() const { return this->splitType_ != nullptr;};
    void deleteSplitType() { this->splitType_ = nullptr;};
    inline string getSplitType() const { DARABONBA_PTR_GET_DEFAULT(splitType_, "") };
    inline RunVideoAnalysisRequest& setSplitType(string splitType) { DARABONBA_PTR_SET_VALUE(splitType_, splitType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunVideoAnalysisRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textProcessTasks Field Functions 
    bool hasTextProcessTasks() const { return this->textProcessTasks_ != nullptr;};
    void deleteTextProcessTasks() { this->textProcessTasks_ = nullptr;};
    inline const vector<RunVideoAnalysisRequest::TextProcessTasks> & getTextProcessTasks() const { DARABONBA_PTR_GET_CONST(textProcessTasks_, vector<RunVideoAnalysisRequest::TextProcessTasks>) };
    inline vector<RunVideoAnalysisRequest::TextProcessTasks> getTextProcessTasks() { DARABONBA_PTR_GET(textProcessTasks_, vector<RunVideoAnalysisRequest::TextProcessTasks>) };
    inline RunVideoAnalysisRequest& setTextProcessTasks(const vector<RunVideoAnalysisRequest::TextProcessTasks> & textProcessTasks) { DARABONBA_PTR_SET_VALUE(textProcessTasks_, textProcessTasks) };
    inline RunVideoAnalysisRequest& setTextProcessTasks(vector<RunVideoAnalysisRequest::TextProcessTasks> && textProcessTasks) { DARABONBA_PTR_SET_RVALUE(textProcessTasks_, textProcessTasks) };


    // videoCaptionInfo Field Functions 
    bool hasVideoCaptionInfo() const { return this->videoCaptionInfo_ != nullptr;};
    void deleteVideoCaptionInfo() { this->videoCaptionInfo_ = nullptr;};
    inline const RunVideoAnalysisRequest::VideoCaptionInfo & getVideoCaptionInfo() const { DARABONBA_PTR_GET_CONST(videoCaptionInfo_, RunVideoAnalysisRequest::VideoCaptionInfo) };
    inline RunVideoAnalysisRequest::VideoCaptionInfo getVideoCaptionInfo() { DARABONBA_PTR_GET(videoCaptionInfo_, RunVideoAnalysisRequest::VideoCaptionInfo) };
    inline RunVideoAnalysisRequest& setVideoCaptionInfo(const RunVideoAnalysisRequest::VideoCaptionInfo & videoCaptionInfo) { DARABONBA_PTR_SET_VALUE(videoCaptionInfo_, videoCaptionInfo) };
    inline RunVideoAnalysisRequest& setVideoCaptionInfo(RunVideoAnalysisRequest::VideoCaptionInfo && videoCaptionInfo) { DARABONBA_PTR_SET_RVALUE(videoCaptionInfo_, videoCaptionInfo) };


    // videoExtraInfo Field Functions 
    bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
    void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
    inline string getVideoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
    inline RunVideoAnalysisRequest& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


    // videoModelCustomPromptTemplate Field Functions 
    bool hasVideoModelCustomPromptTemplate() const { return this->videoModelCustomPromptTemplate_ != nullptr;};
    void deleteVideoModelCustomPromptTemplate() { this->videoModelCustomPromptTemplate_ = nullptr;};
    inline string getVideoModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(videoModelCustomPromptTemplate_, "") };
    inline RunVideoAnalysisRequest& setVideoModelCustomPromptTemplate(string videoModelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(videoModelCustomPromptTemplate_, videoModelCustomPromptTemplate) };


    // videoModelId Field Functions 
    bool hasVideoModelId() const { return this->videoModelId_ != nullptr;};
    void deleteVideoModelId() { this->videoModelId_ = nullptr;};
    inline string getVideoModelId() const { DARABONBA_PTR_GET_DEFAULT(videoModelId_, "") };
    inline RunVideoAnalysisRequest& setVideoModelId(string videoModelId) { DARABONBA_PTR_SET_VALUE(videoModelId_, videoModelId) };


    // videoRoles Field Functions 
    bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
    void deleteVideoRoles() { this->videoRoles_ = nullptr;};
    inline const vector<RunVideoAnalysisRequest::VideoRoles> & getVideoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<RunVideoAnalysisRequest::VideoRoles>) };
    inline vector<RunVideoAnalysisRequest::VideoRoles> getVideoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<RunVideoAnalysisRequest::VideoRoles>) };
    inline RunVideoAnalysisRequest& setVideoRoles(const vector<RunVideoAnalysisRequest::VideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
    inline RunVideoAnalysisRequest& setVideoRoles(vector<RunVideoAnalysisRequest::VideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


    // videoShotFaceIdentityCount Field Functions 
    bool hasVideoShotFaceIdentityCount() const { return this->videoShotFaceIdentityCount_ != nullptr;};
    void deleteVideoShotFaceIdentityCount() { this->videoShotFaceIdentityCount_ = nullptr;};
    inline int32_t getVideoShotFaceIdentityCount() const { DARABONBA_PTR_GET_DEFAULT(videoShotFaceIdentityCount_, 0) };
    inline RunVideoAnalysisRequest& setVideoShotFaceIdentityCount(int32_t videoShotFaceIdentityCount) { DARABONBA_PTR_SET_VALUE(videoShotFaceIdentityCount_, videoShotFaceIdentityCount) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline RunVideoAnalysisRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    shared_ptr<RunVideoAnalysisRequest::AddDocumentParam> addDocumentParam_ {};
    shared_ptr<string> autoRoleRecognitionVideoUrl_ {};
    shared_ptr<vector<string>> excludeGenerateOptions_ {};
    shared_ptr<float> faceIdentitySimilarityMinScore_ {};
    shared_ptr<RunVideoAnalysisRequest::FrameSampleMethod> frameSampleMethod_ {};
    shared_ptr<vector<string>> generateOptions_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> modelCustomPromptTemplate_ {};
    shared_ptr<string> modelCustomPromptTemplateId_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> originalSessionId_ {};
    shared_ptr<double> snapshotInterval_ {};
    shared_ptr<int32_t> splitInterval_ {};
    shared_ptr<string> splitType_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<vector<RunVideoAnalysisRequest::TextProcessTasks>> textProcessTasks_ {};
    shared_ptr<RunVideoAnalysisRequest::VideoCaptionInfo> videoCaptionInfo_ {};
    shared_ptr<string> videoExtraInfo_ {};
    shared_ptr<string> videoModelCustomPromptTemplate_ {};
    shared_ptr<string> videoModelId_ {};
    shared_ptr<vector<RunVideoAnalysisRequest::VideoRoles>> videoRoles_ {};
    shared_ptr<int32_t> videoShotFaceIdentityCount_ {};
    shared_ptr<string> videoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
