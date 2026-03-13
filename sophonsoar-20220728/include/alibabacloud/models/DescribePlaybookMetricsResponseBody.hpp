// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookMetricsResponseBody() = default ;
    DescribePlaybookMetricsResponseBody(const DescribePlaybookMetricsResponseBody &) = default ;
    DescribePlaybookMetricsResponseBody(DescribePlaybookMetricsResponseBody &&) = default ;
    DescribePlaybookMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookMetricsResponseBody() = default ;
    DescribePlaybookMetricsResponseBody& operator=(const DescribePlaybookMetricsResponseBody &) = default ;
    DescribePlaybookMetricsResponseBody& operator=(DescribePlaybookMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
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
      Metrics() = default ;
      Metrics(const Metrics &) = default ;
      Metrics(Metrics &&) = default ;
      Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metrics() = default ;
      Metrics& operator=(const Metrics &) = default ;
      Metrics& operator=(Metrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->failNum_ == nullptr && this->gmtCreate_ == nullptr && this->historyMd5_ == nullptr
        && this->lastRuntime_ == nullptr && this->ownType_ == nullptr && this->playbookUuid_ == nullptr && this->succNum_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline int32_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
      inline Metrics& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Metrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Metrics& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // failNum Field Functions 
      bool hasFailNum() const { return this->failNum_ != nullptr;};
      void deleteFailNum() { this->failNum_ = nullptr;};
      inline int32_t getFailNum() const { DARABONBA_PTR_GET_DEFAULT(failNum_, 0) };
      inline Metrics& setFailNum(int32_t failNum) { DARABONBA_PTR_SET_VALUE(failNum_, failNum) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Metrics& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // historyMd5 Field Functions 
      bool hasHistoryMd5() const { return this->historyMd5_ != nullptr;};
      void deleteHistoryMd5() { this->historyMd5_ = nullptr;};
      inline int32_t getHistoryMd5() const { DARABONBA_PTR_GET_DEFAULT(historyMd5_, 0) };
      inline Metrics& setHistoryMd5(int32_t historyMd5) { DARABONBA_PTR_SET_VALUE(historyMd5_, historyMd5) };


      // lastRuntime Field Functions 
      bool hasLastRuntime() const { return this->lastRuntime_ != nullptr;};
      void deleteLastRuntime() { this->lastRuntime_ = nullptr;};
      inline int64_t getLastRuntime() const { DARABONBA_PTR_GET_DEFAULT(lastRuntime_, 0L) };
      inline Metrics& setLastRuntime(int64_t lastRuntime) { DARABONBA_PTR_SET_VALUE(lastRuntime_, lastRuntime) };


      // ownType Field Functions 
      bool hasOwnType() const { return this->ownType_ != nullptr;};
      void deleteOwnType() { this->ownType_ = nullptr;};
      inline string getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
      inline Metrics& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Metrics& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // succNum Field Functions 
      bool hasSuccNum() const { return this->succNum_ != nullptr;};
      void deleteSuccNum() { this->succNum_ = nullptr;};
      inline int32_t getSuccNum() const { DARABONBA_PTR_GET_DEFAULT(succNum_, 0) };
      inline Metrics& setSuccNum(int32_t succNum) { DARABONBA_PTR_SET_VALUE(succNum_, succNum) };


    protected:
      // The status of the playbook. Valid values:
      // 
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> active_ {};
      // The description of the playbook.
      shared_ptr<string> description_ {};
      // The name of the playbook.
      shared_ptr<string> displayName_ {};
      // The number of the tasks that are created for the playbook and failed to run.
      shared_ptr<int32_t> failNum_ {};
      // The time when the playbook was created. The value is a 13-digit timestamp.
      shared_ptr<int64_t> gmtCreate_ {};
      // The number of historical versions of the playbook.
      shared_ptr<int32_t> historyMd5_ {};
      // The time when the playbook was last run. The value is a 13-digit timestamp.
      shared_ptr<int64_t> lastRuntime_ {};
      // The type of the playbook. Valid values:
      // 
      // *   **preset**: predefined playbook
      // *   **user**: custom playbook
      shared_ptr<string> ownType_ {};
      // The UUID of the playbook.
      shared_ptr<string> playbookUuid_ {};
      // The number of the tasks that are created for the playbook and were successfully run.
      shared_ptr<int32_t> succNum_ {};
    };

    virtual bool empty() const override { return this->metrics_ == nullptr
        && this->requestId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const DescribePlaybookMetricsResponseBody::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, DescribePlaybookMetricsResponseBody::Metrics) };
    inline DescribePlaybookMetricsResponseBody::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, DescribePlaybookMetricsResponseBody::Metrics) };
    inline DescribePlaybookMetricsResponseBody& setMetrics(const DescribePlaybookMetricsResponseBody::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribePlaybookMetricsResponseBody& setMetrics(DescribePlaybookMetricsResponseBody::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the playbook.
    shared_ptr<DescribePlaybookMetricsResponseBody::Metrics> metrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
