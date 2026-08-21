// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateConnectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connector, connector_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connector, connector_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateConnectorResponseBody() = default ;
    UpdateConnectorResponseBody(const UpdateConnectorResponseBody &) = default ;
    UpdateConnectorResponseBody(UpdateConnectorResponseBody &&) = default ;
    UpdateConnectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectorResponseBody() = default ;
    UpdateConnectorResponseBody& operator=(const UpdateConnectorResponseBody &) = default ;
    UpdateConnectorResponseBody& operator=(UpdateConnectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Connector : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Connector& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerateStatus, accelerateStatus_);
        DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
        DARABONBA_PTR_TO_JSON(UpgradeTime, upgradeTime_);
        DARABONBA_PTR_TO_JSON(VipCidr, vipCidr_);
      };
      friend void from_json(const Darabonba::Json& j, Connector& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerateStatus, accelerateStatus_);
        DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
        DARABONBA_PTR_FROM_JSON(UpgradeTime, upgradeTime_);
        DARABONBA_PTR_FROM_JSON(VipCidr, vipCidr_);
      };
      Connector() = default ;
      Connector(const Connector &) = default ;
      Connector(Connector &&) = default ;
      Connector(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Connector() = default ;
      Connector& operator=(const Connector &) = default ;
      Connector& operator=(Connector &&) = default ;
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
        // The end time.
        shared_ptr<string> end_ {};
        // The start time.
        shared_ptr<string> start_ {};
      };

      virtual bool empty() const override { return this->accelerateStatus_ == nullptr
        && this->connectorId_ == nullptr && this->createTime_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->switchStatus_ == nullptr && this->upgradeTime_ == nullptr && this->vipCidr_ == nullptr; };
      // accelerateStatus Field Functions 
      bool hasAccelerateStatus() const { return this->accelerateStatus_ != nullptr;};
      void deleteAccelerateStatus() { this->accelerateStatus_ = nullptr;};
      inline string getAccelerateStatus() const { DARABONBA_PTR_GET_DEFAULT(accelerateStatus_, "") };
      inline Connector& setAccelerateStatus(string accelerateStatus) { DARABONBA_PTR_SET_VALUE(accelerateStatus_, accelerateStatus) };


      // connectorId Field Functions 
      bool hasConnectorId() const { return this->connectorId_ != nullptr;};
      void deleteConnectorId() { this->connectorId_ = nullptr;};
      inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
      inline Connector& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Connector& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Connector& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Connector& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Connector& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchStatus Field Functions 
      bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
      void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
      inline string getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
      inline Connector& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


      // upgradeTime Field Functions 
      bool hasUpgradeTime() const { return this->upgradeTime_ != nullptr;};
      void deleteUpgradeTime() { this->upgradeTime_ = nullptr;};
      inline const Connector::UpgradeTime & getUpgradeTime() const { DARABONBA_PTR_GET_CONST(upgradeTime_, Connector::UpgradeTime) };
      inline Connector::UpgradeTime getUpgradeTime() { DARABONBA_PTR_GET(upgradeTime_, Connector::UpgradeTime) };
      inline Connector& setUpgradeTime(const Connector::UpgradeTime & upgradeTime) { DARABONBA_PTR_SET_VALUE(upgradeTime_, upgradeTime) };
      inline Connector& setUpgradeTime(Connector::UpgradeTime && upgradeTime) { DARABONBA_PTR_SET_RVALUE(upgradeTime_, upgradeTime) };


      // vipCidr Field Functions 
      bool hasVipCidr() const { return this->vipCidr_ != nullptr;};
      void deleteVipCidr() { this->vipCidr_ = nullptr;};
      inline string getVipCidr() const { DARABONBA_PTR_GET_DEFAULT(vipCidr_, "") };
      inline Connector& setVipCidr(string vipCidr) { DARABONBA_PTR_SET_VALUE(vipCidr_, vipCidr) };


    protected:
      // Specifies whether to enable Global Accelerator. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> accelerateStatus_ {};
      // ConnectorID。
      shared_ptr<string> connectorId_ {};
      // The creation time of the Connector.
      shared_ptr<string> createTime_ {};
      // The Connector name.
      shared_ptr<string> name_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The connection status of the Connector. Valid values:
      // - **Online**: Online.
      // - **Offline**: Offline.
      shared_ptr<string> status_ {};
      // The instance status of the Connector. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Shutdown.
      shared_ptr<string> switchStatus_ {};
      // The upgrade time of the Connector.
      shared_ptr<Connector::UpgradeTime> upgradeTime_ {};
      // The virtual IP address.
      shared_ptr<string> vipCidr_ {};
    };

    virtual bool empty() const override { return this->connector_ == nullptr
        && this->requestId_ == nullptr; };
    // connector Field Functions 
    bool hasConnector() const { return this->connector_ != nullptr;};
    void deleteConnector() { this->connector_ = nullptr;};
    inline const UpdateConnectorResponseBody::Connector & getConnector() const { DARABONBA_PTR_GET_CONST(connector_, UpdateConnectorResponseBody::Connector) };
    inline UpdateConnectorResponseBody::Connector getConnector() { DARABONBA_PTR_GET(connector_, UpdateConnectorResponseBody::Connector) };
    inline UpdateConnectorResponseBody& setConnector(const UpdateConnectorResponseBody::Connector & connector) { DARABONBA_PTR_SET_VALUE(connector_, connector) };
    inline UpdateConnectorResponseBody& setConnector(UpdateConnectorResponseBody::Connector && connector) { DARABONBA_PTR_SET_RVALUE(connector_, connector) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateConnectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Connector。
    shared_ptr<UpdateConnectorResponseBody::Connector> connector_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
