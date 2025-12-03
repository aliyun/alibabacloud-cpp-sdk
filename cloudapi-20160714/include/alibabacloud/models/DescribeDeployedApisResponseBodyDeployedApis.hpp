// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPISRESPONSEBODYDEPLOYEDAPIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPISRESPONSEBODYDEPLOYEDAPIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApisResponseBodyDeployedApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApisResponseBodyDeployedApis& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedApiItem, deployedApiItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApisResponseBodyDeployedApis& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedApiItem, deployedApiItem_);
    };
    DescribeDeployedApisResponseBodyDeployedApis() = default ;
    DescribeDeployedApisResponseBodyDeployedApis(const DescribeDeployedApisResponseBodyDeployedApis &) = default ;
    DescribeDeployedApisResponseBodyDeployedApis(DescribeDeployedApisResponseBodyDeployedApis &&) = default ;
    DescribeDeployedApisResponseBodyDeployedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApisResponseBodyDeployedApis() = default ;
    DescribeDeployedApisResponseBodyDeployedApis& operator=(const DescribeDeployedApisResponseBodyDeployedApis &) = default ;
    DescribeDeployedApisResponseBodyDeployedApis& operator=(DescribeDeployedApisResponseBodyDeployedApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployedApiItem_ == nullptr; };
    // deployedApiItem Field Functions 
    bool hasDeployedApiItem() const { return this->deployedApiItem_ != nullptr;};
    void deleteDeployedApiItem() { this->deployedApiItem_ = nullptr;};
    inline const vector<Models::DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem> & deployedApiItem() const { DARABONBA_PTR_GET_CONST(deployedApiItem_, vector<Models::DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem>) };
    inline vector<Models::DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem> deployedApiItem() { DARABONBA_PTR_GET(deployedApiItem_, vector<Models::DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem>) };
    inline DescribeDeployedApisResponseBodyDeployedApis& setDeployedApiItem(const vector<Models::DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem> & deployedApiItem) { DARABONBA_PTR_SET_VALUE(deployedApiItem_, deployedApiItem) };
    inline DescribeDeployedApisResponseBodyDeployedApis& setDeployedApiItem(vector<Models::DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem> && deployedApiItem) { DARABONBA_PTR_SET_RVALUE(deployedApiItem_, deployedApiItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApisResponseBodyDeployedApisDeployedApiItem>> deployedApiItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
