// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUEST_HPP_
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
  class SubmitDocTranslateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocTranslateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ext, ext_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocTranslateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ext, ext_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    SubmitDocTranslateTaskRequest() = default ;
    SubmitDocTranslateTaskRequest(const SubmitDocTranslateTaskRequest &) = default ;
    SubmitDocTranslateTaskRequest(SubmitDocTranslateTaskRequest &&) = default ;
    SubmitDocTranslateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocTranslateTaskRequest() = default ;
    SubmitDocTranslateTaskRequest& operator=(const SubmitDocTranslateTaskRequest &) = default ;
    SubmitDocTranslateTaskRequest& operator=(SubmitDocTranslateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ext& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
        DARABONBA_ANY_TO_JSON(paramMap, paramMap_);
        DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
        DARABONBA_PTR_TO_JSON(trackingData, trackingData_);
      };
      friend void from_json(const Darabonba::Json& j, Ext& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
        DARABONBA_ANY_FROM_JSON(paramMap, paramMap_);
        DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
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

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(skipImgTrans, skipImgTrans_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(skipImgTrans, skipImgTrans_);
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
        virtual bool empty() const override { return this->skipImgTrans_ == nullptr; };
        // skipImgTrans Field Functions 
        bool hasSkipImgTrans() const { return this->skipImgTrans_ != nullptr;};
        void deleteSkipImgTrans() { this->skipImgTrans_ = nullptr;};
        inline bool getSkipImgTrans() const { DARABONBA_PTR_GET_DEFAULT(skipImgTrans_, false) };
        inline Config& setSkipImgTrans(bool skipImgTrans) { DARABONBA_PTR_SET_VALUE(skipImgTrans_, skipImgTrans) };


      protected:
        shared_ptr<bool> skipImgTrans_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->domainHint_ == nullptr && this->paramMap_ == nullptr && this->terminologies_ == nullptr && this->trackingData_ == nullptr; };
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


      // paramMap Field Functions 
      bool hasParamMap() const { return this->paramMap_ != nullptr;};
      void deleteParamMap() { this->paramMap_ = nullptr;};
      inline       const Darabonba::Json & getParamMap() const { DARABONBA_GET(paramMap_) };
      Darabonba::Json & getParamMap() { DARABONBA_GET(paramMap_) };
      inline Ext& setParamMap(const Darabonba::Json & paramMap) { DARABONBA_SET_VALUE(paramMap_, paramMap) };
      inline Ext& setParamMap(Darabonba::Json && paramMap) { DARABONBA_SET_RVALUE(paramMap_, paramMap) };


      // terminologies Field Functions 
      bool hasTerminologies() const { return this->terminologies_ != nullptr;};
      void deleteTerminologies() { this->terminologies_ = nullptr;};
      inline const vector<Ext::Terminologies> & getTerminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Ext::Terminologies>) };
      inline vector<Ext::Terminologies> getTerminologies() { DARABONBA_PTR_GET(terminologies_, vector<Ext::Terminologies>) };
      inline Ext& setTerminologies(const vector<Ext::Terminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
      inline Ext& setTerminologies(vector<Ext::Terminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


      // trackingData Field Functions 
      bool hasTrackingData() const { return this->trackingData_ != nullptr;};
      void deleteTrackingData() { this->trackingData_ = nullptr;};
      inline string getTrackingData() const { DARABONBA_PTR_GET_DEFAULT(trackingData_, "") };
      inline Ext& setTrackingData(string trackingData) { DARABONBA_PTR_SET_VALUE(trackingData_, trackingData) };


    protected:
      shared_ptr<Ext::Config> config_ {};
      shared_ptr<string> domainHint_ {};
      Darabonba::Json paramMap_ {};
      shared_ptr<vector<Ext::Terminologies>> terminologies_ {};
      shared_ptr<string> trackingData_ {};
    };

    virtual bool empty() const override { return this->ext_ == nullptr
        && this->format_ == nullptr && this->scene_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->text_ == nullptr
        && this->workspaceId_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const SubmitDocTranslateTaskRequest::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, SubmitDocTranslateTaskRequest::Ext) };
    inline SubmitDocTranslateTaskRequest::Ext getExt() { DARABONBA_PTR_GET(ext_, SubmitDocTranslateTaskRequest::Ext) };
    inline SubmitDocTranslateTaskRequest& setExt(const SubmitDocTranslateTaskRequest::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline SubmitDocTranslateTaskRequest& setExt(SubmitDocTranslateTaskRequest::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitDocTranslateTaskRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SubmitDocTranslateTaskRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline SubmitDocTranslateTaskRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline SubmitDocTranslateTaskRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitDocTranslateTaskRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitDocTranslateTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<SubmitDocTranslateTaskRequest::Ext> ext_ {};
    shared_ptr<string> format_ {};
    // This parameter is required.
    shared_ptr<string> scene_ {};
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    shared_ptr<string> targetLanguage_ {};
    // This parameter is required.
    shared_ptr<string> text_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
