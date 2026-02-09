// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SANITYCHECKRESULTITEM_HPP_
#define ALIBABACLOUD_MODELS_SANITYCHECKRESULTITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SanityCheckResultItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SanityCheckResultItem& obj) { 
      DARABONBA_PTR_TO_JSON(CheckNumber, checkNumber_);
      DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(StartedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SanityCheckResultItem& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckNumber, checkNumber_);
      DARABONBA_PTR_FROM_JSON(FinishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(StartedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SanityCheckResultItem() = default ;
    SanityCheckResultItem(const SanityCheckResultItem &) = default ;
    SanityCheckResultItem(SanityCheckResultItem &&) = default ;
    SanityCheckResultItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SanityCheckResultItem() = default ;
    SanityCheckResultItem& operator=(const SanityCheckResultItem &) = default ;
    SanityCheckResultItem& operator=(SanityCheckResultItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkNumber_ == nullptr
        && this->finishedAt_ == nullptr && this->message_ == nullptr && this->phase_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr; };
    // checkNumber Field Functions 
    bool hasCheckNumber() const { return this->checkNumber_ != nullptr;};
    void deleteCheckNumber() { this->checkNumber_ = nullptr;};
    inline int32_t getCheckNumber() const { DARABONBA_PTR_GET_DEFAULT(checkNumber_, 0) };
    inline SanityCheckResultItem& setCheckNumber(int32_t checkNumber) { DARABONBA_PTR_SET_VALUE(checkNumber_, checkNumber) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline SanityCheckResultItem& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SanityCheckResultItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline SanityCheckResultItem& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline SanityCheckResultItem& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SanityCheckResultItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The nth time the check is performed.
    shared_ptr<int32_t> checkNumber_ {};
    // The time when the check ends.
    shared_ptr<string> finishedAt_ {};
    // The detailed information about the check results.
    shared_ptr<string> message_ {};
    // The check phase.
    shared_ptr<string> phase_ {};
    // The time when the check starts.
    shared_ptr<string> startedAt_ {};
    // The check status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
