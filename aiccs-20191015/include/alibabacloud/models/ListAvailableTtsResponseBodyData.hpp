// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLETTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLETTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListAvailableTtsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableTtsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TtsAuditionFileUrl, ttsAuditionFileUrl_);
      DARABONBA_PTR_TO_JSON(TtsEngine, ttsEngine_);
      DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_TO_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_TO_JSON(TtsVoiceName, ttsVoiceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableTtsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TtsAuditionFileUrl, ttsAuditionFileUrl_);
      DARABONBA_PTR_FROM_JSON(TtsEngine, ttsEngine_);
      DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_FROM_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_FROM_JSON(TtsVoiceName, ttsVoiceName_);
    };
    ListAvailableTtsResponseBodyData() = default ;
    ListAvailableTtsResponseBodyData(const ListAvailableTtsResponseBodyData &) = default ;
    ListAvailableTtsResponseBodyData(ListAvailableTtsResponseBodyData &&) = default ;
    ListAvailableTtsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableTtsResponseBodyData() = default ;
    ListAvailableTtsResponseBodyData& operator=(const ListAvailableTtsResponseBodyData &) = default ;
    ListAvailableTtsResponseBodyData& operator=(ListAvailableTtsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ttsAuditionFileUrl_ == nullptr
        && return this->ttsEngine_ == nullptr && return this->ttsStyle_ == nullptr && return this->ttsVoiceCode_ == nullptr && return this->ttsVoiceName_ == nullptr; };
    // ttsAuditionFileUrl Field Functions 
    bool hasTtsAuditionFileUrl() const { return this->ttsAuditionFileUrl_ != nullptr;};
    void deleteTtsAuditionFileUrl() { this->ttsAuditionFileUrl_ = nullptr;};
    inline string ttsAuditionFileUrl() const { DARABONBA_PTR_GET_DEFAULT(ttsAuditionFileUrl_, "") };
    inline ListAvailableTtsResponseBodyData& setTtsAuditionFileUrl(string ttsAuditionFileUrl) { DARABONBA_PTR_SET_VALUE(ttsAuditionFileUrl_, ttsAuditionFileUrl) };


    // ttsEngine Field Functions 
    bool hasTtsEngine() const { return this->ttsEngine_ != nullptr;};
    void deleteTtsEngine() { this->ttsEngine_ = nullptr;};
    inline string ttsEngine() const { DARABONBA_PTR_GET_DEFAULT(ttsEngine_, "") };
    inline ListAvailableTtsResponseBodyData& setTtsEngine(string ttsEngine) { DARABONBA_PTR_SET_VALUE(ttsEngine_, ttsEngine) };


    // ttsStyle Field Functions 
    bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
    void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
    inline string ttsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
    inline ListAvailableTtsResponseBodyData& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


    // ttsVoiceCode Field Functions 
    bool hasTtsVoiceCode() const { return this->ttsVoiceCode_ != nullptr;};
    void deleteTtsVoiceCode() { this->ttsVoiceCode_ = nullptr;};
    inline string ttsVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceCode_, "") };
    inline ListAvailableTtsResponseBodyData& setTtsVoiceCode(string ttsVoiceCode) { DARABONBA_PTR_SET_VALUE(ttsVoiceCode_, ttsVoiceCode) };


    // ttsVoiceName Field Functions 
    bool hasTtsVoiceName() const { return this->ttsVoiceName_ != nullptr;};
    void deleteTtsVoiceName() { this->ttsVoiceName_ = nullptr;};
    inline string ttsVoiceName() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceName_, "") };
    inline ListAvailableTtsResponseBodyData& setTtsVoiceName(string ttsVoiceName) { DARABONBA_PTR_SET_VALUE(ttsVoiceName_, ttsVoiceName) };


  protected:
    // 音色试听文件
    std::shared_ptr<string> ttsAuditionFileUrl_ = nullptr;
    // 音色平台CosyVoice/Volcano
    std::shared_ptr<string> ttsEngine_ = nullptr;
    // 音色cosy类型 cosyvoice-v2-XXXX-XXXX
    std::shared_ptr<string> ttsStyle_ = nullptr;
    // 音色编码
    std::shared_ptr<string> ttsVoiceCode_ = nullptr;
    // 音色名称
    std::shared_ptr<string> ttsVoiceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
