// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTaskInfoResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskInfoResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskInfoResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    DescribeTaskInfoResponseBodyEvents() = default ;
    DescribeTaskInfoResponseBodyEvents(const DescribeTaskInfoResponseBodyEvents &) = default ;
    DescribeTaskInfoResponseBodyEvents(DescribeTaskInfoResponseBodyEvents &&) = default ;
    DescribeTaskInfoResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskInfoResponseBodyEvents() = default ;
    DescribeTaskInfoResponseBodyEvents& operator=(const DescribeTaskInfoResponseBodyEvents &) = default ;
    DescribeTaskInfoResponseBodyEvents& operator=(DescribeTaskInfoResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->level_ == nullptr && return this->message_ == nullptr && return this->reason_ == nullptr && return this->source_ == nullptr && return this->timestamp_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeTaskInfoResponseBodyEvents& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeTaskInfoResponseBodyEvents& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTaskInfoResponseBodyEvents& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeTaskInfoResponseBodyEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeTaskInfoResponseBodyEvents& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeTaskInfoResponseBodyEvents& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The action of the event.
    std::shared_ptr<string> action_ = nullptr;
    // The severity level of the event.
    std::shared_ptr<string> level_ = nullptr;
    // The message about the event.
    std::shared_ptr<string> message_ = nullptr;
    // The cause of the event.
    std::shared_ptr<string> reason_ = nullptr;
    // The source of the event.
    std::shared_ptr<string> source_ = nullptr;
    // The timestamp when the event was generated.
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
