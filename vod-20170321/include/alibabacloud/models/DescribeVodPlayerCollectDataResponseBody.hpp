// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerCollectDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerCollectDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerCollectDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodPlayerCollectDataResponseBody() = default ;
    DescribeVodPlayerCollectDataResponseBody(const DescribeVodPlayerCollectDataResponseBody &) = default ;
    DescribeVodPlayerCollectDataResponseBody(DescribeVodPlayerCollectDataResponseBody &&) = default ;
    DescribeVodPlayerCollectDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerCollectDataResponseBody() = default ;
    DescribeVodPlayerCollectDataResponseBody& operator=(const DescribeVodPlayerCollectDataResponseBody &) = default ;
    DescribeVodPlayerCollectDataResponseBody& operator=(DescribeVodPlayerCollectDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(Value, value_);
        DARABONBA_PTR_TO_JSON(ValueRatio, valueRatio_);
        DARABONBA_PTR_TO_JSON(ValueRefer, valueRefer_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
        DARABONBA_PTR_FROM_JSON(ValueRatio, valueRatio_);
        DARABONBA_PTR_FROM_JSON(ValueRefer, valueRefer_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metric_ == nullptr
        && this->value_ == nullptr && this->valueRatio_ == nullptr && this->valueRefer_ == nullptr; };
      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
      inline DataList& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline DataList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // valueRatio Field Functions 
      bool hasValueRatio() const { return this->valueRatio_ != nullptr;};
      void deleteValueRatio() { this->valueRatio_ = nullptr;};
      inline double getValueRatio() const { DARABONBA_PTR_GET_DEFAULT(valueRatio_, 0.0) };
      inline DataList& setValueRatio(double valueRatio) { DARABONBA_PTR_SET_VALUE(valueRatio_, valueRatio) };


      // valueRefer Field Functions 
      bool hasValueRefer() const { return this->valueRefer_ != nullptr;};
      void deleteValueRefer() { this->valueRefer_ = nullptr;};
      inline double getValueRefer() const { DARABONBA_PTR_GET_DEFAULT(valueRefer_, 0.0) };
      inline DataList& setValueRefer(double valueRefer) { DARABONBA_PTR_SET_VALUE(valueRefer_, valueRefer) };


    protected:
      shared_ptr<string> metric_ {};
      shared_ptr<double> value_ {};
      shared_ptr<double> valueRatio_ {};
      shared_ptr<double> valueRefer_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVodPlayerCollectDataResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVodPlayerCollectDataResponseBody::DataList>) };
    inline vector<DescribeVodPlayerCollectDataResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVodPlayerCollectDataResponseBody::DataList>) };
    inline DescribeVodPlayerCollectDataResponseBody& setDataList(const vector<DescribeVodPlayerCollectDataResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVodPlayerCollectDataResponseBody& setDataList(vector<DescribeVodPlayerCollectDataResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodPlayerCollectDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeVodPlayerCollectDataResponseBody::DataList>> dataList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
