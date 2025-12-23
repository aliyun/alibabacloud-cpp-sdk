// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATISTICREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATISTICREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListStatisticReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStatisticReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListStatisticReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListStatisticReportRequest() = default ;
    ListStatisticReportRequest(const ListStatisticReportRequest &) = default ;
    ListStatisticReportRequest(ListStatisticReportRequest &&) = default ;
    ListStatisticReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStatisticReportRequest() = default ;
    ListStatisticReportRequest& operator=(const ListStatisticReportRequest &) = default ;
    ListStatisticReportRequest& operator=(ListStatisticReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->endTime_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->query_ == nullptr && return this->startTime_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline string columns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
    inline ListStatisticReportRequest& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline ListStatisticReportRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStatisticReportRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStatisticReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListStatisticReportRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline ListStatisticReportRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The fields to query. Set this parameter in the format of columns="pv,uv,ipv". For more information, see [Metrics of statistical reports](https://help.aliyun.com/document_detail/187665.html).
    std::shared_ptr<string> columns_ = nullptr;
    // The end timestamp of the query. By default, the end time is the current time. Unit: seconds.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // The page number.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The query conditions. Set this parameter in the format of k1:v1,k2:v2. Valid values:
    // 
    // *   experimentSerialNumber: the globally unique sequence number of the test
    // *   sceneTag: the tag of the test scenario
    // *   bizType: the type of the business
    // *   modelId: the ID of the algorithm model
    std::shared_ptr<string> query_ = nullptr;
    // The start timestamp of the query. Unit: seconds.
    std::shared_ptr<int32_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
