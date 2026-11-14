// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMQTTTICKETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMQTTTICKETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetMqttTicketShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMqttTicketShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(Properties, propertiesShrink_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetMqttTicketShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(Properties, propertiesShrink_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetMqttTicketShrinkRequest() = default ;
    GetMqttTicketShrinkRequest(const GetMqttTicketShrinkRequest &) = default ;
    GetMqttTicketShrinkRequest(GetMqttTicketShrinkRequest &&) = default ;
    GetMqttTicketShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMqttTicketShrinkRequest() = default ;
    GetMqttTicketShrinkRequest& operator=(const GetMqttTicketShrinkRequest &) = default ;
    GetMqttTicketShrinkRequest& operator=(GetMqttTicketShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientOS_ == nullptr
        && this->clientType_ == nullptr && this->clientVersion_ == nullptr && this->propertiesShrink_ == nullptr && this->uuid_ == nullptr; };
    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline GetMqttTicketShrinkRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline GetMqttTicketShrinkRequest& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetMqttTicketShrinkRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // propertiesShrink Field Functions 
    bool hasPropertiesShrink() const { return this->propertiesShrink_ != nullptr;};
    void deletePropertiesShrink() { this->propertiesShrink_ = nullptr;};
    inline string getPropertiesShrink() const { DARABONBA_PTR_GET_DEFAULT(propertiesShrink_, "") };
    inline GetMqttTicketShrinkRequest& setPropertiesShrink(string propertiesShrink) { DARABONBA_PTR_SET_VALUE(propertiesShrink_, propertiesShrink) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetMqttTicketShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The operating system of the client.
    // 
    // This parameter is required.
    shared_ptr<string> clientOS_ {};
    // The client type. Valid values: 0: hardware terminal; 1: Windows software terminal; 2: macOS software terminal; 3: iOS client; 4: Android client; 5: web client; 6: tenant console.
    // 
    // This parameter is required.
    shared_ptr<int32_t> clientType_ {};
    // The version number of the client.
    // 
    // This parameter is required.
    shared_ptr<string> clientVersion_ {};
    // The extended properties of the client, represented as a JSON object where both keys and values are strings. Example: `{"a":"1","b":"2"}`. If this parameter is not specified, an empty property set is used.
    shared_ptr<string> propertiesShrink_ {};
    // The UUID of the device.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
