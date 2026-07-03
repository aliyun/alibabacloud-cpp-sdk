// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGWIFIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGWIFIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagWifiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagWifiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_TO_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_TO_JSON(IsBroadcast, isBroadcast_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Ssid, ssid_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagWifiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_FROM_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_FROM_JSON(IsBroadcast, isBroadcast_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Ssid, ssid_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagWifiResponseBody() = default ;
    DescribeSagWifiResponseBody(const DescribeSagWifiResponseBody &) = default ;
    DescribeSagWifiResponseBody(DescribeSagWifiResponseBody &&) = default ;
    DescribeSagWifiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagWifiResponseBody() = default ;
    DescribeSagWifiResponseBody& operator=(const DescribeSagWifiResponseBody &) = default ;
    DescribeSagWifiResponseBody& operator=(DescribeSagWifiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskStates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskStates& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, TaskStates& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      TaskStates() = default ;
      TaskStates(const TaskStates &) = default ;
      TaskStates(TaskStates &&) = default ;
      TaskStates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskStates() = default ;
      TaskStates& operator=(const TaskStates &) = default ;
      TaskStates& operator=(TaskStates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->state_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TaskStates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline TaskStates& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline TaskStates& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline TaskStates& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The time when the query task was created.
      shared_ptr<string> createTime_ {};
      // The error code returned for a query task. The 200 error code indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message returned for a query task. The Successful error message indicates that the query task is successful.
      shared_ptr<string> errorMessage_ {};
      // The status of the query task. Valid values:
      // 
      // - **Initialized**: The query task has been initialized.
      // 
      // - **Offline**: The query task is not dispatched because the SAG device is disconnected from Alibaba Cloud. The task will be dispatched after the SAG device is connected to Alibaba Cloud.
      // 
      // - **Succeed**: The query task has been dispatched.
      // 
      // - **Processing**: The query task is being dispatched.
      // 
      // - **VersionNotSupport**: The current version of the SAG device does not support query tasks.
      // 
      // - **BuildRequestError**: The SAG control system does not support query tasks.
      // 
      // - **HardwareError**: The query task failed to be dispatched due to device errors.
      // 
      // - **TaskNotExist**: The query task does not exist.
      // 
      // - **OfflineNotConfiged**: The query task is not dispatched because the SAG device is disconnected from Alibaba Cloud. The task will not be dispatched after the device is connected to Alibaba Cloud.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->authenticationType_ == nullptr
        && this->bandwidth_ == nullptr && this->channel_ == nullptr && this->encryptAlgorithm_ == nullptr && this->isAuth_ == nullptr && this->isBroadcast_ == nullptr
        && this->isEnable_ == nullptr && this->requestId_ == nullptr && this->ssid_ == nullptr && this->taskStates_ == nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
    inline DescribeSagWifiResponseBody& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline DescribeSagWifiResponseBody& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline DescribeSagWifiResponseBody& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // encryptAlgorithm Field Functions 
    bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
    void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
    inline string getEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
    inline DescribeSagWifiResponseBody& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


    // isAuth Field Functions 
    bool hasIsAuth() const { return this->isAuth_ != nullptr;};
    void deleteIsAuth() { this->isAuth_ = nullptr;};
    inline string getIsAuth() const { DARABONBA_PTR_GET_DEFAULT(isAuth_, "") };
    inline DescribeSagWifiResponseBody& setIsAuth(string isAuth) { DARABONBA_PTR_SET_VALUE(isAuth_, isAuth) };


    // isBroadcast Field Functions 
    bool hasIsBroadcast() const { return this->isBroadcast_ != nullptr;};
    void deleteIsBroadcast() { this->isBroadcast_ = nullptr;};
    inline string getIsBroadcast() const { DARABONBA_PTR_GET_DEFAULT(isBroadcast_, "") };
    inline DescribeSagWifiResponseBody& setIsBroadcast(string isBroadcast) { DARABONBA_PTR_SET_VALUE(isBroadcast_, isBroadcast) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline string getIsEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, "") };
    inline DescribeSagWifiResponseBody& setIsEnable(string isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagWifiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ssid Field Functions 
    bool hasSsid() const { return this->ssid_ != nullptr;};
    void deleteSsid() { this->ssid_ = nullptr;};
    inline string getSsid() const { DARABONBA_PTR_GET_DEFAULT(ssid_, "") };
    inline DescribeSagWifiResponseBody& setSsid(string ssid) { DARABONBA_PTR_SET_VALUE(ssid_, ssid) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagWifiResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagWifiResponseBody::TaskStates>) };
    inline vector<DescribeSagWifiResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagWifiResponseBody::TaskStates>) };
    inline DescribeSagWifiResponseBody& setTaskStates(const vector<DescribeSagWifiResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagWifiResponseBody& setTaskStates(vector<DescribeSagWifiResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The authentication type. Valid values:
    // 
    // - **NONE**: authentication is disabled.
    // 
    // - **WPA-PSK**: WPA-PSK authentication is enabled.
    // 
    // - **WPA2-PSK**: WPA2-PSK authentication is enabled.
    shared_ptr<string> authenticationType_ {};
    // The bandwidth of the Wi-Fi channel. Valid values:
    // 
    // - **Automatic**
    // 
    // - **20 HMz**
    // 
    // - **40 MHz**
    shared_ptr<string> bandwidth_ {};
    // The Wi-Fi channel.
    shared_ptr<string> channel_ {};
    // The encryption algorithm.
    // 
    // - **AUTO**: automatically selects the encryption algorithm.
    // 
    // - **TKIP**: uses the Temporal Key Integrity Protocol (TKIP).
    // 
    // - **AES**: uses the Advanced Encryption Standard authorized by Wi-Fi®.
    shared_ptr<string> encryptAlgorithm_ {};
    // Indicates whether wireless security is enabled.
    // 
    // - **True**: wireless security is enabled.
    // 
    // - **False**: wireless security is disabled.
    shared_ptr<string> isAuth_ {};
    // Indicates whether broadcast over Wi-Fi is enabled. Valid values:
    // 
    // - **True**: broadcast is enabled.
    // 
    // - **False**: broadcast is disabled.
    shared_ptr<string> isBroadcast_ {};
    // Indicates whether wireless connections are enabled. Valid values:
    // 
    // - **True**: wireless connections are enabled.
    // 
    // - **False**: wireless connections are disabled.
    shared_ptr<string> isEnable_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The service set identifier (SSID) of the Wi-Fi network.
    shared_ptr<string> ssid_ {};
    // The information about the query task.
    shared_ptr<vector<DescribeSagWifiResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
