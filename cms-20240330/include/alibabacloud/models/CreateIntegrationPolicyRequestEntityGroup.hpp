// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYREQUESTENTITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYREQUESTENTITYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateIntegrationPolicyRequestEntityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationPolicyRequestEntityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(clusterEntityType, clusterEntityType_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationPolicyRequestEntityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterEntityType, clusterEntityType_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    CreateIntegrationPolicyRequestEntityGroup() = default ;
    CreateIntegrationPolicyRequestEntityGroup(const CreateIntegrationPolicyRequestEntityGroup &) = default ;
    CreateIntegrationPolicyRequestEntityGroup(CreateIntegrationPolicyRequestEntityGroup &&) = default ;
    CreateIntegrationPolicyRequestEntityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationPolicyRequestEntityGroup() = default ;
    CreateIntegrationPolicyRequestEntityGroup& operator=(const CreateIntegrationPolicyRequestEntityGroup &) = default ;
    CreateIntegrationPolicyRequestEntityGroup& operator=(CreateIntegrationPolicyRequestEntityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterEntityType_ != nullptr
        && this->clusterId_ != nullptr && this->entityGroupId_ != nullptr && this->vpcId_ != nullptr; };
    // clusterEntityType Field Functions 
    bool hasClusterEntityType() const { return this->clusterEntityType_ != nullptr;};
    void deleteClusterEntityType() { this->clusterEntityType_ = nullptr;};
    inline string clusterEntityType() const { DARABONBA_PTR_GET_DEFAULT(clusterEntityType_, "") };
    inline CreateIntegrationPolicyRequestEntityGroup& setClusterEntityType(string clusterEntityType) { DARABONBA_PTR_SET_VALUE(clusterEntityType_, clusterEntityType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateIntegrationPolicyRequestEntityGroup& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // entityGroupId Field Functions 
    bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
    void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
    inline string entityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
    inline CreateIntegrationPolicyRequestEntityGroup& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateIntegrationPolicyRequestEntityGroup& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> clusterEntityType_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> entityGroupId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
