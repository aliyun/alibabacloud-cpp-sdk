// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBRUNREQUESTCONFIGURATIONOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBRUNREQUESTCONFIGURATIONOVERRIDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartJobRunRequestConfigurationOverridesConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StartJobRunRequestConfigurationOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobRunRequestConfigurationOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(configurations, configurations_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobRunRequestConfigurationOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(configurations, configurations_);
    };
    StartJobRunRequestConfigurationOverrides() = default ;
    StartJobRunRequestConfigurationOverrides(const StartJobRunRequestConfigurationOverrides &) = default ;
    StartJobRunRequestConfigurationOverrides(StartJobRunRequestConfigurationOverrides &&) = default ;
    StartJobRunRequestConfigurationOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobRunRequestConfigurationOverrides() = default ;
    StartJobRunRequestConfigurationOverrides& operator=(const StartJobRunRequestConfigurationOverrides &) = default ;
    StartJobRunRequestConfigurationOverrides& operator=(StartJobRunRequestConfigurationOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configurations_ != nullptr; };
    // configurations Field Functions 
    bool hasConfigurations() const { return this->configurations_ != nullptr;};
    void deleteConfigurations() { this->configurations_ = nullptr;};
    inline const vector<Models::StartJobRunRequestConfigurationOverridesConfigurations> & configurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<Models::StartJobRunRequestConfigurationOverridesConfigurations>) };
    inline vector<Models::StartJobRunRequestConfigurationOverridesConfigurations> configurations() { DARABONBA_PTR_GET(configurations_, vector<Models::StartJobRunRequestConfigurationOverridesConfigurations>) };
    inline StartJobRunRequestConfigurationOverrides& setConfigurations(const vector<Models::StartJobRunRequestConfigurationOverridesConfigurations> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
    inline StartJobRunRequestConfigurationOverrides& setConfigurations(vector<Models::StartJobRunRequestConfigurationOverridesConfigurations> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


  protected:
    // The SparkConf objects.
    std::shared_ptr<vector<Models::StartJobRunRequestConfigurationOverridesConfigurations>> configurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
