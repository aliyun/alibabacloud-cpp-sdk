// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNodeGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroupShrink_);
      DARABONBA_PTR_TO_JSON(NodeUnit, nodeUnitShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroupShrink_);
      DARABONBA_PTR_FROM_JSON(NodeUnit, nodeUnitShrink_);
    };
    CreateNodeGroupShrinkRequest() = default ;
    CreateNodeGroupShrinkRequest(const CreateNodeGroupShrinkRequest &) = default ;
    CreateNodeGroupShrinkRequest(CreateNodeGroupShrinkRequest &&) = default ;
    CreateNodeGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupShrinkRequest() = default ;
    CreateNodeGroupShrinkRequest& operator=(const CreateNodeGroupShrinkRequest &) = default ;
    CreateNodeGroupShrinkRequest& operator=(CreateNodeGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->nodeGroupShrink_ != nullptr && this->nodeUnitShrink_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNodeGroupShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodeGroupShrink Field Functions 
    bool hasNodeGroupShrink() const { return this->nodeGroupShrink_ != nullptr;};
    void deleteNodeGroupShrink() { this->nodeGroupShrink_ = nullptr;};
    inline string nodeGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupShrink_, "") };
    inline CreateNodeGroupShrinkRequest& setNodeGroupShrink(string nodeGroupShrink) { DARABONBA_PTR_SET_VALUE(nodeGroupShrink_, nodeGroupShrink) };


    // nodeUnitShrink Field Functions 
    bool hasNodeUnitShrink() const { return this->nodeUnitShrink_ != nullptr;};
    void deleteNodeUnitShrink() { this->nodeUnitShrink_ = nullptr;};
    inline string nodeUnitShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeUnitShrink_, "") };
    inline CreateNodeGroupShrinkRequest& setNodeUnitShrink(string nodeUnitShrink) { DARABONBA_PTR_SET_VALUE(nodeUnitShrink_, nodeUnitShrink) };


  protected:
    // Cluster ID
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Node ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupShrink_ = nullptr;
    // Node information
    std::shared_ptr<string> nodeUnitShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
