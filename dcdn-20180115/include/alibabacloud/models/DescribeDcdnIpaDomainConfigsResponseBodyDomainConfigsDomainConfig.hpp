// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig(const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig(DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->functionArgs_ != nullptr && this->functionName_ != nullptr && this->status_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs functionArgs() { DARABONBA_PTR_GET(functionArgs_, Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(const Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // The list of features.
    std::shared_ptr<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs> functionArgs_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The configuration status of the feature. Valid values:
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
