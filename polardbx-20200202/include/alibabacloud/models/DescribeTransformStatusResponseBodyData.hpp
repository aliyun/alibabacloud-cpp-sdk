// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFORMSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFORMSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTransformStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransformStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanCancel, canCancel_);
      DARABONBA_PTR_TO_JSON(CanFinish, canFinish_);
      DARABONBA_PTR_TO_JSON(CanSwitch, canSwitch_);
      DARABONBA_PTR_TO_JSON(CanUndoSwitch, canUndoSwitch_);
      DARABONBA_PTR_TO_JSON(EnterpriseInsName, enterpriseInsName_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_ANY_TO_JSON(ReportSummary, reportSummary_);
      DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
      DARABONBA_PTR_TO_JSON(StandardInsName, standardInsName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransformStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanCancel, canCancel_);
      DARABONBA_PTR_FROM_JSON(CanFinish, canFinish_);
      DARABONBA_PTR_FROM_JSON(CanSwitch, canSwitch_);
      DARABONBA_PTR_FROM_JSON(CanUndoSwitch, canUndoSwitch_);
      DARABONBA_PTR_FROM_JSON(EnterpriseInsName, enterpriseInsName_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_ANY_FROM_JSON(ReportSummary, reportSummary_);
      DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
      DARABONBA_PTR_FROM_JSON(StandardInsName, standardInsName_);
    };
    DescribeTransformStatusResponseBodyData() = default ;
    DescribeTransformStatusResponseBodyData(const DescribeTransformStatusResponseBodyData &) = default ;
    DescribeTransformStatusResponseBodyData(DescribeTransformStatusResponseBodyData &&) = default ;
    DescribeTransformStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransformStatusResponseBodyData() = default ;
    DescribeTransformStatusResponseBodyData& operator=(const DescribeTransformStatusResponseBodyData &) = default ;
    DescribeTransformStatusResponseBodyData& operator=(DescribeTransformStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canCancel_ == nullptr
        && return this->canFinish_ == nullptr && return this->canSwitch_ == nullptr && return this->canUndoSwitch_ == nullptr && return this->enterpriseInsName_ == nullptr && return this->phase_ == nullptr
        && return this->reportSummary_ == nullptr && return this->reportTime_ == nullptr && return this->standardInsName_ == nullptr; };
    // canCancel Field Functions 
    bool hasCanCancel() const { return this->canCancel_ != nullptr;};
    void deleteCanCancel() { this->canCancel_ = nullptr;};
    inline bool canCancel() const { DARABONBA_PTR_GET_DEFAULT(canCancel_, false) };
    inline DescribeTransformStatusResponseBodyData& setCanCancel(bool canCancel) { DARABONBA_PTR_SET_VALUE(canCancel_, canCancel) };


    // canFinish Field Functions 
    bool hasCanFinish() const { return this->canFinish_ != nullptr;};
    void deleteCanFinish() { this->canFinish_ = nullptr;};
    inline bool canFinish() const { DARABONBA_PTR_GET_DEFAULT(canFinish_, false) };
    inline DescribeTransformStatusResponseBodyData& setCanFinish(bool canFinish) { DARABONBA_PTR_SET_VALUE(canFinish_, canFinish) };


    // canSwitch Field Functions 
    bool hasCanSwitch() const { return this->canSwitch_ != nullptr;};
    void deleteCanSwitch() { this->canSwitch_ = nullptr;};
    inline bool canSwitch() const { DARABONBA_PTR_GET_DEFAULT(canSwitch_, false) };
    inline DescribeTransformStatusResponseBodyData& setCanSwitch(bool canSwitch) { DARABONBA_PTR_SET_VALUE(canSwitch_, canSwitch) };


    // canUndoSwitch Field Functions 
    bool hasCanUndoSwitch() const { return this->canUndoSwitch_ != nullptr;};
    void deleteCanUndoSwitch() { this->canUndoSwitch_ = nullptr;};
    inline bool canUndoSwitch() const { DARABONBA_PTR_GET_DEFAULT(canUndoSwitch_, false) };
    inline DescribeTransformStatusResponseBodyData& setCanUndoSwitch(bool canUndoSwitch) { DARABONBA_PTR_SET_VALUE(canUndoSwitch_, canUndoSwitch) };


    // enterpriseInsName Field Functions 
    bool hasEnterpriseInsName() const { return this->enterpriseInsName_ != nullptr;};
    void deleteEnterpriseInsName() { this->enterpriseInsName_ = nullptr;};
    inline string enterpriseInsName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseInsName_, "") };
    inline DescribeTransformStatusResponseBodyData& setEnterpriseInsName(string enterpriseInsName) { DARABONBA_PTR_SET_VALUE(enterpriseInsName_, enterpriseInsName) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline DescribeTransformStatusResponseBodyData& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // reportSummary Field Functions 
    bool hasReportSummary() const { return this->reportSummary_ != nullptr;};
    void deleteReportSummary() { this->reportSummary_ = nullptr;};
    inline     const Darabonba::Json & reportSummary() const { DARABONBA_GET(reportSummary_) };
    Darabonba::Json & reportSummary() { DARABONBA_GET(reportSummary_) };
    inline DescribeTransformStatusResponseBodyData& setReportSummary(const Darabonba::Json & reportSummary) { DARABONBA_SET_VALUE(reportSummary_, reportSummary) };
    inline DescribeTransformStatusResponseBodyData& setReportSummary(Darabonba::Json & reportSummary) { DARABONBA_SET_RVALUE(reportSummary_, reportSummary) };


    // reportTime Field Functions 
    bool hasReportTime() const { return this->reportTime_ != nullptr;};
    void deleteReportTime() { this->reportTime_ = nullptr;};
    inline int64_t reportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, 0L) };
    inline DescribeTransformStatusResponseBodyData& setReportTime(int64_t reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


    // standardInsName Field Functions 
    bool hasStandardInsName() const { return this->standardInsName_ != nullptr;};
    void deleteStandardInsName() { this->standardInsName_ = nullptr;};
    inline string standardInsName() const { DARABONBA_PTR_GET_DEFAULT(standardInsName_, "") };
    inline DescribeTransformStatusResponseBodyData& setStandardInsName(string standardInsName) { DARABONBA_PTR_SET_VALUE(standardInsName_, standardInsName) };


  protected:
    std::shared_ptr<bool> canCancel_ = nullptr;
    std::shared_ptr<bool> canFinish_ = nullptr;
    std::shared_ptr<bool> canSwitch_ = nullptr;
    std::shared_ptr<bool> canUndoSwitch_ = nullptr;
    std::shared_ptr<string> enterpriseInsName_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    Darabonba::Json reportSummary_ = nullptr;
    std::shared_ptr<int64_t> reportTime_ = nullptr;
    std::shared_ptr<string> standardInsName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
