// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig(const DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig(DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(const DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
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
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs functionArgs() { DARABONBA_PTR_GET(functionArgs_, Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(const Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // The configurations of the features.
    std::shared_ptr<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs> functionArgs_ = nullptr;
    // The feature name.
    std::shared_ptr<string> functionName_ = nullptr;
    // The ID of the advanced condition configuration.
    std::shared_ptr<string> parentId_ = nullptr;
    // The status of the configuration. Valid values:
    // 
    // *   **success**: successful
    // *   **testing**: testing
    // *   **failed**: The configuration failed.
    // *   **configuring**: The configuration is in progress.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
