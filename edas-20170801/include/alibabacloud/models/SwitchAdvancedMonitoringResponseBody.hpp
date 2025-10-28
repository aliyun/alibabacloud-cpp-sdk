// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHADVANCEDMONITORINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SWITCHADVANCEDMONITORINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class SwitchAdvancedMonitoringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchAdvancedMonitoringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedMonitoringEnabled, advancedMonitoringEnabled_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchAdvancedMonitoringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedMonitoringEnabled, advancedMonitoringEnabled_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SwitchAdvancedMonitoringResponseBody() = default ;
    SwitchAdvancedMonitoringResponseBody(const SwitchAdvancedMonitoringResponseBody &) = default ;
    SwitchAdvancedMonitoringResponseBody(SwitchAdvancedMonitoringResponseBody &&) = default ;
    SwitchAdvancedMonitoringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchAdvancedMonitoringResponseBody() = default ;
    SwitchAdvancedMonitoringResponseBody& operator=(const SwitchAdvancedMonitoringResponseBody &) = default ;
    SwitchAdvancedMonitoringResponseBody& operator=(SwitchAdvancedMonitoringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedMonitoringEnabled_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // advancedMonitoringEnabled Field Functions 
    bool hasAdvancedMonitoringEnabled() const { return this->advancedMonitoringEnabled_ != nullptr;};
    void deleteAdvancedMonitoringEnabled() { this->advancedMonitoringEnabled_ = nullptr;};
    inline bool advancedMonitoringEnabled() const { DARABONBA_PTR_GET_DEFAULT(advancedMonitoringEnabled_, false) };
    inline SwitchAdvancedMonitoringResponseBody& setAdvancedMonitoringEnabled(bool advancedMonitoringEnabled) { DARABONBA_PTR_SET_VALUE(advancedMonitoringEnabled_, advancedMonitoringEnabled) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SwitchAdvancedMonitoringResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SwitchAdvancedMonitoringResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SwitchAdvancedMonitoringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the advanced application monitoring feature is enabled. Valid values:
    // 
    // *   true: The advanced application monitoring feature is enabled.
    // *   false: The advanced application monitoring feature is disabled.
    std::shared_ptr<bool> advancedMonitoringEnabled_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
