// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDiagnoseReportResponseBodyResultDiagnoseItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnoseReportResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnoseReportResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(diagnoseItems, diagnoseItems_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnoseReportResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(diagnoseItems, diagnoseItems_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(trigger, trigger_);
    };
    ListDiagnoseReportResponseBodyResult() = default ;
    ListDiagnoseReportResponseBodyResult(const ListDiagnoseReportResponseBodyResult &) = default ;
    ListDiagnoseReportResponseBodyResult(ListDiagnoseReportResponseBodyResult &&) = default ;
    ListDiagnoseReportResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnoseReportResponseBodyResult() = default ;
    ListDiagnoseReportResponseBodyResult& operator=(const ListDiagnoseReportResponseBodyResult &) = default ;
    ListDiagnoseReportResponseBodyResult& operator=(ListDiagnoseReportResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->diagnoseItems_ != nullptr && this->health_ != nullptr && this->instanceId_ != nullptr && this->reportId_ != nullptr && this->state_ != nullptr
        && this->trigger_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDiagnoseReportResponseBodyResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // diagnoseItems Field Functions 
    bool hasDiagnoseItems() const { return this->diagnoseItems_ != nullptr;};
    void deleteDiagnoseItems() { this->diagnoseItems_ = nullptr;};
    inline const vector<Models::ListDiagnoseReportResponseBodyResultDiagnoseItems> & diagnoseItems() const { DARABONBA_PTR_GET_CONST(diagnoseItems_, vector<Models::ListDiagnoseReportResponseBodyResultDiagnoseItems>) };
    inline vector<Models::ListDiagnoseReportResponseBodyResultDiagnoseItems> diagnoseItems() { DARABONBA_PTR_GET(diagnoseItems_, vector<Models::ListDiagnoseReportResponseBodyResultDiagnoseItems>) };
    inline ListDiagnoseReportResponseBodyResult& setDiagnoseItems(const vector<Models::ListDiagnoseReportResponseBodyResultDiagnoseItems> & diagnoseItems) { DARABONBA_PTR_SET_VALUE(diagnoseItems_, diagnoseItems) };
    inline ListDiagnoseReportResponseBodyResult& setDiagnoseItems(vector<Models::ListDiagnoseReportResponseBodyResultDiagnoseItems> && diagnoseItems) { DARABONBA_PTR_SET_RVALUE(diagnoseItems_, diagnoseItems) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline ListDiagnoseReportResponseBodyResult& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDiagnoseReportResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline ListDiagnoseReportResponseBodyResult& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListDiagnoseReportResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline ListDiagnoseReportResponseBodyResult& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


  protected:
    // The ID of the report.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The name of the item.
    std::shared_ptr<vector<Models::ListDiagnoseReportResponseBodyResultDiagnoseItems>> diagnoseItems_ = nullptr;
    // Reports the list of diagnostic item information.
    std::shared_ptr<string> health_ = nullptr;
    // The overall health of the cluster in the report. Supported: GREEN, YELLOW, RED, and UNKNOWN.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The diagnosis status. Valid values: Supported: SUCCESS, FAILED, and RUNNING.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the instance for diagnosis.
    std::shared_ptr<string> state_ = nullptr;
    // The timestamp when the report was created.
    std::shared_ptr<string> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
