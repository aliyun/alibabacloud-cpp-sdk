// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTROLLBACKCMD_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTROLLBACKCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeploymentRollbackCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentRollbackCmd& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentRollbackCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
    };
    DeploymentRollbackCmd() = default ;
    DeploymentRollbackCmd(const DeploymentRollbackCmd &) = default ;
    DeploymentRollbackCmd(DeploymentRollbackCmd &&) = default ;
    DeploymentRollbackCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentRollbackCmd() = default ;
    DeploymentRollbackCmd& operator=(const DeploymentRollbackCmd &) = default ;
    DeploymentRollbackCmd& operator=(DeploymentRollbackCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline int64_t getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, 0L) };
    inline DeploymentRollbackCmd& setDeploymentId(int64_t deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> deploymentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
