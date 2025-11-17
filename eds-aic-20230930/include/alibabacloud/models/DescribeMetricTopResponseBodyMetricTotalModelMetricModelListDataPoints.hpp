// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& obj) { 
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(Minimum, minimum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints() = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints(const DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints &) = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints(DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints &&) = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints() = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& operator=(const DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints &) = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& operator=(DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->average_ == nullptr
        && return this->id_ == nullptr && return this->maximum_ == nullptr && return this->minimum_ == nullptr && return this->name_ == nullptr && return this->properties_ == nullptr
        && return this->timestamp_ == nullptr; };
    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline double average() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& setAverage(double average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline double maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline double minimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<double> average_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<double> maximum_ = nullptr;
    std::shared_ptr<double> minimum_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> properties_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
