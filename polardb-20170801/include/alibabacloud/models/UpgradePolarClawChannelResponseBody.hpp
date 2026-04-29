// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEPOLARCLAWCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEPOLARCLAWCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpgradePolarClawChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradePolarClawChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NpmPackage, npmPackage_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginUpgraded, pluginUpgraded_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Restarted, restarted_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradePolarClawChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NpmPackage, npmPackage_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginUpgraded, pluginUpgraded_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Restarted, restarted_);
    };
    UpgradePolarClawChannelResponseBody() = default ;
    UpgradePolarClawChannelResponseBody(const UpgradePolarClawChannelResponseBody &) = default ;
    UpgradePolarClawChannelResponseBody(UpgradePolarClawChannelResponseBody &&) = default ;
    UpgradePolarClawChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradePolarClawChannelResponseBody() = default ;
    UpgradePolarClawChannelResponseBody& operator=(const UpgradePolarClawChannelResponseBody &) = default ;
    UpgradePolarClawChannelResponseBody& operator=(UpgradePolarClawChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channelId_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->npmPackage_ == nullptr && this->ok_ == nullptr
        && this->pluginId_ == nullptr && this->pluginUpgraded_ == nullptr && this->requestId_ == nullptr && this->restarted_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpgradePolarClawChannelResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpgradePolarClawChannelResponseBody& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpgradePolarClawChannelResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpgradePolarClawChannelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // npmPackage Field Functions 
    bool hasNpmPackage() const { return this->npmPackage_ != nullptr;};
    void deleteNpmPackage() { this->npmPackage_ = nullptr;};
    inline string getNpmPackage() const { DARABONBA_PTR_GET_DEFAULT(npmPackage_, "") };
    inline UpgradePolarClawChannelResponseBody& setNpmPackage(string npmPackage) { DARABONBA_PTR_SET_VALUE(npmPackage_, npmPackage) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline UpgradePolarClawChannelResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline UpgradePolarClawChannelResponseBody& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginUpgraded Field Functions 
    bool hasPluginUpgraded() const { return this->pluginUpgraded_ != nullptr;};
    void deletePluginUpgraded() { this->pluginUpgraded_ = nullptr;};
    inline bool getPluginUpgraded() const { DARABONBA_PTR_GET_DEFAULT(pluginUpgraded_, false) };
    inline UpgradePolarClawChannelResponseBody& setPluginUpgraded(bool pluginUpgraded) { DARABONBA_PTR_SET_VALUE(pluginUpgraded_, pluginUpgraded) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradePolarClawChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restarted Field Functions 
    bool hasRestarted() const { return this->restarted_ != nullptr;};
    void deleteRestarted() { this->restarted_ = nullptr;};
    inline bool getRestarted() const { DARABONBA_PTR_GET_DEFAULT(restarted_, false) };
    inline UpgradePolarClawChannelResponseBody& setRestarted(bool restarted) { DARABONBA_PTR_SET_VALUE(restarted_, restarted) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> npmPackage_ {};
    shared_ptr<bool> ok_ {};
    shared_ptr<string> pluginId_ {};
    shared_ptr<bool> pluginUpgraded_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> restarted_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
