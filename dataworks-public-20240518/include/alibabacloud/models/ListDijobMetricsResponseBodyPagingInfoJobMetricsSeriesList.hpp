// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODYPAGINGINFOJOBMETRICSSERIESLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODYPAGINGINFOJOBMETRICSSERIESLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList& obj) { 
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList& obj) { 
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList() = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList(const ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList &) = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList(ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList &&) = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList() = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList& operator=(const ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList &) = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList& operator=(ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->time_ != nullptr
        && this->value_ != nullptr; };
    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The point in time at which data is sampled based on the metric.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The sample value.
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
