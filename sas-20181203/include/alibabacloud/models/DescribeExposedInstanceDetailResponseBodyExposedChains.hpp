// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODYEXPOSEDCHAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODYEXPOSEDCHAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList.hpp>
#include <alibabacloud/models/DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList.hpp>
#include <alibabacloud/models/DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceDetailResponseBodyExposedChains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceDetailResponseBodyExposedChains& obj) { 
      DARABONBA_PTR_TO_JSON(AllVulList, allVulList_);
      DARABONBA_PTR_TO_JSON(CspmRiskList, cspmRiskList_);
      DARABONBA_PTR_TO_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_TO_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_TO_JSON(ExposureType, exposureType_);
      DARABONBA_PTR_TO_JSON(ExposureTypeId, exposureTypeId_);
      DARABONBA_PTR_TO_JSON(GroupNo, groupNo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(RealVulList, realVulList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceDetailResponseBodyExposedChains& obj) { 
      DARABONBA_PTR_FROM_JSON(AllVulList, allVulList_);
      DARABONBA_PTR_FROM_JSON(CspmRiskList, cspmRiskList_);
      DARABONBA_PTR_FROM_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_FROM_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_FROM_JSON(ExposureType, exposureType_);
      DARABONBA_PTR_FROM_JSON(ExposureTypeId, exposureTypeId_);
      DARABONBA_PTR_FROM_JSON(GroupNo, groupNo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(RealVulList, realVulList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeExposedInstanceDetailResponseBodyExposedChains() = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChains(const DescribeExposedInstanceDetailResponseBodyExposedChains &) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChains(DescribeExposedInstanceDetailResponseBodyExposedChains &&) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceDetailResponseBodyExposedChains() = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChains& operator=(const DescribeExposedInstanceDetailResponseBodyExposedChains &) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChains& operator=(DescribeExposedInstanceDetailResponseBodyExposedChains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allVulList_ != nullptr
        && this->cspmRiskList_ != nullptr && this->exposureComponent_ != nullptr && this->exposureIp_ != nullptr && this->exposurePort_ != nullptr && this->exposureType_ != nullptr
        && this->exposureTypeId_ != nullptr && this->groupNo_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->realVulList_ != nullptr && this->regionId_ != nullptr && this->uuid_ != nullptr; };
    // allVulList Field Functions 
    bool hasAllVulList() const { return this->allVulList_ != nullptr;};
    void deleteAllVulList() { this->allVulList_ = nullptr;};
    inline const vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList> & allVulList() const { DARABONBA_PTR_GET_CONST(allVulList_, vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList>) };
    inline vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList> allVulList() { DARABONBA_PTR_GET(allVulList_, vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList>) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setAllVulList(const vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList> & allVulList) { DARABONBA_PTR_SET_VALUE(allVulList_, allVulList) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setAllVulList(vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList> && allVulList) { DARABONBA_PTR_SET_RVALUE(allVulList_, allVulList) };


    // cspmRiskList Field Functions 
    bool hasCspmRiskList() const { return this->cspmRiskList_ != nullptr;};
    void deleteCspmRiskList() { this->cspmRiskList_ = nullptr;};
    inline const vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList> & cspmRiskList() const { DARABONBA_PTR_GET_CONST(cspmRiskList_, vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList>) };
    inline vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList> cspmRiskList() { DARABONBA_PTR_GET(cspmRiskList_, vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList>) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setCspmRiskList(const vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList> & cspmRiskList) { DARABONBA_PTR_SET_VALUE(cspmRiskList_, cspmRiskList) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setCspmRiskList(vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList> && cspmRiskList) { DARABONBA_PTR_SET_RVALUE(cspmRiskList_, cspmRiskList) };


    // exposureComponent Field Functions 
    bool hasExposureComponent() const { return this->exposureComponent_ != nullptr;};
    void deleteExposureComponent() { this->exposureComponent_ = nullptr;};
    inline string exposureComponent() const { DARABONBA_PTR_GET_DEFAULT(exposureComponent_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setExposureComponent(string exposureComponent) { DARABONBA_PTR_SET_VALUE(exposureComponent_, exposureComponent) };


    // exposureIp Field Functions 
    bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
    void deleteExposureIp() { this->exposureIp_ = nullptr;};
    inline string exposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


    // exposurePort Field Functions 
    bool hasExposurePort() const { return this->exposurePort_ != nullptr;};
    void deleteExposurePort() { this->exposurePort_ = nullptr;};
    inline string exposurePort() const { DARABONBA_PTR_GET_DEFAULT(exposurePort_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setExposurePort(string exposurePort) { DARABONBA_PTR_SET_VALUE(exposurePort_, exposurePort) };


    // exposureType Field Functions 
    bool hasExposureType() const { return this->exposureType_ != nullptr;};
    void deleteExposureType() { this->exposureType_ = nullptr;};
    inline string exposureType() const { DARABONBA_PTR_GET_DEFAULT(exposureType_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setExposureType(string exposureType) { DARABONBA_PTR_SET_VALUE(exposureType_, exposureType) };


    // exposureTypeId Field Functions 
    bool hasExposureTypeId() const { return this->exposureTypeId_ != nullptr;};
    void deleteExposureTypeId() { this->exposureTypeId_ = nullptr;};
    inline string exposureTypeId() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeId_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setExposureTypeId(string exposureTypeId) { DARABONBA_PTR_SET_VALUE(exposureTypeId_, exposureTypeId) };


    // groupNo Field Functions 
    bool hasGroupNo() const { return this->groupNo_ != nullptr;};
    void deleteGroupNo() { this->groupNo_ = nullptr;};
    inline string groupNo() const { DARABONBA_PTR_GET_DEFAULT(groupNo_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setGroupNo(string groupNo) { DARABONBA_PTR_SET_VALUE(groupNo_, groupNo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // realVulList Field Functions 
    bool hasRealVulList() const { return this->realVulList_ != nullptr;};
    void deleteRealVulList() { this->realVulList_ = nullptr;};
    inline const vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList> & realVulList() const { DARABONBA_PTR_GET_CONST(realVulList_, vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList>) };
    inline vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList> realVulList() { DARABONBA_PTR_GET(realVulList_, vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList>) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setRealVulList(const vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList> & realVulList) { DARABONBA_PTR_SET_VALUE(realVulList_, realVulList) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setRealVulList(vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList> && realVulList) { DARABONBA_PTR_SET_RVALUE(realVulList_, realVulList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChains& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The information about all vulnerabilities on the server.
    std::shared_ptr<vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsAllVulList>> allVulList_ = nullptr;
    // The list of configuration risks.
    std::shared_ptr<vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList>> cspmRiskList_ = nullptr;
    // The server component that is exposed on the Internet.
    std::shared_ptr<string> exposureComponent_ = nullptr;
    // The IP address of the server or the public endpoint of the database.
    std::shared_ptr<string> exposureIp_ = nullptr;
    // The port that is exposed on the Internet.
    std::shared_ptr<string> exposurePort_ = nullptr;
    // The resource from which the server or database is exposed. Valid values:
    // 
    // *   **INTERNET_IP**: the public IP address of an Elastic Compute Service (ECS) instance.
    // *   **SLB**: the public IP address of a Server Load Balancer (SLB) instance.
    // *   **EIP**: an elastic IP address (EIP).
    // *   **DNAT**: the Network Address Translation (NAT) gateway that connects to the Internet by using the Destination Network Address Translation (DNAT) feature
    // *   **DB_CONNECTION**: the public endpoint of a database.
    std::shared_ptr<string> exposureType_ = nullptr;
    // The ID of the instance to which the resource belongs. The valid values of this parameter vary based on the value of the ExposureType parameter.
    // 
    // *   If the value of the ExposureType parameter is **INTERNET_IP**, this parameter is empty.
    // *   If the value of the ExposureType parameter is **SLB**, the value of this parameter is the ID of the SLB instance.
    // *   If the value of the ExposureType parameter is **EIP**, the value of this parameter is the ID of the EIP.
    // *   If the value of the ExposureType parameter is **DNAT**, the value of this parameter is the ID of the NAT gateway.
    // *   If the value of the ExposureType parameter is **DB_CONNECTION**, the value of this parameter is the ID of the database.
    std::shared_ptr<string> exposureTypeId_ = nullptr;
    // The server group to which the server belongs.
    std::shared_ptr<string> groupNo_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The information about the vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<vector<Models::DescribeExposedInstanceDetailResponseBodyExposedChainsRealVulList>> realVulList_ = nullptr;
    // The region ID.
    // 
    // >  For information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The UUID of the server or the instance ID of the database.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
