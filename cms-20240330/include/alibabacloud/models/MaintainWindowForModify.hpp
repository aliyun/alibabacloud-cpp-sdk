// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAINTAINWINDOWFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_MAINTAINWINDOWFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MaintainWindowForModifyEffectTimeRange.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MaintainWindowForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaintainWindowForModify& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_TO_JSON(effective, effective_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, MaintainWindowForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_FROM_JSON(effective, effective_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    MaintainWindowForModify() = default ;
    MaintainWindowForModify(const MaintainWindowForModify &) = default ;
    MaintainWindowForModify(MaintainWindowForModify &&) = default ;
    MaintainWindowForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaintainWindowForModify() = default ;
    MaintainWindowForModify& operator=(const MaintainWindowForModify &) = default ;
    MaintainWindowForModify& operator=(MaintainWindowForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->effectTimeRange_ == nullptr && return this->effective_ == nullptr && return this->endTime_ == nullptr && return this->filterSetting_ == nullptr && return this->maintainWindowName_ == nullptr
        && return this->startTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MaintainWindowForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectTimeRange Field Functions 
    bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
    void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
    inline const MaintainWindowForModifyEffectTimeRange & effectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, MaintainWindowForModifyEffectTimeRange) };
    inline MaintainWindowForModifyEffectTimeRange effectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, MaintainWindowForModifyEffectTimeRange) };
    inline MaintainWindowForModify& setEffectTimeRange(const MaintainWindowForModifyEffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
    inline MaintainWindowForModify& setEffectTimeRange(MaintainWindowForModifyEffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string effective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline MaintainWindowForModify& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline MaintainWindowForModify& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline MaintainWindowForModify& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline MaintainWindowForModify& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // maintainWindowName Field Functions 
    bool hasMaintainWindowName() const { return this->maintainWindowName_ != nullptr;};
    void deleteMaintainWindowName() { this->maintainWindowName_ = nullptr;};
    inline string maintainWindowName() const { DARABONBA_PTR_GET_DEFAULT(maintainWindowName_, "") };
    inline MaintainWindowForModify& setMaintainWindowName(string maintainWindowName) { DARABONBA_PTR_SET_VALUE(maintainWindowName_, maintainWindowName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MaintainWindowForModify& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<MaintainWindowForModifyEffectTimeRange> effectTimeRange_ = nullptr;
    std::shared_ptr<string> effective_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> maintainWindowName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
