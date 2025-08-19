// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTOPERATIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTOPERATIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyClusterRequestOperationPolicyClusterAutoUpgrade.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterRequestOperationPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterRequestOperationPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterRequestOperationPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    ModifyClusterRequestOperationPolicy() = default ;
    ModifyClusterRequestOperationPolicy(const ModifyClusterRequestOperationPolicy &) = default ;
    ModifyClusterRequestOperationPolicy(ModifyClusterRequestOperationPolicy &&) = default ;
    ModifyClusterRequestOperationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterRequestOperationPolicy() = default ;
    ModifyClusterRequestOperationPolicy& operator=(const ModifyClusterRequestOperationPolicy &) = default ;
    ModifyClusterRequestOperationPolicy& operator=(ModifyClusterRequestOperationPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterAutoUpgrade_ != nullptr; };
    // clusterAutoUpgrade Field Functions 
    bool hasClusterAutoUpgrade() const { return this->clusterAutoUpgrade_ != nullptr;};
    void deleteClusterAutoUpgrade() { this->clusterAutoUpgrade_ = nullptr;};
    inline const Models::ModifyClusterRequestOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade() const { DARABONBA_PTR_GET_CONST(clusterAutoUpgrade_, Models::ModifyClusterRequestOperationPolicyClusterAutoUpgrade) };
    inline Models::ModifyClusterRequestOperationPolicyClusterAutoUpgrade clusterAutoUpgrade() { DARABONBA_PTR_GET(clusterAutoUpgrade_, Models::ModifyClusterRequestOperationPolicyClusterAutoUpgrade) };
    inline ModifyClusterRequestOperationPolicy& setClusterAutoUpgrade(const Models::ModifyClusterRequestOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade) { DARABONBA_PTR_SET_VALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };
    inline ModifyClusterRequestOperationPolicy& setClusterAutoUpgrade(Models::ModifyClusterRequestOperationPolicyClusterAutoUpgrade && clusterAutoUpgrade) { DARABONBA_PTR_SET_RVALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };


  protected:
    // The configurations of automatic update.
    std::shared_ptr<Models::ModifyClusterRequestOperationPolicyClusterAutoUpgrade> clusterAutoUpgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
