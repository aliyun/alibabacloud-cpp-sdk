// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryCustomAuthIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomAuthIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomAuthIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    QueryCustomAuthIdentityRequest() = default ;
    QueryCustomAuthIdentityRequest(const QueryCustomAuthIdentityRequest &) = default ;
    QueryCustomAuthIdentityRequest(QueryCustomAuthIdentityRequest &&) = default ;
    QueryCustomAuthIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomAuthIdentityRequest() = default ;
    QueryCustomAuthIdentityRequest& operator=(const QueryCustomAuthIdentityRequest &) = default ;
    QueryCustomAuthIdentityRequest& operator=(QueryCustomAuthIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->identityType_ == nullptr && this->instanceId_ == nullptr && this->nextToken_ == nullptr && this->size_ == nullptr && this->username_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline QueryCustomAuthIdentityRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline QueryCustomAuthIdentityRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryCustomAuthIdentityRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryCustomAuthIdentityRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline QueryCustomAuthIdentityRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline QueryCustomAuthIdentityRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The client ID of the device. You can specify this parameter when the identity type is CLIENT.
    shared_ptr<string> clientId_ {};
    // The identity type.
    shared_ptr<string> identityType_ {};
    // The ID of the ApsaraMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The token that marks the end position of the current query. You can pass this token as a parameter in the next call to continue paginating. If this is the first call or the last page is returned, the value is an empty string.
    shared_ptr<string> nextToken_ {};
    // The number of entries to query. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> size_ {};
    // The username.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
