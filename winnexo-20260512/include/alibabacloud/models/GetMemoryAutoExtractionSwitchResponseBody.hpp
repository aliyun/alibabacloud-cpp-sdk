// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYAUTOEXTRACTIONSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYAUTOEXTRACTIONSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetMemoryAutoExtractionSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryAutoExtractionSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryAutoExtractionSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMemoryAutoExtractionSwitchResponseBody() = default ;
    GetMemoryAutoExtractionSwitchResponseBody(const GetMemoryAutoExtractionSwitchResponseBody &) = default ;
    GetMemoryAutoExtractionSwitchResponseBody(GetMemoryAutoExtractionSwitchResponseBody &&) = default ;
    GetMemoryAutoExtractionSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryAutoExtractionSwitchResponseBody() = default ;
    GetMemoryAutoExtractionSwitchResponseBody& operator=(const GetMemoryAutoExtractionSwitchResponseBody &) = default ;
    GetMemoryAutoExtractionSwitchResponseBody& operator=(GetMemoryAutoExtractionSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->enabled_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMemoryAutoExtractionSwitchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetMemoryAutoExtractionSwitchResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMemoryAutoExtractionSwitchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryAutoExtractionSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The status of the automatic memory collection switch for the current memory scope. A value of true indicates that the switch is enabled, and a value of false indicates that the switch is disabled.
    shared_ptr<bool> enabled_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
