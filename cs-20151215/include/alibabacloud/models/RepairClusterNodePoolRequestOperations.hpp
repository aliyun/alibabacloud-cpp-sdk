// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPAIRCLUSTERNODEPOOLREQUESTOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_REPAIRCLUSTERNODEPOOLREQUESTOPERATIONS_HPP_
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
  class RepairClusterNodePoolRequestOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepairClusterNodePoolRequestOperations& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(operation_id, operationId_);
    };
    friend void from_json(const Darabonba::Json& j, RepairClusterNodePoolRequestOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(operation_id, operationId_);
    };
    RepairClusterNodePoolRequestOperations() = default ;
    RepairClusterNodePoolRequestOperations(const RepairClusterNodePoolRequestOperations &) = default ;
    RepairClusterNodePoolRequestOperations(RepairClusterNodePoolRequestOperations &&) = default ;
    RepairClusterNodePoolRequestOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepairClusterNodePoolRequestOperations() = default ;
    RepairClusterNodePoolRequestOperations& operator=(const RepairClusterNodePoolRequestOperations &) = default ;
    RepairClusterNodePoolRequestOperations& operator=(RepairClusterNodePoolRequestOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->operationId_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline RepairClusterNodePoolRequestOperations& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline RepairClusterNodePoolRequestOperations& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline RepairClusterNodePoolRequestOperations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


  protected:
    // The parameters of a repair operation.
    std::shared_ptr<vector<string>> args_ = nullptr;
    // The ID of a repair operation.
    std::shared_ptr<string> operationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
