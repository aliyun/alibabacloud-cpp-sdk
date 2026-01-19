// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Points : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Points& obj) { 
        DARABONBA_PTR_TO_JSON(ContainerCpuUsageSecondsQuotaRate, containerCpuUsageSecondsQuotaRate_);
        DARABONBA_PTR_TO_JSON(ContainerCpuUsageSecondsTotal, containerCpuUsageSecondsTotal_);
        DARABONBA_PTR_TO_JSON(ContainerFsReadsBytesAvg, containerFsReadsBytesAvg_);
        DARABONBA_PTR_TO_JSON(ContainerFsWritesBytesAvg, containerFsWritesBytesAvg_);
        DARABONBA_PTR_TO_JSON(ContainerMemoryRss, containerMemoryRss_);
        DARABONBA_PTR_TO_JSON(ContainerMemoryRssQuotaRate, containerMemoryRssQuotaRate_);
        DARABONBA_PTR_TO_JSON(PodReadyRate, podReadyRate_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, Points& obj) { 
        DARABONBA_PTR_FROM_JSON(ContainerCpuUsageSecondsQuotaRate, containerCpuUsageSecondsQuotaRate_);
        DARABONBA_PTR_FROM_JSON(ContainerCpuUsageSecondsTotal, containerCpuUsageSecondsTotal_);
        DARABONBA_PTR_FROM_JSON(ContainerFsReadsBytesAvg, containerFsReadsBytesAvg_);
        DARABONBA_PTR_FROM_JSON(ContainerFsWritesBytesAvg, containerFsWritesBytesAvg_);
        DARABONBA_PTR_FROM_JSON(ContainerMemoryRss, containerMemoryRss_);
        DARABONBA_PTR_FROM_JSON(ContainerMemoryRssQuotaRate, containerMemoryRssQuotaRate_);
        DARABONBA_PTR_FROM_JSON(PodReadyRate, podReadyRate_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      Points() = default ;
      Points(const Points &) = default ;
      Points(Points &&) = default ;
      Points(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Points() = default ;
      Points& operator=(const Points &) = default ;
      Points& operator=(Points &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->containerCpuUsageSecondsQuotaRate_ == nullptr
        && this->containerCpuUsageSecondsTotal_ == nullptr && this->containerFsReadsBytesAvg_ == nullptr && this->containerFsWritesBytesAvg_ == nullptr && this->containerMemoryRss_ == nullptr && this->containerMemoryRssQuotaRate_ == nullptr
        && this->podReadyRate_ == nullptr && this->time_ == nullptr; };
      // containerCpuUsageSecondsQuotaRate Field Functions 
      bool hasContainerCpuUsageSecondsQuotaRate() const { return this->containerCpuUsageSecondsQuotaRate_ != nullptr;};
      void deleteContainerCpuUsageSecondsQuotaRate() { this->containerCpuUsageSecondsQuotaRate_ = nullptr;};
      inline double getContainerCpuUsageSecondsQuotaRate() const { DARABONBA_PTR_GET_DEFAULT(containerCpuUsageSecondsQuotaRate_, 0.0) };
      inline Points& setContainerCpuUsageSecondsQuotaRate(double containerCpuUsageSecondsQuotaRate) { DARABONBA_PTR_SET_VALUE(containerCpuUsageSecondsQuotaRate_, containerCpuUsageSecondsQuotaRate) };


      // containerCpuUsageSecondsTotal Field Functions 
      bool hasContainerCpuUsageSecondsTotal() const { return this->containerCpuUsageSecondsTotal_ != nullptr;};
      void deleteContainerCpuUsageSecondsTotal() { this->containerCpuUsageSecondsTotal_ = nullptr;};
      inline double getContainerCpuUsageSecondsTotal() const { DARABONBA_PTR_GET_DEFAULT(containerCpuUsageSecondsTotal_, 0.0) };
      inline Points& setContainerCpuUsageSecondsTotal(double containerCpuUsageSecondsTotal) { DARABONBA_PTR_SET_VALUE(containerCpuUsageSecondsTotal_, containerCpuUsageSecondsTotal) };


      // containerFsReadsBytesAvg Field Functions 
      bool hasContainerFsReadsBytesAvg() const { return this->containerFsReadsBytesAvg_ != nullptr;};
      void deleteContainerFsReadsBytesAvg() { this->containerFsReadsBytesAvg_ = nullptr;};
      inline double getContainerFsReadsBytesAvg() const { DARABONBA_PTR_GET_DEFAULT(containerFsReadsBytesAvg_, 0.0) };
      inline Points& setContainerFsReadsBytesAvg(double containerFsReadsBytesAvg) { DARABONBA_PTR_SET_VALUE(containerFsReadsBytesAvg_, containerFsReadsBytesAvg) };


      // containerFsWritesBytesAvg Field Functions 
      bool hasContainerFsWritesBytesAvg() const { return this->containerFsWritesBytesAvg_ != nullptr;};
      void deleteContainerFsWritesBytesAvg() { this->containerFsWritesBytesAvg_ = nullptr;};
      inline double getContainerFsWritesBytesAvg() const { DARABONBA_PTR_GET_DEFAULT(containerFsWritesBytesAvg_, 0.0) };
      inline Points& setContainerFsWritesBytesAvg(double containerFsWritesBytesAvg) { DARABONBA_PTR_SET_VALUE(containerFsWritesBytesAvg_, containerFsWritesBytesAvg) };


      // containerMemoryRss Field Functions 
      bool hasContainerMemoryRss() const { return this->containerMemoryRss_ != nullptr;};
      void deleteContainerMemoryRss() { this->containerMemoryRss_ = nullptr;};
      inline double getContainerMemoryRss() const { DARABONBA_PTR_GET_DEFAULT(containerMemoryRss_, 0.0) };
      inline Points& setContainerMemoryRss(double containerMemoryRss) { DARABONBA_PTR_SET_VALUE(containerMemoryRss_, containerMemoryRss) };


      // containerMemoryRssQuotaRate Field Functions 
      bool hasContainerMemoryRssQuotaRate() const { return this->containerMemoryRssQuotaRate_ != nullptr;};
      void deleteContainerMemoryRssQuotaRate() { this->containerMemoryRssQuotaRate_ = nullptr;};
      inline double getContainerMemoryRssQuotaRate() const { DARABONBA_PTR_GET_DEFAULT(containerMemoryRssQuotaRate_, 0.0) };
      inline Points& setContainerMemoryRssQuotaRate(double containerMemoryRssQuotaRate) { DARABONBA_PTR_SET_VALUE(containerMemoryRssQuotaRate_, containerMemoryRssQuotaRate) };


      // podReadyRate Field Functions 
      bool hasPodReadyRate() const { return this->podReadyRate_ != nullptr;};
      void deletePodReadyRate() { this->podReadyRate_ = nullptr;};
      inline double getPodReadyRate() const { DARABONBA_PTR_GET_DEFAULT(podReadyRate_, 0.0) };
      inline Points& setPodReadyRate(double podReadyRate) { DARABONBA_PTR_SET_VALUE(podReadyRate_, podReadyRate) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Points& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      shared_ptr<double> containerCpuUsageSecondsQuotaRate_ {};
      shared_ptr<double> containerCpuUsageSecondsTotal_ {};
      shared_ptr<double> containerFsReadsBytesAvg_ {};
      shared_ptr<double> containerFsWritesBytesAvg_ {};
      shared_ptr<double> containerMemoryRss_ {};
      shared_ptr<double> containerMemoryRssQuotaRate_ {};
      shared_ptr<double> podReadyRate_ {};
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->cpuUsageSecondsQuotaRateAvg_ == nullptr
        && this->cpuUsageSecondsTotalAvg_ == nullptr && this->fsReadsBytesAvgAvg_ == nullptr && this->fsWritesBytesAvgAvg_ == nullptr && this->memoryRssAvg_ == nullptr && this->memoryRssQuotaRateAvg_ == nullptr
        && this->podReadyRateAvg_ == nullptr && this->points_ == nullptr && this->requestId_ == nullptr; };
    // cpuUsageSecondsQuotaRateAvg Field Functions 
    bool hasCpuUsageSecondsQuotaRateAvg() const { return this->cpuUsageSecondsQuotaRateAvg_ != nullptr;};
    void deleteCpuUsageSecondsQuotaRateAvg() { this->cpuUsageSecondsQuotaRateAvg_ = nullptr;};
    inline double getCpuUsageSecondsQuotaRateAvg() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageSecondsQuotaRateAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setCpuUsageSecondsQuotaRateAvg(double cpuUsageSecondsQuotaRateAvg) { DARABONBA_PTR_SET_VALUE(cpuUsageSecondsQuotaRateAvg_, cpuUsageSecondsQuotaRateAvg) };


    // cpuUsageSecondsTotalAvg Field Functions 
    bool hasCpuUsageSecondsTotalAvg() const { return this->cpuUsageSecondsTotalAvg_ != nullptr;};
    void deleteCpuUsageSecondsTotalAvg() { this->cpuUsageSecondsTotalAvg_ = nullptr;};
    inline double getCpuUsageSecondsTotalAvg() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageSecondsTotalAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setCpuUsageSecondsTotalAvg(double cpuUsageSecondsTotalAvg) { DARABONBA_PTR_SET_VALUE(cpuUsageSecondsTotalAvg_, cpuUsageSecondsTotalAvg) };


    // fsReadsBytesAvgAvg Field Functions 
    bool hasFsReadsBytesAvgAvg() const { return this->fsReadsBytesAvgAvg_ != nullptr;};
    void deleteFsReadsBytesAvgAvg() { this->fsReadsBytesAvgAvg_ = nullptr;};
    inline double getFsReadsBytesAvgAvg() const { DARABONBA_PTR_GET_DEFAULT(fsReadsBytesAvgAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setFsReadsBytesAvgAvg(double fsReadsBytesAvgAvg) { DARABONBA_PTR_SET_VALUE(fsReadsBytesAvgAvg_, fsReadsBytesAvgAvg) };


    // fsWritesBytesAvgAvg Field Functions 
    bool hasFsWritesBytesAvgAvg() const { return this->fsWritesBytesAvgAvg_ != nullptr;};
    void deleteFsWritesBytesAvgAvg() { this->fsWritesBytesAvgAvg_ = nullptr;};
    inline double getFsWritesBytesAvgAvg() const { DARABONBA_PTR_GET_DEFAULT(fsWritesBytesAvgAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setFsWritesBytesAvgAvg(double fsWritesBytesAvgAvg) { DARABONBA_PTR_SET_VALUE(fsWritesBytesAvgAvg_, fsWritesBytesAvgAvg) };


    // memoryRssAvg Field Functions 
    bool hasMemoryRssAvg() const { return this->memoryRssAvg_ != nullptr;};
    void deleteMemoryRssAvg() { this->memoryRssAvg_ = nullptr;};
    inline double getMemoryRssAvg() const { DARABONBA_PTR_GET_DEFAULT(memoryRssAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setMemoryRssAvg(double memoryRssAvg) { DARABONBA_PTR_SET_VALUE(memoryRssAvg_, memoryRssAvg) };


    // memoryRssQuotaRateAvg Field Functions 
    bool hasMemoryRssQuotaRateAvg() const { return this->memoryRssQuotaRateAvg_ != nullptr;};
    void deleteMemoryRssQuotaRateAvg() { this->memoryRssQuotaRateAvg_ = nullptr;};
    inline double getMemoryRssQuotaRateAvg() const { DARABONBA_PTR_GET_DEFAULT(memoryRssQuotaRateAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setMemoryRssQuotaRateAvg(double memoryRssQuotaRateAvg) { DARABONBA_PTR_SET_VALUE(memoryRssQuotaRateAvg_, memoryRssQuotaRateAvg) };


    // podReadyRateAvg Field Functions 
    bool hasPodReadyRateAvg() const { return this->podReadyRateAvg_ != nullptr;};
    void deletePodReadyRateAvg() { this->podReadyRateAvg_ = nullptr;};
    inline double getPodReadyRateAvg() const { DARABONBA_PTR_GET_DEFAULT(podReadyRateAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBody& setPodReadyRateAvg(double podReadyRateAvg) { DARABONBA_PTR_SET_VALUE(podReadyRateAvg_, podReadyRateAvg) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<DescribeEdgeContainerAppStatsResponseBody::Points> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<DescribeEdgeContainerAppStatsResponseBody::Points>) };
    inline vector<DescribeEdgeContainerAppStatsResponseBody::Points> getPoints() { DARABONBA_PTR_GET(points_, vector<DescribeEdgeContainerAppStatsResponseBody::Points>) };
    inline DescribeEdgeContainerAppStatsResponseBody& setPoints(const vector<DescribeEdgeContainerAppStatsResponseBody::Points> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeEdgeContainerAppStatsResponseBody& setPoints(vector<DescribeEdgeContainerAppStatsResponseBody::Points> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEdgeContainerAppStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Average CPU limit ratio
    shared_ptr<double> cpuUsageSecondsQuotaRateAvg_ {};
    // Average number of CPU cores
    shared_ptr<double> cpuUsageSecondsTotalAvg_ {};
    // Average read IO
    shared_ptr<double> fsReadsBytesAvgAvg_ {};
    // Average write IO
    shared_ptr<double> fsWritesBytesAvgAvg_ {};
    // Average memory usage
    shared_ptr<double> memoryRssAvg_ {};
    // Average memory limit proportion
    shared_ptr<double> memoryRssQuotaRateAvg_ {};
    // Average PodReady rate
    shared_ptr<double> podReadyRateAvg_ {};
    shared_ptr<vector<DescribeEdgeContainerAppStatsResponseBody::Points>> points_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
