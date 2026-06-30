// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSLATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSLATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class SubmitTranslationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranslationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKey, APIKey_);
      DARABONBA_PTR_TO_JSON(BaseTaskId, baseTaskId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CustomTerms, customTerms_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranslationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKey, APIKey_);
      DARABONBA_PTR_FROM_JSON(BaseTaskId, baseTaskId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CustomTerms, customTerms_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SubmitTranslationTaskRequest() = default ;
    SubmitTranslationTaskRequest(const SubmitTranslationTaskRequest &) = default ;
    SubmitTranslationTaskRequest(SubmitTranslationTaskRequest &&) = default ;
    SubmitTranslationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranslationTaskRequest() = default ;
    SubmitTranslationTaskRequest& operator=(const SubmitTranslationTaskRequest &) = default ;
    SubmitTranslationTaskRequest& operator=(SubmitTranslationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomTerms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomTerms& obj) { 
        DARABONBA_PTR_TO_JSON(SourceTerm, sourceTerm_);
        DARABONBA_PTR_TO_JSON(TargetTerm, targetTerm_);
      };
      friend void from_json(const Darabonba::Json& j, CustomTerms& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceTerm, sourceTerm_);
        DARABONBA_PTR_FROM_JSON(TargetTerm, targetTerm_);
      };
      CustomTerms() = default ;
      CustomTerms(const CustomTerms &) = default ;
      CustomTerms(CustomTerms &&) = default ;
      CustomTerms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomTerms() = default ;
      CustomTerms& operator=(const CustomTerms &) = default ;
      CustomTerms& operator=(CustomTerms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sourceTerm_ == nullptr
        && this->targetTerm_ == nullptr; };
      // sourceTerm Field Functions 
      bool hasSourceTerm() const { return this->sourceTerm_ != nullptr;};
      void deleteSourceTerm() { this->sourceTerm_ = nullptr;};
      inline string getSourceTerm() const { DARABONBA_PTR_GET_DEFAULT(sourceTerm_, "") };
      inline CustomTerms& setSourceTerm(string sourceTerm) { DARABONBA_PTR_SET_VALUE(sourceTerm_, sourceTerm) };


      // targetTerm Field Functions 
      bool hasTargetTerm() const { return this->targetTerm_ != nullptr;};
      void deleteTargetTerm() { this->targetTerm_ = nullptr;};
      inline string getTargetTerm() const { DARABONBA_PTR_GET_DEFAULT(targetTerm_, "") };
      inline CustomTerms& setTargetTerm(string targetTerm) { DARABONBA_PTR_SET_VALUE(targetTerm_, targetTerm) };


    protected:
      shared_ptr<string> sourceTerm_ {};
      shared_ptr<string> targetTerm_ {};
    };

    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(Font, font_);
        DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
        DARABONBA_PTR_TO_JSON(Style, style_);
        DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(Font, font_);
        DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
        DARABONBA_PTR_FROM_JSON(Style, style_);
        DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->font_ == nullptr
        && this->sourceLanguage_ == nullptr && this->style_ == nullptr && this->targetLanguage_ == nullptr; };
      // font Field Functions 
      bool hasFont() const { return this->font_ != nullptr;};
      void deleteFont() { this->font_ = nullptr;};
      inline string getFont() const { DARABONBA_PTR_GET_DEFAULT(font_, "") };
      inline Config& setFont(string font) { DARABONBA_PTR_SET_VALUE(font_, font) };


      // sourceLanguage Field Functions 
      bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
      void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
      inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
      inline Config& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


      // style Field Functions 
      bool hasStyle() const { return this->style_ != nullptr;};
      void deleteStyle() { this->style_ = nullptr;};
      inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
      inline Config& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


      // targetLanguage Field Functions 
      bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
      void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
      inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
      inline Config& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    protected:
      shared_ptr<string> font_ {};
      // This parameter is required.
      shared_ptr<string> sourceLanguage_ {};
      shared_ptr<string> style_ {};
      // This parameter is required.
      shared_ptr<string> targetLanguage_ {};
    };

    virtual bool empty() const override { return this->APIKey_ == nullptr
        && this->baseTaskId_ == nullptr && this->config_ == nullptr && this->customTerms_ == nullptr && this->taskId_ == nullptr; };
    // APIKey Field Functions 
    bool hasAPIKey() const { return this->APIKey_ != nullptr;};
    void deleteAPIKey() { this->APIKey_ = nullptr;};
    inline string getAPIKey() const { DARABONBA_PTR_GET_DEFAULT(APIKey_, "") };
    inline SubmitTranslationTaskRequest& setAPIKey(string APIKey) { DARABONBA_PTR_SET_VALUE(APIKey_, APIKey) };


    // baseTaskId Field Functions 
    bool hasBaseTaskId() const { return this->baseTaskId_ != nullptr;};
    void deleteBaseTaskId() { this->baseTaskId_ = nullptr;};
    inline string getBaseTaskId() const { DARABONBA_PTR_GET_DEFAULT(baseTaskId_, "") };
    inline SubmitTranslationTaskRequest& setBaseTaskId(string baseTaskId) { DARABONBA_PTR_SET_VALUE(baseTaskId_, baseTaskId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const SubmitTranslationTaskRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, SubmitTranslationTaskRequest::Config) };
    inline SubmitTranslationTaskRequest::Config getConfig() { DARABONBA_PTR_GET(config_, SubmitTranslationTaskRequest::Config) };
    inline SubmitTranslationTaskRequest& setConfig(const SubmitTranslationTaskRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline SubmitTranslationTaskRequest& setConfig(SubmitTranslationTaskRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // customTerms Field Functions 
    bool hasCustomTerms() const { return this->customTerms_ != nullptr;};
    void deleteCustomTerms() { this->customTerms_ = nullptr;};
    inline const vector<SubmitTranslationTaskRequest::CustomTerms> & getCustomTerms() const { DARABONBA_PTR_GET_CONST(customTerms_, vector<SubmitTranslationTaskRequest::CustomTerms>) };
    inline vector<SubmitTranslationTaskRequest::CustomTerms> getCustomTerms() { DARABONBA_PTR_GET(customTerms_, vector<SubmitTranslationTaskRequest::CustomTerms>) };
    inline SubmitTranslationTaskRequest& setCustomTerms(const vector<SubmitTranslationTaskRequest::CustomTerms> & customTerms) { DARABONBA_PTR_SET_VALUE(customTerms_, customTerms) };
    inline SubmitTranslationTaskRequest& setCustomTerms(vector<SubmitTranslationTaskRequest::CustomTerms> && customTerms) { DARABONBA_PTR_SET_RVALUE(customTerms_, customTerms) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitTranslationTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> APIKey_ {};
    shared_ptr<string> baseTaskId_ {};
    // This parameter is required.
    shared_ptr<SubmitTranslationTaskRequest::Config> config_ {};
    shared_ptr<vector<SubmitTranslationTaskRequest::CustomTerms>> customTerms_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
