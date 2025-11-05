// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICDATARESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICDATARESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeMetricDataResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricDataResponseBodyDataList& obj) { 
      DARABONBA_ANY_TO_JSON(Datapoints, datapoints_);
      DARABONBA_ANY_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricDataResponseBodyDataList& obj) { 
      DARABONBA_ANY_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_ANY_FROM_JSON(Labels, labels_);
    };
    DescribeMetricDataResponseBodyDataList() = default ;
    DescribeMetricDataResponseBodyDataList(const DescribeMetricDataResponseBodyDataList &) = default ;
    DescribeMetricDataResponseBodyDataList(DescribeMetricDataResponseBodyDataList &&) = default ;
    DescribeMetricDataResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricDataResponseBodyDataList() = default ;
    DescribeMetricDataResponseBodyDataList& operator=(const DescribeMetricDataResponseBodyDataList &) = default ;
    DescribeMetricDataResponseBodyDataList& operator=(DescribeMetricDataResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datapoints_ == nullptr
        && return this->labels_ == nullptr; };
    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline     const Darabonba::Json & datapoints() const { DARABONBA_GET(datapoints_) };
    Darabonba::Json & datapoints() { DARABONBA_GET(datapoints_) };
    inline DescribeMetricDataResponseBodyDataList& setDatapoints(const Darabonba::Json & datapoints) { DARABONBA_SET_VALUE(datapoints_, datapoints) };
    inline DescribeMetricDataResponseBodyDataList& setDatapoints(Darabonba::Json & datapoints) { DARABONBA_SET_RVALUE(datapoints_, datapoints) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & labels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & labels() { DARABONBA_GET(labels_) };
    inline DescribeMetricDataResponseBodyDataList& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline DescribeMetricDataResponseBodyDataList& setLabels(Darabonba::Json & labels) { DARABONBA_SET_RVALUE(labels_, labels) };


  protected:
    // List of monitoring data, consisting of a series of consecutive second-level timestamps and the corresponding metric values at those times.
    Darabonba::Json datapoints_ = nullptr;
    // Labels.
    Darabonba::Json labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
