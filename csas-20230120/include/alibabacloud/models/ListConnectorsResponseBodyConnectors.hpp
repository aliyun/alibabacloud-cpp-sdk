// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConnectorsResponseBodyConnectorsApplications.hpp>
#include <alibabacloud/models/ListConnectorsResponseBodyConnectorsConnectorClients.hpp>
#include <alibabacloud/models/ListConnectorsResponseBodyConnectorsUpgradeTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListConnectorsResponseBodyConnectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsResponseBodyConnectors& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(ClusterIP, clusterIP_);
      DARABONBA_PTR_TO_JSON(ClusterPort, clusterPort_);
      DARABONBA_PTR_TO_JSON(ConnectorClients, connectorClients_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeTime, upgradeTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsResponseBodyConnectors& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(ClusterIP, clusterIP_);
      DARABONBA_PTR_FROM_JSON(ClusterPort, clusterPort_);
      DARABONBA_PTR_FROM_JSON(ConnectorClients, connectorClients_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeTime, upgradeTime_);
    };
    ListConnectorsResponseBodyConnectors() = default ;
    ListConnectorsResponseBodyConnectors(const ListConnectorsResponseBodyConnectors &) = default ;
    ListConnectorsResponseBodyConnectors(ListConnectorsResponseBodyConnectors &&) = default ;
    ListConnectorsResponseBodyConnectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsResponseBodyConnectors() = default ;
    ListConnectorsResponseBodyConnectors& operator=(const ListConnectorsResponseBodyConnectors &) = default ;
    ListConnectorsResponseBodyConnectors& operator=(ListConnectorsResponseBodyConnectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->clusterIP_ != nullptr && this->clusterPort_ != nullptr && this->connectorClients_ != nullptr && this->connectorId_ != nullptr && this->createTime_ != nullptr
        && this->name_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->switchStatus_ != nullptr && this->upgradeTime_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Models::ListConnectorsResponseBodyConnectorsApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Models::ListConnectorsResponseBodyConnectorsApplications>) };
    inline vector<Models::ListConnectorsResponseBodyConnectorsApplications> applications() { DARABONBA_PTR_GET(applications_, vector<Models::ListConnectorsResponseBodyConnectorsApplications>) };
    inline ListConnectorsResponseBodyConnectors& setApplications(const vector<Models::ListConnectorsResponseBodyConnectorsApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListConnectorsResponseBodyConnectors& setApplications(vector<Models::ListConnectorsResponseBodyConnectorsApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // clusterIP Field Functions 
    bool hasClusterIP() const { return this->clusterIP_ != nullptr;};
    void deleteClusterIP() { this->clusterIP_ = nullptr;};
    inline string clusterIP() const { DARABONBA_PTR_GET_DEFAULT(clusterIP_, "") };
    inline ListConnectorsResponseBodyConnectors& setClusterIP(string clusterIP) { DARABONBA_PTR_SET_VALUE(clusterIP_, clusterIP) };


    // clusterPort Field Functions 
    bool hasClusterPort() const { return this->clusterPort_ != nullptr;};
    void deleteClusterPort() { this->clusterPort_ = nullptr;};
    inline string clusterPort() const { DARABONBA_PTR_GET_DEFAULT(clusterPort_, "") };
    inline ListConnectorsResponseBodyConnectors& setClusterPort(string clusterPort) { DARABONBA_PTR_SET_VALUE(clusterPort_, clusterPort) };


    // connectorClients Field Functions 
    bool hasConnectorClients() const { return this->connectorClients_ != nullptr;};
    void deleteConnectorClients() { this->connectorClients_ = nullptr;};
    inline const vector<Models::ListConnectorsResponseBodyConnectorsConnectorClients> & connectorClients() const { DARABONBA_PTR_GET_CONST(connectorClients_, vector<Models::ListConnectorsResponseBodyConnectorsConnectorClients>) };
    inline vector<Models::ListConnectorsResponseBodyConnectorsConnectorClients> connectorClients() { DARABONBA_PTR_GET(connectorClients_, vector<Models::ListConnectorsResponseBodyConnectorsConnectorClients>) };
    inline ListConnectorsResponseBodyConnectors& setConnectorClients(const vector<Models::ListConnectorsResponseBodyConnectorsConnectorClients> & connectorClients) { DARABONBA_PTR_SET_VALUE(connectorClients_, connectorClients) };
    inline ListConnectorsResponseBodyConnectors& setConnectorClients(vector<Models::ListConnectorsResponseBodyConnectorsConnectorClients> && connectorClients) { DARABONBA_PTR_SET_RVALUE(connectorClients_, connectorClients) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string connectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline ListConnectorsResponseBodyConnectors& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListConnectorsResponseBodyConnectors& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListConnectorsResponseBodyConnectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListConnectorsResponseBodyConnectors& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListConnectorsResponseBodyConnectors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline ListConnectorsResponseBodyConnectors& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


    // upgradeTime Field Functions 
    bool hasUpgradeTime() const { return this->upgradeTime_ != nullptr;};
    void deleteUpgradeTime() { this->upgradeTime_ = nullptr;};
    inline const Models::ListConnectorsResponseBodyConnectorsUpgradeTime & upgradeTime() const { DARABONBA_PTR_GET_CONST(upgradeTime_, Models::ListConnectorsResponseBodyConnectorsUpgradeTime) };
    inline Models::ListConnectorsResponseBodyConnectorsUpgradeTime upgradeTime() { DARABONBA_PTR_GET(upgradeTime_, Models::ListConnectorsResponseBodyConnectorsUpgradeTime) };
    inline ListConnectorsResponseBodyConnectors& setUpgradeTime(const Models::ListConnectorsResponseBodyConnectorsUpgradeTime & upgradeTime) { DARABONBA_PTR_SET_VALUE(upgradeTime_, upgradeTime) };
    inline ListConnectorsResponseBodyConnectors& setUpgradeTime(Models::ListConnectorsResponseBodyConnectorsUpgradeTime && upgradeTime) { DARABONBA_PTR_SET_RVALUE(upgradeTime_, upgradeTime) };


  protected:
    // Collection of associated internal network access applications.
    std::shared_ptr<vector<Models::ListConnectorsResponseBodyConnectorsApplications>> applications_ = nullptr;
    // Cluster IP.
    std::shared_ptr<string> clusterIP_ = nullptr;
    // Cluster port.
    std::shared_ptr<string> clusterPort_ = nullptr;
    // Collection of deployed ConnectorClients.
    std::shared_ptr<vector<Models::ListConnectorsResponseBodyConnectorsConnectorClients>> connectorClients_ = nullptr;
    // Connector ID.
    std::shared_ptr<string> connectorId_ = nullptr;
    // Creation time of the Connector.
    std::shared_ptr<string> createTime_ = nullptr;
    // Connector name.
    std::shared_ptr<string> name_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Connector connection status. Values:
    // - **Online**: Online.
    // - **Offline**: Offline.
    std::shared_ptr<string> status_ = nullptr;
    // Connector instance status. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    std::shared_ptr<string> switchStatus_ = nullptr;
    // Connector upgrade time.
    std::shared_ptr<Models::ListConnectorsResponseBodyConnectorsUpgradeTime> upgradeTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
