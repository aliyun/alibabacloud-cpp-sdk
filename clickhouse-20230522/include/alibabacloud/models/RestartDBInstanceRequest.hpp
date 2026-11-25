// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class RestartDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RestartDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RestartDBInstanceRequest() = default ;
    RestartDBInstanceRequest(const RestartDBInstanceRequest &) = default ;
    RestartDBInstanceRequest(RestartDBInstanceRequest &&) = default ;
    RestartDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartDBInstanceRequest() = default ;
    RestartDBInstanceRequest& operator=(const RestartDBInstanceRequest &) = default ;
    RestartDBInstanceRequest& operator=(RestartDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingGroupId_ == nullptr
        && this->DBInstanceId_ == nullptr && this->nodeList_ == nullptr && this->regionId_ == nullptr; };
    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string getComputingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline RestartDBInstanceRequest& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline RestartDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline const vector<string> & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<string>) };
    inline vector<string> getNodeList() { DARABONBA_PTR_GET(nodeList_, vector<string>) };
    inline RestartDBInstanceRequest& setNodeList(const vector<string> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
    inline RestartDBInstanceRequest& setNodeList(vector<string> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RestartDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The compute group ID. This parameter is required when NodeList is specified. If only ComputingGroupId is specified without NodeList, the entire compute group is restarted. If neither is specified, the entire instance is restarted.
    shared_ptr<string> computingGroupId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The list of node IDs to restart. The elements are the NodeId values returned by DescribeDBInstanceNodes. The parameter format is NodeList.N. If this parameter is not specified or is empty, the entire instance or compute group is restarted based on the original logic. If this parameter is not empty, ComputingGroupId is required, and a maximum of 50 nodes can be specified at a time.
    shared_ptr<vector<string>> nodeList_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
