// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfVersions, confVersions_);
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfVersions, confVersions_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeEpnInstanceAttributeResponseBody() = default ;
    DescribeEpnInstanceAttributeResponseBody(const DescribeEpnInstanceAttributeResponseBody &) = default ;
    DescribeEpnInstanceAttributeResponseBody(DescribeEpnInstanceAttributeResponseBody &&) = default ;
    DescribeEpnInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnInstanceAttributeResponseBody() = default ;
    DescribeEpnInstanceAttributeResponseBody& operator=(const DescribeEpnInstanceAttributeResponseBody &) = default ;
    DescribeEpnInstanceAttributeResponseBody& operator=(DescribeEpnInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
      };
      VSwitches() = default ;
      VSwitches(const VSwitches &) = default ;
      VSwitches(VSwitches &&) = default ;
      VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitches() = default ;
      VSwitches& operator=(const VSwitches &) = default ;
      VSwitches& operator=(VSwitches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->ensRegionId_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline VSwitches& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline VSwitches& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline VSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchName Field Functions 
      bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
      void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
      inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
      inline VSwitches& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


    protected:
      // The CIDR block.
      shared_ptr<string> cidrBlock_ {};
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      // The name of the vSwitch.
      shared_ptr<string> vSwitchName_ {};
    };

    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->isp_ == nullptr && this->privateIpAddress_ == nullptr && this->publicIpAddress_ == nullptr
        && this->status_ == nullptr; };
      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline Instances& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Instances& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // privateIpAddress Field Functions 
      bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
      void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
      inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
      inline Instances& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      // publicIpAddress Field Functions 
      bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
      void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
      inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
      inline Instances& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The ISP. Valid values:
      // 
      // *   cmcc: China Mobile
      // *   unicom: China Unicom
      // *   telecom: China Telecom
      shared_ptr<string> isp_ {};
      // The private IP address.
      shared_ptr<string> privateIpAddress_ {};
      // The public IP address.
      shared_ptr<string> publicIpAddress_ {};
      // The status of the instance. Valid values:
      // 
      // *   Running
      // *   Stopped
      // *   Expired
      shared_ptr<string> status_ {};
    };

    class ConfVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfVersions& obj) { 
        DARABONBA_PTR_TO_JSON(ConfVersion, confVersion_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, ConfVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfVersion, confVersion_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      };
      ConfVersions() = default ;
      ConfVersions(const ConfVersions &) = default ;
      ConfVersions(ConfVersions &&) = default ;
      ConfVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfVersions() = default ;
      ConfVersions& operator=(const ConfVersions &) = default ;
      ConfVersions& operator=(ConfVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->confVersion_ == nullptr
        && this->ensRegionId_ == nullptr; };
      // confVersion Field Functions 
      bool hasConfVersion() const { return this->confVersion_ != nullptr;};
      void deleteConfVersion() { this->confVersion_ = nullptr;};
      inline string getConfVersion() const { DARABONBA_PTR_GET_DEFAULT(confVersion_, "") };
      inline ConfVersions& setConfVersion(string confVersion) { DARABONBA_PTR_SET_VALUE(confVersion_, confVersion) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline ConfVersions& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    protected:
      // The version number.
      shared_ptr<string> confVersion_ {};
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
    };

    virtual bool empty() const override { return this->confVersions_ == nullptr
        && this->EPNInstanceId_ == nullptr && this->EPNInstanceName_ == nullptr && this->instances_ == nullptr && this->networkingModel_ == nullptr && this->requestId_ == nullptr
        && this->vSwitches_ == nullptr; };
    // confVersions Field Functions 
    bool hasConfVersions() const { return this->confVersions_ != nullptr;};
    void deleteConfVersions() { this->confVersions_ = nullptr;};
    inline const vector<DescribeEpnInstanceAttributeResponseBody::ConfVersions> & getConfVersions() const { DARABONBA_PTR_GET_CONST(confVersions_, vector<DescribeEpnInstanceAttributeResponseBody::ConfVersions>) };
    inline vector<DescribeEpnInstanceAttributeResponseBody::ConfVersions> getConfVersions() { DARABONBA_PTR_GET(confVersions_, vector<DescribeEpnInstanceAttributeResponseBody::ConfVersions>) };
    inline DescribeEpnInstanceAttributeResponseBody& setConfVersions(const vector<DescribeEpnInstanceAttributeResponseBody::ConfVersions> & confVersions) { DARABONBA_PTR_SET_VALUE(confVersions_, confVersions) };
    inline DescribeEpnInstanceAttributeResponseBody& setConfVersions(vector<DescribeEpnInstanceAttributeResponseBody::ConfVersions> && confVersions) { DARABONBA_PTR_SET_RVALUE(confVersions_, confVersions) };


    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string getEPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // EPNInstanceName Field Functions 
    bool hasEPNInstanceName() const { return this->EPNInstanceName_ != nullptr;};
    void deleteEPNInstanceName() { this->EPNInstanceName_ = nullptr;};
    inline string getEPNInstanceName() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceName_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setEPNInstanceName(string EPNInstanceName) { DARABONBA_PTR_SET_VALUE(EPNInstanceName_, EPNInstanceName) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeEpnInstanceAttributeResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeEpnInstanceAttributeResponseBody::Instances>) };
    inline vector<DescribeEpnInstanceAttributeResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeEpnInstanceAttributeResponseBody::Instances>) };
    inline DescribeEpnInstanceAttributeResponseBody& setInstances(const vector<DescribeEpnInstanceAttributeResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeEpnInstanceAttributeResponseBody& setInstances(vector<DescribeEpnInstanceAttributeResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // networkingModel Field Functions 
    bool hasNetworkingModel() const { return this->networkingModel_ != nullptr;};
    void deleteNetworkingModel() { this->networkingModel_ = nullptr;};
    inline string getNetworkingModel() const { DARABONBA_PTR_GET_DEFAULT(networkingModel_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setNetworkingModel(string networkingModel) { DARABONBA_PTR_SET_VALUE(networkingModel_, networkingModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<DescribeEpnInstanceAttributeResponseBody::VSwitches> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<DescribeEpnInstanceAttributeResponseBody::VSwitches>) };
    inline vector<DescribeEpnInstanceAttributeResponseBody::VSwitches> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<DescribeEpnInstanceAttributeResponseBody::VSwitches>) };
    inline DescribeEpnInstanceAttributeResponseBody& setVSwitches(const vector<DescribeEpnInstanceAttributeResponseBody::VSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeEpnInstanceAttributeResponseBody& setVSwitches(vector<DescribeEpnInstanceAttributeResponseBody::VSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    // The information about the EPN configurations.
    shared_ptr<vector<DescribeEpnInstanceAttributeResponseBody::ConfVersions>> confVersions_ {};
    // The ID of the EPN instance.
    shared_ptr<string> EPNInstanceId_ {};
    // The name of the EPN instance.
    shared_ptr<string> EPNInstanceName_ {};
    // The information about the instance.
    shared_ptr<vector<DescribeEpnInstanceAttributeResponseBody::Instances>> instances_ {};
    // The networking mode. Valid values:
    // 
    // *   SpeedUp: intelligent acceleration network (Internet)
    // *   Connection: internal network
    // *   SpeedUpAndConnection: intelligent acceleration network and internal network
    shared_ptr<string> networkingModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details of the vSwitch.
    shared_ptr<vector<DescribeEpnInstanceAttributeResponseBody::VSwitches>> vSwitches_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
