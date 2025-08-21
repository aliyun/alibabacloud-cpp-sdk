// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGovernanceItemReportResponseBodyColumnsSchema.hpp>
#include <alibabacloud/models/GetGovernanceItemReportResponseBodyColumnsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceItemReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceItemReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnsSchema, columnsSchema_);
      DARABONBA_PTR_TO_JSON(ColumnsValue, columnsValue_);
      DARABONBA_PTR_TO_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_ANY_TO_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceItemReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnsSchema, columnsSchema_);
      DARABONBA_PTR_FROM_JSON(ColumnsValue, columnsValue_);
      DARABONBA_PTR_FROM_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_ANY_FROM_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGovernanceItemReportResponseBody() = default ;
    GetGovernanceItemReportResponseBody(const GetGovernanceItemReportResponseBody &) = default ;
    GetGovernanceItemReportResponseBody(GetGovernanceItemReportResponseBody &&) = default ;
    GetGovernanceItemReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceItemReportResponseBody() = default ;
    GetGovernanceItemReportResponseBody& operator=(const GetGovernanceItemReportResponseBody &) = default ;
    GetGovernanceItemReportResponseBody& operator=(GetGovernanceItemReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnsSchema_ != nullptr
        && this->columnsValue_ != nullptr && this->generateTime_ != nullptr && this->isTruncated_ != nullptr && this->marker_ != nullptr && this->metricType_ != nullptr
        && this->metricValue_ != nullptr && this->requestId_ != nullptr; };
    // columnsSchema Field Functions 
    bool hasColumnsSchema() const { return this->columnsSchema_ != nullptr;};
    void deleteColumnsSchema() { this->columnsSchema_ = nullptr;};
    inline const GetGovernanceItemReportResponseBodyColumnsSchema & columnsSchema() const { DARABONBA_PTR_GET_CONST(columnsSchema_, GetGovernanceItemReportResponseBodyColumnsSchema) };
    inline GetGovernanceItemReportResponseBodyColumnsSchema columnsSchema() { DARABONBA_PTR_GET(columnsSchema_, GetGovernanceItemReportResponseBodyColumnsSchema) };
    inline GetGovernanceItemReportResponseBody& setColumnsSchema(const GetGovernanceItemReportResponseBodyColumnsSchema & columnsSchema) { DARABONBA_PTR_SET_VALUE(columnsSchema_, columnsSchema) };
    inline GetGovernanceItemReportResponseBody& setColumnsSchema(GetGovernanceItemReportResponseBodyColumnsSchema && columnsSchema) { DARABONBA_PTR_SET_RVALUE(columnsSchema_, columnsSchema) };


    // columnsValue Field Functions 
    bool hasColumnsValue() const { return this->columnsValue_ != nullptr;};
    void deleteColumnsValue() { this->columnsValue_ = nullptr;};
    inline const GetGovernanceItemReportResponseBodyColumnsValue & columnsValue() const { DARABONBA_PTR_GET_CONST(columnsValue_, GetGovernanceItemReportResponseBodyColumnsValue) };
    inline GetGovernanceItemReportResponseBodyColumnsValue columnsValue() { DARABONBA_PTR_GET(columnsValue_, GetGovernanceItemReportResponseBodyColumnsValue) };
    inline GetGovernanceItemReportResponseBody& setColumnsValue(const GetGovernanceItemReportResponseBodyColumnsValue & columnsValue) { DARABONBA_PTR_SET_VALUE(columnsValue_, columnsValue) };
    inline GetGovernanceItemReportResponseBody& setColumnsValue(GetGovernanceItemReportResponseBodyColumnsValue && columnsValue) { DARABONBA_PTR_SET_RVALUE(columnsValue_, columnsValue) };


    // generateTime Field Functions 
    bool hasGenerateTime() const { return this->generateTime_ != nullptr;};
    void deleteGenerateTime() { this->generateTime_ = nullptr;};
    inline string generateTime() const { DARABONBA_PTR_GET_DEFAULT(generateTime_, "") };
    inline GetGovernanceItemReportResponseBody& setGenerateTime(string generateTime) { DARABONBA_PTR_SET_VALUE(generateTime_, generateTime) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline GetGovernanceItemReportResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline GetGovernanceItemReportResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetGovernanceItemReportResponseBody& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline     const Darabonba::Json & metricValue() const { DARABONBA_GET(metricValue_) };
    Darabonba::Json & metricValue() { DARABONBA_GET(metricValue_) };
    inline GetGovernanceItemReportResponseBody& setMetricValue(const Darabonba::Json & metricValue) { DARABONBA_SET_VALUE(metricValue_, metricValue) };
    inline GetGovernanceItemReportResponseBody& setMetricValue(Darabonba::Json & metricValue) { DARABONBA_SET_RVALUE(metricValue_, metricValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGovernanceItemReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetGovernanceItemReportResponseBodyColumnsSchema> columnsSchema_ = nullptr;
    std::shared_ptr<GetGovernanceItemReportResponseBodyColumnsValue> columnsValue_ = nullptr;
    std::shared_ptr<string> generateTime_ = nullptr;
    std::shared_ptr<bool> isTruncated_ = nullptr;
    std::shared_ptr<string> marker_ = nullptr;
    std::shared_ptr<string> metricType_ = nullptr;
    Darabonba::Json metricValue_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
