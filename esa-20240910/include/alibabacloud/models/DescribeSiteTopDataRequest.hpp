// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETOPDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETOPDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteTopDataRequestFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTopDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTopDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTopDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteTopDataRequest() = default ;
    DescribeSiteTopDataRequest(const DescribeSiteTopDataRequest &) = default ;
    DescribeSiteTopDataRequest(DescribeSiteTopDataRequest &&) = default ;
    DescribeSiteTopDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTopDataRequest() = default ;
    DescribeSiteTopDataRequest& operator=(const DescribeSiteTopDataRequest &) = default ;
    DescribeSiteTopDataRequest& operator=(DescribeSiteTopDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->fields_ != nullptr && this->interval_ != nullptr && this->limit_ != nullptr && this->siteId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteTopDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<DescribeSiteTopDataRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<DescribeSiteTopDataRequestFields>) };
    inline vector<DescribeSiteTopDataRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<DescribeSiteTopDataRequestFields>) };
    inline DescribeSiteTopDataRequest& setFields(const vector<DescribeSiteTopDataRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline DescribeSiteTopDataRequest& setFields(vector<DescribeSiteTopDataRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeSiteTopDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DescribeSiteTopDataRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeSiteTopDataRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteTopDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DescribeSiteTopDataRequestFields>> fields_ = nullptr;
    std::shared_ptr<string> interval_ = nullptr;
    std::shared_ptr<string> limit_ = nullptr;
    std::shared_ptr<string> siteId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
