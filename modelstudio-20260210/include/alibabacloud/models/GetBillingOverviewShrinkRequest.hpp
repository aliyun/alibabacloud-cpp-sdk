// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBILLINGOVERVIEWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBILLINGOVERVIEWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetBillingOverviewShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBillingOverviewShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(billMonth, billMonth_);
      DARABONBA_PTR_TO_JSON(filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_TO_JSON(locale, locale_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(timePeriod, timePeriodShrink_);
      DARABONBA_PTR_TO_JSON(topNum, topNum_);
      DARABONBA_PTR_TO_JSON(zeroFilter, zeroFilter_);
    };
    friend void from_json(const Darabonba::Json& j, GetBillingOverviewShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(billMonth, billMonth_);
      DARABONBA_PTR_FROM_JSON(filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_FROM_JSON(locale, locale_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(timePeriod, timePeriodShrink_);
      DARABONBA_PTR_FROM_JSON(topNum, topNum_);
      DARABONBA_PTR_FROM_JSON(zeroFilter, zeroFilter_);
    };
    GetBillingOverviewShrinkRequest() = default ;
    GetBillingOverviewShrinkRequest(const GetBillingOverviewShrinkRequest &) = default ;
    GetBillingOverviewShrinkRequest(GetBillingOverviewShrinkRequest &&) = default ;
    GetBillingOverviewShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBillingOverviewShrinkRequest() = default ;
    GetBillingOverviewShrinkRequest& operator=(const GetBillingOverviewShrinkRequest &) = default ;
    GetBillingOverviewShrinkRequest& operator=(GetBillingOverviewShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billMonth_ == nullptr
        && this->filterShrink_ == nullptr && this->granularity_ == nullptr && this->groupByShrink_ == nullptr && this->locale_ == nullptr && this->regionId_ == nullptr
        && this->timePeriodShrink_ == nullptr && this->topNum_ == nullptr && this->zeroFilter_ == nullptr; };
    // billMonth Field Functions 
    bool hasBillMonth() const { return this->billMonth_ != nullptr;};
    void deleteBillMonth() { this->billMonth_ = nullptr;};
    inline string getBillMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
    inline GetBillingOverviewShrinkRequest& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetBillingOverviewShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline GetBillingOverviewShrinkRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // groupByShrink Field Functions 
    bool hasGroupByShrink() const { return this->groupByShrink_ != nullptr;};
    void deleteGroupByShrink() { this->groupByShrink_ = nullptr;};
    inline string getGroupByShrink() const { DARABONBA_PTR_GET_DEFAULT(groupByShrink_, "") };
    inline GetBillingOverviewShrinkRequest& setGroupByShrink(string groupByShrink) { DARABONBA_PTR_SET_VALUE(groupByShrink_, groupByShrink) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetBillingOverviewShrinkRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetBillingOverviewShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timePeriodShrink Field Functions 
    bool hasTimePeriodShrink() const { return this->timePeriodShrink_ != nullptr;};
    void deleteTimePeriodShrink() { this->timePeriodShrink_ = nullptr;};
    inline string getTimePeriodShrink() const { DARABONBA_PTR_GET_DEFAULT(timePeriodShrink_, "") };
    inline GetBillingOverviewShrinkRequest& setTimePeriodShrink(string timePeriodShrink) { DARABONBA_PTR_SET_VALUE(timePeriodShrink_, timePeriodShrink) };


    // topNum Field Functions 
    bool hasTopNum() const { return this->topNum_ != nullptr;};
    void deleteTopNum() { this->topNum_ = nullptr;};
    inline int32_t getTopNum() const { DARABONBA_PTR_GET_DEFAULT(topNum_, 0) };
    inline GetBillingOverviewShrinkRequest& setTopNum(int32_t topNum) { DARABONBA_PTR_SET_VALUE(topNum_, topNum) };


    // zeroFilter Field Functions 
    bool hasZeroFilter() const { return this->zeroFilter_ != nullptr;};
    void deleteZeroFilter() { this->zeroFilter_ = nullptr;};
    inline bool getZeroFilter() const { DARABONBA_PTR_GET_DEFAULT(zeroFilter_, false) };
    inline GetBillingOverviewShrinkRequest& setZeroFilter(bool zeroFilter) { DARABONBA_PTR_SET_VALUE(zeroFilter_, zeroFilter) };


  protected:
    // The billing month.
    shared_ptr<string> billMonth_ {};
    // The filter conditions.
    shared_ptr<string> filterShrink_ {};
    // The time granularity.
    shared_ptr<string> granularity_ {};
    // The list of grouping conditions. Currently, you must specify exactly one grouping dimension.
    shared_ptr<string> groupByShrink_ {};
    // The language of the response. Default value: en-US.
    shared_ptr<string> locale_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The query time range, which includes the start and end times. Both the start and end times are included in the query range. The time format must be consistent with the granularity, and the start time cannot be later than the end time.
    shared_ptr<string> timePeriodShrink_ {};
    // The number of groups to return. Valid values: 1 to 20. Default value: 20.
    shared_ptr<int32_t> topNum_ {};
    // Specifies whether to filter out groups with an amount of 0. Default value: true.
    shared_ptr<bool> zeroFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
