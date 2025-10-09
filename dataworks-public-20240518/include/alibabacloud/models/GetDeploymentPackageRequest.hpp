// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDeploymentPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    GetDeploymentPackageRequest() = default ;
    GetDeploymentPackageRequest(const GetDeploymentPackageRequest &) = default ;
    GetDeploymentPackageRequest(GetDeploymentPackageRequest &&) = default ;
    GetDeploymentPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentPackageRequest() = default ;
    GetDeploymentPackageRequest& operator=(const GetDeploymentPackageRequest &) = default ;
    GetDeploymentPackageRequest& operator=(GetDeploymentPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deploymentId_ != nullptr
        && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline int64_t deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, 0L) };
    inline GetDeploymentPackageRequest& setDeploymentId(int64_t deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDeploymentPackageRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline GetDeploymentPackageRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> deploymentId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
