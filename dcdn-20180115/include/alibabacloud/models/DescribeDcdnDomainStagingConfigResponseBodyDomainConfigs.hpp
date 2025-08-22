// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs() = default ;
    DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs(const DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs &) = default ;
    DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs(DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs &&) = default ;
    DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs() = default ;
    DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& operator=(const DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs &) = default ;
    DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& operator=(DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs &&) = default ;
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
    inline DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, vector<Models::DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs>) };
    inline vector<Models::DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> functionArgs() { DARABONBA_PTR_GET(functionArgs_, vector<Models::DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs>) };
    inline DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& setFunctionArgs(const vector<Models::DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& setFunctionArgs(vector<Models::DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnDomainStagingConfigResponseBodyDomainConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // The following table describes the features.
    std::shared_ptr<vector<Models::DescribeDcdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs>> functionArgs_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The status. Valid values:
    // 
    // *   success: The configuration is successful.
    // *   testing: The configuration is under testing.
    // *   failed: The task failed.
    // *   configuring: The feature is being configured.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
