// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECONFIGSRESPONSEBODYDATABASELINES_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECONFIGSRESPONSEBODYDATABASELINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselineConfigsResponseBodyDataBaselines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineConfigsResponseBodyDataBaselines& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(ExpHour, expHour_);
      DARABONBA_PTR_TO_JSON(ExpMinu, expMinu_);
      DARABONBA_PTR_TO_JSON(HourExpDetail, hourExpDetail_);
      DARABONBA_PTR_TO_JSON(HourSlaDetail, hourSlaDetail_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SlaHour, slaHour_);
      DARABONBA_PTR_TO_JSON(SlaMinu, slaMinu_);
      DARABONBA_PTR_TO_JSON(UseFlag, useFlag_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineConfigsResponseBodyDataBaselines& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(ExpHour, expHour_);
      DARABONBA_PTR_FROM_JSON(ExpMinu, expMinu_);
      DARABONBA_PTR_FROM_JSON(HourExpDetail, hourExpDetail_);
      DARABONBA_PTR_FROM_JSON(HourSlaDetail, hourSlaDetail_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SlaHour, slaHour_);
      DARABONBA_PTR_FROM_JSON(SlaMinu, slaMinu_);
      DARABONBA_PTR_FROM_JSON(UseFlag, useFlag_);
    };
    ListBaselineConfigsResponseBodyDataBaselines() = default ;
    ListBaselineConfigsResponseBodyDataBaselines(const ListBaselineConfigsResponseBodyDataBaselines &) = default ;
    ListBaselineConfigsResponseBodyDataBaselines(ListBaselineConfigsResponseBodyDataBaselines &&) = default ;
    ListBaselineConfigsResponseBodyDataBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineConfigsResponseBodyDataBaselines() = default ;
    ListBaselineConfigsResponseBodyDataBaselines& operator=(const ListBaselineConfigsResponseBodyDataBaselines &) = default ;
    ListBaselineConfigsResponseBodyDataBaselines& operator=(ListBaselineConfigsResponseBodyDataBaselines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->baselineName_ != nullptr && this->baselineType_ != nullptr && this->expHour_ != nullptr && this->expMinu_ != nullptr && this->hourExpDetail_ != nullptr
        && this->hourSlaDetail_ != nullptr && this->isDefault_ != nullptr && this->owner_ != nullptr && this->priority_ != nullptr && this->projectId_ != nullptr
        && this->slaHour_ != nullptr && this->slaMinu_ != nullptr && this->useFlag_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline ListBaselineConfigsResponseBodyDataBaselines& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string baselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline ListBaselineConfigsResponseBodyDataBaselines& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // expHour Field Functions 
    bool hasExpHour() const { return this->expHour_ != nullptr;};
    void deleteExpHour() { this->expHour_ = nullptr;};
    inline int32_t expHour() const { DARABONBA_PTR_GET_DEFAULT(expHour_, 0) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setExpHour(int32_t expHour) { DARABONBA_PTR_SET_VALUE(expHour_, expHour) };


    // expMinu Field Functions 
    bool hasExpMinu() const { return this->expMinu_ != nullptr;};
    void deleteExpMinu() { this->expMinu_ = nullptr;};
    inline int32_t expMinu() const { DARABONBA_PTR_GET_DEFAULT(expMinu_, 0) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setExpMinu(int32_t expMinu) { DARABONBA_PTR_SET_VALUE(expMinu_, expMinu) };


    // hourExpDetail Field Functions 
    bool hasHourExpDetail() const { return this->hourExpDetail_ != nullptr;};
    void deleteHourExpDetail() { this->hourExpDetail_ = nullptr;};
    inline string hourExpDetail() const { DARABONBA_PTR_GET_DEFAULT(hourExpDetail_, "") };
    inline ListBaselineConfigsResponseBodyDataBaselines& setHourExpDetail(string hourExpDetail) { DARABONBA_PTR_SET_VALUE(hourExpDetail_, hourExpDetail) };


    // hourSlaDetail Field Functions 
    bool hasHourSlaDetail() const { return this->hourSlaDetail_ != nullptr;};
    void deleteHourSlaDetail() { this->hourSlaDetail_ = nullptr;};
    inline string hourSlaDetail() const { DARABONBA_PTR_GET_DEFAULT(hourSlaDetail_, "") };
    inline ListBaselineConfigsResponseBodyDataBaselines& setHourSlaDetail(string hourSlaDetail) { DARABONBA_PTR_SET_VALUE(hourSlaDetail_, hourSlaDetail) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListBaselineConfigsResponseBodyDataBaselines& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // slaHour Field Functions 
    bool hasSlaHour() const { return this->slaHour_ != nullptr;};
    void deleteSlaHour() { this->slaHour_ = nullptr;};
    inline int32_t slaHour() const { DARABONBA_PTR_GET_DEFAULT(slaHour_, 0) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setSlaHour(int32_t slaHour) { DARABONBA_PTR_SET_VALUE(slaHour_, slaHour) };


    // slaMinu Field Functions 
    bool hasSlaMinu() const { return this->slaMinu_ != nullptr;};
    void deleteSlaMinu() { this->slaMinu_ = nullptr;};
    inline int32_t slaMinu() const { DARABONBA_PTR_GET_DEFAULT(slaMinu_, 0) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setSlaMinu(int32_t slaMinu) { DARABONBA_PTR_SET_VALUE(slaMinu_, slaMinu) };


    // useFlag Field Functions 
    bool hasUseFlag() const { return this->useFlag_ != nullptr;};
    void deleteUseFlag() { this->useFlag_ = nullptr;};
    inline bool useFlag() const { DARABONBA_PTR_GET_DEFAULT(useFlag_, false) };
    inline ListBaselineConfigsResponseBodyDataBaselines& setUseFlag(bool useFlag) { DARABONBA_PTR_SET_VALUE(useFlag_, useFlag) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The type of the baseline. Valid values: DAILY and HOURLY.
    std::shared_ptr<string> baselineType_ = nullptr;
    // The hour in the alerting time of the day-level baseline. Valid values: [0, 47].
    std::shared_ptr<int32_t> expHour_ = nullptr;
    // The minute in the alerting time of the day-level baseline. Valid values: [0, 59].
    std::shared_ptr<int32_t> expMinu_ = nullptr;
    // The alerting time of the hour-level baseline. This parameter is presented as key-value pairs in the JSON format. The key indicates the ID of the cycle, and the value is presented in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
    std::shared_ptr<string> hourExpDetail_ = nullptr;
    // The committed completion time of the hour-level baseline. This parameter is presented as key-value pairs in the JSON format. The key indicates the ID of the cycle, and the value is presented in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
    std::shared_ptr<string> hourSlaDetail_ = nullptr;
    // Indicates whether the baseline is a default baseline of the workspace. Valid values: true and false.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs can be specified. The IDs are separated by commas (,).
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: {1,3,5,7,8}.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the workspace to which the baseline belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The hour in the committed completion time of the day-level baseline. Valid values: [0, 47].
    std::shared_ptr<int32_t> slaHour_ = nullptr;
    // The minute in the alerting time of the day-level baseline. Valid values: [0, 59].
    std::shared_ptr<int32_t> slaMinu_ = nullptr;
    // Indicates whether the baseline is enabled. Valid values: true and false.
    std::shared_ptr<bool> useFlag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
