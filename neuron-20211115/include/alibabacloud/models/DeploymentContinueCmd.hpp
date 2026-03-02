// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTCONTINUECMD_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTCONTINUECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeploymentContinueCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentContinueCmd& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentContinueCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
    };
    DeploymentContinueCmd() = default ;
    DeploymentContinueCmd(const DeploymentContinueCmd &) = default ;
    DeploymentContinueCmd(DeploymentContinueCmd &&) = default ;
    DeploymentContinueCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentContinueCmd() = default ;
    DeploymentContinueCmd& operator=(const DeploymentContinueCmd &) = default ;
    DeploymentContinueCmd& operator=(DeploymentContinueCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline int64_t getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, 0L) };
    inline DeploymentContinueCmd& setDeploymentId(int64_t deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> deploymentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
