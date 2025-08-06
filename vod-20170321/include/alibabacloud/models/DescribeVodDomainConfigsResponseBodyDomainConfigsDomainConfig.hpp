// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(FunctionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig(const DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig(DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig() = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(const DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig &) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& operator=(DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig &&) = default ;
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
    inline DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline const Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs() const { DARABONBA_PTR_GET_CONST(functionArgs_, Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs functionArgs() { DARABONBA_PTR_GET(functionArgs_, Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs) };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(const Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs & functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionArgs(Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs && functionArgs) { DARABONBA_PTR_SET_RVALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configuration ID.
    std::shared_ptr<string> configId_ = nullptr;
    // The feature parameters.
    std::shared_ptr<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs> functionArgs_ = nullptr;
    // The feature name.
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
} // namespace Vod20170321
#endif
