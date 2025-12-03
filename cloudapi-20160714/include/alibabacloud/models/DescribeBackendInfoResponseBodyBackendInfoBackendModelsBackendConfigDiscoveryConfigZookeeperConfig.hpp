// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGDISCOVERYCONFIGZOOKEEPERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGDISCOVERYCONFIGZOOKEEPERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectString, connectString_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectString, connectString_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectString_ == nullptr
        && return this->namespace_ == nullptr && return this->serviceName_ == nullptr; };
    // connectString Field Functions 
    bool hasConnectString() const { return this->connectString_ != nullptr;};
    void deleteConnectString() { this->connectString_ = nullptr;};
    inline string connectString() const { DARABONBA_PTR_GET_DEFAULT(connectString_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig& setConnectString(string connectString) { DARABONBA_PTR_SET_VALUE(connectString_, connectString) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfigZookeeperConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The connection URL of the ZooKeeper server.
    std::shared_ptr<string> connectString_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // Service name
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
