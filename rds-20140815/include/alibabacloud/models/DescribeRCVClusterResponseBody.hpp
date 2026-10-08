// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCVCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCVCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCVClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCVClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(MysqlOperator, mysqlOperator_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(VClusterStatus, VClusterStatus_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCVClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(MysqlOperator, mysqlOperator_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(VClusterStatus, VClusterStatus_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeRCVClusterResponseBody() = default ;
    DescribeRCVClusterResponseBody(const DescribeRCVClusterResponseBody &) = default ;
    DescribeRCVClusterResponseBody(DescribeRCVClusterResponseBody &&) = default ;
    DescribeRCVClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCVClusterResponseBody() = default ;
    DescribeRCVClusterResponseBody& operator=(const DescribeRCVClusterResponseBody &) = default ;
    DescribeRCVClusterResponseBody& operator=(DescribeRCVClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MysqlOperator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MysqlOperator& obj) { 
        DARABONBA_PTR_TO_JSON(DashboardPublicEndpoint, dashboardPublicEndpoint_);
        DARABONBA_PTR_TO_JSON(DashboardUsername, dashboardUsername_);
        DARABONBA_PTR_TO_JSON(DashboardVpcEndpoint, dashboardVpcEndpoint_);
        DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, MysqlOperator& obj) { 
        DARABONBA_PTR_FROM_JSON(DashboardPublicEndpoint, dashboardPublicEndpoint_);
        DARABONBA_PTR_FROM_JSON(DashboardUsername, dashboardUsername_);
        DARABONBA_PTR_FROM_JSON(DashboardVpcEndpoint, dashboardVpcEndpoint_);
        DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      MysqlOperator() = default ;
      MysqlOperator(const MysqlOperator &) = default ;
      MysqlOperator(MysqlOperator &&) = default ;
      MysqlOperator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MysqlOperator() = default ;
      MysqlOperator& operator=(const MysqlOperator &) = default ;
      MysqlOperator& operator=(MysqlOperator &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dashboardPublicEndpoint_ == nullptr
        && this->dashboardUsername_ == nullptr && this->dashboardVpcEndpoint_ == nullptr && this->deployTime_ == nullptr && this->status_ == nullptr; };
      // dashboardPublicEndpoint Field Functions 
      bool hasDashboardPublicEndpoint() const { return this->dashboardPublicEndpoint_ != nullptr;};
      void deleteDashboardPublicEndpoint() { this->dashboardPublicEndpoint_ = nullptr;};
      inline string getDashboardPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(dashboardPublicEndpoint_, "") };
      inline MysqlOperator& setDashboardPublicEndpoint(string dashboardPublicEndpoint) { DARABONBA_PTR_SET_VALUE(dashboardPublicEndpoint_, dashboardPublicEndpoint) };


      // dashboardUsername Field Functions 
      bool hasDashboardUsername() const { return this->dashboardUsername_ != nullptr;};
      void deleteDashboardUsername() { this->dashboardUsername_ = nullptr;};
      inline string getDashboardUsername() const { DARABONBA_PTR_GET_DEFAULT(dashboardUsername_, "") };
      inline MysqlOperator& setDashboardUsername(string dashboardUsername) { DARABONBA_PTR_SET_VALUE(dashboardUsername_, dashboardUsername) };


      // dashboardVpcEndpoint Field Functions 
      bool hasDashboardVpcEndpoint() const { return this->dashboardVpcEndpoint_ != nullptr;};
      void deleteDashboardVpcEndpoint() { this->dashboardVpcEndpoint_ = nullptr;};
      inline string getDashboardVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(dashboardVpcEndpoint_, "") };
      inline MysqlOperator& setDashboardVpcEndpoint(string dashboardVpcEndpoint) { DARABONBA_PTR_SET_VALUE(dashboardVpcEndpoint_, dashboardVpcEndpoint) };


      // deployTime Field Functions 
      bool hasDeployTime() const { return this->deployTime_ != nullptr;};
      void deleteDeployTime() { this->deployTime_ = nullptr;};
      inline string getDeployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, "") };
      inline MysqlOperator& setDeployTime(string deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MysqlOperator& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> dashboardPublicEndpoint_ {};
      shared_ptr<string> dashboardUsername_ {};
      shared_ptr<string> dashboardVpcEndpoint_ {};
      shared_ptr<string> deployTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->mysqlOperator_ == nullptr && this->region_ == nullptr && this->requestId_ == nullptr && this->supportDiskPerformanceLevel_ == nullptr
        && this->VClusterStatus_ == nullptr && this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeRCVClusterResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeRCVClusterResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // mysqlOperator Field Functions 
    bool hasMysqlOperator() const { return this->mysqlOperator_ != nullptr;};
    void deleteMysqlOperator() { this->mysqlOperator_ = nullptr;};
    inline const DescribeRCVClusterResponseBody::MysqlOperator & getMysqlOperator() const { DARABONBA_PTR_GET_CONST(mysqlOperator_, DescribeRCVClusterResponseBody::MysqlOperator) };
    inline DescribeRCVClusterResponseBody::MysqlOperator getMysqlOperator() { DARABONBA_PTR_GET(mysqlOperator_, DescribeRCVClusterResponseBody::MysqlOperator) };
    inline DescribeRCVClusterResponseBody& setMysqlOperator(const DescribeRCVClusterResponseBody::MysqlOperator & mysqlOperator) { DARABONBA_PTR_SET_VALUE(mysqlOperator_, mysqlOperator) };
    inline DescribeRCVClusterResponseBody& setMysqlOperator(DescribeRCVClusterResponseBody::MysqlOperator && mysqlOperator) { DARABONBA_PTR_SET_RVALUE(mysqlOperator_, mysqlOperator) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeRCVClusterResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCVClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportDiskPerformanceLevel Field Functions 
    bool hasSupportDiskPerformanceLevel() const { return this->supportDiskPerformanceLevel_ != nullptr;};
    void deleteSupportDiskPerformanceLevel() { this->supportDiskPerformanceLevel_ = nullptr;};
    inline const vector<string> & getSupportDiskPerformanceLevel() const { DARABONBA_PTR_GET_CONST(supportDiskPerformanceLevel_, vector<string>) };
    inline vector<string> getSupportDiskPerformanceLevel() { DARABONBA_PTR_GET(supportDiskPerformanceLevel_, vector<string>) };
    inline DescribeRCVClusterResponseBody& setSupportDiskPerformanceLevel(const vector<string> & supportDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };
    inline DescribeRCVClusterResponseBody& setSupportDiskPerformanceLevel(vector<string> && supportDiskPerformanceLevel) { DARABONBA_PTR_SET_RVALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };


    // VClusterStatus Field Functions 
    bool hasVClusterStatus() const { return this->VClusterStatus_ != nullptr;};
    void deleteVClusterStatus() { this->VClusterStatus_ = nullptr;};
    inline string getVClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(VClusterStatus_, "") };
    inline DescribeRCVClusterResponseBody& setVClusterStatus(string VClusterStatus) { DARABONBA_PTR_SET_VALUE(VClusterStatus_, VClusterStatus) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRCVClusterResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> clusterName_ {};
    shared_ptr<DescribeRCVClusterResponseBody::MysqlOperator> mysqlOperator_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> supportDiskPerformanceLevel_ {};
    shared_ptr<string> VClusterStatus_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
