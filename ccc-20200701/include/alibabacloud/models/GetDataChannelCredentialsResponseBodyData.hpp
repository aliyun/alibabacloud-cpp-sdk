// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHANNELCREDENTIALSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHANNELCREDENTIALSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetDataChannelCredentialsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataChannelCredentialsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataChannelCredentialsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetDataChannelCredentialsResponseBodyData() = default ;
    GetDataChannelCredentialsResponseBodyData(const GetDataChannelCredentialsResponseBodyData &) = default ;
    GetDataChannelCredentialsResponseBodyData(GetDataChannelCredentialsResponseBodyData &&) = default ;
    GetDataChannelCredentialsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataChannelCredentialsResponseBodyData() = default ;
    GetDataChannelCredentialsResponseBodyData& operator=(const GetDataChannelCredentialsResponseBodyData &) = default ;
    GetDataChannelCredentialsResponseBodyData& operator=(GetDataChannelCredentialsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->deviceId_ != nullptr && this->endpoint_ != nullptr && this->expiredTime_ != nullptr && this->password_ != nullptr && this->topic_ != nullptr
        && this->userName_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetDataChannelCredentialsResponseBodyData& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetDataChannelCredentialsResponseBodyData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetDataChannelCredentialsResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline GetDataChannelCredentialsResponseBodyData& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetDataChannelCredentialsResponseBodyData& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetDataChannelCredentialsResponseBodyData& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetDataChannelCredentialsResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<int64_t> expiredTime_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
