// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSRESPONSEBODYPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGECONTAINERAPPSTATSRESPONSEBODYPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeEdgeContainerAppStatsResponseBodyPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeContainerAppStatsResponseBodyPoints& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerCpuUsageSecondsQuotaRate, containerCpuUsageSecondsQuotaRate_);
      DARABONBA_PTR_TO_JSON(ContainerCpuUsageSecondsTotal, containerCpuUsageSecondsTotal_);
      DARABONBA_PTR_TO_JSON(ContainerFsReadsBytesAvg, containerFsReadsBytesAvg_);
      DARABONBA_PTR_TO_JSON(ContainerFsWritesBytesAvg, containerFsWritesBytesAvg_);
      DARABONBA_PTR_TO_JSON(ContainerMemoryRss, containerMemoryRss_);
      DARABONBA_PTR_TO_JSON(ContainerMemoryRssQuotaRate, containerMemoryRssQuotaRate_);
      DARABONBA_PTR_TO_JSON(PodReadyRate, podReadyRate_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeContainerAppStatsResponseBodyPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerCpuUsageSecondsQuotaRate, containerCpuUsageSecondsQuotaRate_);
      DARABONBA_PTR_FROM_JSON(ContainerCpuUsageSecondsTotal, containerCpuUsageSecondsTotal_);
      DARABONBA_PTR_FROM_JSON(ContainerFsReadsBytesAvg, containerFsReadsBytesAvg_);
      DARABONBA_PTR_FROM_JSON(ContainerFsWritesBytesAvg, containerFsWritesBytesAvg_);
      DARABONBA_PTR_FROM_JSON(ContainerMemoryRss, containerMemoryRss_);
      DARABONBA_PTR_FROM_JSON(ContainerMemoryRssQuotaRate, containerMemoryRssQuotaRate_);
      DARABONBA_PTR_FROM_JSON(PodReadyRate, podReadyRate_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeEdgeContainerAppStatsResponseBodyPoints() = default ;
    DescribeEdgeContainerAppStatsResponseBodyPoints(const DescribeEdgeContainerAppStatsResponseBodyPoints &) = default ;
    DescribeEdgeContainerAppStatsResponseBodyPoints(DescribeEdgeContainerAppStatsResponseBodyPoints &&) = default ;
    DescribeEdgeContainerAppStatsResponseBodyPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeContainerAppStatsResponseBodyPoints() = default ;
    DescribeEdgeContainerAppStatsResponseBodyPoints& operator=(const DescribeEdgeContainerAppStatsResponseBodyPoints &) = default ;
    DescribeEdgeContainerAppStatsResponseBodyPoints& operator=(DescribeEdgeContainerAppStatsResponseBodyPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerCpuUsageSecondsQuotaRate_ != nullptr
        && this->containerCpuUsageSecondsTotal_ != nullptr && this->containerFsReadsBytesAvg_ != nullptr && this->containerFsWritesBytesAvg_ != nullptr && this->containerMemoryRss_ != nullptr && this->containerMemoryRssQuotaRate_ != nullptr
        && this->podReadyRate_ != nullptr && this->time_ != nullptr; };
    // containerCpuUsageSecondsQuotaRate Field Functions 
    bool hasContainerCpuUsageSecondsQuotaRate() const { return this->containerCpuUsageSecondsQuotaRate_ != nullptr;};
    void deleteContainerCpuUsageSecondsQuotaRate() { this->containerCpuUsageSecondsQuotaRate_ = nullptr;};
    inline double containerCpuUsageSecondsQuotaRate() const { DARABONBA_PTR_GET_DEFAULT(containerCpuUsageSecondsQuotaRate_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setContainerCpuUsageSecondsQuotaRate(double containerCpuUsageSecondsQuotaRate) { DARABONBA_PTR_SET_VALUE(containerCpuUsageSecondsQuotaRate_, containerCpuUsageSecondsQuotaRate) };


    // containerCpuUsageSecondsTotal Field Functions 
    bool hasContainerCpuUsageSecondsTotal() const { return this->containerCpuUsageSecondsTotal_ != nullptr;};
    void deleteContainerCpuUsageSecondsTotal() { this->containerCpuUsageSecondsTotal_ = nullptr;};
    inline double containerCpuUsageSecondsTotal() const { DARABONBA_PTR_GET_DEFAULT(containerCpuUsageSecondsTotal_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setContainerCpuUsageSecondsTotal(double containerCpuUsageSecondsTotal) { DARABONBA_PTR_SET_VALUE(containerCpuUsageSecondsTotal_, containerCpuUsageSecondsTotal) };


    // containerFsReadsBytesAvg Field Functions 
    bool hasContainerFsReadsBytesAvg() const { return this->containerFsReadsBytesAvg_ != nullptr;};
    void deleteContainerFsReadsBytesAvg() { this->containerFsReadsBytesAvg_ = nullptr;};
    inline double containerFsReadsBytesAvg() const { DARABONBA_PTR_GET_DEFAULT(containerFsReadsBytesAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setContainerFsReadsBytesAvg(double containerFsReadsBytesAvg) { DARABONBA_PTR_SET_VALUE(containerFsReadsBytesAvg_, containerFsReadsBytesAvg) };


    // containerFsWritesBytesAvg Field Functions 
    bool hasContainerFsWritesBytesAvg() const { return this->containerFsWritesBytesAvg_ != nullptr;};
    void deleteContainerFsWritesBytesAvg() { this->containerFsWritesBytesAvg_ = nullptr;};
    inline double containerFsWritesBytesAvg() const { DARABONBA_PTR_GET_DEFAULT(containerFsWritesBytesAvg_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setContainerFsWritesBytesAvg(double containerFsWritesBytesAvg) { DARABONBA_PTR_SET_VALUE(containerFsWritesBytesAvg_, containerFsWritesBytesAvg) };


    // containerMemoryRss Field Functions 
    bool hasContainerMemoryRss() const { return this->containerMemoryRss_ != nullptr;};
    void deleteContainerMemoryRss() { this->containerMemoryRss_ = nullptr;};
    inline double containerMemoryRss() const { DARABONBA_PTR_GET_DEFAULT(containerMemoryRss_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setContainerMemoryRss(double containerMemoryRss) { DARABONBA_PTR_SET_VALUE(containerMemoryRss_, containerMemoryRss) };


    // containerMemoryRssQuotaRate Field Functions 
    bool hasContainerMemoryRssQuotaRate() const { return this->containerMemoryRssQuotaRate_ != nullptr;};
    void deleteContainerMemoryRssQuotaRate() { this->containerMemoryRssQuotaRate_ = nullptr;};
    inline double containerMemoryRssQuotaRate() const { DARABONBA_PTR_GET_DEFAULT(containerMemoryRssQuotaRate_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setContainerMemoryRssQuotaRate(double containerMemoryRssQuotaRate) { DARABONBA_PTR_SET_VALUE(containerMemoryRssQuotaRate_, containerMemoryRssQuotaRate) };


    // podReadyRate Field Functions 
    bool hasPodReadyRate() const { return this->podReadyRate_ != nullptr;};
    void deletePodReadyRate() { this->podReadyRate_ = nullptr;};
    inline double podReadyRate() const { DARABONBA_PTR_GET_DEFAULT(podReadyRate_, 0.0) };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setPodReadyRate(double podReadyRate) { DARABONBA_PTR_SET_VALUE(podReadyRate_, podReadyRate) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeEdgeContainerAppStatsResponseBodyPoints& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<double> containerCpuUsageSecondsQuotaRate_ = nullptr;
    std::shared_ptr<double> containerCpuUsageSecondsTotal_ = nullptr;
    std::shared_ptr<double> containerFsReadsBytesAvg_ = nullptr;
    std::shared_ptr<double> containerFsWritesBytesAvg_ = nullptr;
    std::shared_ptr<double> containerMemoryRss_ = nullptr;
    std::shared_ptr<double> containerMemoryRssQuotaRate_ = nullptr;
    std::shared_ptr<double> podReadyRate_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
