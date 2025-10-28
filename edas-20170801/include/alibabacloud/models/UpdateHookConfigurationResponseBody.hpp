// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOOKCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOOKCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateHookConfigurationResponseBodyHooksConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateHookConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHookConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HooksConfiguration, hooksConfiguration_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHookConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HooksConfiguration, hooksConfiguration_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateHookConfigurationResponseBody() = default ;
    UpdateHookConfigurationResponseBody(const UpdateHookConfigurationResponseBody &) = default ;
    UpdateHookConfigurationResponseBody(UpdateHookConfigurationResponseBody &&) = default ;
    UpdateHookConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHookConfigurationResponseBody() = default ;
    UpdateHookConfigurationResponseBody& operator=(const UpdateHookConfigurationResponseBody &) = default ;
    UpdateHookConfigurationResponseBody& operator=(UpdateHookConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hooksConfiguration_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateHookConfigurationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hooksConfiguration Field Functions 
    bool hasHooksConfiguration() const { return this->hooksConfiguration_ != nullptr;};
    void deleteHooksConfiguration() { this->hooksConfiguration_ = nullptr;};
    inline const vector<UpdateHookConfigurationResponseBodyHooksConfiguration> & hooksConfiguration() const { DARABONBA_PTR_GET_CONST(hooksConfiguration_, vector<UpdateHookConfigurationResponseBodyHooksConfiguration>) };
    inline vector<UpdateHookConfigurationResponseBodyHooksConfiguration> hooksConfiguration() { DARABONBA_PTR_GET(hooksConfiguration_, vector<UpdateHookConfigurationResponseBodyHooksConfiguration>) };
    inline UpdateHookConfigurationResponseBody& setHooksConfiguration(const vector<UpdateHookConfigurationResponseBodyHooksConfiguration> & hooksConfiguration) { DARABONBA_PTR_SET_VALUE(hooksConfiguration_, hooksConfiguration) };
    inline UpdateHookConfigurationResponseBody& setHooksConfiguration(vector<UpdateHookConfigurationResponseBodyHooksConfiguration> && hooksConfiguration) { DARABONBA_PTR_SET_RVALUE(hooksConfiguration_, hooksConfiguration) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateHookConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateHookConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about the mounted script.
    std::shared_ptr<vector<UpdateHookConfigurationResponseBodyHooksConfiguration>> hooksConfiguration_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
