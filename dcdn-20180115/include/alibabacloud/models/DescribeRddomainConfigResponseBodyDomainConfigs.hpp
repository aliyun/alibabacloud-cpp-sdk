// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDDOMAINCONFIGRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDDOMAINCONFIGRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeRDDomainConfigResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRDDomainConfigResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRDDomainConfigResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeRDDomainConfigResponseBodyDomainConfigs() = default ;
    DescribeRDDomainConfigResponseBodyDomainConfigs(const DescribeRDDomainConfigResponseBodyDomainConfigs &) = default ;
    DescribeRDDomainConfigResponseBodyDomainConfigs(DescribeRDDomainConfigResponseBodyDomainConfigs &&) = default ;
    DescribeRDDomainConfigResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRDDomainConfigResponseBodyDomainConfigs() = default ;
    DescribeRDDomainConfigResponseBodyDomainConfigs& operator=(const DescribeRDDomainConfigResponseBodyDomainConfigs &) = default ;
    DescribeRDDomainConfigResponseBodyDomainConfigs& operator=(DescribeRDDomainConfigResponseBodyDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->functionArgs_ != nullptr && this->functionName_ != nullptr && this->parentId_ != nullptr && this->status_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline DescribeRDDomainConfigResponseBodyDomainConfigs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const vector<Models::DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs> & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, vector<Models::DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs>) };
    inline vector<Models::DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs> functionArgs() { DARABONBA_PTR_GET(functionArgs_, vector<Models::DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs>) };
    inline DescribeRDDomainConfigResponseBodyDomainConfigs& setFunctionArgs(const vector<Models::DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs> & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeRDDomainConfigResponseBodyDomainConfigs& setFunctionArgs(vector<Models::DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs> && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeRDDomainConfigResponseBodyDomainConfigs& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeRDDomainConfigResponseBodyDomainConfigs& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRDDomainConfigResponseBodyDomainConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the configuration.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The configurations of the features.
    std::shared_ptr<vector<Models::DescribeRDDomainConfigResponseBodyDomainConfigsFunctionArgs>> functionArgs_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The ID of the advanced condition configuration.
    std::shared_ptr<string> parentId_ = nullptr;
    // The status. Valid values:
    // 
    // *   **success**
    // *   **testing**
    // *   **failed**
    // *   **configuring**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
