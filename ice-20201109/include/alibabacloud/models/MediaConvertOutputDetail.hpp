// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertOutputDetailFileMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    MediaConvertOutputDetail() = default ;
    MediaConvertOutputDetail(const MediaConvertOutputDetail &) = default ;
    MediaConvertOutputDetail(MediaConvertOutputDetail &&) = default ;
    MediaConvertOutputDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputDetail() = default ;
    MediaConvertOutputDetail& operator=(const MediaConvertOutputDetail &) = default ;
    MediaConvertOutputDetail& operator=(MediaConvertOutputDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(OutFileMeta, outFileMeta_);
        DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(OutFileMeta, outFileMeta_);
        DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputFile& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, OutputFile& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        OutputFile() = default ;
        OutputFile(const OutputFile &) = default ;
        OutputFile(OutputFile &&) = default ;
        OutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputFile() = default ;
        OutputFile& operator=(const OutputFile &) = default ;
        OutputFile& operator=(OutputFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr && this->url_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline OutputFile& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline OutputFile& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline OutputFile& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> media_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->outFileMeta_ == nullptr
        && this->outputFile_ == nullptr; };
      // outFileMeta Field Functions 
      bool hasOutFileMeta() const { return this->outFileMeta_ != nullptr;};
      void deleteOutFileMeta() { this->outFileMeta_ = nullptr;};
      inline const MediaConvertOutputDetailFileMeta & getOutFileMeta() const { DARABONBA_PTR_GET_CONST(outFileMeta_, MediaConvertOutputDetailFileMeta) };
      inline MediaConvertOutputDetailFileMeta getOutFileMeta() { DARABONBA_PTR_GET(outFileMeta_, MediaConvertOutputDetailFileMeta) };
      inline Result& setOutFileMeta(const MediaConvertOutputDetailFileMeta & outFileMeta) { DARABONBA_PTR_SET_VALUE(outFileMeta_, outFileMeta) };
      inline Result& setOutFileMeta(MediaConvertOutputDetailFileMeta && outFileMeta) { DARABONBA_PTR_SET_RVALUE(outFileMeta_, outFileMeta) };


      // outputFile Field Functions 
      bool hasOutputFile() const { return this->outputFile_ != nullptr;};
      void deleteOutputFile() { this->outputFile_ = nullptr;};
      inline const Result::OutputFile & getOutputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Result::OutputFile) };
      inline Result::OutputFile getOutputFile() { DARABONBA_PTR_GET(outputFile_, Result::OutputFile) };
      inline Result& setOutputFile(const Result::OutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
      inline Result& setOutputFile(Result::OutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    protected:
      shared_ptr<MediaConvertOutputDetailFileMeta> outFileMeta_ {};
      shared_ptr<Result::OutputFile> outputFile_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MediaConvertOutputDetail& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MediaConvertOutputDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline MediaConvertOutputDetail& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MediaConvertOutputDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertOutputDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const MediaConvertOutputDetail::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, MediaConvertOutputDetail::Result) };
    inline MediaConvertOutputDetail::Result getResult() { DARABONBA_PTR_GET(result_, MediaConvertOutputDetail::Result) };
    inline MediaConvertOutputDetail& setResult(const MediaConvertOutputDetail::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline MediaConvertOutputDetail& setResult(MediaConvertOutputDetail::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline MediaConvertOutputDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline MediaConvertOutputDetail& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> finishTime_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> name_ {};
    shared_ptr<MediaConvertOutputDetail::Result> result_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
