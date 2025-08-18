// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEdgeContainerAppStatsResponseBodyPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeEdgeContainerAppStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeContainerAppStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CpuUsageSecondsQuotaRateAvg, cpuUsageSecondsQuotaRateAvg_);
      DARABONBA_PTR_TO_JSON(CpuUsageSecondsTotalAvg, cpuUsageSecondsTotalAvg_);
      DARABONBA_PTR_TO_JSON(FsReadsBytesAvgAvg, fsReadsBytesAvgAvg_);
      DARABONBA_PTR_TO_JSON(FsWritesBytesAvgAvg, fsWritesBytesAvgAvg_);
      DARABONBA_PTR_TO_JSON(MemoryRssAvg, memoryRssAvg_);
      DARABONBA_PTR_TO_JSON(MemoryRssQuotaRateAvg, memoryRssQuotaRateAvg_);
      DARABONBA_PTR_TO_JSON(PodReadyRateAvg, podReadyRateAvg_);
      DARABONBA_PTR_TO_JSON(Points, points_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeContainerAppStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuUsageSecondsQuotaRateAvg, cpuUsageSecondsQuotaRateAvg_);
      DARABONBA_PTR_FROM_JSON(CpuUsageSecondsTotalAvg, cpuUsageSecondsTotalAvg_);
      DARABONBA_PTR_FROM_JSON(FsReadsBytesAvgAvg, fsReadsBytesAvgAvg_);
      DARABONBA_PTR_FROM_JSON(FsWritesBytesAvgAvg, fsWritesBytesAvgAvg_);
      DARABONBA_PTR_FROM_JSON(MemoryRssAvg, memoryRssAvg_);
      DARABONBA_PTR_FROM_JSON(MemoryRssQuotaRateAvg, memoryRssQuotaRateAvg_);
      DARABONBA_PTR_FROM_JSON(PodReadyRateAvg, podReadyRateAvg_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEdgeContainerAppStatsResponseBody() = default ;
    DescribeEdgeContainerAppStatsResponseBody(const DescribeEdgeContainerAppStatsResponseBody &) = default ;
    DescribeEdgeContainerAppStatsResponseBody(DescribeEdgeContainerAppStatsResponseBody &&) = default ;
    DescribeEdgeContainerAppStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeContainerAppStatsResponseBody() = default ;
    DescribeEdgeContainerAppStatsResponseBody& operator=(const DescribeEdgeContainerAppStatsResponseBody &) = default ;
    DescribeEdgeContainerAppStatsResponseBody& operator=(DescribeEdgeContainerAppStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuUsageSecondsQuotaRateAvg_ != nullptr
        && this->cpuUsageSecondsTotalAvg_ != nullptr && this->fsReadsBytesAvgAvg_ != nullptr && this->fsWritesBytesAvgAvg_ != nullptr && this->memoryRssAvg_ != nullptr && this->memoryRssQuotaRateAvg_ != nullptr
        && this->podReadyRateAvg_ != nullptr && this->points_ != nullptr && this->requestId_ != nullptr; };
    // cpuUsageSecondsQuotaRateAvg Field Functions 
    bool hasCpuUsageSecondsQuotaRateAvg() const { return this->cpuUsageSecondsQuotaRateAvg_ != nullptr;};
    void deleteCpuUsageSecondsQuotaRateAvg() { this->cpuUsageSecondsQuotaRateAvg_ = nullptr;};
    inline double cpuUsageSecondsQuotaRateAvg() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageSecondsQuotaRateAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setCpuUsageSecondsQuotaRateAvg(double cpuUsageSecondsQuotaRateAvg) { DARABONBA_PTR_SET_VALUE(cpuUsageSecondsQuotaRateAvg_, cpuUsageSecondsQuotaRateAvg) };


    // cpuUsageSecondsTotalAvg Field Functions 
    bool hasCpuUsageSecondsTotalAvg() const { return this->cpuUsageSecondsTotalAvg_ != nullptr;};
    void deleteCpuUsageSecondsTotalAvg() { this->cpuUsageSecondsTotalAvg_ = nullptr;};
    inline double cpuUsageSecondsTotalAvg() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageSecondsTotalAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setCpuUsageSecondsTotalAvg(double cpuUsageSecondsTotalAvg) { DARABONBA_PTR_SET_VALUE(cpuUsageSecondsTotalAvg_, cpuUsageSecondsTotalAvg) };


    // fsReadsBytesAvgAvg Field Functions 
    bool hasFsReadsBytesAvgAvg() const { return this->fsReadsBytesAvgAvg_ != nullptr;};
    void deleteFsReadsBytesAvgAvg() { this->fsReadsBytesAvgAvg_ = nullptr;};
    inline double fsReadsBytesAvgAvg() const { DARABONBA_PTR_GET_DEFAULT(fsReadsBytesAvgAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setFsReadsBytesAvgAvg(double fsReadsBytesAvgAvg) { DARABONBA_PTR_SET_VALUE(fsReadsBytesAvgAvg_, fsReadsBytesAvgAvg) };


    // fsWritesBytesAvgAvg Field Functions 
    bool hasFsWritesBytesAvgAvg() const { return this->fsWritesBytesAvgAvg_ != nullptr;};
    void deleteFsWritesBytesAvgAvg() { this->fsWritesBytesAvgAvg_ = nullptr;};
    inline double fsWritesBytesAvgAvg() const { DARABONBA_PTR_GET_DEFAULT(fsWritesBytesAvgAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setFsWritesBytesAvgAvg(double fsWritesBytesAvgAvg) { DARABONBA_PTR_SET_VALUE(fsWritesBytesAvgAvg_, fsWritesBytesAvgAvg) };


    // memoryRssAvg Field Functions 
    bool hasMemoryRssAvg() const { return this->memoryRssAvg_ != nullptr;};
    void deleteMemoryRssAvg() { this->memoryRssAvg_ = nullptr;};
    inline double memoryRssAvg() const { DARABONBA_PTR_GET_DEFAULT(memoryRssAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setMemoryRssAvg(double memoryRssAvg) { DARABONBA_PTR_SET_VALUE(memoryRssAvg_, memoryRssAvg) };


    // memoryRssQuotaRateAvg Field Functions 
    bool hasMemoryRssQuotaRateAvg() const { return this->memoryRssQuotaRateAvg_ != nullptr;};
    void deleteMemoryRssQuotaRateAvg() { this->memoryRssQuotaRateAvg_ = nullptr;};
    inline double memoryRssQuotaRateAvg() const { DARABONBA_PTR_GET_DEFAULT(memoryRssQuotaRateAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setMemoryRssQuotaRateAvg(double memoryRssQuotaRateAvg) { DARABONBA_PTR_SET_VALUE(memoryRssQuotaRateAvg_, memoryRssQuotaRateAvg) };


    // podReadyRateAvg Field Functions 
    bool hasPodReadyRateAvg() const { return this->podReadyRateAvg_ != nullptr;};
    void deletePodReadyRateAvg() { this->podReadyRateAvg_ = nullptr;};
    inline double podReadyRateAvg() const { DARABONBA_PTR_GET_DEFAULT(podReadyRateAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setPodReadyRateAvg(double podReadyRateAvg) { DARABONBA_PTR_SET_VALUE(podReadyRateAvg_, podReadyRateAvg) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<DescribeEdgeContainerAppStatsResponseBodyPoints> & points() const { DARABONBA_PTR_GET_CONST(points_, vector<DescribeEdgeContainerAppStatsResponseBodyPoints>) };
    inline vector<DescribeEdgeContainerAppStatsResponseBodyPoints> points() { DARABONBA_PTR_GET(points_, vector<DescribeEdgeContainerAppStatsResponseBodyPoints>) };
    inline DescribeEdgeContainerAppStatsResponseBody& setPoints(const vector<DescribeEdgeContainerAppStatsResponseBodyPoints> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeEdgeContainerAppStatsResponseBody& setPoints(vector<DescribeEdgeContainerAppStatsResponseBodyPoints> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEdgeContainerAppStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<double> cpuUsageSecondsQuotaRateAvg_ = nullptr;
    std::shared_ptr<double> cpuUsageSecondsTotalAvg_ = nullptr;
    std::shared_ptr<double> fsReadsBytesAvgAvg_ = nullptr;
    std::shared_ptr<double> fsWritesBytesAvgAvg_ = nullptr;
    std::shared_ptr<double> memoryRssAvg_ = nullptr;
    std::shared_ptr<double> memoryRssQuotaRateAvg_ = nullptr;
    std::shared_ptr<double> podReadyRateAvg_ = nullptr;
    std::shared_ptr<vector<DescribeEdgeContainerAppStatsResponseBodyPoints>> points_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
