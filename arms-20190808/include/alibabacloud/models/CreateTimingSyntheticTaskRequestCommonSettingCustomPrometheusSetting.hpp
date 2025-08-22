// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMPROMETHEUSSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMPROMETHEUSSETTING_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& obj) { 
      DARABONBA_PTR_TO_JSON(PrometheusClusterId, prometheusClusterId_);
      DARABONBA_PTR_TO_JSON(PrometheusClusterRegion, prometheusClusterRegion_);
      DARABONBA_PTR_TO_JSON(PrometheusLabels, prometheusLabels_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(PrometheusClusterId, prometheusClusterId_);
      DARABONBA_PTR_FROM_JSON(PrometheusClusterRegion, prometheusClusterRegion_);
      DARABONBA_PTR_FROM_JSON(PrometheusLabels, prometheusLabels_);
    };
    CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting() = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting(const CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting &) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting(CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting &&) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting() = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& operator=(const CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting &) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& operator=(CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prometheusClusterId_ != nullptr
        && this->prometheusClusterRegion_ != nullptr && this->prometheusLabels_ != nullptr; };
    // prometheusClusterId Field Functions 
    bool hasPrometheusClusterId() const { return this->prometheusClusterId_ != nullptr;};
    void deletePrometheusClusterId() { this->prometheusClusterId_ = nullptr;};
    inline string prometheusClusterId() const { DARABONBA_PTR_GET_DEFAULT(prometheusClusterId_, "") };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& setPrometheusClusterId(string prometheusClusterId) { DARABONBA_PTR_SET_VALUE(prometheusClusterId_, prometheusClusterId) };


    // prometheusClusterRegion Field Functions 
    bool hasPrometheusClusterRegion() const { return this->prometheusClusterRegion_ != nullptr;};
    void deletePrometheusClusterRegion() { this->prometheusClusterRegion_ = nullptr;};
    inline string prometheusClusterRegion() const { DARABONBA_PTR_GET_DEFAULT(prometheusClusterRegion_, "") };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& setPrometheusClusterRegion(string prometheusClusterRegion) { DARABONBA_PTR_SET_VALUE(prometheusClusterRegion_, prometheusClusterRegion) };


    // prometheusLabels Field Functions 
    bool hasPrometheusLabels() const { return this->prometheusLabels_ != nullptr;};
    void deletePrometheusLabels() { this->prometheusLabels_ = nullptr;};
    inline const map<string, string> & prometheusLabels() const { DARABONBA_PTR_GET_CONST(prometheusLabels_, map<string, string>) };
    inline map<string, string> prometheusLabels() { DARABONBA_PTR_GET(prometheusLabels_, map<string, string>) };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& setPrometheusLabels(const map<string, string> & prometheusLabels) { DARABONBA_PTR_SET_VALUE(prometheusLabels_, prometheusLabels) };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomPrometheusSetting& setPrometheusLabels(map<string, string> && prometheusLabels) { DARABONBA_PTR_SET_RVALUE(prometheusLabels_, prometheusLabels) };


  protected:
    // A reserved parameter.
    std::shared_ptr<string> prometheusClusterId_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> prometheusClusterRegion_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<map<string, string>> prometheusLabels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
