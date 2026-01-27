// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListConnectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connectors, connectors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connectors, connectors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListConnectorsResponseBody() = default ;
    ListConnectorsResponseBody(const ListConnectorsResponseBody &) = default ;
    ListConnectorsResponseBody(ListConnectorsResponseBody &&) = default ;
    ListConnectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsResponseBody() = default ;
    ListConnectorsResponseBody& operator=(const ListConnectorsResponseBody &) = default ;
    ListConnectorsResponseBody& operator=(ListConnectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Connectors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Connectors& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerateStatus, accelerateStatus_);
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
      friend void from_json(const Darabonba::Json& j, Connectors& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerateStatus, accelerateStatus_);
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
      Connectors() = default ;
      Connectors(const Connectors &) = default ;
      Connectors(Connectors &&) = default ;
      Connectors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Connectors() = default ;
      Connectors& operator=(const Connectors &) = default ;
      Connectors& operator=(Connectors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpgradeTime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpgradeTime& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Start, start_);
        };
        friend void from_json(const Darabonba::Json& j, UpgradeTime& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
        };
        UpgradeTime() = default ;
        UpgradeTime(const UpgradeTime &) = default ;
        UpgradeTime(UpgradeTime &&) = default ;
        UpgradeTime(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpgradeTime() = default ;
        UpgradeTime& operator=(const UpgradeTime &) = default ;
        UpgradeTime& operator=(UpgradeTime &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline UpgradeTime& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
        inline UpgradeTime& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      protected:
        // End time.
        shared_ptr<string> end_ {};
        // Start time.
        shared_ptr<string> start_ {};
      };

      class ConnectorClients : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnectorClients& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
          DARABONBA_PTR_TO_JSON(DevTag, devTag_);
          DARABONBA_PTR_TO_JSON(Hostname, hostname_);
          DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        };
        friend void from_json(const Darabonba::Json& j, ConnectorClients& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
          DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
          DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        };
        ConnectorClients() = default ;
        ConnectorClients(const ConnectorClients &) = default ;
        ConnectorClients(ConnectorClients &&) = default ;
        ConnectorClients(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConnectorClients() = default ;
        ConnectorClients& operator=(const ConnectorClients &) = default ;
        ConnectorClients& operator=(ConnectorClients &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->devTag_ == nullptr && this->hostname_ == nullptr && this->publicIp_ == nullptr; };
        // connectionStatus Field Functions 
        bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
        void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
        inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
        inline ConnectorClients& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


        // devTag Field Functions 
        bool hasDevTag() const { return this->devTag_ != nullptr;};
        void deleteDevTag() { this->devTag_ = nullptr;};
        inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
        inline ConnectorClients& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline ConnectorClients& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // publicIp Field Functions 
        bool hasPublicIp() const { return this->publicIp_ != nullptr;};
        void deletePublicIp() { this->publicIp_ = nullptr;};
        inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
        inline ConnectorClients& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      protected:
        // Connection status between the ConnectorClient and ConnectorServer.
        shared_ptr<string> connectionStatus_ {};
        // Unique device identifier for the ConnectorClient.
        shared_ptr<string> devTag_ {};
        // Hostname of the ConnectorClient.
        shared_ptr<string> hostname_ {};
        // Public IP of the ConnectorClient.
        shared_ptr<string> publicIp_ {};
      };

      class Applications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applications& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        };
        friend void from_json(const Darabonba::Json& j, Applications& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        };
        Applications() = default ;
        Applications(const Applications &) = default ;
        Applications(Applications &&) = default ;
        Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Applications() = default ;
        Applications& operator=(const Applications &) = default ;
        Applications& operator=(Applications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr; };
        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
        inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      protected:
        // Internal network access application ID.
        shared_ptr<string> applicationId_ {};
        // Internal network access application name.
        shared_ptr<string> applicationName_ {};
      };

      virtual bool empty() const override { return this->accelerateStatus_ == nullptr
        && this->applications_ == nullptr && this->clusterIP_ == nullptr && this->clusterPort_ == nullptr && this->connectorClients_ == nullptr && this->connectorId_ == nullptr
        && this->createTime_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->switchStatus_ == nullptr
        && this->upgradeTime_ == nullptr; };
      // accelerateStatus Field Functions 
      bool hasAccelerateStatus() const { return this->accelerateStatus_ != nullptr;};
      void deleteAccelerateStatus() { this->accelerateStatus_ = nullptr;};
      inline string getAccelerateStatus() const { DARABONBA_PTR_GET_DEFAULT(accelerateStatus_, "") };
      inline Connectors& setAccelerateStatus(string accelerateStatus) { DARABONBA_PTR_SET_VALUE(accelerateStatus_, accelerateStatus) };


      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<Connectors::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Connectors::Applications>) };
      inline vector<Connectors::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<Connectors::Applications>) };
      inline Connectors& setApplications(const vector<Connectors::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline Connectors& setApplications(vector<Connectors::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


      // clusterIP Field Functions 
      bool hasClusterIP() const { return this->clusterIP_ != nullptr;};
      void deleteClusterIP() { this->clusterIP_ = nullptr;};
      inline string getClusterIP() const { DARABONBA_PTR_GET_DEFAULT(clusterIP_, "") };
      inline Connectors& setClusterIP(string clusterIP) { DARABONBA_PTR_SET_VALUE(clusterIP_, clusterIP) };


      // clusterPort Field Functions 
      bool hasClusterPort() const { return this->clusterPort_ != nullptr;};
      void deleteClusterPort() { this->clusterPort_ = nullptr;};
      inline string getClusterPort() const { DARABONBA_PTR_GET_DEFAULT(clusterPort_, "") };
      inline Connectors& setClusterPort(string clusterPort) { DARABONBA_PTR_SET_VALUE(clusterPort_, clusterPort) };


      // connectorClients Field Functions 
      bool hasConnectorClients() const { return this->connectorClients_ != nullptr;};
      void deleteConnectorClients() { this->connectorClients_ = nullptr;};
      inline const vector<Connectors::ConnectorClients> & getConnectorClients() const { DARABONBA_PTR_GET_CONST(connectorClients_, vector<Connectors::ConnectorClients>) };
      inline vector<Connectors::ConnectorClients> getConnectorClients() { DARABONBA_PTR_GET(connectorClients_, vector<Connectors::ConnectorClients>) };
      inline Connectors& setConnectorClients(const vector<Connectors::ConnectorClients> & connectorClients) { DARABONBA_PTR_SET_VALUE(connectorClients_, connectorClients) };
      inline Connectors& setConnectorClients(vector<Connectors::ConnectorClients> && connectorClients) { DARABONBA_PTR_SET_RVALUE(connectorClients_, connectorClients) };


      // connectorId Field Functions 
      bool hasConnectorId() const { return this->connectorId_ != nullptr;};
      void deleteConnectorId() { this->connectorId_ = nullptr;};
      inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
      inline Connectors& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Connectors& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Connectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Connectors& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Connectors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchStatus Field Functions 
      bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
      void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
      inline string getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
      inline Connectors& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


      // upgradeTime Field Functions 
      bool hasUpgradeTime() const { return this->upgradeTime_ != nullptr;};
      void deleteUpgradeTime() { this->upgradeTime_ = nullptr;};
      inline const Connectors::UpgradeTime & getUpgradeTime() const { DARABONBA_PTR_GET_CONST(upgradeTime_, Connectors::UpgradeTime) };
      inline Connectors::UpgradeTime getUpgradeTime() { DARABONBA_PTR_GET(upgradeTime_, Connectors::UpgradeTime) };
      inline Connectors& setUpgradeTime(const Connectors::UpgradeTime & upgradeTime) { DARABONBA_PTR_SET_VALUE(upgradeTime_, upgradeTime) };
      inline Connectors& setUpgradeTime(Connectors::UpgradeTime && upgradeTime) { DARABONBA_PTR_SET_RVALUE(upgradeTime_, upgradeTime) };


    protected:
      // Whether to enable global acceleration. Values: 
      // - **Enabled**: Turn on. 
      // - **Disabled**: Turn off.
      shared_ptr<string> accelerateStatus_ {};
      // Collection of associated internal network access applications.
      shared_ptr<vector<Connectors::Applications>> applications_ {};
      // Cluster IP.
      shared_ptr<string> clusterIP_ {};
      // Cluster port.
      shared_ptr<string> clusterPort_ {};
      // Collection of deployed ConnectorClients.
      shared_ptr<vector<Connectors::ConnectorClients>> connectorClients_ {};
      // ConnectorID.
      shared_ptr<string> connectorId_ {};
      // Connector creation time.
      shared_ptr<string> createTime_ {};
      // Connector name.
      shared_ptr<string> name_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Connector connection status. Values:
      // - **Online**: Online.
      // - **Offline**: Offline.
      shared_ptr<string> status_ {};
      // Connector instance status. Values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> switchStatus_ {};
      // Connector升级时间。
      shared_ptr<Connectors::UpgradeTime> upgradeTime_ {};
    };

    virtual bool empty() const override { return this->connectors_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // connectors Field Functions 
    bool hasConnectors() const { return this->connectors_ != nullptr;};
    void deleteConnectors() { this->connectors_ = nullptr;};
    inline const vector<ListConnectorsResponseBody::Connectors> & getConnectors() const { DARABONBA_PTR_GET_CONST(connectors_, vector<ListConnectorsResponseBody::Connectors>) };
    inline vector<ListConnectorsResponseBody::Connectors> getConnectors() { DARABONBA_PTR_GET(connectors_, vector<ListConnectorsResponseBody::Connectors>) };
    inline ListConnectorsResponseBody& setConnectors(const vector<ListConnectorsResponseBody::Connectors> & connectors) { DARABONBA_PTR_SET_VALUE(connectors_, connectors) };
    inline ListConnectorsResponseBody& setConnectors(vector<ListConnectorsResponseBody::Connectors> && connectors) { DARABONBA_PTR_SET_RVALUE(connectors_, connectors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConnectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListConnectorsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // List of Connectors.
    shared_ptr<vector<ListConnectorsResponseBody::Connectors>> connectors_ {};
    // The ID of the current request.
    shared_ptr<string> requestId_ {};
    // Total number of Connectors.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
