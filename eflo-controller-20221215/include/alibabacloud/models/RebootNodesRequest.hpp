// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class RebootNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, RebootNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    RebootNodesRequest() = default ;
    RebootNodesRequest(const RebootNodesRequest &) = default ;
    RebootNodesRequest(RebootNodesRequest &&) = default ;
    RebootNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootNodesRequest() = default ;
    RebootNodesRequest& operator=(const RebootNodesRequest &) = default ;
    RebootNodesRequest& operator=(RebootNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->ignoreFailedNodeTasks_ != nullptr && this->nodes_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RebootNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline RebootNodesRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline RebootNodesRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline RebootNodesRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to allow skipping failed nodes. Default value: False.
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // The nodes.
    std::shared_ptr<vector<string>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
