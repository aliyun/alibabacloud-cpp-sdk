// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEPOLARCLAWPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEPOLARCLAWPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DisablePolarClawPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisablePolarClawPluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Restarted, restarted_);
    };
    friend void from_json(const Darabonba::Json& j, DisablePolarClawPluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Restarted, restarted_);
    };
    DisablePolarClawPluginResponseBody() = default ;
    DisablePolarClawPluginResponseBody(const DisablePolarClawPluginResponseBody &) = default ;
    DisablePolarClawPluginResponseBody(DisablePolarClawPluginResponseBody &&) = default ;
    DisablePolarClawPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisablePolarClawPluginResponseBody() = default ;
    DisablePolarClawPluginResponseBody& operator=(const DisablePolarClawPluginResponseBody &) = default ;
    DisablePolarClawPluginResponseBody& operator=(DisablePolarClawPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->pluginId_ == nullptr && this->requestId_ == nullptr
        && this->restarted_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DisablePolarClawPluginResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DisablePolarClawPluginResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DisablePolarClawPluginResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline DisablePolarClawPluginResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DisablePolarClawPluginResponseBody& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisablePolarClawPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restarted Field Functions 
    bool hasRestarted() const { return this->restarted_ != nullptr;};
    void deleteRestarted() { this->restarted_ = nullptr;};
    inline bool getRestarted() const { DARABONBA_PTR_GET_DEFAULT(restarted_, false) };
    inline DisablePolarClawPluginResponseBody& setRestarted(bool restarted) { DARABONBA_PTR_SET_VALUE(restarted_, restarted) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> ok_ {};
    shared_ptr<string> pluginId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> restarted_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
