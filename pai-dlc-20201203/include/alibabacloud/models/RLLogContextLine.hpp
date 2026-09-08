// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLLOGCONTEXTLINE_HPP_
#define ALIBABACLOUD_MODELS_RLLOGCONTEXTLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLLogContextLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLLogContextLine& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(TimestampMs, timestampMs_);
    };
    friend void from_json(const Darabonba::Json& j, RLLogContextLine& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(TimestampMs, timestampMs_);
    };
    RLLogContextLine() = default ;
    RLLogContextLine(const RLLogContextLine &) = default ;
    RLLogContextLine(RLLogContextLine &&) = default ;
    RLLogContextLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLLogContextLine() = default ;
    RLLogContextLine& operator=(const RLLogContextLine &) = default ;
    RLLogContextLine& operator=(RLLogContextLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->timestampMs_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RLLogContextLine& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // timestampMs Field Functions 
    bool hasTimestampMs() const { return this->timestampMs_ != nullptr;};
    void deleteTimestampMs() { this->timestampMs_ = nullptr;};
    inline int64_t getTimestampMs() const { DARABONBA_PTR_GET_DEFAULT(timestampMs_, 0L) };
    inline RLLogContextLine& setTimestampMs(int64_t timestampMs) { DARABONBA_PTR_SET_VALUE(timestampMs_, timestampMs) };


  protected:
    // The log text (<= 2000 characters, with ANSI escape codes stripped).
    shared_ptr<string> message_ {};
    // The millisecond timestamp of the log line.
    shared_ptr<int64_t> timestampMs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
