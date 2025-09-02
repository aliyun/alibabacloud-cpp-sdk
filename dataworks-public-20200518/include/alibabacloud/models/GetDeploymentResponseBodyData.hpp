// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDeploymentResponseBodyDataDeployedItems.hpp>
#include <alibabacloud/models/GetDeploymentResponseBodyDataDeployment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDeploymentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedItems, deployedItems_);
      DARABONBA_PTR_TO_JSON(Deployment, deployment_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedItems, deployedItems_);
      DARABONBA_PTR_FROM_JSON(Deployment, deployment_);
    };
    GetDeploymentResponseBodyData() = default ;
    GetDeploymentResponseBodyData(const GetDeploymentResponseBodyData &) = default ;
    GetDeploymentResponseBodyData(GetDeploymentResponseBodyData &&) = default ;
    GetDeploymentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentResponseBodyData() = default ;
    GetDeploymentResponseBodyData& operator=(const GetDeploymentResponseBodyData &) = default ;
    GetDeploymentResponseBodyData& operator=(GetDeploymentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deployedItems_ != nullptr
        && this->deployment_ != nullptr; };
    // deployedItems Field Functions 
    bool hasDeployedItems() const { return this->deployedItems_ != nullptr;};
    void deleteDeployedItems() { this->deployedItems_ = nullptr;};
    inline const vector<Models::GetDeploymentResponseBodyDataDeployedItems> & deployedItems() const { DARABONBA_PTR_GET_CONST(deployedItems_, vector<Models::GetDeploymentResponseBodyDataDeployedItems>) };
    inline vector<Models::GetDeploymentResponseBodyDataDeployedItems> deployedItems() { DARABONBA_PTR_GET(deployedItems_, vector<Models::GetDeploymentResponseBodyDataDeployedItems>) };
    inline GetDeploymentResponseBodyData& setDeployedItems(const vector<Models::GetDeploymentResponseBodyDataDeployedItems> & deployedItems) { DARABONBA_PTR_SET_VALUE(deployedItems_, deployedItems) };
    inline GetDeploymentResponseBodyData& setDeployedItems(vector<Models::GetDeploymentResponseBodyDataDeployedItems> && deployedItems) { DARABONBA_PTR_SET_RVALUE(deployedItems_, deployedItems) };


    // deployment Field Functions 
    bool hasDeployment() const { return this->deployment_ != nullptr;};
    void deleteDeployment() { this->deployment_ = nullptr;};
    inline const Models::GetDeploymentResponseBodyDataDeployment & deployment() const { DARABONBA_PTR_GET_CONST(deployment_, Models::GetDeploymentResponseBodyDataDeployment) };
    inline Models::GetDeploymentResponseBodyDataDeployment deployment() { DARABONBA_PTR_GET(deployment_, Models::GetDeploymentResponseBodyDataDeployment) };
    inline GetDeploymentResponseBodyData& setDeployment(const Models::GetDeploymentResponseBodyDataDeployment & deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };
    inline GetDeploymentResponseBodyData& setDeployment(Models::GetDeploymentResponseBodyDataDeployment && deployment) { DARABONBA_PTR_SET_RVALUE(deployment_, deployment) };


  protected:
    // The deployed items.
    std::shared_ptr<vector<Models::GetDeploymentResponseBodyDataDeployedItems>> deployedItems_ = nullptr;
    // The details of the deployment package.
    std::shared_ptr<Models::GetDeploymentResponseBodyDataDeployment> deployment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
