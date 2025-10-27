// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODYTARGETSTATS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODYTARGETSTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulTargetStatisticsResponseBodyTargetStatsTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetStatisticsResponseBodyTargetStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetStatisticsResponseBodyTargetStats& obj) { 
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UuidCount, uuidCount_);
      DARABONBA_PTR_TO_JSON(VulType, vulType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetStatisticsResponseBodyTargetStats& obj) { 
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UuidCount, uuidCount_);
      DARABONBA_PTR_FROM_JSON(VulType, vulType_);
    };
    DescribeVulTargetStatisticsResponseBodyTargetStats() = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStats(const DescribeVulTargetStatisticsResponseBodyTargetStats &) = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStats(DescribeVulTargetStatisticsResponseBodyTargetStats &&) = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetStatisticsResponseBodyTargetStats() = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStats& operator=(const DescribeVulTargetStatisticsResponseBodyTargetStats &) = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStats& operator=(DescribeVulTargetStatisticsResponseBodyTargetStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targets_ == nullptr
        && return this->totalCount_ == nullptr && return this->uuidCount_ == nullptr && return this->vulType_ == nullptr; };
    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<Models::DescribeVulTargetStatisticsResponseBodyTargetStatsTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Models::DescribeVulTargetStatisticsResponseBodyTargetStatsTargets>) };
    inline vector<Models::DescribeVulTargetStatisticsResponseBodyTargetStatsTargets> targets() { DARABONBA_PTR_GET(targets_, vector<Models::DescribeVulTargetStatisticsResponseBodyTargetStatsTargets>) };
    inline DescribeVulTargetStatisticsResponseBodyTargetStats& setTargets(const vector<Models::DescribeVulTargetStatisticsResponseBodyTargetStatsTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DescribeVulTargetStatisticsResponseBodyTargetStats& setTargets(vector<Models::DescribeVulTargetStatisticsResponseBodyTargetStatsTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulTargetStatisticsResponseBodyTargetStats& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // uuidCount Field Functions 
    bool hasUuidCount() const { return this->uuidCount_ != nullptr;};
    void deleteUuidCount() { this->uuidCount_ = nullptr;};
    inline int32_t uuidCount() const { DARABONBA_PTR_GET_DEFAULT(uuidCount_, 0) };
    inline DescribeVulTargetStatisticsResponseBodyTargetStats& setUuidCount(int32_t uuidCount) { DARABONBA_PTR_SET_VALUE(uuidCount_, uuidCount) };


    // vulType Field Functions 
    bool hasVulType() const { return this->vulType_ != nullptr;};
    void deleteVulType() { this->vulType_ = nullptr;};
    inline string vulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
    inline DescribeVulTargetStatisticsResponseBodyTargetStats& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


  protected:
    // An array that consists of available servers.
    std::shared_ptr<vector<Models::DescribeVulTargetStatisticsResponseBodyTargetStatsTargets>> targets_ = nullptr;
    // The total number of servers.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The number of servers to which the configurations are applied.
    std::shared_ptr<int32_t> uuidCount_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   cve: Linux software vulnerabilities
    // *   sys: Windows system vulnerabilities
    // *   cms: Web-CMS vulnerabilities
    // *   emg: urgent vulnerabilities
    std::shared_ptr<string> vulType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
