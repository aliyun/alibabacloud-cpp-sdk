// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKMETRICSRESPONSEBODYMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKMETRICSRESPONSEBODYMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookMetricsResponseBodyMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FailNum, failNum_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(HistoryMd5, historyMd5_);
      DARABONBA_PTR_TO_JSON(LastRuntime, lastRuntime_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(SuccNum, succNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FailNum, failNum_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(HistoryMd5, historyMd5_);
      DARABONBA_PTR_FROM_JSON(LastRuntime, lastRuntime_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(SuccNum, succNum_);
    };
    DescribePlaybookMetricsResponseBodyMetrics() = default ;
    DescribePlaybookMetricsResponseBodyMetrics(const DescribePlaybookMetricsResponseBodyMetrics &) = default ;
    DescribePlaybookMetricsResponseBodyMetrics(DescribePlaybookMetricsResponseBodyMetrics &&) = default ;
    DescribePlaybookMetricsResponseBodyMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookMetricsResponseBodyMetrics() = default ;
    DescribePlaybookMetricsResponseBodyMetrics& operator=(const DescribePlaybookMetricsResponseBodyMetrics &) = default ;
    DescribePlaybookMetricsResponseBodyMetrics& operator=(DescribePlaybookMetricsResponseBodyMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->failNum_ == nullptr && return this->gmtCreate_ == nullptr && return this->historyMd5_ == nullptr
        && return this->lastRuntime_ == nullptr && return this->ownType_ == nullptr && return this->playbookUuid_ == nullptr && return this->succNum_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline DescribePlaybookMetricsResponseBodyMetrics& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePlaybookMetricsResponseBodyMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribePlaybookMetricsResponseBodyMetrics& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // failNum Field Functions 
    bool hasFailNum() const { return this->failNum_ != nullptr;};
    void deleteFailNum() { this->failNum_ = nullptr;};
    inline int32_t failNum() const { DARABONBA_PTR_GET_DEFAULT(failNum_, 0) };
    inline DescribePlaybookMetricsResponseBodyMetrics& setFailNum(int32_t failNum) { DARABONBA_PTR_SET_VALUE(failNum_, failNum) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribePlaybookMetricsResponseBodyMetrics& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // historyMd5 Field Functions 
    bool hasHistoryMd5() const { return this->historyMd5_ != nullptr;};
    void deleteHistoryMd5() { this->historyMd5_ = nullptr;};
    inline int32_t historyMd5() const { DARABONBA_PTR_GET_DEFAULT(historyMd5_, 0) };
    inline DescribePlaybookMetricsResponseBodyMetrics& setHistoryMd5(int32_t historyMd5) { DARABONBA_PTR_SET_VALUE(historyMd5_, historyMd5) };


    // lastRuntime Field Functions 
    bool hasLastRuntime() const { return this->lastRuntime_ != nullptr;};
    void deleteLastRuntime() { this->lastRuntime_ = nullptr;};
    inline int64_t lastRuntime() const { DARABONBA_PTR_GET_DEFAULT(lastRuntime_, 0L) };
    inline DescribePlaybookMetricsResponseBodyMetrics& setLastRuntime(int64_t lastRuntime) { DARABONBA_PTR_SET_VALUE(lastRuntime_, lastRuntime) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline string ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
    inline DescribePlaybookMetricsResponseBodyMetrics& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribePlaybookMetricsResponseBodyMetrics& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // succNum Field Functions 
    bool hasSuccNum() const { return this->succNum_ != nullptr;};
    void deleteSuccNum() { this->succNum_ = nullptr;};
    inline int32_t succNum() const { DARABONBA_PTR_GET_DEFAULT(succNum_, 0) };
    inline DescribePlaybookMetricsResponseBodyMetrics& setSuccNum(int32_t succNum) { DARABONBA_PTR_SET_VALUE(succNum_, succNum) };


  protected:
    // The status of the playbook. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> active_ = nullptr;
    // The description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the playbook.
    std::shared_ptr<string> displayName_ = nullptr;
    // The number of the tasks that are created for the playbook and failed to run.
    std::shared_ptr<int32_t> failNum_ = nullptr;
    // The time when the playbook was created. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The number of historical versions of the playbook.
    std::shared_ptr<int32_t> historyMd5_ = nullptr;
    // The time when the playbook was last run. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> lastRuntime_ = nullptr;
    // The type of the playbook. Valid values:
    // 
    // *   **preset**: predefined playbook
    // *   **user**: custom playbook
    std::shared_ptr<string> ownType_ = nullptr;
    // The UUID of the playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The number of the tasks that are created for the playbook and were successfully run.
    std::shared_ptr<int32_t> succNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
