// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPARKOPERATORINFO_HPP_
#define ALIBABACLOUD_MODELS_SPARKOPERATORINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SparkOperatorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SparkOperatorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
    };
    friend void from_json(const Darabonba::Json& j, SparkOperatorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
    };
    SparkOperatorInfo() = default ;
    SparkOperatorInfo(const SparkOperatorInfo &) = default ;
    SparkOperatorInfo(SparkOperatorInfo &&) = default ;
    SparkOperatorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SparkOperatorInfo() = default ;
    SparkOperatorInfo& operator=(const SparkOperatorInfo &) = default ;
    SparkOperatorInfo& operator=(SparkOperatorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricValue_ != nullptr
        && this->operatorName_ != nullptr; };
    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline int64_t metricValue() const { DARABONBA_PTR_GET_DEFAULT(metricValue_, 0L) };
    inline SparkOperatorInfo& setMetricValue(int64_t metricValue) { DARABONBA_PTR_SET_VALUE(metricValue_, metricValue) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline Darabonba::Bytes operatorName() const { DARABONBA_GET(operatorName_) };
    inline SparkOperatorInfo& setOperatorName(Darabonba::Bytes operatorName) { DARABONBA_SET_VALUE(operatorName_, operatorName) };


  protected:
    std::shared_ptr<int64_t> metricValue_ = nullptr;
    Darabonba::Bytes operatorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
