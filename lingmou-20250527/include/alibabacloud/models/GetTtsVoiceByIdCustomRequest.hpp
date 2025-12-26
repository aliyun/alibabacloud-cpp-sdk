// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTTSVOICEBYIDCUSTOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTTSVOICEBYIDCUSTOMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetTTSVoiceByIdCustomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTTSVoiceByIdCustomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(voiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTTSVoiceByIdCustomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(voiceId, voiceId_);
    };
    GetTTSVoiceByIdCustomRequest() = default ;
    GetTTSVoiceByIdCustomRequest(const GetTTSVoiceByIdCustomRequest &) = default ;
    GetTTSVoiceByIdCustomRequest(GetTTSVoiceByIdCustomRequest &&) = default ;
    GetTTSVoiceByIdCustomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTTSVoiceByIdCustomRequest() = default ;
    GetTTSVoiceByIdCustomRequest& operator=(const GetTTSVoiceByIdCustomRequest &) = default ;
    GetTTSVoiceByIdCustomRequest& operator=(GetTTSVoiceByIdCustomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->voiceId_ == nullptr; };
    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline GetTTSVoiceByIdCustomRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    std::shared_ptr<string> voiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
