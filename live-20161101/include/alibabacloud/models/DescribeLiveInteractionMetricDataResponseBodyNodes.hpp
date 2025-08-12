// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEINTERACTIONMETRICDATARESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEINTERACTIONMETRICDATARESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveInteractionMetricDataResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveInteractionMetricDataResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveInteractionMetricDataResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLiveInteractionMetricDataResponseBodyNodes() = default ;
    DescribeLiveInteractionMetricDataResponseBodyNodes(const DescribeLiveInteractionMetricDataResponseBodyNodes &) = default ;
    DescribeLiveInteractionMetricDataResponseBodyNodes(DescribeLiveInteractionMetricDataResponseBodyNodes &&) = default ;
    DescribeLiveInteractionMetricDataResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveInteractionMetricDataResponseBodyNodes() = default ;
    DescribeLiveInteractionMetricDataResponseBodyNodes& operator=(const DescribeLiveInteractionMetricDataResponseBodyNodes &) = default ;
    DescribeLiveInteractionMetricDataResponseBodyNodes& operator=(DescribeLiveInteractionMetricDataResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timestamp_ != nullptr
        && this->value_ != nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeLiveInteractionMetricDataResponseBodyNodes& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeLiveInteractionMetricDataResponseBodyNodes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The time when the metric was queried. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The value of the metric.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
