// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRUNSRESPONSEBODYJOBRUNSCONFIGURATIONOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRUNSRESPONSEBODYJOBRUNSCONFIGURATIONOVERRIDES_HPP_
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
  class ListJobRunsResponseBodyJobRunsConfigurationOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobRunsResponseBodyJobRunsConfigurationOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(configurations, configurations_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobRunsResponseBodyJobRunsConfigurationOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(configurations, configurations_);
    };
    ListJobRunsResponseBodyJobRunsConfigurationOverrides() = default ;
    ListJobRunsResponseBodyJobRunsConfigurationOverrides(const ListJobRunsResponseBodyJobRunsConfigurationOverrides &) = default ;
    ListJobRunsResponseBodyJobRunsConfigurationOverrides(ListJobRunsResponseBodyJobRunsConfigurationOverrides &&) = default ;
    ListJobRunsResponseBodyJobRunsConfigurationOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobRunsResponseBodyJobRunsConfigurationOverrides() = default ;
    ListJobRunsResponseBodyJobRunsConfigurationOverrides& operator=(const ListJobRunsResponseBodyJobRunsConfigurationOverrides &) = default ;
    ListJobRunsResponseBodyJobRunsConfigurationOverrides& operator=(ListJobRunsResponseBodyJobRunsConfigurationOverrides &&) = default ;
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
    inline ListJobRunsResponseBodyJobRunsConfigurationOverrides& setConfigurations(const vector<Models::Configuration> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
    inline ListJobRunsResponseBodyJobRunsConfigurationOverrides& setConfigurations(vector<Models::Configuration> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


  protected:
    // The SparkConf objects.
    std::shared_ptr<vector<Models::Configuration>> configurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
