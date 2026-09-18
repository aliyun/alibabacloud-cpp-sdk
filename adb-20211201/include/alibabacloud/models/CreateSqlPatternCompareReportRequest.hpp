// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLPATTERNCOMPAREREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLPATTERNCOMPAREREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateSqlPatternCompareReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlPatternCompareReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompareEndTime, compareEndTime_);
      DARABONBA_PTR_TO_JSON(CompareStartTime, compareStartTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PatternType, patternType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlPatternCompareReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompareEndTime, compareEndTime_);
      DARABONBA_PTR_FROM_JSON(CompareStartTime, compareStartTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PatternType, patternType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateSqlPatternCompareReportRequest() = default ;
    CreateSqlPatternCompareReportRequest(const CreateSqlPatternCompareReportRequest &) = default ;
    CreateSqlPatternCompareReportRequest(CreateSqlPatternCompareReportRequest &&) = default ;
    CreateSqlPatternCompareReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlPatternCompareReportRequest() = default ;
    CreateSqlPatternCompareReportRequest& operator=(const CreateSqlPatternCompareReportRequest &) = default ;
    CreateSqlPatternCompareReportRequest& operator=(CreateSqlPatternCompareReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compareEndTime_ == nullptr
        && this->compareStartTime_ == nullptr && this->DBClusterId_ == nullptr && this->endTime_ == nullptr && this->patternType_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr; };
    // compareEndTime Field Functions 
    bool hasCompareEndTime() const { return this->compareEndTime_ != nullptr;};
    void deleteCompareEndTime() { this->compareEndTime_ = nullptr;};
    inline string getCompareEndTime() const { DARABONBA_PTR_GET_DEFAULT(compareEndTime_, "") };
    inline CreateSqlPatternCompareReportRequest& setCompareEndTime(string compareEndTime) { DARABONBA_PTR_SET_VALUE(compareEndTime_, compareEndTime) };


    // compareStartTime Field Functions 
    bool hasCompareStartTime() const { return this->compareStartTime_ != nullptr;};
    void deleteCompareStartTime() { this->compareStartTime_ = nullptr;};
    inline string getCompareStartTime() const { DARABONBA_PTR_GET_DEFAULT(compareStartTime_, "") };
    inline CreateSqlPatternCompareReportRequest& setCompareStartTime(string compareStartTime) { DARABONBA_PTR_SET_VALUE(compareStartTime_, compareStartTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateSqlPatternCompareReportRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateSqlPatternCompareReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // patternType Field Functions 
    bool hasPatternType() const { return this->patternType_ != nullptr;};
    void deletePatternType() { this->patternType_ = nullptr;};
    inline string getPatternType() const { DARABONBA_PTR_GET_DEFAULT(patternType_, "") };
    inline CreateSqlPatternCompareReportRequest& setPatternType(string patternType) { DARABONBA_PTR_SET_VALUE(patternType_, patternType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSqlPatternCompareReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateSqlPatternCompareReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of time window 2. Specify the time in UTC in the yyyy-MM-ddTHH:mmZ or yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    shared_ptr<string> compareEndTime_ {};
    // The start time of time window 2. Specify the time in UTC in the yyyy-MM-ddTHH:mmZ or yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    shared_ptr<string> compareStartTime_ {};
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The end time of time window 1. Specify the time in UTC in the yyyy-MM-ddTHH:mmZ or yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The report type. Valid values:
    // 
    // - `NEW`: Patterns that are new in time window 2.
    // - `CHANGED`: Patterns that exist in both time windows and have an increased average value in at least one metric.
    // 
    // This parameter is required.
    shared_ptr<string> patternType_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start time of time window 1. Specify the time in UTC in the yyyy-MM-ddTHH:mmZ or yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
