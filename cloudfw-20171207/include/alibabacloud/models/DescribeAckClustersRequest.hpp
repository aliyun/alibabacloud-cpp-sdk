// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(ConnectorStatus, connectorStatus_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(ConnectorStatus, connectorStatus_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeAckClustersRequest() = default ;
    DescribeAckClustersRequest(const DescribeAckClustersRequest &) = default ;
    DescribeAckClustersRequest(DescribeAckClustersRequest &&) = default ;
    DescribeAckClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClustersRequest() = default ;
    DescribeAckClustersRequest& operator=(const DescribeAckClustersRequest &) = default ;
    DescribeAckClustersRequest& operator=(DescribeAckClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterSpec_ == nullptr && this->connectorStatus_ == nullptr && this->memberUid_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->regionNo_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeAckClustersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeAckClustersRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeAckClustersRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // connectorStatus Field Functions 
    bool hasConnectorStatus() const { return this->connectorStatus_ != nullptr;};
    void deleteConnectorStatus() { this->connectorStatus_ = nullptr;};
    inline string getConnectorStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorStatus_, "") };
    inline DescribeAckClustersRequest& setConnectorStatus(string connectorStatus) { DARABONBA_PTR_SET_VALUE(connectorStatus_, connectorStatus) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeAckClustersRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline DescribeAckClustersRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAckClustersRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeAckClustersRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> clusterSpec_ {};
    shared_ptr<string> connectorStatus_ {};
    shared_ptr<string> memberUid_ {};
    // This parameter is required.
    shared_ptr<string> pageNo_ {};
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
