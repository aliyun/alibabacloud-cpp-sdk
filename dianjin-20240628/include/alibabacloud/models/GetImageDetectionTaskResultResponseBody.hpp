// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetImageDetectionTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetImageDetectionTaskResultResponseBody() = default ;
    GetImageDetectionTaskResultResponseBody(const GetImageDetectionTaskResultResponseBody &) = default ;
    GetImageDetectionTaskResultResponseBody(GetImageDetectionTaskResultResponseBody &&) = default ;
    GetImageDetectionTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDetectionTaskResultResponseBody() = default ;
    GetImageDetectionTaskResultResponseBody& operator=(const GetImageDetectionTaskResultResponseBody &) = default ;
    GetImageDetectionTaskResultResponseBody& operator=(GetImageDetectionTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(detectionConclusion, detectionConclusion_);
        DARABONBA_PTR_TO_JSON(detectionResult, detectionResult_);
        DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(detectionConclusion, detectionConclusion_);
        DARABONBA_PTR_FROM_JSON(detectionResult, detectionResult_);
        DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FileInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfo& obj) { 
          DARABONBA_PTR_TO_JSON(fileId, fileId_);
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(fileTraceId, fileTraceId_);
          DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(fileId, fileId_);
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(fileTraceId, fileTraceId_);
          DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
        };
        FileInfo() = default ;
        FileInfo(const FileInfo &) = default ;
        FileInfo(FileInfo &&) = default ;
        FileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileInfo() = default ;
        FileInfo& operator=(const FileInfo &) = default ;
        FileInfo& operator=(FileInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->fileTraceId_ == nullptr && this->ossKey_ == nullptr; };
        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline FileInfo& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileTraceId Field Functions 
        bool hasFileTraceId() const { return this->fileTraceId_ != nullptr;};
        void deleteFileTraceId() { this->fileTraceId_ = nullptr;};
        inline string getFileTraceId() const { DARABONBA_PTR_GET_DEFAULT(fileTraceId_, "") };
        inline FileInfo& setFileTraceId(string fileTraceId) { DARABONBA_PTR_SET_VALUE(fileTraceId_, fileTraceId) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline FileInfo& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


      protected:
        shared_ptr<string> fileId_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> fileTraceId_ {};
        shared_ptr<string> ossKey_ {};
      };

      class DetectionResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetectionResult& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(detectionDetails, detectionDetails_);
          DARABONBA_PTR_TO_JSON(portraitType, portraitType_);
          DARABONBA_PTR_TO_JSON(suggestions, suggestions_);
        };
        friend void from_json(const Darabonba::Json& j, DetectionResult& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(detectionDetails, detectionDetails_);
          DARABONBA_PTR_FROM_JSON(portraitType, portraitType_);
          DARABONBA_PTR_FROM_JSON(suggestions, suggestions_);
        };
        DetectionResult() = default ;
        DetectionResult(const DetectionResult &) = default ;
        DetectionResult(DetectionResult &&) = default ;
        DetectionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetectionResult() = default ;
        DetectionResult& operator=(const DetectionResult &) = default ;
        DetectionResult& operator=(DetectionResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DetectionDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetectionDetails& obj) { 
            DARABONBA_PTR_TO_JSON(code, code_);
            DARABONBA_PTR_TO_JSON(confidence, confidence_);
            DARABONBA_PTR_TO_JSON(pass, pass_);
            DARABONBA_PTR_TO_JSON(reason, reason_);
          };
          friend void from_json(const Darabonba::Json& j, DetectionDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(code, code_);
            DARABONBA_PTR_FROM_JSON(confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(pass, pass_);
            DARABONBA_PTR_FROM_JSON(reason, reason_);
          };
          DetectionDetails() = default ;
          DetectionDetails(const DetectionDetails &) = default ;
          DetectionDetails(DetectionDetails &&) = default ;
          DetectionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetectionDetails() = default ;
          DetectionDetails& operator=(const DetectionDetails &) = default ;
          DetectionDetails& operator=(DetectionDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->confidence_ == nullptr && this->pass_ == nullptr && this->reason_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline DetectionDetails& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline double getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline DetectionDetails& setConfidence(double confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // pass Field Functions 
          bool hasPass() const { return this->pass_ != nullptr;};
          void deletePass() { this->pass_ = nullptr;};
          inline bool getPass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
          inline DetectionDetails& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
          inline DetectionDetails& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<double> confidence_ {};
          shared_ptr<bool> pass_ {};
          shared_ptr<string> reason_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->detectionDetails_ == nullptr && this->portraitType_ == nullptr && this->suggestions_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DetectionResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // detectionDetails Field Functions 
        bool hasDetectionDetails() const { return this->detectionDetails_ != nullptr;};
        void deleteDetectionDetails() { this->detectionDetails_ = nullptr;};
        inline const vector<DetectionResult::DetectionDetails> & getDetectionDetails() const { DARABONBA_PTR_GET_CONST(detectionDetails_, vector<DetectionResult::DetectionDetails>) };
        inline vector<DetectionResult::DetectionDetails> getDetectionDetails() { DARABONBA_PTR_GET(detectionDetails_, vector<DetectionResult::DetectionDetails>) };
        inline DetectionResult& setDetectionDetails(const vector<DetectionResult::DetectionDetails> & detectionDetails) { DARABONBA_PTR_SET_VALUE(detectionDetails_, detectionDetails) };
        inline DetectionResult& setDetectionDetails(vector<DetectionResult::DetectionDetails> && detectionDetails) { DARABONBA_PTR_SET_RVALUE(detectionDetails_, detectionDetails) };


        // portraitType Field Functions 
        bool hasPortraitType() const { return this->portraitType_ != nullptr;};
        void deletePortraitType() { this->portraitType_ = nullptr;};
        inline string getPortraitType() const { DARABONBA_PTR_GET_DEFAULT(portraitType_, "") };
        inline DetectionResult& setPortraitType(string portraitType) { DARABONBA_PTR_SET_VALUE(portraitType_, portraitType) };


        // suggestions Field Functions 
        bool hasSuggestions() const { return this->suggestions_ != nullptr;};
        void deleteSuggestions() { this->suggestions_ = nullptr;};
        inline const vector<string> & getSuggestions() const { DARABONBA_PTR_GET_CONST(suggestions_, vector<string>) };
        inline vector<string> getSuggestions() { DARABONBA_PTR_GET(suggestions_, vector<string>) };
        inline DetectionResult& setSuggestions(const vector<string> & suggestions) { DARABONBA_PTR_SET_VALUE(suggestions_, suggestions) };
        inline DetectionResult& setSuggestions(vector<string> && suggestions) { DARABONBA_PTR_SET_RVALUE(suggestions_, suggestions) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<vector<DetectionResult::DetectionDetails>> detectionDetails_ {};
        shared_ptr<string> portraitType_ {};
        shared_ptr<vector<string>> suggestions_ {};
      };

      virtual bool empty() const override { return this->detectionConclusion_ == nullptr
        && this->detectionResult_ == nullptr && this->fileInfo_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr; };
      // detectionConclusion Field Functions 
      bool hasDetectionConclusion() const { return this->detectionConclusion_ != nullptr;};
      void deleteDetectionConclusion() { this->detectionConclusion_ = nullptr;};
      inline string getDetectionConclusion() const { DARABONBA_PTR_GET_DEFAULT(detectionConclusion_, "") };
      inline Data& setDetectionConclusion(string detectionConclusion) { DARABONBA_PTR_SET_VALUE(detectionConclusion_, detectionConclusion) };


      // detectionResult Field Functions 
      bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
      void deleteDetectionResult() { this->detectionResult_ = nullptr;};
      inline const Data::DetectionResult & getDetectionResult() const { DARABONBA_PTR_GET_CONST(detectionResult_, Data::DetectionResult) };
      inline Data::DetectionResult getDetectionResult() { DARABONBA_PTR_GET(detectionResult_, Data::DetectionResult) };
      inline Data& setDetectionResult(const Data::DetectionResult & detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };
      inline Data& setDetectionResult(Data::DetectionResult && detectionResult) { DARABONBA_PTR_SET_RVALUE(detectionResult_, detectionResult) };


      // fileInfo Field Functions 
      bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
      void deleteFileInfo() { this->fileInfo_ = nullptr;};
      inline const Data::FileInfo & getFileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, Data::FileInfo) };
      inline Data::FileInfo getFileInfo() { DARABONBA_PTR_GET(fileInfo_, Data::FileInfo) };
      inline Data& setFileInfo(const Data::FileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
      inline Data& setFileInfo(Data::FileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> detectionConclusion_ {};
      shared_ptr<Data::DetectionResult> detectionResult_ {};
      shared_ptr<Data::FileInfo> fileInfo_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageDetectionTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageDetectionTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetImageDetectionTaskResultResponseBody::Data) };
    inline GetImageDetectionTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetImageDetectionTaskResultResponseBody::Data) };
    inline GetImageDetectionTaskResultResponseBody& setData(const GetImageDetectionTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageDetectionTaskResultResponseBody& setData(GetImageDetectionTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageDetectionTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline GetImageDetectionTaskResultResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageDetectionTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetImageDetectionTaskResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
