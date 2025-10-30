// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTOPERATIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTOPERATIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterRequestOperationPolicyClusterAutoUpgrade.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterRequestOperationPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestOperationPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestOperationPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    CreateClusterRequestOperationPolicy() = default ;
    CreateClusterRequestOperationPolicy(const CreateClusterRequestOperationPolicy &) = default ;
    CreateClusterRequestOperationPolicy(CreateClusterRequestOperationPolicy &&) = default ;
    CreateClusterRequestOperationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestOperationPolicy() = default ;
    CreateClusterRequestOperationPolicy& operator=(const CreateClusterRequestOperationPolicy &) = default ;
    CreateClusterRequestOperationPolicy& operator=(CreateClusterRequestOperationPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterAutoUpgrade_ == nullptr; };
    // clusterAutoUpgrade Field Functions 
    bool hasClusterAutoUpgrade() const { return this->clusterAutoUpgrade_ != nullptr;};
    void deleteClusterAutoUpgrade() { this->clusterAutoUpgrade_ = nullptr;};
    inline const Models::CreateClusterRequestOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade() const { DARABONBA_PTR_GET_CONST(clusterAutoUpgrade_, Models::CreateClusterRequestOperationPolicyClusterAutoUpgrade) };
    inline Models::CreateClusterRequestOperationPolicyClusterAutoUpgrade clusterAutoUpgrade() { DARABONBA_PTR_GET(clusterAutoUpgrade_, Models::CreateClusterRequestOperationPolicyClusterAutoUpgrade) };
    inline CreateClusterRequestOperationPolicy& setClusterAutoUpgrade(const Models::CreateClusterRequestOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade) { DARABONBA_PTR_SET_VALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };
    inline CreateClusterRequestOperationPolicy& setClusterAutoUpgrade(Models::CreateClusterRequestOperationPolicyClusterAutoUpgrade && clusterAutoUpgrade) { DARABONBA_PTR_SET_RVALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };


  protected:
    // The configurations of auto cluster upgrade.
    std::shared_ptr<Models::CreateClusterRequestOperationPolicyClusterAutoUpgrade> clusterAutoUpgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
