// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPOINTFAILURE_HPP_
#define ALIBABACLOUD_MODELS_SAVEPOINTFAILURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SavepointFailure : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavepointFailure& obj) { 
      DARABONBA_PTR_TO_JSON(failedAt, failedAt_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, SavepointFailure& obj) { 
      DARABONBA_PTR_FROM_JSON(failedAt, failedAt_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    SavepointFailure() = default ;
    SavepointFailure(const SavepointFailure &) = default ;
    SavepointFailure(SavepointFailure &&) = default ;
    SavepointFailure(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavepointFailure() = default ;
    SavepointFailure& operator=(const SavepointFailure &) = default ;
    SavepointFailure& operator=(SavepointFailure &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedAt_ == nullptr
        && return this->message_ == nullptr && return this->reason_ == nullptr; };
    // failedAt Field Functions 
    bool hasFailedAt() const { return this->failedAt_ != nullptr;};
    void deleteFailedAt() { this->failedAt_ = nullptr;};
    inline int64_t failedAt() const { DARABONBA_PTR_GET_DEFAULT(failedAt_, 0L) };
    inline SavepointFailure& setFailedAt(int64_t failedAt) { DARABONBA_PTR_SET_VALUE(failedAt_, failedAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SavepointFailure& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SavepointFailure& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<int64_t> failedAt_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
