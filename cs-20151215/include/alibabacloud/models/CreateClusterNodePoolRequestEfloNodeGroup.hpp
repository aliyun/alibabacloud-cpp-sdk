// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTEFLONODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTEFLONODEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestEfloNodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestEfloNodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(group_id, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestEfloNodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(group_id, groupId_);
    };
    CreateClusterNodePoolRequestEfloNodeGroup() = default ;
    CreateClusterNodePoolRequestEfloNodeGroup(const CreateClusterNodePoolRequestEfloNodeGroup &) = default ;
    CreateClusterNodePoolRequestEfloNodeGroup(CreateClusterNodePoolRequestEfloNodeGroup &&) = default ;
    CreateClusterNodePoolRequestEfloNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestEfloNodeGroup() = default ;
    CreateClusterNodePoolRequestEfloNodeGroup& operator=(const CreateClusterNodePoolRequestEfloNodeGroup &) = default ;
    CreateClusterNodePoolRequestEfloNodeGroup& operator=(CreateClusterNodePoolRequestEfloNodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->groupId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateClusterNodePoolRequestEfloNodeGroup& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateClusterNodePoolRequestEfloNodeGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
