// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskMonitorDataListResponseBodyMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskMonitorDataListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskMonitorDataListResponseBody() = default ;
    DescribeDiskMonitorDataListResponseBody(const DescribeDiskMonitorDataListResponseBody &) = default ;
    DescribeDiskMonitorDataListResponseBody(DescribeDiskMonitorDataListResponseBody &&) = default ;
    DescribeDiskMonitorDataListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataListResponseBody() = default ;
    DescribeDiskMonitorDataListResponseBody& operator=(const DescribeDiskMonitorDataListResponseBody &) = default ;
    DescribeDiskMonitorDataListResponseBody& operator=(DescribeDiskMonitorDataListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorData_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const vector<DescribeDiskMonitorDataListResponseBodyMonitorData> & monitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, vector<DescribeDiskMonitorDataListResponseBodyMonitorData>) };
    inline vector<DescribeDiskMonitorDataListResponseBodyMonitorData> monitorData() { DARABONBA_PTR_GET(monitorData_, vector<DescribeDiskMonitorDataListResponseBodyMonitorData>) };
    inline DescribeDiskMonitorDataListResponseBody& setMonitorData(const vector<DescribeDiskMonitorDataListResponseBodyMonitorData> & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeDiskMonitorDataListResponseBody& setMonitorData(vector<DescribeDiskMonitorDataListResponseBodyMonitorData> && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskMonitorDataListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskMonitorDataListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskMonitorDataListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The near real-time monitoring data of the disks.
    std::shared_ptr<vector<DescribeDiskMonitorDataListResponseBodyMonitorData>> monitorData_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
