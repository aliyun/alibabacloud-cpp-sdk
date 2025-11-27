// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKLISTRESPONSEBODYDATARISKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRISKLISTRESPONSEBODYDATARISKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetRiskListResponseBodyDataRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskListResponseBodyDataRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(GradeType, gradeType_);
      DARABONBA_PTR_TO_JSON(Health, health_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastAlarmTime, lastAlarmTime_);
      DARABONBA_PTR_TO_JSON(LevelType, levelType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RelationList, relationList_);
      DARABONBA_PTR_TO_JSON(ReportTips, reportTips_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(ReportValue, reportValue_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskListResponseBodyDataRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(GradeType, gradeType_);
      DARABONBA_PTR_FROM_JSON(Health, health_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastAlarmTime, lastAlarmTime_);
      DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
      DARABONBA_PTR_FROM_JSON(ReportTips, reportTips_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(ReportValue, reportValue_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetRiskListResponseBodyDataRiskList() = default ;
    GetRiskListResponseBodyDataRiskList(const GetRiskListResponseBodyDataRiskList &) = default ;
    GetRiskListResponseBodyDataRiskList(GetRiskListResponseBodyDataRiskList &&) = default ;
    GetRiskListResponseBodyDataRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskListResponseBodyDataRiskList() = default ;
    GetRiskListResponseBodyDataRiskList& operator=(const GetRiskListResponseBodyDataRiskList &) = default ;
    GetRiskListResponseBodyDataRiskList& operator=(GetRiskListResponseBodyDataRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->gradeType_ == nullptr && return this->health_ == nullptr && return this->instanceId_ == nullptr && return this->lastAlarmTime_ == nullptr && return this->levelType_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->relationList_ == nullptr && return this->reportTips_ == nullptr
        && return this->reportType_ == nullptr && return this->reportValue_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetRiskListResponseBodyDataRiskList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // gradeType Field Functions 
    bool hasGradeType() const { return this->gradeType_ != nullptr;};
    void deleteGradeType() { this->gradeType_ = nullptr;};
    inline string gradeType() const { DARABONBA_PTR_GET_DEFAULT(gradeType_, "") };
    inline GetRiskListResponseBodyDataRiskList& setGradeType(string gradeType) { DARABONBA_PTR_SET_VALUE(gradeType_, gradeType) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline bool health() const { DARABONBA_PTR_GET_DEFAULT(health_, false) };
    inline GetRiskListResponseBodyDataRiskList& setHealth(bool health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRiskListResponseBodyDataRiskList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastAlarmTime Field Functions 
    bool hasLastAlarmTime() const { return this->lastAlarmTime_ != nullptr;};
    void deleteLastAlarmTime() { this->lastAlarmTime_ = nullptr;};
    inline int64_t lastAlarmTime() const { DARABONBA_PTR_GET_DEFAULT(lastAlarmTime_, 0L) };
    inline GetRiskListResponseBodyDataRiskList& setLastAlarmTime(int64_t lastAlarmTime) { DARABONBA_PTR_SET_VALUE(lastAlarmTime_, lastAlarmTime) };


    // levelType Field Functions 
    bool hasLevelType() const { return this->levelType_ != nullptr;};
    void deleteLevelType() { this->levelType_ = nullptr;};
    inline int64_t levelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, 0L) };
    inline GetRiskListResponseBodyDataRiskList& setLevelType(int64_t levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetRiskListResponseBodyDataRiskList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRiskListResponseBodyDataRiskList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetRiskListResponseBodyDataRiskList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // relationList Field Functions 
    bool hasRelationList() const { return this->relationList_ != nullptr;};
    void deleteRelationList() { this->relationList_ = nullptr;};
    inline const vector<string> & relationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<string>) };
    inline vector<string> relationList() { DARABONBA_PTR_GET(relationList_, vector<string>) };
    inline GetRiskListResponseBodyDataRiskList& setRelationList(const vector<string> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
    inline GetRiskListResponseBodyDataRiskList& setRelationList(vector<string> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    // reportTips Field Functions 
    bool hasReportTips() const { return this->reportTips_ != nullptr;};
    void deleteReportTips() { this->reportTips_ = nullptr;};
    inline string reportTips() const { DARABONBA_PTR_GET_DEFAULT(reportTips_, "") };
    inline GetRiskListResponseBodyDataRiskList& setReportTips(string reportTips) { DARABONBA_PTR_SET_VALUE(reportTips_, reportTips) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GetRiskListResponseBodyDataRiskList& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // reportValue Field Functions 
    bool hasReportValue() const { return this->reportValue_ != nullptr;};
    void deleteReportValue() { this->reportValue_ = nullptr;};
    inline string reportValue() const { DARABONBA_PTR_GET_DEFAULT(reportValue_, "") };
    inline GetRiskListResponseBodyDataRiskList& setReportValue(string reportValue) { DARABONBA_PTR_SET_VALUE(reportValue_, reportValue) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetRiskListResponseBodyDataRiskList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRiskListResponseBodyDataRiskList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetRiskListResponseBodyDataRiskList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> gradeType_ = nullptr;
    std::shared_ptr<bool> health_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> lastAlarmTime_ = nullptr;
    std::shared_ptr<int64_t> levelType_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<vector<string>> relationList_ = nullptr;
    std::shared_ptr<string> reportTips_ = nullptr;
    std::shared_ptr<string> reportType_ = nullptr;
    std::shared_ptr<string> reportValue_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
