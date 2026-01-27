// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Warnings, warnings_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
    };
    DescribeMetricDataResponseBody() = default ;
    DescribeMetricDataResponseBody(const DescribeMetricDataResponseBody &) = default ;
    DescribeMetricDataResponseBody(DescribeMetricDataResponseBody &&) = default ;
    DescribeMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricDataResponseBody() = default ;
    DescribeMetricDataResponseBody& operator=(const DescribeMetricDataResponseBody &) = default ;
    DescribeMetricDataResponseBody& operator=(DescribeMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_ANY_TO_JSON(Datapoints, datapoints_);
        DARABONBA_ANY_TO_JSON(Labels, labels_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_ANY_FROM_JSON(Datapoints, datapoints_);
        DARABONBA_ANY_FROM_JSON(Labels, labels_);
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
      virtual bool empty() const override { return this->datapoints_ == nullptr
        && this->labels_ == nullptr; };
      // datapoints Field Functions 
      bool hasDatapoints() const { return this->datapoints_ != nullptr;};
      void deleteDatapoints() { this->datapoints_ = nullptr;};
      inline       const Darabonba::Json & getDatapoints() const { DARABONBA_GET(datapoints_) };
      Darabonba::Json & getDatapoints() { DARABONBA_GET(datapoints_) };
      inline DataList& setDatapoints(const Darabonba::Json & datapoints) { DARABONBA_SET_VALUE(datapoints_, datapoints) };
      inline DataList& setDatapoints(Darabonba::Json && datapoints) { DARABONBA_SET_RVALUE(datapoints_, datapoints) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline       const Darabonba::Json & getLabels() const { DARABONBA_GET(labels_) };
      Darabonba::Json & getLabels() { DARABONBA_GET(labels_) };
      inline DataList& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
      inline DataList& setLabels(Darabonba::Json && labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    protected:
      // List of monitoring data, consisting of a series of consecutive second-level timestamps and the corresponding metric values at those times.
      Darabonba::Json datapoints_ {};
      // Labels.
      Darabonba::Json labels_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->warnings_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeMetricDataResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeMetricDataResponseBody::DataList>) };
    inline vector<DescribeMetricDataResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeMetricDataResponseBody::DataList>) };
    inline DescribeMetricDataResponseBody& setDataList(const vector<DescribeMetricDataResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeMetricDataResponseBody& setDataList(vector<DescribeMetricDataResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMetricDataResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline const vector<string> & getWarnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<string>) };
    inline vector<string> getWarnings() { DARABONBA_PTR_GET(warnings_, vector<string>) };
    inline DescribeMetricDataResponseBody& setWarnings(const vector<string> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
    inline DescribeMetricDataResponseBody& setWarnings(vector<string> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


  protected:
    // Collection of monitoring data for the cloud disk.
    shared_ptr<vector<DescribeMetricDataResponseBody::DataList>> dataList_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of data points queried.
    shared_ptr<int32_t> totalCount_ {};
    // List of warning messages.
    shared_ptr<vector<string>> warnings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
