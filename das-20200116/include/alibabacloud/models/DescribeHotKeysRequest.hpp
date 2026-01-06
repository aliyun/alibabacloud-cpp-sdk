// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    DescribeHotKeysRequest() = default ;
    DescribeHotKeysRequest(const DescribeHotKeysRequest &) = default ;
    DescribeHotKeysRequest(DescribeHotKeysRequest &&) = default ;
    DescribeHotKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotKeysRequest() = default ;
    DescribeHotKeysRequest& operator=(const DescribeHotKeysRequest &) = default ;
    DescribeHotKeysRequest& operator=(DescribeHotKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHotKeysRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeHotKeysRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The ID of the ApsaraDB for Redis instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the data shard on the ApsaraDB for Redis instance.
    shared_ptr<string> nodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
