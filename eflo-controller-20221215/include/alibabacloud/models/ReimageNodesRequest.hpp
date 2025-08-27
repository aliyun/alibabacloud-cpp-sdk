// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REIMAGENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REIMAGENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReimageNodesRequestNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ReimageNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReimageNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ReimageNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ReimageNodesRequest() = default ;
    ReimageNodesRequest(const ReimageNodesRequest &) = default ;
    ReimageNodesRequest(ReimageNodesRequest &&) = default ;
    ReimageNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReimageNodesRequest() = default ;
    ReimageNodesRequest& operator=(const ReimageNodesRequest &) = default ;
    ReimageNodesRequest& operator=(ReimageNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->ignoreFailedNodeTasks_ != nullptr && this->nodes_ != nullptr && this->userData_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ReimageNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ReimageNodesRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<ReimageNodesRequestNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<ReimageNodesRequestNodes>) };
    inline vector<ReimageNodesRequestNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<ReimageNodesRequestNodes>) };
    inline ReimageNodesRequest& setNodes(const vector<ReimageNodesRequestNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ReimageNodesRequest& setNodes(vector<ReimageNodesRequestNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ReimageNodesRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to allow skipping failed nodes. Default value: False.
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // The nodes.
    std::shared_ptr<vector<ReimageNodesRequestNodes>> nodes_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
