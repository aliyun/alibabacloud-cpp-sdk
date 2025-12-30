// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomizedVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizedVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizedVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
    };
    GetCustomizedVoiceRequest() = default ;
    GetCustomizedVoiceRequest(const GetCustomizedVoiceRequest &) = default ;
    GetCustomizedVoiceRequest(GetCustomizedVoiceRequest &&) = default ;
    GetCustomizedVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizedVoiceRequest() = default ;
    GetCustomizedVoiceRequest& operator=(const GetCustomizedVoiceRequest &) = default ;
    GetCustomizedVoiceRequest& operator=(GetCustomizedVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->voiceId_ == nullptr; };
    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline GetCustomizedVoiceRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    // The voice ID.
    shared_ptr<string> voiceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
