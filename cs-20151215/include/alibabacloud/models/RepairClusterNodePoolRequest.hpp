// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPAIRCLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPAIRCLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RepairClusterNodePoolRequestOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class RepairClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepairClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auto_restart, autoRestart_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(operations, operations_);
    };
    friend void from_json(const Darabonba::Json& j, RepairClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_restart, autoRestart_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(operations, operations_);
    };
    RepairClusterNodePoolRequest() = default ;
    RepairClusterNodePoolRequest(const RepairClusterNodePoolRequest &) = default ;
    RepairClusterNodePoolRequest(RepairClusterNodePoolRequest &&) = default ;
    RepairClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepairClusterNodePoolRequest() = default ;
    RepairClusterNodePoolRequest& operator=(const RepairClusterNodePoolRequest &) = default ;
    RepairClusterNodePoolRequest& operator=(RepairClusterNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRestart_ != nullptr
        && this->nodes_ != nullptr && this->operations_ != nullptr; };
    // autoRestart Field Functions 
    bool hasAutoRestart() const { return this->autoRestart_ != nullptr;};
    void deleteAutoRestart() { this->autoRestart_ = nullptr;};
    inline bool autoRestart() const { DARABONBA_PTR_GET_DEFAULT(autoRestart_, false) };
    inline RepairClusterNodePoolRequest& setAutoRestart(bool autoRestart) { DARABONBA_PTR_SET_VALUE(autoRestart_, autoRestart) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline RepairClusterNodePoolRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline RepairClusterNodePoolRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<RepairClusterNodePoolRequestOperations> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<RepairClusterNodePoolRequestOperations>) };
    inline vector<RepairClusterNodePoolRequestOperations> operations() { DARABONBA_PTR_GET(operations_, vector<RepairClusterNodePoolRequestOperations>) };
    inline RepairClusterNodePoolRequest& setOperations(const vector<RepairClusterNodePoolRequestOperations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline RepairClusterNodePoolRequest& setOperations(vector<RepairClusterNodePoolRequestOperations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


  protected:
    // Specifies whether to enable automatic instance restart.
    // 
    // **
    // 
    // **Warning** This parameter is deprecated. Any configured values will be ignored.
    std::shared_ptr<bool> autoRestart_ = nullptr;
    // The list of nodes. If not specified, all nodes in the node pool are selected.
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    // The list of repair operations to execute. If not specified, all repair operations are executed. Typically, you do not need to specify this parameter.
    std::shared_ptr<vector<RepairClusterNodePoolRequestOperations>> operations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
