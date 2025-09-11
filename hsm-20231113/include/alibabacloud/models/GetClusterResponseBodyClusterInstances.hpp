// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYCLUSTERINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYCLUSTERINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetClusterResponseBodyClusterInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyClusterInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Master, master_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyClusterInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Master, master_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    GetClusterResponseBodyClusterInstances() = default ;
    GetClusterResponseBodyClusterInstances(const GetClusterResponseBodyClusterInstances &) = default ;
    GetClusterResponseBodyClusterInstances(GetClusterResponseBodyClusterInstances &&) = default ;
    GetClusterResponseBodyClusterInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyClusterInstances() = default ;
    GetClusterResponseBodyClusterInstances& operator=(const GetClusterResponseBodyClusterInstances &) = default ;
    GetClusterResponseBodyClusterInstances& operator=(GetClusterResponseBodyClusterInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->master_ != nullptr && this->nodeId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetClusterResponseBodyClusterInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // master Field Functions 
    bool hasMaster() const { return this->master_ != nullptr;};
    void deleteMaster() { this->master_ = nullptr;};
    inline bool master() const { DARABONBA_PTR_GET_DEFAULT(master_, false) };
    inline GetClusterResponseBodyClusterInstances& setMaster(bool master) { DARABONBA_PTR_SET_VALUE(master_, master) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int32_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0) };
    inline GetClusterResponseBodyClusterInstances& setNodeId(int32_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The ID of the HSM.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the HSM is a master HSM. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> master_ = nullptr;
    // The ID of the HSM in the cluster.
    std::shared_ptr<int32_t> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
