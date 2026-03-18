// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSPECTYPEPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSPECTYPEPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifySpecTypePreCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySpecTypePreCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(TargetSpecType, targetSpecType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySpecTypePreCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(TargetSpecType, targetSpecType_);
    };
    ModifySpecTypePreCheckRequest() = default ;
    ModifySpecTypePreCheckRequest(const ModifySpecTypePreCheckRequest &) = default ;
    ModifySpecTypePreCheckRequest(ModifySpecTypePreCheckRequest &&) = default ;
    ModifySpecTypePreCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySpecTypePreCheckRequest() = default ;
    ModifySpecTypePreCheckRequest& operator=(const ModifySpecTypePreCheckRequest &) = default ;
    ModifySpecTypePreCheckRequest& operator=(ModifySpecTypePreCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeGroupId_ == nullptr && this->targetSpecType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifySpecTypePreCheckRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ModifySpecTypePreCheckRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // targetSpecType Field Functions 
    bool hasTargetSpecType() const { return this->targetSpecType_ != nullptr;};
    void deleteTargetSpecType() { this->targetSpecType_ = nullptr;};
    inline string getTargetSpecType() const { DARABONBA_PTR_GET_DEFAULT(targetSpecType_, "") };
    inline ModifySpecTypePreCheckRequest& setTargetSpecType(string targetSpecType) { DARABONBA_PTR_SET_VALUE(targetSpecType_, targetSpecType) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    shared_ptr<string> targetSpecType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
