// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYASRCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYASRCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ModifyAsrConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAsrConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AsrAcousticModelId, asrAcousticModelId_);
      DARABONBA_PTR_TO_JSON(AsrClassVocabularyId, asrClassVocabularyId_);
      DARABONBA_PTR_TO_JSON(AsrCustomizationId, asrCustomizationId_);
      DARABONBA_PTR_TO_JSON(AsrOverrides, asrOverrides_);
      DARABONBA_PTR_TO_JSON(AsrVocabularyId, asrVocabularyId_);
      DARABONBA_PTR_TO_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(NlsServiceType, nlsServiceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAsrConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AsrAcousticModelId, asrAcousticModelId_);
      DARABONBA_PTR_FROM_JSON(AsrClassVocabularyId, asrClassVocabularyId_);
      DARABONBA_PTR_FROM_JSON(AsrCustomizationId, asrCustomizationId_);
      DARABONBA_PTR_FROM_JSON(AsrOverrides, asrOverrides_);
      DARABONBA_PTR_FROM_JSON(AsrVocabularyId, asrVocabularyId_);
      DARABONBA_PTR_FROM_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(NlsServiceType, nlsServiceType_);
    };
    ModifyAsrConfigRequest() = default ;
    ModifyAsrConfigRequest(const ModifyAsrConfigRequest &) = default ;
    ModifyAsrConfigRequest(ModifyAsrConfigRequest &&) = default ;
    ModifyAsrConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAsrConfigRequest() = default ;
    ModifyAsrConfigRequest& operator=(const ModifyAsrConfigRequest &) = default ;
    ModifyAsrConfigRequest& operator=(ModifyAsrConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->asrAcousticModelId_ == nullptr && this->asrClassVocabularyId_ == nullptr && this->asrCustomizationId_ == nullptr && this->asrOverrides_ == nullptr && this->asrVocabularyId_ == nullptr
        && this->configLevel_ == nullptr && this->engine_ == nullptr && this->entryId_ == nullptr && this->nlsServiceType_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ModifyAsrConfigRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // asrAcousticModelId Field Functions 
    bool hasAsrAcousticModelId() const { return this->asrAcousticModelId_ != nullptr;};
    void deleteAsrAcousticModelId() { this->asrAcousticModelId_ = nullptr;};
    inline string getAsrAcousticModelId() const { DARABONBA_PTR_GET_DEFAULT(asrAcousticModelId_, "") };
    inline ModifyAsrConfigRequest& setAsrAcousticModelId(string asrAcousticModelId) { DARABONBA_PTR_SET_VALUE(asrAcousticModelId_, asrAcousticModelId) };


    // asrClassVocabularyId Field Functions 
    bool hasAsrClassVocabularyId() const { return this->asrClassVocabularyId_ != nullptr;};
    void deleteAsrClassVocabularyId() { this->asrClassVocabularyId_ = nullptr;};
    inline string getAsrClassVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(asrClassVocabularyId_, "") };
    inline ModifyAsrConfigRequest& setAsrClassVocabularyId(string asrClassVocabularyId) { DARABONBA_PTR_SET_VALUE(asrClassVocabularyId_, asrClassVocabularyId) };


    // asrCustomizationId Field Functions 
    bool hasAsrCustomizationId() const { return this->asrCustomizationId_ != nullptr;};
    void deleteAsrCustomizationId() { this->asrCustomizationId_ = nullptr;};
    inline string getAsrCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(asrCustomizationId_, "") };
    inline ModifyAsrConfigRequest& setAsrCustomizationId(string asrCustomizationId) { DARABONBA_PTR_SET_VALUE(asrCustomizationId_, asrCustomizationId) };


    // asrOverrides Field Functions 
    bool hasAsrOverrides() const { return this->asrOverrides_ != nullptr;};
    void deleteAsrOverrides() { this->asrOverrides_ = nullptr;};
    inline string getAsrOverrides() const { DARABONBA_PTR_GET_DEFAULT(asrOverrides_, "") };
    inline ModifyAsrConfigRequest& setAsrOverrides(string asrOverrides) { DARABONBA_PTR_SET_VALUE(asrOverrides_, asrOverrides) };


    // asrVocabularyId Field Functions 
    bool hasAsrVocabularyId() const { return this->asrVocabularyId_ != nullptr;};
    void deleteAsrVocabularyId() { this->asrVocabularyId_ = nullptr;};
    inline string getAsrVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(asrVocabularyId_, "") };
    inline ModifyAsrConfigRequest& setAsrVocabularyId(string asrVocabularyId) { DARABONBA_PTR_SET_VALUE(asrVocabularyId_, asrVocabularyId) };


    // configLevel Field Functions 
    bool hasConfigLevel() const { return this->configLevel_ != nullptr;};
    void deleteConfigLevel() { this->configLevel_ = nullptr;};
    inline int32_t getConfigLevel() const { DARABONBA_PTR_GET_DEFAULT(configLevel_, 0) };
    inline ModifyAsrConfigRequest& setConfigLevel(int32_t configLevel) { DARABONBA_PTR_SET_VALUE(configLevel_, configLevel) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ModifyAsrConfigRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string getEntryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline ModifyAsrConfigRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // nlsServiceType Field Functions 
    bool hasNlsServiceType() const { return this->nlsServiceType_ != nullptr;};
    void deleteNlsServiceType() { this->nlsServiceType_ = nullptr;};
    inline string getNlsServiceType() const { DARABONBA_PTR_GET_DEFAULT(nlsServiceType_, "") };
    inline ModifyAsrConfigRequest& setNlsServiceType(string nlsServiceType) { DARABONBA_PTR_SET_VALUE(nlsServiceType_, nlsServiceType) };


  protected:
    // The AppKey for the engine.
    shared_ptr<string> appKey_ {};
    // The ID of the ASR acoustic model.
    shared_ptr<string> asrAcousticModelId_ {};
    // The ID of the ASR class-based vocabulary.
    shared_ptr<string> asrClassVocabularyId_ {};
    // The ID of the dataset.
    shared_ptr<string> asrCustomizationId_ {};
    shared_ptr<string> asrOverrides_ {};
    // The ID of the hotword. You can find this ID on the [ASR Hotword Management](https://aiccs.console.aliyun.com/sentence/vocab?spm=a2c4g.11186623.0.0.7f9bf965IKBpsi) page.
    shared_ptr<string> asrVocabularyId_ {};
    // The policy level. Valid values: `0` (system), `1` (tenant), and `2` (instance).
    shared_ptr<int32_t> configLevel_ {};
    shared_ptr<string> engine_ {};
    // The entity ID for the specified `ConfigLevel`.
    shared_ptr<string> entryId_ {};
    // The service type of Intelligent Speech Interaction.
    shared_ptr<string> nlsServiceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
