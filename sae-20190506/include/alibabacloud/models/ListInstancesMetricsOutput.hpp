// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESMETRICSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESMETRICSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceMetricInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListInstancesMetricsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesMetricsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(metricsList, metricsList_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesMetricsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(metricsList, metricsList_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListInstancesMetricsOutput() = default ;
    ListInstancesMetricsOutput(const ListInstancesMetricsOutput &) = default ;
    ListInstancesMetricsOutput(ListInstancesMetricsOutput &&) = default ;
    ListInstancesMetricsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesMetricsOutput() = default ;
    ListInstancesMetricsOutput& operator=(const ListInstancesMetricsOutput &) = default ;
    ListInstancesMetricsOutput& operator=(ListInstancesMetricsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->metricsList_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesMetricsOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // metricsList Field Functions 
    bool hasMetricsList() const { return this->metricsList_ != nullptr;};
    void deleteMetricsList() { this->metricsList_ = nullptr;};
    inline const vector<InstanceMetricInfo> & getMetricsList() const { DARABONBA_PTR_GET_CONST(metricsList_, vector<InstanceMetricInfo>) };
    inline vector<InstanceMetricInfo> getMetricsList() { DARABONBA_PTR_GET(metricsList_, vector<InstanceMetricInfo>) };
    inline ListInstancesMetricsOutput& setMetricsList(const vector<InstanceMetricInfo> & metricsList) { DARABONBA_PTR_SET_VALUE(metricsList_, metricsList) };
    inline ListInstancesMetricsOutput& setMetricsList(vector<InstanceMetricInfo> && metricsList) { DARABONBA_PTR_SET_RVALUE(metricsList_, metricsList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesMetricsOutput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesMetricsOutput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInstancesMetricsOutput& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<InstanceMetricInfo>> metricsList_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
