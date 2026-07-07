// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEWAFTOPDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEWAFTOPDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteWafTopDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteWafTopDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteWafTopDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteWafTopDataRequest() = default ;
    DescribeSiteWafTopDataRequest(const DescribeSiteWafTopDataRequest &) = default ;
    DescribeSiteWafTopDataRequest(DescribeSiteWafTopDataRequest &&) = default ;
    DescribeSiteWafTopDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteWafTopDataRequest() = default ;
    DescribeSiteWafTopDataRequest& operator=(const DescribeSiteWafTopDataRequest &) = default ;
    DescribeSiteWafTopDataRequest& operator=(DescribeSiteWafTopDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimension_ == nullptr
        && this->fieldName_ == nullptr; };
      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline const vector<string> & getDimension() const { DARABONBA_PTR_GET_CONST(dimension_, vector<string>) };
      inline vector<string> getDimension() { DARABONBA_PTR_GET(dimension_, vector<string>) };
      inline Fields& setDimension(const vector<string> & dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };
      inline Fields& setDimension(vector<string> && dimension) { DARABONBA_PTR_SET_RVALUE(dimension_, dimension) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Fields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    protected:
      // The query dimension.
      shared_ptr<vector<string>> dimension_ {};
      // The query metric value.
      // 
      // > For specific dimensions, see [Data analytics field description](https://help.aliyun.com/document_detail/2878520.html).
      shared_ptr<string> fieldName_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->fields_ == nullptr && this->interval_ == nullptr && this->limit_ == nullptr && this->siteId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteWafTopDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<DescribeSiteWafTopDataRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<DescribeSiteWafTopDataRequest::Fields>) };
    inline vector<DescribeSiteWafTopDataRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<DescribeSiteWafTopDataRequest::Fields>) };
    inline DescribeSiteWafTopDataRequest& setFields(const vector<DescribeSiteWafTopDataRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline DescribeSiteWafTopDataRequest& setFields(vector<DescribeSiteWafTopDataRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeSiteWafTopDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DescribeSiteWafTopDataRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeSiteWafTopDataRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteWafTopDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


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
    shared_ptr<vector<DescribeSiteWafTopDataRequest::Fields>> fields_ {};
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
