// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNodeGroupRequestNodeGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNodeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroup_);
      DARABONBA_ANY_TO_JSON(NodeUnit, nodeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroup_);
      DARABONBA_ANY_FROM_JSON(NodeUnit, nodeUnit_);
    };
    CreateNodeGroupRequest() = default ;
    CreateNodeGroupRequest(const CreateNodeGroupRequest &) = default ;
    CreateNodeGroupRequest(CreateNodeGroupRequest &&) = default ;
    CreateNodeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupRequest() = default ;
    CreateNodeGroupRequest& operator=(const CreateNodeGroupRequest &) = default ;
    CreateNodeGroupRequest& operator=(CreateNodeGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->nodeGroup_ == nullptr && return this->nodeUnit_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNodeGroupRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodeGroup Field Functions 
    bool hasNodeGroup() const { return this->nodeGroup_ != nullptr;};
    void deleteNodeGroup() { this->nodeGroup_ = nullptr;};
    inline const CreateNodeGroupRequestNodeGroup & nodeGroup() const { DARABONBA_PTR_GET_CONST(nodeGroup_, CreateNodeGroupRequestNodeGroup) };
    inline CreateNodeGroupRequestNodeGroup nodeGroup() { DARABONBA_PTR_GET(nodeGroup_, CreateNodeGroupRequestNodeGroup) };
    inline CreateNodeGroupRequest& setNodeGroup(const CreateNodeGroupRequestNodeGroup & nodeGroup) { DARABONBA_PTR_SET_VALUE(nodeGroup_, nodeGroup) };
    inline CreateNodeGroupRequest& setNodeGroup(CreateNodeGroupRequestNodeGroup && nodeGroup) { DARABONBA_PTR_SET_RVALUE(nodeGroup_, nodeGroup) };


    // nodeUnit Field Functions 
    bool hasNodeUnit() const { return this->nodeUnit_ != nullptr;};
    void deleteNodeUnit() { this->nodeUnit_ = nullptr;};
    inline     const Darabonba::Json & nodeUnit() const { DARABONBA_GET(nodeUnit_) };
    Darabonba::Json & nodeUnit() { DARABONBA_GET(nodeUnit_) };
    inline CreateNodeGroupRequest& setNodeUnit(const Darabonba::Json & nodeUnit) { DARABONBA_SET_VALUE(nodeUnit_, nodeUnit) };
    inline CreateNodeGroupRequest& setNodeUnit(Darabonba::Json & nodeUnit) { DARABONBA_SET_RVALUE(nodeUnit_, nodeUnit) };


  protected:
    // Cluster ID
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Node ID.
    // 
    // This parameter is required.
    std::shared_ptr<CreateNodeGroupRequestNodeGroup> nodeGroup_ = nullptr;
    // Node information
    Darabonba::Json nodeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
