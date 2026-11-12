// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMYAGENTICNOTIFICATIONCHANNELCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMYAGENTICNOTIFICATIONCHANNELCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateMyAgenticNotificationChannelConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMyAgenticNotificationChannelConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMyAgenticNotificationChannelConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateMyAgenticNotificationChannelConfigResponseBody() = default ;
    UpdateMyAgenticNotificationChannelConfigResponseBody(const UpdateMyAgenticNotificationChannelConfigResponseBody &) = default ;
    UpdateMyAgenticNotificationChannelConfigResponseBody(UpdateMyAgenticNotificationChannelConfigResponseBody &&) = default ;
    UpdateMyAgenticNotificationChannelConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMyAgenticNotificationChannelConfigResponseBody() = default ;
    UpdateMyAgenticNotificationChannelConfigResponseBody& operator=(const UpdateMyAgenticNotificationChannelConfigResponseBody &) = default ;
    UpdateMyAgenticNotificationChannelConfigResponseBody& operator=(UpdateMyAgenticNotificationChannelConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channel_ == nullptr
        && this->config_ == nullptr && this->enabled_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Data& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
      inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
      inline Data& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      // The notification channel type. Valid values: FEISHU (Lark).
      shared_ptr<string> channel_ {};
      // The channel configuration information. Both keys and values are strings, including the bound identity information such as openId, mobile, or email. Sensitive values are always displayed as ******, and plaintext is not returned.
      shared_ptr<map<string, string>> config_ {};
      // Indicates whether the notification channel is enabled. Returns false if the channel has never been configured.
      shared_ptr<bool> enabled_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateMyAgenticNotificationChannelConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateMyAgenticNotificationChannelConfigResponseBody::Data) };
    inline UpdateMyAgenticNotificationChannelConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateMyAgenticNotificationChannelConfigResponseBody::Data) };
    inline UpdateMyAgenticNotificationChannelConfigResponseBody& setData(const UpdateMyAgenticNotificationChannelConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateMyAgenticNotificationChannelConfigResponseBody& setData(UpdateMyAgenticNotificationChannelConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateMyAgenticNotificationChannelConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateMyAgenticNotificationChannelConfigResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMyAgenticNotificationChannelConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateMyAgenticNotificationChannelConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The updated notification channel configuration.
    shared_ptr<UpdateMyAgenticNotificationChannelConfigResponseBody::Data> data_ {};
    // The error code returned when the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the request fails.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values: true: The request is successful. false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
