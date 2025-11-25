// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceGroupMetricDataResponseBodyMetricData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricData, metricData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricData, metricData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListResourceGroupMetricDataResponseBody() = default ;
    ListResourceGroupMetricDataResponseBody(const ListResourceGroupMetricDataResponseBody &) = default ;
    ListResourceGroupMetricDataResponseBody(ListResourceGroupMetricDataResponseBody &&) = default ;
    ListResourceGroupMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupMetricDataResponseBody() = default ;
    ListResourceGroupMetricDataResponseBody& operator=(const ListResourceGroupMetricDataResponseBody &) = default ;
    ListResourceGroupMetricDataResponseBody& operator=(ListResourceGroupMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricData_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // metricData Field Functions 
    bool hasMetricData() const { return this->metricData_ != nullptr;};
    void deleteMetricData() { this->metricData_ = nullptr;};
    inline const ListResourceGroupMetricDataResponseBodyMetricData & metricData() const { DARABONBA_PTR_GET_CONST(metricData_, ListResourceGroupMetricDataResponseBodyMetricData) };
    inline ListResourceGroupMetricDataResponseBodyMetricData metricData() { DARABONBA_PTR_GET(metricData_, ListResourceGroupMetricDataResponseBodyMetricData) };
    inline ListResourceGroupMetricDataResponseBody& setMetricData(const ListResourceGroupMetricDataResponseBodyMetricData & metricData) { DARABONBA_PTR_SET_VALUE(metricData_, metricData) };
    inline ListResourceGroupMetricDataResponseBody& setMetricData(ListResourceGroupMetricDataResponseBodyMetricData && metricData) { DARABONBA_PTR_SET_RVALUE(metricData_, metricData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourceGroupMetricDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Monitoring metric data.
    std::shared_ptr<ListResourceGroupMetricDataResponseBodyMetricData> metricData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
