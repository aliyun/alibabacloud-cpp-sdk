// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_TRANSCRIPTIONSTARTED_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_TRANSCRIPTIONSTARTED_HPP_
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
  class TranscriptionStarted : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranscriptionStarted& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(openingRemarks, openingRemarks_);
    };
    friend void from_json(const Darabonba::Json& j, TranscriptionStarted& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(openingRemarks, openingRemarks_);
    };
    TranscriptionStarted() = default ;
    TranscriptionStarted(const TranscriptionStarted &) = default ;
    TranscriptionStarted(TranscriptionStarted &&) = default ;
    TranscriptionStarted(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranscriptionStarted() = default ;
    TranscriptionStarted& operator=(const TranscriptionStarted &) = default ;
    TranscriptionStarted& operator=(TranscriptionStarted &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->openingRemarks_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TranscriptionStarted& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // openingRemarks Field Functions 
    bool hasOpeningRemarks() const { return this->openingRemarks_ != nullptr;};
    void deleteOpeningRemarks() { this->openingRemarks_ = nullptr;};
    inline string getOpeningRemarks() const { DARABONBA_PTR_GET_DEFAULT(openingRemarks_, "") };
    inline TranscriptionStarted& setOpeningRemarks(string openingRemarks) { DARABONBA_PTR_SET_VALUE(openingRemarks_, openingRemarks) };


  protected:
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> openingRemarks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
