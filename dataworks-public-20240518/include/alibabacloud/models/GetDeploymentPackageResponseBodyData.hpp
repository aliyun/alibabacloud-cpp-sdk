// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDeploymentPackageResponseBodyDataDeployedItems.hpp>
#include <alibabacloud/models/GetDeploymentPackageResponseBodyDataDeployment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDeploymentPackageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentPackageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedItems, deployedItems_);
      DARABONBA_PTR_TO_JSON(Deployment, deployment_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentPackageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedItems, deployedItems_);
      DARABONBA_PTR_FROM_JSON(Deployment, deployment_);
    };
    GetDeploymentPackageResponseBodyData() = default ;
    GetDeploymentPackageResponseBodyData(const GetDeploymentPackageResponseBodyData &) = default ;
    GetDeploymentPackageResponseBodyData(GetDeploymentPackageResponseBodyData &&) = default ;
    GetDeploymentPackageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentPackageResponseBodyData() = default ;
    GetDeploymentPackageResponseBodyData& operator=(const GetDeploymentPackageResponseBodyData &) = default ;
    GetDeploymentPackageResponseBodyData& operator=(GetDeploymentPackageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployedItems_ == nullptr
        && return this->deployment_ == nullptr; };
    // deployedItems Field Functions 
    bool hasDeployedItems() const { return this->deployedItems_ != nullptr;};
    void deleteDeployedItems() { this->deployedItems_ = nullptr;};
    inline const vector<Models::GetDeploymentPackageResponseBodyDataDeployedItems> & deployedItems() const { DARABONBA_PTR_GET_CONST(deployedItems_, vector<Models::GetDeploymentPackageResponseBodyDataDeployedItems>) };
    inline vector<Models::GetDeploymentPackageResponseBodyDataDeployedItems> deployedItems() { DARABONBA_PTR_GET(deployedItems_, vector<Models::GetDeploymentPackageResponseBodyDataDeployedItems>) };
    inline GetDeploymentPackageResponseBodyData& setDeployedItems(const vector<Models::GetDeploymentPackageResponseBodyDataDeployedItems> & deployedItems) { DARABONBA_PTR_SET_VALUE(deployedItems_, deployedItems) };
    inline GetDeploymentPackageResponseBodyData& setDeployedItems(vector<Models::GetDeploymentPackageResponseBodyDataDeployedItems> && deployedItems) { DARABONBA_PTR_SET_RVALUE(deployedItems_, deployedItems) };


    // deployment Field Functions 
    bool hasDeployment() const { return this->deployment_ != nullptr;};
    void deleteDeployment() { this->deployment_ = nullptr;};
    inline const Models::GetDeploymentPackageResponseBodyDataDeployment & deployment() const { DARABONBA_PTR_GET_CONST(deployment_, Models::GetDeploymentPackageResponseBodyDataDeployment) };
    inline Models::GetDeploymentPackageResponseBodyDataDeployment deployment() { DARABONBA_PTR_GET(deployment_, Models::GetDeploymentPackageResponseBodyDataDeployment) };
    inline GetDeploymentPackageResponseBodyData& setDeployment(const Models::GetDeploymentPackageResponseBodyDataDeployment & deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };
    inline GetDeploymentPackageResponseBodyData& setDeployment(Models::GetDeploymentPackageResponseBodyDataDeployment && deployment) { DARABONBA_PTR_SET_RVALUE(deployment_, deployment) };


  protected:
    // The deployment item details.
    std::shared_ptr<vector<Models::GetDeploymentPackageResponseBodyDataDeployedItems>> deployedItems_ = nullptr;
    // The deployment package details.
    std::shared_ptr<Models::GetDeploymentPackageResponseBodyDataDeployment> deployment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
