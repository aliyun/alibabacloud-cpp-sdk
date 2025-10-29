// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStagingConfigResponseBodyDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigs() = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigs(const DescribeLiveDomainStagingConfigResponseBodyDomainConfigs &) = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigs(DescribeLiveDomainStagingConfigResponseBodyDomainConfigs &&) = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStagingConfigResponseBodyDomainConfigs() = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& operator=(const DescribeLiveDomainStagingConfigResponseBodyDomainConfigs &) = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& operator=(DescribeLiveDomainStagingConfigResponseBodyDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->functionArgs_ == nullptr && return this->functionName_ == nullptr && return this->status_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, vector<Models::DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs>) };
    inline vector<Models::DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> functionArgs() { DARABONBA_PTR_GET(functionArgs_, vector<Models::DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs>) };
    inline DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& setFunctionArgs(const vector<Models::DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& setFunctionArgs(vector<Models::DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs> && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLiveDomainStagingConfigResponseBodyDomainConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configuration ID.
    std::shared_ptr<string> configId_ = nullptr;
    // The configurations of the feature.
    std::shared_ptr<vector<Models::DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs>> functionArgs_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The configuration status. Valid values:
    // 
    // *   **success**
    // *   **testing**
    // *   **failed**
    // *   **configuring**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
