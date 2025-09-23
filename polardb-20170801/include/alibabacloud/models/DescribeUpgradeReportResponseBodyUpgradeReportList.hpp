// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODYUPGRADEREPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODYUPGRADEREPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeUpgradeReportResponseBodyUpgradeReportList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeReportResponseBodyUpgradeReportList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
      DARABONBA_PTR_TO_JSON(DstVersion, dstVersion_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SrcInsName, srcInsName_);
      DARABONBA_PTR_TO_JSON(SrcVersion, srcVersion_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeReportResponseBodyUpgradeReportList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
      DARABONBA_PTR_FROM_JSON(DstVersion, dstVersion_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SrcInsName, srcInsName_);
      DARABONBA_PTR_FROM_JSON(SrcVersion, srcVersion_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
    };
    DescribeUpgradeReportResponseBodyUpgradeReportList() = default ;
    DescribeUpgradeReportResponseBodyUpgradeReportList(const DescribeUpgradeReportResponseBodyUpgradeReportList &) = default ;
    DescribeUpgradeReportResponseBodyUpgradeReportList(DescribeUpgradeReportResponseBodyUpgradeReportList &&) = default ;
    DescribeUpgradeReportResponseBodyUpgradeReportList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeReportResponseBodyUpgradeReportList() = default ;
    DescribeUpgradeReportResponseBodyUpgradeReportList& operator=(const DescribeUpgradeReportResponseBodyUpgradeReportList &) = default ;
    DescribeUpgradeReportResponseBodyUpgradeReportList& operator=(DescribeUpgradeReportResponseBodyUpgradeReportList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkTime_ != nullptr
        && this->dstVersion_ != nullptr && this->effectiveTime_ != nullptr && this->endTime_ != nullptr && this->result_ != nullptr && this->srcInsName_ != nullptr
        && this->srcVersion_ != nullptr && this->startTime_ != nullptr && this->taskId_ != nullptr && this->upgradeMode_ != nullptr; };
    // checkTime Field Functions 
    bool hasCheckTime() const { return this->checkTime_ != nullptr;};
    void deleteCheckTime() { this->checkTime_ = nullptr;};
    inline string checkTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setCheckTime(string checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


    // dstVersion Field Functions 
    bool hasDstVersion() const { return this->dstVersion_ != nullptr;};
    void deleteDstVersion() { this->dstVersion_ = nullptr;};
    inline string dstVersion() const { DARABONBA_PTR_GET_DEFAULT(dstVersion_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setDstVersion(string dstVersion) { DARABONBA_PTR_SET_VALUE(dstVersion_, dstVersion) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // srcInsName Field Functions 
    bool hasSrcInsName() const { return this->srcInsName_ != nullptr;};
    void deleteSrcInsName() { this->srcInsName_ = nullptr;};
    inline string srcInsName() const { DARABONBA_PTR_GET_DEFAULT(srcInsName_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setSrcInsName(string srcInsName) { DARABONBA_PTR_SET_VALUE(srcInsName_, srcInsName) };


    // srcVersion Field Functions 
    bool hasSrcVersion() const { return this->srcVersion_ != nullptr;};
    void deleteSrcVersion() { this->srcVersion_ = nullptr;};
    inline string srcVersion() const { DARABONBA_PTR_GET_DEFAULT(srcVersion_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setSrcVersion(string srcVersion) { DARABONBA_PTR_SET_VALUE(srcVersion_, srcVersion) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // upgradeMode Field Functions 
    bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
    void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
    inline string upgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
    inline DescribeUpgradeReportResponseBodyUpgradeReportList& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


  protected:
    std::shared_ptr<string> checkTime_ = nullptr;
    std::shared_ptr<string> dstVersion_ = nullptr;
    std::shared_ptr<string> effectiveTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> srcInsName_ = nullptr;
    std::shared_ptr<string> srcVersion_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> upgradeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
