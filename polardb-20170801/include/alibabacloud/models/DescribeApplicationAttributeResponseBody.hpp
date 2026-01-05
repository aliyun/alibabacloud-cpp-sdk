// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpgradeAvailable, upgradeAvailable_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpgradeAvailable, upgradeAvailable_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeApplicationAttributeResponseBody() = default ;
    DescribeApplicationAttributeResponseBody(const DescribeApplicationAttributeResponseBody &) = default ;
    DescribeApplicationAttributeResponseBody(DescribeApplicationAttributeResponseBody &&) = default ;
    DescribeApplicationAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeResponseBody() = default ;
    DescribeApplicationAttributeResponseBody& operator=(const DescribeApplicationAttributeResponseBody &) = default ;
    DescribeApplicationAttributeResponseBody& operator=(DescribeApplicationAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityIPArrays : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityIPArrays& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
        DARABONBA_PTR_TO_JSON(SecurityIPArrayTag, securityIPArrayTag_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_TO_JSON(SecurityIPNetType, securityIPNetType_);
        DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityIPArrays& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
        DARABONBA_PTR_FROM_JSON(SecurityIPArrayTag, securityIPArrayTag_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_FROM_JSON(SecurityIPNetType, securityIPNetType_);
        DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
      };
      SecurityIPArrays() = default ;
      SecurityIPArrays(const SecurityIPArrays &) = default ;
      SecurityIPArrays(SecurityIPArrays &&) = default ;
      SecurityIPArrays(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityIPArrays() = default ;
      SecurityIPArrays& operator=(const SecurityIPArrays &) = default ;
      SecurityIPArrays& operator=(SecurityIPArrays &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityIPArrayName_ == nullptr
        && this->securityIPArrayTag_ == nullptr && this->securityIPList_ == nullptr && this->securityIPNetType_ == nullptr && this->securityIPType_ == nullptr; };
      // securityIPArrayName Field Functions 
      bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
      void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
      inline string getSecurityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
      inline SecurityIPArrays& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


      // securityIPArrayTag Field Functions 
      bool hasSecurityIPArrayTag() const { return this->securityIPArrayTag_ != nullptr;};
      void deleteSecurityIPArrayTag() { this->securityIPArrayTag_ = nullptr;};
      inline string getSecurityIPArrayTag() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayTag_, "") };
      inline SecurityIPArrays& setSecurityIPArrayTag(string securityIPArrayTag) { DARABONBA_PTR_SET_VALUE(securityIPArrayTag_, securityIPArrayTag) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline SecurityIPArrays& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      // securityIPNetType Field Functions 
      bool hasSecurityIPNetType() const { return this->securityIPNetType_ != nullptr;};
      void deleteSecurityIPNetType() { this->securityIPNetType_ = nullptr;};
      inline string getSecurityIPNetType() const { DARABONBA_PTR_GET_DEFAULT(securityIPNetType_, "") };
      inline SecurityIPArrays& setSecurityIPNetType(string securityIPNetType) { DARABONBA_PTR_SET_VALUE(securityIPNetType_, securityIPNetType) };


      // securityIPType Field Functions 
      bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
      void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
      inline string getSecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
      inline SecurityIPArrays& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    protected:
      shared_ptr<string> securityIPArrayName_ {};
      shared_ptr<string> securityIPArrayTag_ {};
      shared_ptr<string> securityIPList_ {};
      shared_ptr<string> securityIPNetType_ {};
      shared_ptr<string> securityIPType_ {};
    };

    class SecurityGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroups& obj) { 
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      };
      SecurityGroups() = default ;
      SecurityGroups(const SecurityGroups &) = default ;
      SecurityGroups(SecurityGroups &&) = default ;
      SecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroups() = default ;
      SecurityGroups& operator=(const SecurityGroups &) = default ;
      SecurityGroups& operator=(SecurityGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->netType_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupName_ == nullptr; };
      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline SecurityGroups& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SecurityGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupName Field Functions 
      bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
      void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
      inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
      inline SecurityGroups& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    protected:
      shared_ptr<string> netType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<string> securityGroupName_ {};
    };

    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PortDescription, portDescription_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PortDescription, portDescription_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->endpointId_ == nullptr && this->IP_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr && this->portDescription_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Endpoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Endpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline Endpoints& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline Endpoints& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Endpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // portDescription Field Functions 
      bool hasPortDescription() const { return this->portDescription_ != nullptr;};
      void deletePortDescription() { this->portDescription_ = nullptr;};
      inline string getPortDescription() const { DARABONBA_PTR_GET_DEFAULT(portDescription_, "") };
      inline Endpoints& setPortDescription(string portDescription) { DARABONBA_PTR_SET_VALUE(portDescription_, portDescription) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> endpointId_ {};
      shared_ptr<string> IP_ {};
      shared_ptr<string> netType_ {};
      shared_ptr<string> port_ {};
      shared_ptr<string> portDescription_ {};
    };

    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentClass, componentClass_);
        DARABONBA_PTR_TO_JSON(ComponentClassDescription, componentClassDescription_);
        DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
        DARABONBA_PTR_TO_JSON(ComponentMaxReplica, componentMaxReplica_);
        DARABONBA_PTR_TO_JSON(ComponentReplica, componentReplica_);
        DARABONBA_PTR_TO_JSON(ComponentReplicaGroupName, componentReplicaGroupName_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
        DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
        DARABONBA_PTR_TO_JSON(SecurityIPArrays, securityIPArrays_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Topology, topology_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentClass, componentClass_);
        DARABONBA_PTR_FROM_JSON(ComponentClassDescription, componentClassDescription_);
        DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
        DARABONBA_PTR_FROM_JSON(ComponentMaxReplica, componentMaxReplica_);
        DARABONBA_PTR_FROM_JSON(ComponentReplica, componentReplica_);
        DARABONBA_PTR_FROM_JSON(ComponentReplicaGroupName, componentReplicaGroupName_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
        DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
        DARABONBA_PTR_FROM_JSON(SecurityIPArrays, securityIPArrays_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Topology, topology_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Topology : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Topology& obj) { 
          DARABONBA_PTR_TO_JSON(Children, children_);
          DARABONBA_PTR_TO_JSON(Layer, layer_);
          DARABONBA_PTR_TO_JSON(Parents, parents_);
        };
        friend void from_json(const Darabonba::Json& j, Topology& obj) { 
          DARABONBA_PTR_FROM_JSON(Children, children_);
          DARABONBA_PTR_FROM_JSON(Layer, layer_);
          DARABONBA_PTR_FROM_JSON(Parents, parents_);
        };
        Topology() = default ;
        Topology(const Topology &) = default ;
        Topology(Topology &&) = default ;
        Topology(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Topology() = default ;
        Topology& operator=(const Topology &) = default ;
        Topology& operator=(Topology &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->children_ == nullptr
        && this->layer_ == nullptr && this->parents_ == nullptr; };
        // children Field Functions 
        bool hasChildren() const { return this->children_ != nullptr;};
        void deleteChildren() { this->children_ = nullptr;};
        inline const vector<string> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<string>) };
        inline vector<string> getChildren() { DARABONBA_PTR_GET(children_, vector<string>) };
        inline Topology& setChildren(const vector<string> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
        inline Topology& setChildren(vector<string> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


        // layer Field Functions 
        bool hasLayer() const { return this->layer_ != nullptr;};
        void deleteLayer() { this->layer_ = nullptr;};
        inline string getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
        inline Topology& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


        // parents Field Functions 
        bool hasParents() const { return this->parents_ != nullptr;};
        void deleteParents() { this->parents_ = nullptr;};
        inline const vector<string> & getParents() const { DARABONBA_PTR_GET_CONST(parents_, vector<string>) };
        inline vector<string> getParents() { DARABONBA_PTR_GET(parents_, vector<string>) };
        inline Topology& setParents(const vector<string> & parents) { DARABONBA_PTR_SET_VALUE(parents_, parents) };
        inline Topology& setParents(vector<string> && parents) { DARABONBA_PTR_SET_RVALUE(parents_, parents) };


      protected:
        shared_ptr<vector<string>> children_ {};
        shared_ptr<string> layer_ {};
        shared_ptr<vector<string>> parents_ {};
      };

      class SecurityIPArrays : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityIPArrays& obj) { 
          DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
          DARABONBA_PTR_TO_JSON(SecurityIPArrayTag, securityIPArrayTag_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_TO_JSON(SecurityIPNetType, securityIPNetType_);
          DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityIPArrays& obj) { 
          DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
          DARABONBA_PTR_FROM_JSON(SecurityIPArrayTag, securityIPArrayTag_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_FROM_JSON(SecurityIPNetType, securityIPNetType_);
          DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
        };
        SecurityIPArrays() = default ;
        SecurityIPArrays(const SecurityIPArrays &) = default ;
        SecurityIPArrays(SecurityIPArrays &&) = default ;
        SecurityIPArrays(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityIPArrays() = default ;
        SecurityIPArrays& operator=(const SecurityIPArrays &) = default ;
        SecurityIPArrays& operator=(SecurityIPArrays &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->securityIPArrayName_ == nullptr
        && this->securityIPArrayTag_ == nullptr && this->securityIPList_ == nullptr && this->securityIPNetType_ == nullptr && this->securityIPType_ == nullptr; };
        // securityIPArrayName Field Functions 
        bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
        void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
        inline string getSecurityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
        inline SecurityIPArrays& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


        // securityIPArrayTag Field Functions 
        bool hasSecurityIPArrayTag() const { return this->securityIPArrayTag_ != nullptr;};
        void deleteSecurityIPArrayTag() { this->securityIPArrayTag_ = nullptr;};
        inline string getSecurityIPArrayTag() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayTag_, "") };
        inline SecurityIPArrays& setSecurityIPArrayTag(string securityIPArrayTag) { DARABONBA_PTR_SET_VALUE(securityIPArrayTag_, securityIPArrayTag) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline SecurityIPArrays& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


        // securityIPNetType Field Functions 
        bool hasSecurityIPNetType() const { return this->securityIPNetType_ != nullptr;};
        void deleteSecurityIPNetType() { this->securityIPNetType_ = nullptr;};
        inline string getSecurityIPNetType() const { DARABONBA_PTR_GET_DEFAULT(securityIPNetType_, "") };
        inline SecurityIPArrays& setSecurityIPNetType(string securityIPNetType) { DARABONBA_PTR_SET_VALUE(securityIPNetType_, securityIPNetType) };


        // securityIPType Field Functions 
        bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
        void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
        inline string getSecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
        inline SecurityIPArrays& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


      protected:
        shared_ptr<string> securityIPArrayName_ {};
        shared_ptr<string> securityIPArrayTag_ {};
        shared_ptr<string> securityIPList_ {};
        shared_ptr<string> securityIPNetType_ {};
        shared_ptr<string> securityIPType_ {};
      };

      class SecurityGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityGroups& obj) { 
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
        };
        SecurityGroups() = default ;
        SecurityGroups(const SecurityGroups &) = default ;
        SecurityGroups(SecurityGroups &&) = default ;
        SecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityGroups() = default ;
        SecurityGroups& operator=(const SecurityGroups &) = default ;
        SecurityGroups& operator=(SecurityGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->netType_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupName_ == nullptr; };
        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline SecurityGroups& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SecurityGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // securityGroupName Field Functions 
        bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
        void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
        inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
        inline SecurityGroups& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


      protected:
        shared_ptr<string> netType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> securityGroupName_ {};
      };

      virtual bool empty() const override { return this->componentClass_ == nullptr
        && this->componentClassDescription_ == nullptr && this->componentId_ == nullptr && this->componentMaxReplica_ == nullptr && this->componentReplica_ == nullptr && this->componentReplicaGroupName_ == nullptr
        && this->componentType_ == nullptr && this->securityGroups_ == nullptr && this->securityIPArrays_ == nullptr && this->status_ == nullptr && this->topology_ == nullptr; };
      // componentClass Field Functions 
      bool hasComponentClass() const { return this->componentClass_ != nullptr;};
      void deleteComponentClass() { this->componentClass_ = nullptr;};
      inline string getComponentClass() const { DARABONBA_PTR_GET_DEFAULT(componentClass_, "") };
      inline Components& setComponentClass(string componentClass) { DARABONBA_PTR_SET_VALUE(componentClass_, componentClass) };


      // componentClassDescription Field Functions 
      bool hasComponentClassDescription() const { return this->componentClassDescription_ != nullptr;};
      void deleteComponentClassDescription() { this->componentClassDescription_ = nullptr;};
      inline string getComponentClassDescription() const { DARABONBA_PTR_GET_DEFAULT(componentClassDescription_, "") };
      inline Components& setComponentClassDescription(string componentClassDescription) { DARABONBA_PTR_SET_VALUE(componentClassDescription_, componentClassDescription) };


      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
      inline Components& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


      // componentMaxReplica Field Functions 
      bool hasComponentMaxReplica() const { return this->componentMaxReplica_ != nullptr;};
      void deleteComponentMaxReplica() { this->componentMaxReplica_ = nullptr;};
      inline int64_t getComponentMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(componentMaxReplica_, 0L) };
      inline Components& setComponentMaxReplica(int64_t componentMaxReplica) { DARABONBA_PTR_SET_VALUE(componentMaxReplica_, componentMaxReplica) };


      // componentReplica Field Functions 
      bool hasComponentReplica() const { return this->componentReplica_ != nullptr;};
      void deleteComponentReplica() { this->componentReplica_ = nullptr;};
      inline int64_t getComponentReplica() const { DARABONBA_PTR_GET_DEFAULT(componentReplica_, 0L) };
      inline Components& setComponentReplica(int64_t componentReplica) { DARABONBA_PTR_SET_VALUE(componentReplica_, componentReplica) };


      // componentReplicaGroupName Field Functions 
      bool hasComponentReplicaGroupName() const { return this->componentReplicaGroupName_ != nullptr;};
      void deleteComponentReplicaGroupName() { this->componentReplicaGroupName_ = nullptr;};
      inline string getComponentReplicaGroupName() const { DARABONBA_PTR_GET_DEFAULT(componentReplicaGroupName_, "") };
      inline Components& setComponentReplicaGroupName(string componentReplicaGroupName) { DARABONBA_PTR_SET_VALUE(componentReplicaGroupName_, componentReplicaGroupName) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline Components& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // securityGroups Field Functions 
      bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
      void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
      inline const vector<Components::SecurityGroups> & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<Components::SecurityGroups>) };
      inline vector<Components::SecurityGroups> getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<Components::SecurityGroups>) };
      inline Components& setSecurityGroups(const vector<Components::SecurityGroups> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
      inline Components& setSecurityGroups(vector<Components::SecurityGroups> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


      // securityIPArrays Field Functions 
      bool hasSecurityIPArrays() const { return this->securityIPArrays_ != nullptr;};
      void deleteSecurityIPArrays() { this->securityIPArrays_ = nullptr;};
      inline const vector<Components::SecurityIPArrays> & getSecurityIPArrays() const { DARABONBA_PTR_GET_CONST(securityIPArrays_, vector<Components::SecurityIPArrays>) };
      inline vector<Components::SecurityIPArrays> getSecurityIPArrays() { DARABONBA_PTR_GET(securityIPArrays_, vector<Components::SecurityIPArrays>) };
      inline Components& setSecurityIPArrays(const vector<Components::SecurityIPArrays> & securityIPArrays) { DARABONBA_PTR_SET_VALUE(securityIPArrays_, securityIPArrays) };
      inline Components& setSecurityIPArrays(vector<Components::SecurityIPArrays> && securityIPArrays) { DARABONBA_PTR_SET_RVALUE(securityIPArrays_, securityIPArrays) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Components& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // topology Field Functions 
      bool hasTopology() const { return this->topology_ != nullptr;};
      void deleteTopology() { this->topology_ = nullptr;};
      inline const Components::Topology & getTopology() const { DARABONBA_PTR_GET_CONST(topology_, Components::Topology) };
      inline Components::Topology getTopology() { DARABONBA_PTR_GET(topology_, Components::Topology) };
      inline Components& setTopology(const Components::Topology & topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };
      inline Components& setTopology(Components::Topology && topology) { DARABONBA_PTR_SET_RVALUE(topology_, topology) };


    protected:
      shared_ptr<string> componentClass_ {};
      shared_ptr<string> componentClassDescription_ {};
      shared_ptr<string> componentId_ {};
      shared_ptr<int64_t> componentMaxReplica_ {};
      shared_ptr<int64_t> componentReplica_ {};
      shared_ptr<string> componentReplicaGroupName_ {};
      shared_ptr<string> componentType_ {};
      shared_ptr<vector<Components::SecurityGroups>> securityGroups_ {};
      shared_ptr<vector<Components::SecurityIPArrays>> securityIPArrays_ {};
      shared_ptr<string> status_ {};
      shared_ptr<Components::Topology> topology_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->architecture_ == nullptr && this->components_ == nullptr && this->creationTime_ == nullptr && this->DBClusterId_ == nullptr
        && this->description_ == nullptr && this->endpoints_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->lockMode_ == nullptr
        && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->payType_ == nullptr && this->polarFSInstanceId_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->securityGroups_ == nullptr && this->securityIPArrays_ == nullptr && this->serverlessType_ == nullptr && this->status_ == nullptr
        && this->upgradeAvailable_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->version_ == nullptr && this->zoneId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationAttributeResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeApplicationAttributeResponseBody& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeApplicationAttributeResponseBody& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<DescribeApplicationAttributeResponseBody::Components>) };
    inline vector<DescribeApplicationAttributeResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<DescribeApplicationAttributeResponseBody::Components>) };
    inline DescribeApplicationAttributeResponseBody& setComponents(const vector<DescribeApplicationAttributeResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeApplicationAttributeResponseBody& setComponents(vector<DescribeApplicationAttributeResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeApplicationAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApplicationAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<DescribeApplicationAttributeResponseBody::Endpoints>) };
    inline vector<DescribeApplicationAttributeResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<DescribeApplicationAttributeResponseBody::Endpoints>) };
    inline DescribeApplicationAttributeResponseBody& setEndpoints(const vector<DescribeApplicationAttributeResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeApplicationAttributeResponseBody& setEndpoints(vector<DescribeApplicationAttributeResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeApplicationAttributeResponseBody& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeApplicationAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeApplicationAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // polarFSInstanceId Field Functions 
    bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
    void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
    inline string getPolarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
    inline DescribeApplicationAttributeResponseBody& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBody::SecurityGroups> & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<DescribeApplicationAttributeResponseBody::SecurityGroups>) };
    inline vector<DescribeApplicationAttributeResponseBody::SecurityGroups> getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<DescribeApplicationAttributeResponseBody::SecurityGroups>) };
    inline DescribeApplicationAttributeResponseBody& setSecurityGroups(const vector<DescribeApplicationAttributeResponseBody::SecurityGroups> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline DescribeApplicationAttributeResponseBody& setSecurityGroups(vector<DescribeApplicationAttributeResponseBody::SecurityGroups> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // securityIPArrays Field Functions 
    bool hasSecurityIPArrays() const { return this->securityIPArrays_ != nullptr;};
    void deleteSecurityIPArrays() { this->securityIPArrays_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBody::SecurityIPArrays> & getSecurityIPArrays() const { DARABONBA_PTR_GET_CONST(securityIPArrays_, vector<DescribeApplicationAttributeResponseBody::SecurityIPArrays>) };
    inline vector<DescribeApplicationAttributeResponseBody::SecurityIPArrays> getSecurityIPArrays() { DARABONBA_PTR_GET(securityIPArrays_, vector<DescribeApplicationAttributeResponseBody::SecurityIPArrays>) };
    inline DescribeApplicationAttributeResponseBody& setSecurityIPArrays(const vector<DescribeApplicationAttributeResponseBody::SecurityIPArrays> & securityIPArrays) { DARABONBA_PTR_SET_VALUE(securityIPArrays_, securityIPArrays) };
    inline DescribeApplicationAttributeResponseBody& setSecurityIPArrays(vector<DescribeApplicationAttributeResponseBody::SecurityIPArrays> && securityIPArrays) { DARABONBA_PTR_SET_RVALUE(securityIPArrays_, securityIPArrays) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeApplicationAttributeResponseBody& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApplicationAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // upgradeAvailable Field Functions 
    bool hasUpgradeAvailable() const { return this->upgradeAvailable_ != nullptr;};
    void deleteUpgradeAvailable() { this->upgradeAvailable_ = nullptr;};
    inline string getUpgradeAvailable() const { DARABONBA_PTR_GET_DEFAULT(upgradeAvailable_, "") };
    inline DescribeApplicationAttributeResponseBody& setUpgradeAvailable(string upgradeAvailable) { DARABONBA_PTR_SET_VALUE(upgradeAvailable_, upgradeAvailable) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeApplicationAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeApplicationAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeApplicationAttributeResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeApplicationAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> applicationType_ {};
    shared_ptr<string> architecture_ {};
    shared_ptr<vector<DescribeApplicationAttributeResponseBody::Components>> components_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<DescribeApplicationAttributeResponseBody::Endpoints>> endpoints_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<bool> expired_ {};
    shared_ptr<string> lockMode_ {};
    shared_ptr<string> maintainEndTime_ {};
    shared_ptr<string> maintainStartTime_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> polarFSInstanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeApplicationAttributeResponseBody::SecurityGroups>> securityGroups_ {};
    shared_ptr<vector<DescribeApplicationAttributeResponseBody::SecurityIPArrays>> securityIPArrays_ {};
    shared_ptr<string> serverlessType_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> upgradeAvailable_ {};
    // VPC ID
    shared_ptr<string> VPCId_ {};
    // VSwitch ID
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> version_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
