// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskMonitorDataResponseBodyMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskMonitorDataResponseBody() = default ;
    DescribeDiskMonitorDataResponseBody(const DescribeDiskMonitorDataResponseBody &) = default ;
    DescribeDiskMonitorDataResponseBody(DescribeDiskMonitorDataResponseBody &&) = default ;
    DescribeDiskMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataResponseBody() = default ;
    DescribeDiskMonitorDataResponseBody& operator=(const DescribeDiskMonitorDataResponseBody &) = default ;
    DescribeDiskMonitorDataResponseBody& operator=(DescribeDiskMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorData_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const vector<DescribeDiskMonitorDataResponseBodyMonitorData> & monitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, vector<DescribeDiskMonitorDataResponseBodyMonitorData>) };
    inline vector<DescribeDiskMonitorDataResponseBodyMonitorData> monitorData() { DARABONBA_PTR_GET(monitorData_, vector<DescribeDiskMonitorDataResponseBodyMonitorData>) };
    inline DescribeDiskMonitorDataResponseBody& setMonitorData(const vector<DescribeDiskMonitorDataResponseBodyMonitorData> & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeDiskMonitorDataResponseBody& setMonitorData(vector<DescribeDiskMonitorDataResponseBodyMonitorData> && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskMonitorDataResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The near real-time monitoring data of the disk.
    std::shared_ptr<vector<DescribeDiskMonitorDataResponseBodyMonitorData>> monitorData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
