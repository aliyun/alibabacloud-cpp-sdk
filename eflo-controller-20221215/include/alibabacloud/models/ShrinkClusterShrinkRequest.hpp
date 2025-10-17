// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHRINKCLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHRINKCLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ShrinkClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShrinkClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroupsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ShrinkClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroupsShrink_);
    };
    ShrinkClusterShrinkRequest() = default ;
    ShrinkClusterShrinkRequest(const ShrinkClusterShrinkRequest &) = default ;
    ShrinkClusterShrinkRequest(ShrinkClusterShrinkRequest &&) = default ;
    ShrinkClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShrinkClusterShrinkRequest() = default ;
    ShrinkClusterShrinkRequest& operator=(const ShrinkClusterShrinkRequest &) = default ;
    ShrinkClusterShrinkRequest& operator=(ShrinkClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->ignoreFailedNodeTasks_ == nullptr && return this->nodeGroupsShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ShrinkClusterShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ShrinkClusterShrinkRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodeGroupsShrink Field Functions 
    bool hasNodeGroupsShrink() const { return this->nodeGroupsShrink_ != nullptr;};
    void deleteNodeGroupsShrink() { this->nodeGroupsShrink_ = nullptr;};
    inline string nodeGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupsShrink_, "") };
    inline ShrinkClusterShrinkRequest& setNodeGroupsShrink(string nodeGroupsShrink) { DARABONBA_PTR_SET_VALUE(nodeGroupsShrink_, nodeGroupsShrink) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to allow skipping failed nodes. Default value: False.
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // The node groups.
    std::shared_ptr<string> nodeGroupsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
