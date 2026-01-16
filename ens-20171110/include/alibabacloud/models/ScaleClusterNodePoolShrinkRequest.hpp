// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECLUSTERNODEPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALECLUSTERNODEPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ScaleClusterNodePoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleClusterNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodepoolId, nodepoolId_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleClusterNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodepoolId, nodepoolId_);
    };
    ScaleClusterNodePoolShrinkRequest() = default ;
    ScaleClusterNodePoolShrinkRequest(const ScaleClusterNodePoolShrinkRequest &) = default ;
    ScaleClusterNodePoolShrinkRequest(ScaleClusterNodePoolShrinkRequest &&) = default ;
    ScaleClusterNodePoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleClusterNodePoolShrinkRequest() = default ;
    ScaleClusterNodePoolShrinkRequest& operator=(const ScaleClusterNodePoolShrinkRequest &) = default ;
    ScaleClusterNodePoolShrinkRequest& operator=(ScaleClusterNodePoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr
        && this->clusterId_ == nullptr && this->nodepoolId_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline ScaleClusterNodePoolShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ScaleClusterNodePoolShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline ScaleClusterNodePoolShrinkRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


  protected:
    shared_ptr<string> bodyShrink_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> nodepoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
