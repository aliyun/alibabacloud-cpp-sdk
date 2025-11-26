// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OMNIREALTIMECONVERSATIONEURESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_OMNIREALTIMECONVERSATIONEURESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class OmniRealtimeConversationEUResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OmniRealtimeConversationEUResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(audioResult, audioResult_);
    };
    friend void from_json(const Darabonba::Json& j, OmniRealtimeConversationEUResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(audioResult, audioResult_);
    };
    OmniRealtimeConversationEUResponseBodyData() = default ;
    OmniRealtimeConversationEUResponseBodyData(const OmniRealtimeConversationEUResponseBodyData &) = default ;
    OmniRealtimeConversationEUResponseBodyData(OmniRealtimeConversationEUResponseBodyData &&) = default ;
    OmniRealtimeConversationEUResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OmniRealtimeConversationEUResponseBodyData() = default ;
    OmniRealtimeConversationEUResponseBodyData& operator=(const OmniRealtimeConversationEUResponseBodyData &) = default ;
    OmniRealtimeConversationEUResponseBodyData& operator=(OmniRealtimeConversationEUResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioResult_ == nullptr; };
    // audioResult Field Functions 
    bool hasAudioResult() const { return this->audioResult_ != nullptr;};
    void deleteAudioResult() { this->audioResult_ = nullptr;};
    inline string audioResult() const { DARABONBA_PTR_GET_DEFAULT(audioResult_, "") };
    inline OmniRealtimeConversationEUResponseBodyData& setAudioResult(string audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };


  protected:
    std::shared_ptr<string> audioResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
