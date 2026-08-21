// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDEVICEWORKLOADTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDEVICEWORKLOADTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetUserDeviceWorkloadTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDeviceWorkloadTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TitleEn, titleEn_);
      DARABONBA_PTR_TO_JSON(TitleZh, titleZh_);
      DARABONBA_PTR_TO_JSON(WorkloadList, workloadList_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDeviceWorkloadTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TitleEn, titleEn_);
      DARABONBA_PTR_FROM_JSON(TitleZh, titleZh_);
      DARABONBA_PTR_FROM_JSON(WorkloadList, workloadList_);
    };
    GetUserDeviceWorkloadTrendResponseBody() = default ;
    GetUserDeviceWorkloadTrendResponseBody(const GetUserDeviceWorkloadTrendResponseBody &) = default ;
    GetUserDeviceWorkloadTrendResponseBody(GetUserDeviceWorkloadTrendResponseBody &&) = default ;
    GetUserDeviceWorkloadTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDeviceWorkloadTrendResponseBody() = default ;
    GetUserDeviceWorkloadTrendResponseBody& operator=(const GetUserDeviceWorkloadTrendResponseBody &) = default ;
    GetUserDeviceWorkloadTrendResponseBody& operator=(GetUserDeviceWorkloadTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkloadList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkloadList& obj) { 
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(Workload, workload_);
      };
      friend void from_json(const Darabonba::Json& j, WorkloadList& obj) { 
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(Workload, workload_);
      };
      WorkloadList() = default ;
      WorkloadList(const WorkloadList &) = default ;
      WorkloadList(WorkloadList &&) = default ;
      WorkloadList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkloadList() = default ;
      WorkloadList& operator=(const WorkloadList &) = default ;
      WorkloadList& operator=(WorkloadList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->workload_ == nullptr; };
      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline WorkloadList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // workload Field Functions 
      bool hasWorkload() const { return this->workload_ != nullptr;};
      void deleteWorkload() { this->workload_ = nullptr;};
      inline double getWorkload() const { DARABONBA_PTR_GET_DEFAULT(workload_, 0.0) };
      inline WorkloadList& setWorkload(double workload) { DARABONBA_PTR_SET_VALUE(workload_, workload) };


    protected:
      // The collection time of the data point. This value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> timestamp_ {};
      // The workload usage percentage. Valid values: 0 to 100, with two decimal places.
      shared_ptr<double> workload_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->titleEn_ == nullptr && this->titleZh_ == nullptr && this->workloadList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserDeviceWorkloadTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // titleEn Field Functions 
    bool hasTitleEn() const { return this->titleEn_ != nullptr;};
    void deleteTitleEn() { this->titleEn_ = nullptr;};
    inline string getTitleEn() const { DARABONBA_PTR_GET_DEFAULT(titleEn_, "") };
    inline GetUserDeviceWorkloadTrendResponseBody& setTitleEn(string titleEn) { DARABONBA_PTR_SET_VALUE(titleEn_, titleEn) };


    // titleZh Field Functions 
    bool hasTitleZh() const { return this->titleZh_ != nullptr;};
    void deleteTitleZh() { this->titleZh_ = nullptr;};
    inline string getTitleZh() const { DARABONBA_PTR_GET_DEFAULT(titleZh_, "") };
    inline GetUserDeviceWorkloadTrendResponseBody& setTitleZh(string titleZh) { DARABONBA_PTR_SET_VALUE(titleZh_, titleZh) };


    // workloadList Field Functions 
    bool hasWorkloadList() const { return this->workloadList_ != nullptr;};
    void deleteWorkloadList() { this->workloadList_ = nullptr;};
    inline const vector<GetUserDeviceWorkloadTrendResponseBody::WorkloadList> & getWorkloadList() const { DARABONBA_PTR_GET_CONST(workloadList_, vector<GetUserDeviceWorkloadTrendResponseBody::WorkloadList>) };
    inline vector<GetUserDeviceWorkloadTrendResponseBody::WorkloadList> getWorkloadList() { DARABONBA_PTR_GET(workloadList_, vector<GetUserDeviceWorkloadTrendResponseBody::WorkloadList>) };
    inline GetUserDeviceWorkloadTrendResponseBody& setWorkloadList(const vector<GetUserDeviceWorkloadTrendResponseBody::WorkloadList> & workloadList) { DARABONBA_PTR_SET_VALUE(workloadList_, workloadList) };
    inline GetUserDeviceWorkloadTrendResponseBody& setWorkloadList(vector<GetUserDeviceWorkloadTrendResponseBody::WorkloadList> && workloadList) { DARABONBA_PTR_SET_RVALUE(workloadList_, workloadList) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The English name of the workload type. Valid values:
    // - **CPU Usage**: returned when WorkloadType is set to cpu.
    // - **Memory Usage**: returned when WorkloadType is set to mem.
    shared_ptr<string> titleEn_ {};
    // The Chinese name of the workload type. Valid values:
    // - **CPU使用率**: returned when WorkloadType is set to cpu.
    // - **内存使用率**: returned when WorkloadType is set to mem.
    shared_ptr<string> titleZh_ {};
    // The list of workload trend data points, sorted by time in ascending order.
    shared_ptr<vector<GetUserDeviceWorkloadTrendResponseBody::WorkloadList>> workloadList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
