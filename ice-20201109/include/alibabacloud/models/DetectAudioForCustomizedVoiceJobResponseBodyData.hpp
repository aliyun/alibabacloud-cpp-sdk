// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTAUDIOFORCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTAUDIOFORCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DetectAudioForCustomizedVoiceJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectAudioForCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Pass, pass_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, DetectAudioForCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Pass, pass_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    DetectAudioForCustomizedVoiceJobResponseBodyData() = default ;
    DetectAudioForCustomizedVoiceJobResponseBodyData(const DetectAudioForCustomizedVoiceJobResponseBodyData &) = default ;
    DetectAudioForCustomizedVoiceJobResponseBodyData(DetectAudioForCustomizedVoiceJobResponseBodyData &&) = default ;
    DetectAudioForCustomizedVoiceJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectAudioForCustomizedVoiceJobResponseBodyData() = default ;
    DetectAudioForCustomizedVoiceJobResponseBodyData& operator=(const DetectAudioForCustomizedVoiceJobResponseBodyData &) = default ;
    DetectAudioForCustomizedVoiceJobResponseBodyData& operator=(DetectAudioForCustomizedVoiceJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pass_ == nullptr
        && return this->reason_ == nullptr; };
    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline DetectAudioForCustomizedVoiceJobResponseBodyData& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DetectAudioForCustomizedVoiceJobResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Indicates whether the audio file passes the check. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> pass_ = nullptr;
    // The reason returned if the audio file failed to pass the check.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
