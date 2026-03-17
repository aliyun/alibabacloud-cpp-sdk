// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitHtmlTranslateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHtmlTranslateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ext, ext_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHtmlTranslateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ext, ext_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    SubmitHtmlTranslateTaskRequest() = default ;
    SubmitHtmlTranslateTaskRequest(const SubmitHtmlTranslateTaskRequest &) = default ;
    SubmitHtmlTranslateTaskRequest(SubmitHtmlTranslateTaskRequest &&) = default ;
    SubmitHtmlTranslateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHtmlTranslateTaskRequest() = default ;
    SubmitHtmlTranslateTaskRequest& operator=(const SubmitHtmlTranslateTaskRequest &) = default ;
    SubmitHtmlTranslateTaskRequest& operator=(SubmitHtmlTranslateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ext& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
        DARABONBA_PTR_TO_JSON(examples, examples_);
        DARABONBA_ANY_TO_JSON(paramMap, paramMap_);
        DARABONBA_PTR_TO_JSON(sensitives, sensitives_);
        DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
        DARABONBA_PTR_TO_JSON(textTransform, textTransform_);
        DARABONBA_PTR_TO_JSON(trackingData, trackingData_);
      };
      friend void from_json(const Darabonba::Json& j, Ext& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
        DARABONBA_PTR_FROM_JSON(examples, examples_);
        DARABONBA_ANY_FROM_JSON(paramMap, paramMap_);
        DARABONBA_PTR_FROM_JSON(sensitives, sensitives_);
        DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
        DARABONBA_PTR_FROM_JSON(textTransform, textTransform_);
        DARABONBA_PTR_FROM_JSON(trackingData, trackingData_);
      };
      Ext() = default ;
      Ext(const Ext &) = default ;
      Ext(Ext &&) = default ;
      Ext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ext() = default ;
      Ext& operator=(const Ext &) = default ;
      Ext& operator=(Ext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TextTransform : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TextTransform& obj) { 
          DARABONBA_PTR_TO_JSON(toLower, toLower_);
          DARABONBA_PTR_TO_JSON(toTitle, toTitle_);
          DARABONBA_PTR_TO_JSON(toUpper, toUpper_);
        };
        friend void from_json(const Darabonba::Json& j, TextTransform& obj) { 
          DARABONBA_PTR_FROM_JSON(toLower, toLower_);
          DARABONBA_PTR_FROM_JSON(toTitle, toTitle_);
          DARABONBA_PTR_FROM_JSON(toUpper, toUpper_);
        };
        TextTransform() = default ;
        TextTransform(const TextTransform &) = default ;
        TextTransform(TextTransform &&) = default ;
        TextTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TextTransform() = default ;
        TextTransform& operator=(const TextTransform &) = default ;
        TextTransform& operator=(TextTransform &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->toLower_ == nullptr
        && this->toTitle_ == nullptr && this->toUpper_ == nullptr; };
        // toLower Field Functions 
        bool hasToLower() const { return this->toLower_ != nullptr;};
        void deleteToLower() { this->toLower_ = nullptr;};
        inline bool getToLower() const { DARABONBA_PTR_GET_DEFAULT(toLower_, false) };
        inline TextTransform& setToLower(bool toLower) { DARABONBA_PTR_SET_VALUE(toLower_, toLower) };


        // toTitle Field Functions 
        bool hasToTitle() const { return this->toTitle_ != nullptr;};
        void deleteToTitle() { this->toTitle_ = nullptr;};
        inline bool getToTitle() const { DARABONBA_PTR_GET_DEFAULT(toTitle_, false) };
        inline TextTransform& setToTitle(bool toTitle) { DARABONBA_PTR_SET_VALUE(toTitle_, toTitle) };


        // toUpper Field Functions 
        bool hasToUpper() const { return this->toUpper_ != nullptr;};
        void deleteToUpper() { this->toUpper_ = nullptr;};
        inline bool getToUpper() const { DARABONBA_PTR_GET_DEFAULT(toUpper_, false) };
        inline TextTransform& setToUpper(bool toUpper) { DARABONBA_PTR_SET_VALUE(toUpper_, toUpper) };


      protected:
        shared_ptr<bool> toLower_ {};
        shared_ptr<bool> toTitle_ {};
        shared_ptr<bool> toUpper_ {};
      };

      class Terminologies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Terminologies& obj) { 
          DARABONBA_PTR_TO_JSON(src, src_);
          DARABONBA_PTR_TO_JSON(tgt, tgt_);
        };
        friend void from_json(const Darabonba::Json& j, Terminologies& obj) { 
          DARABONBA_PTR_FROM_JSON(src, src_);
          DARABONBA_PTR_FROM_JSON(tgt, tgt_);
        };
        Terminologies() = default ;
        Terminologies(const Terminologies &) = default ;
        Terminologies(Terminologies &&) = default ;
        Terminologies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Terminologies() = default ;
        Terminologies& operator=(const Terminologies &) = default ;
        Terminologies& operator=(Terminologies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->src_ == nullptr
        && this->tgt_ == nullptr; };
        // src Field Functions 
        bool hasSrc() const { return this->src_ != nullptr;};
        void deleteSrc() { this->src_ = nullptr;};
        inline string getSrc() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
        inline Terminologies& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


        // tgt Field Functions 
        bool hasTgt() const { return this->tgt_ != nullptr;};
        void deleteTgt() { this->tgt_ = nullptr;};
        inline string getTgt() const { DARABONBA_PTR_GET_DEFAULT(tgt_, "") };
        inline Terminologies& setTgt(string tgt) { DARABONBA_PTR_SET_VALUE(tgt_, tgt) };


      protected:
        shared_ptr<string> src_ {};
        shared_ptr<string> tgt_ {};
      };

      class Examples : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Examples& obj) { 
          DARABONBA_PTR_TO_JSON(src, src_);
          DARABONBA_PTR_TO_JSON(tgt, tgt_);
        };
        friend void from_json(const Darabonba::Json& j, Examples& obj) { 
          DARABONBA_PTR_FROM_JSON(src, src_);
          DARABONBA_PTR_FROM_JSON(tgt, tgt_);
        };
        Examples() = default ;
        Examples(const Examples &) = default ;
        Examples(Examples &&) = default ;
        Examples(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Examples() = default ;
        Examples& operator=(const Examples &) = default ;
        Examples& operator=(Examples &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->src_ == nullptr
        && this->tgt_ == nullptr; };
        // src Field Functions 
        bool hasSrc() const { return this->src_ != nullptr;};
        void deleteSrc() { this->src_ = nullptr;};
        inline string getSrc() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
        inline Examples& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


        // tgt Field Functions 
        bool hasTgt() const { return this->tgt_ != nullptr;};
        void deleteTgt() { this->tgt_ = nullptr;};
        inline string getTgt() const { DARABONBA_PTR_GET_DEFAULT(tgt_, "") };
        inline Examples& setTgt(string tgt) { DARABONBA_PTR_SET_VALUE(tgt_, tgt) };


      protected:
        shared_ptr<string> src_ {};
        shared_ptr<string> tgt_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(callbackUrl, callbackUrl_);
          DARABONBA_PTR_TO_JSON(skipCsiCheck, skipCsiCheck_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(callbackUrl, callbackUrl_);
          DARABONBA_PTR_FROM_JSON(skipCsiCheck, skipCsiCheck_);
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
        virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->skipCsiCheck_ == nullptr; };
        // callbackUrl Field Functions 
        bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
        void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
        inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
        inline Config& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


        // skipCsiCheck Field Functions 
        bool hasSkipCsiCheck() const { return this->skipCsiCheck_ != nullptr;};
        void deleteSkipCsiCheck() { this->skipCsiCheck_ = nullptr;};
        inline bool getSkipCsiCheck() const { DARABONBA_PTR_GET_DEFAULT(skipCsiCheck_, false) };
        inline Config& setSkipCsiCheck(bool skipCsiCheck) { DARABONBA_PTR_SET_VALUE(skipCsiCheck_, skipCsiCheck) };


      protected:
        shared_ptr<string> callbackUrl_ {};
        shared_ptr<bool> skipCsiCheck_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->domainHint_ == nullptr && this->examples_ == nullptr && this->paramMap_ == nullptr && this->sensitives_ == nullptr && this->terminologies_ == nullptr
        && this->textTransform_ == nullptr && this->trackingData_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Ext::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Ext::Config) };
      inline Ext::Config getConfig() { DARABONBA_PTR_GET(config_, Ext::Config) };
      inline Ext& setConfig(const Ext::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Ext& setConfig(Ext::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // domainHint Field Functions 
      bool hasDomainHint() const { return this->domainHint_ != nullptr;};
      void deleteDomainHint() { this->domainHint_ = nullptr;};
      inline string getDomainHint() const { DARABONBA_PTR_GET_DEFAULT(domainHint_, "") };
      inline Ext& setDomainHint(string domainHint) { DARABONBA_PTR_SET_VALUE(domainHint_, domainHint) };


      // examples Field Functions 
      bool hasExamples() const { return this->examples_ != nullptr;};
      void deleteExamples() { this->examples_ = nullptr;};
      inline const vector<Ext::Examples> & getExamples() const { DARABONBA_PTR_GET_CONST(examples_, vector<Ext::Examples>) };
      inline vector<Ext::Examples> getExamples() { DARABONBA_PTR_GET(examples_, vector<Ext::Examples>) };
      inline Ext& setExamples(const vector<Ext::Examples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
      inline Ext& setExamples(vector<Ext::Examples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


      // paramMap Field Functions 
      bool hasParamMap() const { return this->paramMap_ != nullptr;};
      void deleteParamMap() { this->paramMap_ = nullptr;};
      inline       const Darabonba::Json & getParamMap() const { DARABONBA_GET(paramMap_) };
      Darabonba::Json & getParamMap() { DARABONBA_GET(paramMap_) };
      inline Ext& setParamMap(const Darabonba::Json & paramMap) { DARABONBA_SET_VALUE(paramMap_, paramMap) };
      inline Ext& setParamMap(Darabonba::Json && paramMap) { DARABONBA_SET_RVALUE(paramMap_, paramMap) };


      // sensitives Field Functions 
      bool hasSensitives() const { return this->sensitives_ != nullptr;};
      void deleteSensitives() { this->sensitives_ = nullptr;};
      inline const vector<string> & getSensitives() const { DARABONBA_PTR_GET_CONST(sensitives_, vector<string>) };
      inline vector<string> getSensitives() { DARABONBA_PTR_GET(sensitives_, vector<string>) };
      inline Ext& setSensitives(const vector<string> & sensitives) { DARABONBA_PTR_SET_VALUE(sensitives_, sensitives) };
      inline Ext& setSensitives(vector<string> && sensitives) { DARABONBA_PTR_SET_RVALUE(sensitives_, sensitives) };


      // terminologies Field Functions 
      bool hasTerminologies() const { return this->terminologies_ != nullptr;};
      void deleteTerminologies() { this->terminologies_ = nullptr;};
      inline const vector<Ext::Terminologies> & getTerminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Ext::Terminologies>) };
      inline vector<Ext::Terminologies> getTerminologies() { DARABONBA_PTR_GET(terminologies_, vector<Ext::Terminologies>) };
      inline Ext& setTerminologies(const vector<Ext::Terminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
      inline Ext& setTerminologies(vector<Ext::Terminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


      // textTransform Field Functions 
      bool hasTextTransform() const { return this->textTransform_ != nullptr;};
      void deleteTextTransform() { this->textTransform_ = nullptr;};
      inline const Ext::TextTransform & getTextTransform() const { DARABONBA_PTR_GET_CONST(textTransform_, Ext::TextTransform) };
      inline Ext::TextTransform getTextTransform() { DARABONBA_PTR_GET(textTransform_, Ext::TextTransform) };
      inline Ext& setTextTransform(const Ext::TextTransform & textTransform) { DARABONBA_PTR_SET_VALUE(textTransform_, textTransform) };
      inline Ext& setTextTransform(Ext::TextTransform && textTransform) { DARABONBA_PTR_SET_RVALUE(textTransform_, textTransform) };


      // trackingData Field Functions 
      bool hasTrackingData() const { return this->trackingData_ != nullptr;};
      void deleteTrackingData() { this->trackingData_ = nullptr;};
      inline string getTrackingData() const { DARABONBA_PTR_GET_DEFAULT(trackingData_, "") };
      inline Ext& setTrackingData(string trackingData) { DARABONBA_PTR_SET_VALUE(trackingData_, trackingData) };


    protected:
      shared_ptr<Ext::Config> config_ {};
      shared_ptr<string> domainHint_ {};
      shared_ptr<vector<Ext::Examples>> examples_ {};
      Darabonba::Json paramMap_ {};
      shared_ptr<vector<string>> sensitives_ {};
      shared_ptr<vector<Ext::Terminologies>> terminologies_ {};
      shared_ptr<Ext::TextTransform> textTransform_ {};
      shared_ptr<string> trackingData_ {};
    };

    virtual bool empty() const override { return this->ext_ == nullptr
        && this->format_ == nullptr && this->scene_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->text_ == nullptr
        && this->workspaceId_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const SubmitHtmlTranslateTaskRequest::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, SubmitHtmlTranslateTaskRequest::Ext) };
    inline SubmitHtmlTranslateTaskRequest::Ext getExt() { DARABONBA_PTR_GET(ext_, SubmitHtmlTranslateTaskRequest::Ext) };
    inline SubmitHtmlTranslateTaskRequest& setExt(const SubmitHtmlTranslateTaskRequest::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline SubmitHtmlTranslateTaskRequest& setExt(SubmitHtmlTranslateTaskRequest::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitHtmlTranslateTaskRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SubmitHtmlTranslateTaskRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline SubmitHtmlTranslateTaskRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline SubmitHtmlTranslateTaskRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitHtmlTranslateTaskRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitHtmlTranslateTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<SubmitHtmlTranslateTaskRequest::Ext> ext_ {};
    shared_ptr<string> format_ {};
    shared_ptr<string> scene_ {};
    shared_ptr<string> sourceLanguage_ {};
    shared_ptr<string> targetLanguage_ {};
    shared_ptr<string> text_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
