// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODYJOBRUNCONFIGURATIONOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODYJOBRUNCONFIGURATIONOVERRIDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Configuration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetJobRunResponseBodyJobRunConfigurationOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobRunResponseBodyJobRunConfigurationOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(configurations, configurations_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobRunResponseBodyJobRunConfigurationOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(configurations, configurations_);
    };
    GetJobRunResponseBodyJobRunConfigurationOverrides() = default ;
    GetJobRunResponseBodyJobRunConfigurationOverrides(const GetJobRunResponseBodyJobRunConfigurationOverrides &) = default ;
    GetJobRunResponseBodyJobRunConfigurationOverrides(GetJobRunResponseBodyJobRunConfigurationOverrides &&) = default ;
    GetJobRunResponseBodyJobRunConfigurationOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobRunResponseBodyJobRunConfigurationOverrides() = default ;
    GetJobRunResponseBodyJobRunConfigurationOverrides& operator=(const GetJobRunResponseBodyJobRunConfigurationOverrides &) = default ;
    GetJobRunResponseBodyJobRunConfigurationOverrides& operator=(GetJobRunResponseBodyJobRunConfigurationOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configurations_ != nullptr; };
    // configurations Field Functions 
    bool hasConfigurations() const { return this->configurations_ != nullptr;};
    void deleteConfigurations() { this->configurations_ = nullptr;};
    inline const vector<Models::Configuration> & configurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<Models::Configuration>) };
    inline vector<Models::Configuration> configurations() { DARABONBA_PTR_GET(configurations_, vector<Models::Configuration>) };
    inline GetJobRunResponseBodyJobRunConfigurationOverrides& setConfigurations(const vector<Models::Configuration> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
    inline GetJobRunResponseBodyJobRunConfigurationOverrides& setConfigurations(vector<Models::Configuration> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


  protected:
    // The configurations.
    std::shared_ptr<vector<Models::Configuration>> configurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
