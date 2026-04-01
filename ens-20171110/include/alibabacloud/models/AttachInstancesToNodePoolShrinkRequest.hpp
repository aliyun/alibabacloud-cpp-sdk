// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESTONODEPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESTONODEPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachInstancesToNodePoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstancesToNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_TO_JSON(NodepoolId, nodepoolId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesToNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_FROM_JSON(NodepoolId, nodepoolId_);
    };
    AttachInstancesToNodePoolShrinkRequest() = default ;
    AttachInstancesToNodePoolShrinkRequest(const AttachInstancesToNodePoolShrinkRequest &) = default ;
    AttachInstancesToNodePoolShrinkRequest(AttachInstancesToNodePoolShrinkRequest &&) = default ;
    AttachInstancesToNodePoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstancesToNodePoolShrinkRequest() = default ;
    AttachInstancesToNodePoolShrinkRequest& operator=(const AttachInstancesToNodePoolShrinkRequest &) = default ;
    AttachInstancesToNodePoolShrinkRequest& operator=(AttachInstancesToNodePoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->instancesShrink_ == nullptr && this->nodepoolId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AttachInstancesToNodePoolShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instancesShrink Field Functions 
    bool hasInstancesShrink() const { return this->instancesShrink_ != nullptr;};
    void deleteInstancesShrink() { this->instancesShrink_ = nullptr;};
    inline string getInstancesShrink() const { DARABONBA_PTR_GET_DEFAULT(instancesShrink_, "") };
    inline AttachInstancesToNodePoolShrinkRequest& setInstancesShrink(string instancesShrink) { DARABONBA_PTR_SET_VALUE(instancesShrink_, instancesShrink) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline AttachInstancesToNodePoolShrinkRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> instancesShrink_ {};
    // This parameter is required.
    shared_ptr<string> nodepoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
