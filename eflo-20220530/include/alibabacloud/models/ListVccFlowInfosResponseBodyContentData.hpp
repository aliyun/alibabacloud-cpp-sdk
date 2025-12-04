// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCFLOWINFOSRESPONSEBODYCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCFLOWINFOSRESPONSEBODYCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccFlowInfosResponseBodyContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccFlowInfosResponseBodyContentData& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccFlowInfosResponseBodyContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
    };
    ListVccFlowInfosResponseBodyContentData() = default ;
    ListVccFlowInfosResponseBodyContentData(const ListVccFlowInfosResponseBodyContentData &) = default ;
    ListVccFlowInfosResponseBodyContentData(ListVccFlowInfosResponseBodyContentData &&) = default ;
    ListVccFlowInfosResponseBodyContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccFlowInfosResponseBodyContentData() = default ;
    ListVccFlowInfosResponseBodyContentData& operator=(const ListVccFlowInfosResponseBodyContentData &) = default ;
    ListVccFlowInfosResponseBodyContentData& operator=(ListVccFlowInfosResponseBodyContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->metricName_ == nullptr && return this->regionId_ == nullptr && return this->timestamp_ == nullptr && return this->value_ == nullptr && return this->vccId_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListVccFlowInfosResponseBodyContentData& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListVccFlowInfosResponseBodyContentData& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVccFlowInfosResponseBodyContentData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListVccFlowInfosResponseBodyContentData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline ListVccFlowInfosResponseBodyContentData& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline ListVccFlowInfosResponseBodyContentData& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


  protected:
    // The direction.
    std::shared_ptr<string> direction_ = nullptr;
    // The metric. Valid values:
    std::shared_ptr<string> metricName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Time
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // Value
    std::shared_ptr<double> value_ = nullptr;
    // Lingjun Connection ID
    std::shared_ptr<string> vccId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
