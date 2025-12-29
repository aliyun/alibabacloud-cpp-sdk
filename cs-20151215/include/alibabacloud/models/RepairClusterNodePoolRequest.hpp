// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPAIRCLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPAIRCLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Operations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Operations& obj) { 
        DARABONBA_PTR_TO_JSON(args, args_);
        DARABONBA_PTR_TO_JSON(operation_id, operationId_);
      };
      friend void from_json(const Darabonba::Json& j, Operations& obj) { 
        DARABONBA_PTR_FROM_JSON(args, args_);
        DARABONBA_PTR_FROM_JSON(operation_id, operationId_);
      };
      Operations() = default ;
      Operations(const Operations &) = default ;
      Operations(Operations &&) = default ;
      Operations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Operations() = default ;
      Operations& operator=(const Operations &) = default ;
      Operations& operator=(Operations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->args_ == nullptr
        && this->operationId_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
      inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
      inline Operations& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
      inline Operations& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline Operations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    protected:
      // The parameters of a repair operation.
      shared_ptr<vector<string>> args_ {};
      // The ID of a repair operation.
      shared_ptr<string> operationId_ {};
    };

    virtual bool empty() const override { return this->autoRestart_ == nullptr
        && this->nodes_ == nullptr && this->operations_ == nullptr; };
    // autoRestart Field Functions 
    bool hasAutoRestart() const { return this->autoRestart_ != nullptr;};
    void deleteAutoRestart() { this->autoRestart_ = nullptr;};
    inline bool getAutoRestart() const { DARABONBA_PTR_GET_DEFAULT(autoRestart_, false) };
    inline RepairClusterNodePoolRequest& setAutoRestart(bool autoRestart) { DARABONBA_PTR_SET_VALUE(autoRestart_, autoRestart) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> getNodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline RepairClusterNodePoolRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline RepairClusterNodePoolRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<RepairClusterNodePoolRequest::Operations> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<RepairClusterNodePoolRequest::Operations>) };
    inline vector<RepairClusterNodePoolRequest::Operations> getOperations() { DARABONBA_PTR_GET(operations_, vector<RepairClusterNodePoolRequest::Operations>) };
    inline RepairClusterNodePoolRequest& setOperations(const vector<RepairClusterNodePoolRequest::Operations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline RepairClusterNodePoolRequest& setOperations(vector<RepairClusterNodePoolRequest::Operations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


  protected:
    // Specifies whether to enable automatic instance restart.
    // 
    // **
    // 
    // **Warning** This parameter is deprecated. Any configured values will be ignored.
    shared_ptr<bool> autoRestart_ {};
    // The list of nodes. If not specified, all nodes in the node pool are selected.
    shared_ptr<vector<string>> nodes_ {};
    // The list of repair operations to execute. If not specified, all repair operations are executed. Typically, you do not need to specify this parameter.
    shared_ptr<vector<RepairClusterNodePoolRequest::Operations>> operations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
