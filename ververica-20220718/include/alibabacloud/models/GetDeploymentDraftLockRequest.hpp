// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTDRAFTLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTDRAFTLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetDeploymentDraftLockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentDraftLockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentDraftId, deploymentDraftId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentDraftLockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentDraftId, deploymentDraftId_);
    };
    GetDeploymentDraftLockRequest() = default ;
    GetDeploymentDraftLockRequest(const GetDeploymentDraftLockRequest &) = default ;
    GetDeploymentDraftLockRequest(GetDeploymentDraftLockRequest &&) = default ;
    GetDeploymentDraftLockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentDraftLockRequest() = default ;
    GetDeploymentDraftLockRequest& operator=(const GetDeploymentDraftLockRequest &) = default ;
    GetDeploymentDraftLockRequest& operator=(GetDeploymentDraftLockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentDraftId_ == nullptr; };
    // deploymentDraftId Field Functions 
    bool hasDeploymentDraftId() const { return this->deploymentDraftId_ != nullptr;};
    void deleteDeploymentDraftId() { this->deploymentDraftId_ = nullptr;};
    inline string deploymentDraftId() const { DARABONBA_PTR_GET_DEFAULT(deploymentDraftId_, "") };
    inline GetDeploymentDraftLockRequest& setDeploymentDraftId(string deploymentDraftId) { DARABONBA_PTR_SET_VALUE(deploymentDraftId_, deploymentDraftId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deploymentDraftId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
