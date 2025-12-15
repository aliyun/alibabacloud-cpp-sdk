// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODESREQUESTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODESREQUESTINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateNodesRequestInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodesRequestInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodesRequestInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
    };
    UpdateNodesRequestInstances() = default ;
    UpdateNodesRequestInstances(const UpdateNodesRequestInstances &) = default ;
    UpdateNodesRequestInstances(UpdateNodesRequestInstances &&) = default ;
    UpdateNodesRequestInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodesRequestInstances() = default ;
    UpdateNodesRequestInstances& operator=(const UpdateNodesRequestInstances &) = default ;
    UpdateNodesRequestInstances& operator=(UpdateNodesRequestInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->keepAlive_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNodesRequestInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline bool keepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, false) };
    inline UpdateNodesRequestInstances& setKeepAlive(bool keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


  protected:
    // The instance ID of the compute node.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to enable deletion protection for the compute node.
    std::shared_ptr<bool> keepAlive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
