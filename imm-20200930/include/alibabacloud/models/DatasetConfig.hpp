// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATASETCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsightsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DatasetConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Insights, insights_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Insights, insights_);
    };
    DatasetConfig() = default ;
    DatasetConfig(const DatasetConfig &) = default ;
    DatasetConfig(DatasetConfig &&) = default ;
    DatasetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetConfig() = default ;
    DatasetConfig& operator=(const DatasetConfig &) = default ;
    DatasetConfig& operator=(DatasetConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insights_ == nullptr; };
    // insights Field Functions 
    bool hasInsights() const { return this->insights_ != nullptr;};
    void deleteInsights() { this->insights_ = nullptr;};
    inline const InsightsConfig & getInsights() const { DARABONBA_PTR_GET_CONST(insights_, InsightsConfig) };
    inline InsightsConfig getInsights() { DARABONBA_PTR_GET(insights_, InsightsConfig) };
    inline DatasetConfig& setInsights(const InsightsConfig & insights) { DARABONBA_PTR_SET_VALUE(insights_, insights) };
    inline DatasetConfig& setInsights(InsightsConfig && insights) { DARABONBA_PTR_SET_RVALUE(insights_, insights) };


  protected:
    shared_ptr<InsightsConfig> insights_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
