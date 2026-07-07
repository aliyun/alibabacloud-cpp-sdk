// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEWAFTOPDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEWAFTOPDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteWafTopDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteWafTopDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fields, fieldsShrink_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteWafTopDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fields, fieldsShrink_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteWafTopDataShrinkRequest() = default ;
    DescribeSiteWafTopDataShrinkRequest(const DescribeSiteWafTopDataShrinkRequest &) = default ;
    DescribeSiteWafTopDataShrinkRequest(DescribeSiteWafTopDataShrinkRequest &&) = default ;
    DescribeSiteWafTopDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteWafTopDataShrinkRequest() = default ;
    DescribeSiteWafTopDataShrinkRequest& operator=(const DescribeSiteWafTopDataShrinkRequest &) = default ;
    DescribeSiteWafTopDataShrinkRequest& operator=(DescribeSiteWafTopDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->fieldsShrink_ == nullptr && this->interval_ == nullptr && this->limit_ == nullptr && this->siteId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteWafTopDataShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fieldsShrink Field Functions 
    bool hasFieldsShrink() const { return this->fieldsShrink_ != nullptr;};
    void deleteFieldsShrink() { this->fieldsShrink_ = nullptr;};
    inline string getFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(fieldsShrink_, "") };
    inline DescribeSiteWafTopDataShrinkRequest& setFieldsShrink(string fieldsShrink) { DARABONBA_PTR_SET_VALUE(fieldsShrink_, fieldsShrink) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeSiteWafTopDataShrinkRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DescribeSiteWafTopDataShrinkRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeSiteWafTopDataShrinkRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteWafTopDataShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query.
    // 
    // Specify the time in ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    // 
    // > The end time must be later than the start time.
    shared_ptr<string> endTime_ {};
    // The query metrics.
    // 
    // This parameter is required.
    shared_ptr<string> fieldsShrink_ {};
    // The time granularity for querying data. Unit: seconds.
    shared_ptr<string> interval_ {};
    // The number of top data entries to query.
    shared_ptr<string> limit_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // 
    // If this parameter is left empty, user-level data is queried.
    shared_ptr<string> siteId_ {};
    // The beginning of the time range to query.
    // 
    // Specify the time in ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
