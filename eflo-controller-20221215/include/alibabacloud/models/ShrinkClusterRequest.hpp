// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ShrinkClusterRequestNodeGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ShrinkClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShrinkClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ShrinkClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
    };
    ShrinkClusterRequest() = default ;
    ShrinkClusterRequest(const ShrinkClusterRequest &) = default ;
    ShrinkClusterRequest(ShrinkClusterRequest &&) = default ;
    ShrinkClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShrinkClusterRequest() = default ;
    ShrinkClusterRequest& operator=(const ShrinkClusterRequest &) = default ;
    ShrinkClusterRequest& operator=(ShrinkClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->ignoreFailedNodeTasks_ != nullptr && this->nodeGroups_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ShrinkClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ShrinkClusterRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<ShrinkClusterRequestNodeGroups> & nodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<ShrinkClusterRequestNodeGroups>) };
    inline vector<ShrinkClusterRequestNodeGroups> nodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<ShrinkClusterRequestNodeGroups>) };
    inline ShrinkClusterRequest& setNodeGroups(const vector<ShrinkClusterRequestNodeGroups> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline ShrinkClusterRequest& setNodeGroups(vector<ShrinkClusterRequestNodeGroups> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to allow skipping failed nodes. Default value: False.
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // The node groups.
    std::shared_ptr<vector<ShrinkClusterRequestNodeGroups>> nodeGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
