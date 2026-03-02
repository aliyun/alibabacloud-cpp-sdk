// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMMAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMMAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class DescribeMmAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMmAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PublishVersion, publishVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMmAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PublishVersion, publishVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMmAppResponseBody() = default ;
    DescribeMmAppResponseBody(const DescribeMmAppResponseBody &) = default ;
    DescribeMmAppResponseBody(DescribeMmAppResponseBody &&) = default ;
    DescribeMmAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMmAppResponseBody() = default ;
    DescribeMmAppResponseBody& operator=(const DescribeMmAppResponseBody &) = default ;
    DescribeMmAppResponseBody& operator=(DescribeMmAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
        DARABONBA_PTR_TO_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(OpenWebSearch, openWebSearch_);
        DARABONBA_PTR_TO_JSON(TextModal, textModal_);
      };
      friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(HistoryLimit, historyLimit_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(OpenWebSearch, openWebSearch_);
        DARABONBA_PTR_FROM_JSON(TextModal, textModal_);
      };
      ModelConfig() = default ;
      ModelConfig(const ModelConfig &) = default ;
      ModelConfig(ModelConfig &&) = default ;
      ModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelConfig() = default ;
      ModelConfig& operator=(const ModelConfig &) = default ;
      ModelConfig& operator=(ModelConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->historyLimit_ == nullptr
        && this->modelType_ == nullptr && this->openWebSearch_ == nullptr && this->textModal_ == nullptr; };
      // historyLimit Field Functions 
      bool hasHistoryLimit() const { return this->historyLimit_ != nullptr;};
      void deleteHistoryLimit() { this->historyLimit_ = nullptr;};
      inline int32_t getHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(historyLimit_, 0) };
      inline ModelConfig& setHistoryLimit(int32_t historyLimit) { DARABONBA_PTR_SET_VALUE(historyLimit_, historyLimit) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline ModelConfig& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // openWebSearch Field Functions 
      bool hasOpenWebSearch() const { return this->openWebSearch_ != nullptr;};
      void deleteOpenWebSearch() { this->openWebSearch_ = nullptr;};
      inline bool getOpenWebSearch() const { DARABONBA_PTR_GET_DEFAULT(openWebSearch_, false) };
      inline ModelConfig& setOpenWebSearch(bool openWebSearch) { DARABONBA_PTR_SET_VALUE(openWebSearch_, openWebSearch) };


      // textModal Field Functions 
      bool hasTextModal() const { return this->textModal_ != nullptr;};
      void deleteTextModal() { this->textModal_ = nullptr;};
      inline string getTextModal() const { DARABONBA_PTR_GET_DEFAULT(textModal_, "") };
      inline ModelConfig& setTextModal(string textModal) { DARABONBA_PTR_SET_VALUE(textModal_, textModal) };


    protected:
      shared_ptr<int32_t> historyLimit_ {};
      shared_ptr<string> modelType_ {};
      shared_ptr<bool> openWebSearch_ {};
      shared_ptr<string> textModal_ {};
    };

    class ConversationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AsrModel, asrModel_);
        DARABONBA_PTR_TO_JSON(OpenAsr, openAsr_);
        DARABONBA_PTR_TO_JSON(OpenTts, openTts_);
        DARABONBA_PTR_TO_JSON(TtsModel, ttsModel_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrModel, asrModel_);
        DARABONBA_PTR_FROM_JSON(OpenAsr, openAsr_);
        DARABONBA_PTR_FROM_JSON(OpenTts, openTts_);
        DARABONBA_PTR_FROM_JSON(TtsModel, ttsModel_);
      };
      ConversationConfig() = default ;
      ConversationConfig(const ConversationConfig &) = default ;
      ConversationConfig(ConversationConfig &&) = default ;
      ConversationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationConfig() = default ;
      ConversationConfig& operator=(const ConversationConfig &) = default ;
      ConversationConfig& operator=(ConversationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asrModel_ == nullptr
        && this->openAsr_ == nullptr && this->openTts_ == nullptr && this->ttsModel_ == nullptr; };
      // asrModel Field Functions 
      bool hasAsrModel() const { return this->asrModel_ != nullptr;};
      void deleteAsrModel() { this->asrModel_ = nullptr;};
      inline string getAsrModel() const { DARABONBA_PTR_GET_DEFAULT(asrModel_, "") };
      inline ConversationConfig& setAsrModel(string asrModel) { DARABONBA_PTR_SET_VALUE(asrModel_, asrModel) };


      // openAsr Field Functions 
      bool hasOpenAsr() const { return this->openAsr_ != nullptr;};
      void deleteOpenAsr() { this->openAsr_ = nullptr;};
      inline bool getOpenAsr() const { DARABONBA_PTR_GET_DEFAULT(openAsr_, false) };
      inline ConversationConfig& setOpenAsr(bool openAsr) { DARABONBA_PTR_SET_VALUE(openAsr_, openAsr) };


      // openTts Field Functions 
      bool hasOpenTts() const { return this->openTts_ != nullptr;};
      void deleteOpenTts() { this->openTts_ = nullptr;};
      inline bool getOpenTts() const { DARABONBA_PTR_GET_DEFAULT(openTts_, false) };
      inline ConversationConfig& setOpenTts(bool openTts) { DARABONBA_PTR_SET_VALUE(openTts_, openTts) };


      // ttsModel Field Functions 
      bool hasTtsModel() const { return this->ttsModel_ != nullptr;};
      void deleteTtsModel() { this->ttsModel_ = nullptr;};
      inline string getTtsModel() const { DARABONBA_PTR_GET_DEFAULT(ttsModel_, "") };
      inline ConversationConfig& setTtsModel(string ttsModel) { DARABONBA_PTR_SET_VALUE(ttsModel_, ttsModel) };


    protected:
      shared_ptr<string> asrModel_ {};
      shared_ptr<bool> openAsr_ {};
      shared_ptr<bool> openTts_ {};
      shared_ptr<string> ttsModel_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->conversationConfig_ == nullptr && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->modelConfig_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr && this->prompt_ == nullptr
        && this->publishVersion_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeMmAppResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeMmAppResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // conversationConfig Field Functions 
    bool hasConversationConfig() const { return this->conversationConfig_ != nullptr;};
    void deleteConversationConfig() { this->conversationConfig_ = nullptr;};
    inline const DescribeMmAppResponseBody::ConversationConfig & getConversationConfig() const { DARABONBA_PTR_GET_CONST(conversationConfig_, DescribeMmAppResponseBody::ConversationConfig) };
    inline DescribeMmAppResponseBody::ConversationConfig getConversationConfig() { DARABONBA_PTR_GET(conversationConfig_, DescribeMmAppResponseBody::ConversationConfig) };
    inline DescribeMmAppResponseBody& setConversationConfig(const DescribeMmAppResponseBody::ConversationConfig & conversationConfig) { DARABONBA_PTR_SET_VALUE(conversationConfig_, conversationConfig) };
    inline DescribeMmAppResponseBody& setConversationConfig(DescribeMmAppResponseBody::ConversationConfig && conversationConfig) { DARABONBA_PTR_SET_RVALUE(conversationConfig_, conversationConfig) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline DescribeMmAppResponseBody& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeMmAppResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeMmAppResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeMmAppResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const DescribeMmAppResponseBody::ModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, DescribeMmAppResponseBody::ModelConfig) };
    inline DescribeMmAppResponseBody::ModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, DescribeMmAppResponseBody::ModelConfig) };
    inline DescribeMmAppResponseBody& setModelConfig(const DescribeMmAppResponseBody::ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline DescribeMmAppResponseBody& setModelConfig(DescribeMmAppResponseBody::ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline string getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
    inline DescribeMmAppResponseBody& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeMmAppResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DescribeMmAppResponseBody& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // publishVersion Field Functions 
    bool hasPublishVersion() const { return this->publishVersion_ != nullptr;};
    void deletePublishVersion() { this->publishVersion_ = nullptr;};
    inline int64_t getPublishVersion() const { DARABONBA_PTR_GET_DEFAULT(publishVersion_, 0L) };
    inline DescribeMmAppResponseBody& setPublishVersion(int64_t publishVersion) { DARABONBA_PTR_SET_VALUE(publishVersion_, publishVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMmAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMmAppResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<DescribeMmAppResponseBody::ConversationConfig> conversationConfig_ {};
    shared_ptr<string> createUserId_ {};
    shared_ptr<string> createUserName_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<DescribeMmAppResponseBody::ModelConfig> modelConfig_ {};
    shared_ptr<string> modifyUserId_ {};
    shared_ptr<string> modifyUserName_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<int64_t> publishVersion_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
