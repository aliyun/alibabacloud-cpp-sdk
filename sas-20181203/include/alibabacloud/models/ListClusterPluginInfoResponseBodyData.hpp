// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERPLUGININFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterPluginInfoResponseBodyDataNodePluginInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterPluginInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterPluginInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(NodePluginInfoList, nodePluginInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterPluginInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(NodePluginInfoList, nodePluginInfoList_);
    };
    ListClusterPluginInfoResponseBodyData() = default ;
    ListClusterPluginInfoResponseBodyData(const ListClusterPluginInfoResponseBodyData &) = default ;
    ListClusterPluginInfoResponseBodyData(ListClusterPluginInfoResponseBodyData &&) = default ;
    ListClusterPluginInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterPluginInfoResponseBodyData() = default ;
    ListClusterPluginInfoResponseBodyData& operator=(const ListClusterPluginInfoResponseBodyData &) = default ;
    ListClusterPluginInfoResponseBodyData& operator=(ListClusterPluginInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->clusterStatus_ != nullptr && this->nodePluginInfoList_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterPluginInfoResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClusterPluginInfoResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string clusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline ListClusterPluginInfoResponseBodyData& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // nodePluginInfoList Field Functions 
    bool hasNodePluginInfoList() const { return this->nodePluginInfoList_ != nullptr;};
    void deleteNodePluginInfoList() { this->nodePluginInfoList_ = nullptr;};
    inline const vector<Models::ListClusterPluginInfoResponseBodyDataNodePluginInfoList> & nodePluginInfoList() const { DARABONBA_PTR_GET_CONST(nodePluginInfoList_, vector<Models::ListClusterPluginInfoResponseBodyDataNodePluginInfoList>) };
    inline vector<Models::ListClusterPluginInfoResponseBodyDataNodePluginInfoList> nodePluginInfoList() { DARABONBA_PTR_GET(nodePluginInfoList_, vector<Models::ListClusterPluginInfoResponseBodyDataNodePluginInfoList>) };
    inline ListClusterPluginInfoResponseBodyData& setNodePluginInfoList(const vector<Models::ListClusterPluginInfoResponseBodyDataNodePluginInfoList> & nodePluginInfoList) { DARABONBA_PTR_SET_VALUE(nodePluginInfoList_, nodePluginInfoList) };
    inline ListClusterPluginInfoResponseBodyData& setNodePluginInfoList(vector<Models::ListClusterPluginInfoResponseBodyDataNodePluginInfoList> && nodePluginInfoList) { DARABONBA_PTR_SET_RVALUE(nodePluginInfoList_, nodePluginInfoList) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   1: normal
    // *   2: abnormal
    // *   3: offline
    std::shared_ptr<string> clusterStatus_ = nullptr;
    // The plug-ins.
    std::shared_ptr<vector<Models::ListClusterPluginInfoResponseBodyDataNodePluginInfoList>> nodePluginInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
