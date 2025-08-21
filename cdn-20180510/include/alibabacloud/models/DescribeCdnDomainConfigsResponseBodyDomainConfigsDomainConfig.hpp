// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig(const DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig(DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(const DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->functionArgs_ != nullptr && this->functionName_ != nullptr && this->parentId_ != nullptr && this->status_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs functionArgs() { DARABONBA_PTR_GET(functionArgs_, Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(const Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // The configuration of each feature.
    std::shared_ptr<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs> functionArgs_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The ID of the rule condition. This parameter is optional.
    // 
    // To create a rule condition, you can configure the **condition** feature that is described in the [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/388460.html) topic. A rule condition can identify parameters that are included in requests and filter requests based on the identified parameters. Each rule condition has a [ConfigId](https://help.aliyun.com/document_detail/388994.html). You can use ConfigId as ParentId that is referenced by other features. This way, you can combine rule conditions and features for flexible configurations.
    // 
    // For more information, see [BatchSetCdnDomainConfig](https://help.aliyun.com/document_detail/90915.html) or ParentId configuration example in this topic.
    std::shared_ptr<string> parentId_ = nullptr;
    // The status of the configuration. Valid values:
    // 
    // *   **success**
    // *   **testing**
    // *   **failed**
    // *   **configuring**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
