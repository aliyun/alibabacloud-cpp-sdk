// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEPLOYMENTBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEPLOYMENTBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeleteDeploymentByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDeploymentByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDeploymentByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
    };
    DeleteDeploymentByNameRequest() = default ;
    DeleteDeploymentByNameRequest(const DeleteDeploymentByNameRequest &) = default ;
    DeleteDeploymentByNameRequest(DeleteDeploymentByNameRequest &&) = default ;
    DeleteDeploymentByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDeploymentByNameRequest() = default ;
    DeleteDeploymentByNameRequest& operator=(const DeleteDeploymentByNameRequest &) = default ;
    DeleteDeploymentByNameRequest& operator=(DeleteDeploymentByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentName_ == nullptr; };
    // deploymentName Field Functions 
    bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
    void deleteDeploymentName() { this->deploymentName_ = nullptr;};
    inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
    inline DeleteDeploymentByNameRequest& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


  protected:
    // The name of the deployed job, which is typically specified by the user when submitting the job.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
