// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVDROPMETRICSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVDROPMETRICSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvDropMetricsRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvDropMetricsRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvDropMetricsRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEnvDropMetricsRuleRequest() = default ;
    DescribeEnvDropMetricsRuleRequest(const DescribeEnvDropMetricsRuleRequest &) = default ;
    DescribeEnvDropMetricsRuleRequest(DescribeEnvDropMetricsRuleRequest &&) = default ;
    DescribeEnvDropMetricsRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvDropMetricsRuleRequest() = default ;
    DescribeEnvDropMetricsRuleRequest& operator=(const DescribeEnvDropMetricsRuleRequest &) = default ;
    DescribeEnvDropMetricsRuleRequest& operator=(DescribeEnvDropMetricsRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->regionId_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvDropMetricsRuleRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnvDropMetricsRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
