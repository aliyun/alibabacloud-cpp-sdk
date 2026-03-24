// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINPATHDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINPATHDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainPathDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainPathDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PathDataPerInterval, pathDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainPathDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PathDataPerInterval, pathDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainPathDataResponseBody() = default ;
    DescribeDomainPathDataResponseBody(const DescribeDomainPathDataResponseBody &) = default ;
    DescribeDomainPathDataResponseBody(DescribeDomainPathDataResponseBody &&) = default ;
    DescribeDomainPathDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainPathDataResponseBody() = default ;
    DescribeDomainPathDataResponseBody& operator=(const DescribeDomainPathDataResponseBody &) = default ;
    DescribeDomainPathDataResponseBody& operator=(DescribeDomainPathDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PathDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PathDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(UsageData, usageData_);
      };
      friend void from_json(const Darabonba::Json& j, PathDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
      };
      PathDataPerInterval() = default ;
      PathDataPerInterval(const PathDataPerInterval &) = default ;
      PathDataPerInterval(PathDataPerInterval &&) = default ;
      PathDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PathDataPerInterval() = default ;
      PathDataPerInterval& operator=(const PathDataPerInterval &) = default ;
      PathDataPerInterval& operator=(PathDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageData& obj) { 
          DARABONBA_PTR_TO_JSON(Acc, acc_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Traffic, traffic_);
        };
        friend void from_json(const Darabonba::Json& j, UsageData& obj) { 
          DARABONBA_PTR_FROM_JSON(Acc, acc_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
        };
        UsageData() = default ;
        UsageData(const UsageData &) = default ;
        UsageData(UsageData &&) = default ;
        UsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageData() = default ;
        UsageData& operator=(const UsageData &) = default ;
        UsageData& operator=(UsageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acc_ == nullptr
        && this->path_ == nullptr && this->time_ == nullptr && this->traffic_ == nullptr; };
        // acc Field Functions 
        bool hasAcc() const { return this->acc_ != nullptr;};
        void deleteAcc() { this->acc_ = nullptr;};
        inline int32_t getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0) };
        inline UsageData& setAcc(int32_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline UsageData& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline UsageData& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // traffic Field Functions 
        bool hasTraffic() const { return this->traffic_ != nullptr;};
        void deleteTraffic() { this->traffic_ = nullptr;};
        inline int32_t getTraffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0) };
        inline UsageData& setTraffic(int32_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


      protected:
        shared_ptr<int32_t> acc_ {};
        shared_ptr<string> path_ {};
        shared_ptr<string> time_ {};
        shared_ptr<int32_t> traffic_ {};
      };

      virtual bool empty() const override { return this->usageData_ == nullptr; };
      // usageData Field Functions 
      bool hasUsageData() const { return this->usageData_ != nullptr;};
      void deleteUsageData() { this->usageData_ = nullptr;};
      inline const vector<PathDataPerInterval::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<PathDataPerInterval::UsageData>) };
      inline vector<PathDataPerInterval::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<PathDataPerInterval::UsageData>) };
      inline PathDataPerInterval& setUsageData(const vector<PathDataPerInterval::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
      inline PathDataPerInterval& setUsageData(vector<PathDataPerInterval::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


    protected:
      shared_ptr<vector<PathDataPerInterval::UsageData>> usageData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pathDataPerInterval_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->totalCount_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainPathDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainPathDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainPathDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDomainPathDataResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDomainPathDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pathDataPerInterval Field Functions 
    bool hasPathDataPerInterval() const { return this->pathDataPerInterval_ != nullptr;};
    void deletePathDataPerInterval() { this->pathDataPerInterval_ = nullptr;};
    inline const DescribeDomainPathDataResponseBody::PathDataPerInterval & getPathDataPerInterval() const { DARABONBA_PTR_GET_CONST(pathDataPerInterval_, DescribeDomainPathDataResponseBody::PathDataPerInterval) };
    inline DescribeDomainPathDataResponseBody::PathDataPerInterval getPathDataPerInterval() { DARABONBA_PTR_GET(pathDataPerInterval_, DescribeDomainPathDataResponseBody::PathDataPerInterval) };
    inline DescribeDomainPathDataResponseBody& setPathDataPerInterval(const DescribeDomainPathDataResponseBody::PathDataPerInterval & pathDataPerInterval) { DARABONBA_PTR_SET_VALUE(pathDataPerInterval_, pathDataPerInterval) };
    inline DescribeDomainPathDataResponseBody& setPathDataPerInterval(DescribeDomainPathDataResponseBody::PathDataPerInterval && pathDataPerInterval) { DARABONBA_PTR_SET_RVALUE(pathDataPerInterval_, pathDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainPathDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainPathDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDomainPathDataResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time interval. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The page number of the returned page. Pages start from page **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<DescribeDomainPathDataResponseBody::PathDataPerInterval> pathDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
