// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_STOPTRANSCRIPTION_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_STOPTRANSCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace EndToEndRealTimeDialog
{
namespace Models
{
  class StopTranscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopTranscription& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, StopTranscription& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    StopTranscription() = default ;
    StopTranscription(const StopTranscription &) = default ;
    StopTranscription(StopTranscription &&) = default ;
    StopTranscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopTranscription() = default ;
    StopTranscription& operator=(const StopTranscription &) = default ;
    StopTranscription& operator=(StopTranscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StopTranscription& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
