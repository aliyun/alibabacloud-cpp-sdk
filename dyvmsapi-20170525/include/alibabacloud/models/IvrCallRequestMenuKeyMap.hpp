// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IVRCALLREQUESTMENUKEYMAP_HPP_
#define ALIBABACLOUD_MODELS_IVRCALLREQUESTMENUKEYMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class IvrCallRequestMenuKeyMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IvrCallRequestMenuKeyMap& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(TtsParams, ttsParams_);
    };
    friend void from_json(const Darabonba::Json& j, IvrCallRequestMenuKeyMap& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(TtsParams, ttsParams_);
    };
    IvrCallRequestMenuKeyMap() = default ;
    IvrCallRequestMenuKeyMap(const IvrCallRequestMenuKeyMap &) = default ;
    IvrCallRequestMenuKeyMap(IvrCallRequestMenuKeyMap &&) = default ;
    IvrCallRequestMenuKeyMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IvrCallRequestMenuKeyMap() = default ;
    IvrCallRequestMenuKeyMap& operator=(const IvrCallRequestMenuKeyMap &) = default ;
    IvrCallRequestMenuKeyMap& operator=(IvrCallRequestMenuKeyMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->key_ == nullptr && return this->ttsParams_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IvrCallRequestMenuKeyMap& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline IvrCallRequestMenuKeyMap& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // ttsParams Field Functions 
    bool hasTtsParams() const { return this->ttsParams_ != nullptr;};
    void deleteTtsParams() { this->ttsParams_ = nullptr;};
    inline string ttsParams() const { DARABONBA_PTR_GET_DEFAULT(ttsParams_, "") };
    inline IvrCallRequestMenuKeyMap& setTtsParams(string ttsParams) { DARABONBA_PTR_SET_VALUE(ttsParams_, ttsParams) };


  protected:
    // The voice that corresponds to the key specified by the **MenuKeyMap.N.Key** parameter.
    // 
    // *   If you use a voice notification file, this parameter specifies the voice ID. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > **Voice Notifications**, and then click the **Voice Notification Files** tab to view the voice ID.
    // *   If you use a TTS template, this parameter specifies the template ID. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > **Voice Notifications**, and then click the **TTS Template** tab to view the template ID.
    std::shared_ptr<string> code_ = nullptr;
    // The key that can be pressed by the subscriber.
    std::shared_ptr<string> key_ = nullptr;
    // The variables in the TTS template, in the JSON format.
    // 
    // > 
    // 
    // *   This parameter specifies the substitution relationship of the variables in the TTS template if the value of the **MenuKeyMap.N.Code** parameter is set to the ID of the TTS template.
    // 
    // *   This parameter is required if the value of the **MenuKeyMap.N.Code** parameter is set to the ID of a TTS template that contains variables.
    std::shared_ptr<string> ttsParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
