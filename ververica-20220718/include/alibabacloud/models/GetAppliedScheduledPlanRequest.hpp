// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLIEDSCHEDULEDPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLIEDSCHEDULEDPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetAppliedScheduledPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppliedScheduledPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppliedScheduledPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
    };
    GetAppliedScheduledPlanRequest() = default ;
    GetAppliedScheduledPlanRequest(const GetAppliedScheduledPlanRequest &) = default ;
    GetAppliedScheduledPlanRequest(GetAppliedScheduledPlanRequest &&) = default ;
    GetAppliedScheduledPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppliedScheduledPlanRequest() = default ;
    GetAppliedScheduledPlanRequest& operator=(const GetAppliedScheduledPlanRequest &) = default ;
    GetAppliedScheduledPlanRequest& operator=(GetAppliedScheduledPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline GetAppliedScheduledPlanRequest& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deploymentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
