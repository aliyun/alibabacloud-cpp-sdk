// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGDISCOVERYCONFIGNACOSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGDISCOVERYCONFIGNACOSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(ServerAddress, serverAddress_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(ServerAddress, serverAddress_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKey_ == nullptr
        && return this->authType_ == nullptr && return this->clusters_ == nullptr && return this->groupName_ == nullptr && return this->namespace_ == nullptr && return this->password_ == nullptr
        && return this->secretKey_ == nullptr && return this->serverAddress_ == nullptr && return this->serviceName_ == nullptr && return this->userName_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline string clusters() const { DARABONBA_PTR_GET_DEFAULT(clusters_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setClusters(string clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // serverAddress Field Functions 
    bool hasServerAddress() const { return this->serverAddress_ != nullptr;};
    void deleteServerAddress() { this->serverAddress_ = nullptr;};
    inline string serverAddress() const { DARABONBA_PTR_GET_DEFAULT(serverAddress_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setServerAddress(string serverAddress) { DARABONBA_PTR_SET_VALUE(serverAddress_, serverAddress) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigNacosConfig& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The AccessKey of the RAM user that has the resource management permissions on Microservices Engine (MSE).
    std::shared_ptr<string> accessKey_ = nullptr;
    // The authentication method.
    std::shared_ptr<string> authType_ = nullptr;
    // The name of the cluster to which the microservice belongs.
    std::shared_ptr<string> clusters_ = nullptr;
    // The name of the group to which the microservice that is registered with Nacos belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the namespace where the microservice that is registered with Nacos resides.
    std::shared_ptr<string> namespace_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The SecretKey of the RAM user that has the resource management permissions on MSE.
    std::shared_ptr<string> secretKey_ = nullptr;
    // The Nacos service address.
    std::shared_ptr<string> serverAddress_ = nullptr;
    // The microservice name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
