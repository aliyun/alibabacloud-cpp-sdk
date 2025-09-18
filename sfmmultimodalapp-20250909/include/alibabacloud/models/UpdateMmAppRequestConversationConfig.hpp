// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTCONVERSATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPREQUESTCONVERSATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRequestConversationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRequestConversationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AsrModel, asrModel_);
      DARABONBA_PTR_TO_JSON(OpenAsr, openAsr_);
      DARABONBA_PTR_TO_JSON(OpenTts, openTts_);
      DARABONBA_PTR_TO_JSON(TtsModel, ttsModel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRequestConversationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrModel, asrModel_);
      DARABONBA_PTR_FROM_JSON(OpenAsr, openAsr_);
      DARABONBA_PTR_FROM_JSON(OpenTts, openTts_);
      DARABONBA_PTR_FROM_JSON(TtsModel, ttsModel_);
    };
    UpdateMmAppRequestConversationConfig() = default ;
    UpdateMmAppRequestConversationConfig(const UpdateMmAppRequestConversationConfig &) = default ;
    UpdateMmAppRequestConversationConfig(UpdateMmAppRequestConversationConfig &&) = default ;
    UpdateMmAppRequestConversationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRequestConversationConfig() = default ;
    UpdateMmAppRequestConversationConfig& operator=(const UpdateMmAppRequestConversationConfig &) = default ;
    UpdateMmAppRequestConversationConfig& operator=(UpdateMmAppRequestConversationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrModel_ != nullptr
        && this->openAsr_ != nullptr && this->openTts_ != nullptr && this->ttsModel_ != nullptr; };
    // asrModel Field Functions 
    bool hasAsrModel() const { return this->asrModel_ != nullptr;};
    void deleteAsrModel() { this->asrModel_ = nullptr;};
    inline string asrModel() const { DARABONBA_PTR_GET_DEFAULT(asrModel_, "") };
    inline UpdateMmAppRequestConversationConfig& setAsrModel(string asrModel) { DARABONBA_PTR_SET_VALUE(asrModel_, asrModel) };


    // openAsr Field Functions 
    bool hasOpenAsr() const { return this->openAsr_ != nullptr;};
    void deleteOpenAsr() { this->openAsr_ = nullptr;};
    inline bool openAsr() const { DARABONBA_PTR_GET_DEFAULT(openAsr_, false) };
    inline UpdateMmAppRequestConversationConfig& setOpenAsr(bool openAsr) { DARABONBA_PTR_SET_VALUE(openAsr_, openAsr) };


    // openTts Field Functions 
    bool hasOpenTts() const { return this->openTts_ != nullptr;};
    void deleteOpenTts() { this->openTts_ = nullptr;};
    inline bool openTts() const { DARABONBA_PTR_GET_DEFAULT(openTts_, false) };
    inline UpdateMmAppRequestConversationConfig& setOpenTts(bool openTts) { DARABONBA_PTR_SET_VALUE(openTts_, openTts) };


    // ttsModel Field Functions 
    bool hasTtsModel() const { return this->ttsModel_ != nullptr;};
    void deleteTtsModel() { this->ttsModel_ = nullptr;};
    inline string ttsModel() const { DARABONBA_PTR_GET_DEFAULT(ttsModel_, "") };
    inline UpdateMmAppRequestConversationConfig& setTtsModel(string ttsModel) { DARABONBA_PTR_SET_VALUE(ttsModel_, ttsModel) };


  protected:
    std::shared_ptr<string> asrModel_ = nullptr;
    std::shared_ptr<bool> openAsr_ = nullptr;
    std::shared_ptr<bool> openTts_ = nullptr;
    std::shared_ptr<string> ttsModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
