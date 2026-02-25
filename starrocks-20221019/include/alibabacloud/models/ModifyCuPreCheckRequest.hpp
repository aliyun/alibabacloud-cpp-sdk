// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyCuPreCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCuPreCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCuPreCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ModifyCuPreCheckRequest() = default ;
    ModifyCuPreCheckRequest(const ModifyCuPreCheckRequest &) = default ;
    ModifyCuPreCheckRequest(ModifyCuPreCheckRequest &&) = default ;
    ModifyCuPreCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCuPreCheckRequest() = default ;
    ModifyCuPreCheckRequest& operator=(const ModifyCuPreCheckRequest &) = default ;
    ModifyCuPreCheckRequest& operator=(ModifyCuPreCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeGroupId_ == nullptr && this->target_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCuPreCheckRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ModifyCuPreCheckRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline ModifyCuPreCheckRequest& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The warehouse ID.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // The number of CUs to which you want to change.
    // 
    // Valid values:
    // 
    // *   2
    // *   4
    // *   8
    // *   16
    // *   32
    // *   64
    // 
    // This parameter is required.
    shared_ptr<int32_t> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
