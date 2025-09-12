// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestInput& obj) { 
      DARABONBA_PTR_TO_JSON(AudioChannelMode, audioChannelMode_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_TO_JSON(MultipleStreamsEnabled, multipleStreamsEnabled_);
      DARABONBA_PTR_TO_JSON(OutputPath, outputPath_);
      DARABONBA_PTR_TO_JSON(ProgressiveCallbacksEnabled, progressiveCallbacksEnabled_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestInput& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioChannelMode, audioChannelMode_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_FROM_JSON(MultipleStreamsEnabled, multipleStreamsEnabled_);
      DARABONBA_PTR_FROM_JSON(OutputPath, outputPath_);
      DARABONBA_PTR_FROM_JSON(ProgressiveCallbacksEnabled, progressiveCallbacksEnabled_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
    };
    CreateTaskRequestInput() = default ;
    CreateTaskRequestInput(const CreateTaskRequestInput &) = default ;
    CreateTaskRequestInput(CreateTaskRequestInput &&) = default ;
    CreateTaskRequestInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestInput() = default ;
    CreateTaskRequestInput& operator=(const CreateTaskRequestInput &) = default ;
    CreateTaskRequestInput& operator=(CreateTaskRequestInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioChannelMode_ != nullptr
        && this->fileUrl_ != nullptr && this->format_ != nullptr && this->languageHints_ != nullptr && this->multipleStreamsEnabled_ != nullptr && this->outputPath_ != nullptr
        && this->progressiveCallbacksEnabled_ != nullptr && this->sampleRate_ != nullptr && this->sourceLanguage_ != nullptr && this->taskId_ != nullptr && this->taskKey_ != nullptr; };
    // audioChannelMode Field Functions 
    bool hasAudioChannelMode() const { return this->audioChannelMode_ != nullptr;};
    void deleteAudioChannelMode() { this->audioChannelMode_ = nullptr;};
    inline string audioChannelMode() const { DARABONBA_PTR_GET_DEFAULT(audioChannelMode_, "") };
    inline CreateTaskRequestInput& setAudioChannelMode(string audioChannelMode) { DARABONBA_PTR_SET_VALUE(audioChannelMode_, audioChannelMode) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateTaskRequestInput& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateTaskRequestInput& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // languageHints Field Functions 
    bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
    void deleteLanguageHints() { this->languageHints_ = nullptr;};
    inline const vector<string> & languageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
    inline vector<string> languageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
    inline CreateTaskRequestInput& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
    inline CreateTaskRequestInput& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


    // multipleStreamsEnabled Field Functions 
    bool hasMultipleStreamsEnabled() const { return this->multipleStreamsEnabled_ != nullptr;};
    void deleteMultipleStreamsEnabled() { this->multipleStreamsEnabled_ = nullptr;};
    inline bool multipleStreamsEnabled() const { DARABONBA_PTR_GET_DEFAULT(multipleStreamsEnabled_, false) };
    inline CreateTaskRequestInput& setMultipleStreamsEnabled(bool multipleStreamsEnabled) { DARABONBA_PTR_SET_VALUE(multipleStreamsEnabled_, multipleStreamsEnabled) };


    // outputPath Field Functions 
    bool hasOutputPath() const { return this->outputPath_ != nullptr;};
    void deleteOutputPath() { this->outputPath_ = nullptr;};
    inline string outputPath() const { DARABONBA_PTR_GET_DEFAULT(outputPath_, "") };
    inline CreateTaskRequestInput& setOutputPath(string outputPath) { DARABONBA_PTR_SET_VALUE(outputPath_, outputPath) };


    // progressiveCallbacksEnabled Field Functions 
    bool hasProgressiveCallbacksEnabled() const { return this->progressiveCallbacksEnabled_ != nullptr;};
    void deleteProgressiveCallbacksEnabled() { this->progressiveCallbacksEnabled_ = nullptr;};
    inline bool progressiveCallbacksEnabled() const { DARABONBA_PTR_GET_DEFAULT(progressiveCallbacksEnabled_, false) };
    inline CreateTaskRequestInput& setProgressiveCallbacksEnabled(bool progressiveCallbacksEnabled) { DARABONBA_PTR_SET_VALUE(progressiveCallbacksEnabled_, progressiveCallbacksEnabled) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline CreateTaskRequestInput& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline CreateTaskRequestInput& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateTaskRequestInput& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskKey Field Functions 
    bool hasTaskKey() const { return this->taskKey_ != nullptr;};
    void deleteTaskKey() { this->taskKey_ = nullptr;};
    inline string taskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
    inline CreateTaskRequestInput& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


  protected:
    std::shared_ptr<string> audioChannelMode_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<vector<string>> languageHints_ = nullptr;
    std::shared_ptr<bool> multipleStreamsEnabled_ = nullptr;
    std::shared_ptr<string> outputPath_ = nullptr;
    std::shared_ptr<bool> progressiveCallbacksEnabled_ = nullptr;
    std::shared_ptr<int32_t> sampleRate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
