// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETOPDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETOPDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTopDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTopDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fields, fieldsShrink_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTopDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fields, fieldsShrink_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteTopDataShrinkRequest() = default ;
    DescribeSiteTopDataShrinkRequest(const DescribeSiteTopDataShrinkRequest &) = default ;
    DescribeSiteTopDataShrinkRequest(DescribeSiteTopDataShrinkRequest &&) = default ;
    DescribeSiteTopDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTopDataShrinkRequest() = default ;
    DescribeSiteTopDataShrinkRequest& operator=(const DescribeSiteTopDataShrinkRequest &) = default ;
    DescribeSiteTopDataShrinkRequest& operator=(DescribeSiteTopDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->fieldsShrink_ != nullptr && this->interval_ != nullptr && this->limit_ != nullptr && this->siteId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteTopDataShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fieldsShrink Field Functions 
    bool hasFieldsShrink() const { return this->fieldsShrink_ != nullptr;};
    void deleteFieldsShrink() { this->fieldsShrink_ = nullptr;};
    inline string fieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(fieldsShrink_, "") };
    inline DescribeSiteTopDataShrinkRequest& setFieldsShrink(string fieldsShrink) { DARABONBA_PTR_SET_VALUE(fieldsShrink_, fieldsShrink) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeSiteTopDataShrinkRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DescribeSiteTopDataShrinkRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeSiteTopDataShrinkRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteTopDataShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fieldsShrink_ = nullptr;
    std::shared_ptr<string> interval_ = nullptr;
    std::shared_ptr<string> limit_ = nullptr;
    std::shared_ptr<string> siteId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
