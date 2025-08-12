// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig(const DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig(DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(const DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
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
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs functionArgs() { DARABONBA_PTR_GET(functionArgs_, Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(const Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configuration ID.
    std::shared_ptr<string> configId_ = nullptr;
    // The attributes of the feature.
    std::shared_ptr<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs> functionArgs_ = nullptr;
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
