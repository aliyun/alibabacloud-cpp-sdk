// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnoseReportResponseBodyResultDiagnoseItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnoseReportResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(diagnoseItems, diagnoseItems_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(diagnoseItems, diagnoseItems_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(trigger, trigger_);
    };
    DescribeDiagnoseReportResponseBodyResult() = default ;
    DescribeDiagnoseReportResponseBodyResult(const DescribeDiagnoseReportResponseBodyResult &) = default ;
    DescribeDiagnoseReportResponseBodyResult(DescribeDiagnoseReportResponseBodyResult &&) = default ;
    DescribeDiagnoseReportResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportResponseBodyResult() = default ;
    DescribeDiagnoseReportResponseBodyResult& operator=(const DescribeDiagnoseReportResponseBodyResult &) = default ;
    DescribeDiagnoseReportResponseBodyResult& operator=(DescribeDiagnoseReportResponseBodyResult &&) = default ;
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
    inline DescribeDiagnoseReportResponseBodyResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // diagnoseItems Field Functions 
    bool hasDiagnoseItems() const { return this->diagnoseItems_ != nullptr;};
    void deleteDiagnoseItems() { this->diagnoseItems_ = nullptr;};
    inline const vector<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItems> & diagnoseItems() const { DARABONBA_PTR_GET_CONST(diagnoseItems_, vector<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItems>) };
    inline vector<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItems> diagnoseItems() { DARABONBA_PTR_GET(diagnoseItems_, vector<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItems>) };
    inline DescribeDiagnoseReportResponseBodyResult& setDiagnoseItems(const vector<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItems> & diagnoseItems) { DARABONBA_PTR_SET_VALUE(diagnoseItems_, diagnoseItems) };
    inline DescribeDiagnoseReportResponseBodyResult& setDiagnoseItems(vector<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItems> && diagnoseItems) { DARABONBA_PTR_SET_RVALUE(diagnoseItems_, diagnoseItems) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline DescribeDiagnoseReportResponseBodyResult& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDiagnoseReportResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeDiagnoseReportResponseBodyResult& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDiagnoseReportResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline DescribeDiagnoseReportResponseBodyResult& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItems>> diagnoseItems_ = nullptr;
    std::shared_ptr<string> health_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> reportId_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
