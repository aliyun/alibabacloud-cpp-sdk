// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTREQUESTNODEITEMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTREQUESTNODEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceEndpointRequestNodeItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceEndpointRequestNodeItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceEndpointRequestNodeItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateDBInstanceEndpointRequestNodeItems() = default ;
    CreateDBInstanceEndpointRequestNodeItems(const CreateDBInstanceEndpointRequestNodeItems &) = default ;
    CreateDBInstanceEndpointRequestNodeItems(CreateDBInstanceEndpointRequestNodeItems &&) = default ;
    CreateDBInstanceEndpointRequestNodeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceEndpointRequestNodeItems() = default ;
    CreateDBInstanceEndpointRequestNodeItems& operator=(const CreateDBInstanceEndpointRequestNodeItems &) = default ;
    CreateDBInstanceEndpointRequestNodeItems& operator=(CreateDBInstanceEndpointRequestNodeItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->nodeId_ == nullptr && return this->weight_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstanceEndpointRequestNodeItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateDBInstanceEndpointRequestNodeItems& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int64_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
    inline CreateDBInstanceEndpointRequestNodeItems& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The node ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The weight of the node. Read requests are distributed based on the weight.
    // 
    // Valid values: 0 to 100.
    std::shared_ptr<int64_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
