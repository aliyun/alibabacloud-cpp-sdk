// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TIMEDPOOLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TIMEDPOOLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ElasticInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class TimedPoolConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TimedPoolConfig& obj) { 
      DARABONBA_PTR_TO_JSON(effectiveEndDate, effectiveEndDate_);
      DARABONBA_PTR_TO_JSON(effectiveStartDate, effectiveStartDate_);
      DARABONBA_PTR_TO_JSON(elasticIntervals, elasticIntervals_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, TimedPoolConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(effectiveEndDate, effectiveEndDate_);
      DARABONBA_PTR_FROM_JSON(effectiveStartDate, effectiveStartDate_);
      DARABONBA_PTR_FROM_JSON(elasticIntervals, elasticIntervals_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    TimedPoolConfig() = default ;
    TimedPoolConfig(const TimedPoolConfig &) = default ;
    TimedPoolConfig(TimedPoolConfig &&) = default ;
    TimedPoolConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TimedPoolConfig() = default ;
    TimedPoolConfig& operator=(const TimedPoolConfig &) = default ;
    TimedPoolConfig& operator=(TimedPoolConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveEndDate_ == nullptr
        && this->effectiveStartDate_ == nullptr && this->elasticIntervals_ == nullptr && this->timeZone_ == nullptr; };
    // effectiveEndDate Field Functions 
    bool hasEffectiveEndDate() const { return this->effectiveEndDate_ != nullptr;};
    void deleteEffectiveEndDate() { this->effectiveEndDate_ = nullptr;};
    inline string getEffectiveEndDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndDate_, "") };
    inline TimedPoolConfig& setEffectiveEndDate(string effectiveEndDate) { DARABONBA_PTR_SET_VALUE(effectiveEndDate_, effectiveEndDate) };


    // effectiveStartDate Field Functions 
    bool hasEffectiveStartDate() const { return this->effectiveStartDate_ != nullptr;};
    void deleteEffectiveStartDate() { this->effectiveStartDate_ = nullptr;};
    inline string getEffectiveStartDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartDate_, "") };
    inline TimedPoolConfig& setEffectiveStartDate(string effectiveStartDate) { DARABONBA_PTR_SET_VALUE(effectiveStartDate_, effectiveStartDate) };


    // elasticIntervals Field Functions 
    bool hasElasticIntervals() const { return this->elasticIntervals_ != nullptr;};
    void deleteElasticIntervals() { this->elasticIntervals_ = nullptr;};
    inline const vector<ElasticInterval> & getElasticIntervals() const { DARABONBA_PTR_GET_CONST(elasticIntervals_, vector<ElasticInterval>) };
    inline vector<ElasticInterval> getElasticIntervals() { DARABONBA_PTR_GET(elasticIntervals_, vector<ElasticInterval>) };
    inline TimedPoolConfig& setElasticIntervals(const vector<ElasticInterval> & elasticIntervals) { DARABONBA_PTR_SET_VALUE(elasticIntervals_, elasticIntervals) };
    inline TimedPoolConfig& setElasticIntervals(vector<ElasticInterval> && elasticIntervals) { DARABONBA_PTR_SET_RVALUE(elasticIntervals_, elasticIntervals) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline TimedPoolConfig& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    shared_ptr<string> effectiveEndDate_ {};
    shared_ptr<string> effectiveStartDate_ {};
    shared_ptr<vector<ElasticInterval>> elasticIntervals_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
