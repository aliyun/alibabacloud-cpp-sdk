// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODYMETRICDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODYMETRICDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupMetricDataResponseBodyMetricDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupMetricDataResponseBodyMetricDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupMetricDataResponseBodyMetricDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListResourceGroupMetricDataResponseBodyMetricDataMetrics() = default ;
    ListResourceGroupMetricDataResponseBodyMetricDataMetrics(const ListResourceGroupMetricDataResponseBodyMetricDataMetrics &) = default ;
    ListResourceGroupMetricDataResponseBodyMetricDataMetrics(ListResourceGroupMetricDataResponseBodyMetricDataMetrics &&) = default ;
    ListResourceGroupMetricDataResponseBodyMetricDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupMetricDataResponseBodyMetricDataMetrics() = default ;
    ListResourceGroupMetricDataResponseBodyMetricDataMetrics& operator=(const ListResourceGroupMetricDataResponseBodyMetricDataMetrics &) = default ;
    ListResourceGroupMetricDataResponseBodyMetricDataMetrics& operator=(ListResourceGroupMetricDataResponseBodyMetricDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timestamp_ == nullptr
        && return this->value_ == nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListResourceGroupMetricDataResponseBodyMetricDataMetrics& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline ListResourceGroupMetricDataResponseBodyMetricDataMetrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
