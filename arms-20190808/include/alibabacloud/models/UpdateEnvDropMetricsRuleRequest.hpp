// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENVDROPMETRICSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENVDROPMETRICSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateEnvDropMetricsRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnvDropMetricsRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(DropMetrics, dropMetrics_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnvDropMetricsRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(DropMetrics, dropMetrics_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateEnvDropMetricsRuleRequest() = default ;
    UpdateEnvDropMetricsRuleRequest(const UpdateEnvDropMetricsRuleRequest &) = default ;
    UpdateEnvDropMetricsRuleRequest(UpdateEnvDropMetricsRuleRequest &&) = default ;
    UpdateEnvDropMetricsRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnvDropMetricsRuleRequest() = default ;
    UpdateEnvDropMetricsRuleRequest& operator=(const UpdateEnvDropMetricsRuleRequest &) = default ;
    UpdateEnvDropMetricsRuleRequest& operator=(UpdateEnvDropMetricsRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->dropMetrics_ != nullptr && this->environmentId_ != nullptr && this->regionId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline UpdateEnvDropMetricsRuleRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // dropMetrics Field Functions 
    bool hasDropMetrics() const { return this->dropMetrics_ != nullptr;};
    void deleteDropMetrics() { this->dropMetrics_ = nullptr;};
    inline string dropMetrics() const { DARABONBA_PTR_GET_DEFAULT(dropMetrics_, "") };
    inline UpdateEnvDropMetricsRuleRequest& setDropMetrics(string dropMetrics) { DARABONBA_PTR_SET_VALUE(dropMetrics_, dropMetrics) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpdateEnvDropMetricsRuleRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEnvDropMetricsRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dropMetrics_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
