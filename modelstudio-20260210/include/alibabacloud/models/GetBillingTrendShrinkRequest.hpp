// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBILLINGTRENDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBILLINGTRENDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetBillingTrendShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBillingTrendShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_TO_JSON(locale, locale_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(timePeriod, timePeriodShrink_);
      DARABONBA_PTR_TO_JSON(topNum, topNum_);
      DARABONBA_PTR_TO_JSON(zeroFilter, zeroFilter_);
    };
    friend void from_json(const Darabonba::Json& j, GetBillingTrendShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_FROM_JSON(locale, locale_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(timePeriod, timePeriodShrink_);
      DARABONBA_PTR_FROM_JSON(topNum, topNum_);
      DARABONBA_PTR_FROM_JSON(zeroFilter, zeroFilter_);
    };
    GetBillingTrendShrinkRequest() = default ;
    GetBillingTrendShrinkRequest(const GetBillingTrendShrinkRequest &) = default ;
    GetBillingTrendShrinkRequest(GetBillingTrendShrinkRequest &&) = default ;
    GetBillingTrendShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBillingTrendShrinkRequest() = default ;
    GetBillingTrendShrinkRequest& operator=(const GetBillingTrendShrinkRequest &) = default ;
    GetBillingTrendShrinkRequest& operator=(GetBillingTrendShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterShrink_ == nullptr
        && this->granularity_ == nullptr && this->groupByShrink_ == nullptr && this->locale_ == nullptr && this->regionId_ == nullptr && this->timePeriodShrink_ == nullptr
        && this->topNum_ == nullptr && this->zeroFilter_ == nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetBillingTrendShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline GetBillingTrendShrinkRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // groupByShrink Field Functions 
    bool hasGroupByShrink() const { return this->groupByShrink_ != nullptr;};
    void deleteGroupByShrink() { this->groupByShrink_ = nullptr;};
    inline string getGroupByShrink() const { DARABONBA_PTR_GET_DEFAULT(groupByShrink_, "") };
    inline GetBillingTrendShrinkRequest& setGroupByShrink(string groupByShrink) { DARABONBA_PTR_SET_VALUE(groupByShrink_, groupByShrink) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetBillingTrendShrinkRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetBillingTrendShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timePeriodShrink Field Functions 
    bool hasTimePeriodShrink() const { return this->timePeriodShrink_ != nullptr;};
    void deleteTimePeriodShrink() { this->timePeriodShrink_ = nullptr;};
    inline string getTimePeriodShrink() const { DARABONBA_PTR_GET_DEFAULT(timePeriodShrink_, "") };
    inline GetBillingTrendShrinkRequest& setTimePeriodShrink(string timePeriodShrink) { DARABONBA_PTR_SET_VALUE(timePeriodShrink_, timePeriodShrink) };


    // topNum Field Functions 
    bool hasTopNum() const { return this->topNum_ != nullptr;};
    void deleteTopNum() { this->topNum_ = nullptr;};
    inline int32_t getTopNum() const { DARABONBA_PTR_GET_DEFAULT(topNum_, 0) };
    inline GetBillingTrendShrinkRequest& setTopNum(int32_t topNum) { DARABONBA_PTR_SET_VALUE(topNum_, topNum) };


    // zeroFilter Field Functions 
    bool hasZeroFilter() const { return this->zeroFilter_ != nullptr;};
    void deleteZeroFilter() { this->zeroFilter_ = nullptr;};
    inline bool getZeroFilter() const { DARABONBA_PTR_GET_DEFAULT(zeroFilter_, false) };
    inline GetBillingTrendShrinkRequest& setZeroFilter(bool zeroFilter) { DARABONBA_PTR_SET_VALUE(zeroFilter_, zeroFilter) };


  protected:
    // The dimension filter conditions.
    shared_ptr<string> filterShrink_ {};
    // The query granularity. This parameter is required.
    shared_ptr<string> granularity_ {};
    // The grouping conditions. This parameter must contain one and only one element.
    shared_ptr<string> groupByShrink_ {};
    // The response language. Default value: en-US.
    shared_ptr<string> locale_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The query time range, including the start time and end time. This parameter is required.
    shared_ptr<string> timePeriodShrink_ {};
    // The number of groups to return. Valid values: 1 to 20. Default value: 20. The remaining groups are merged into "Others".
    shared_ptr<int32_t> topNum_ {};
    // Specifies whether to filter out groups with a zero amount. Default value: true.
    shared_ptr<bool> zeroFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
