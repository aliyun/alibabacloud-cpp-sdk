// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTTEXTSCANRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTTEXTSCANRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ExportTextScanResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportTextScanResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Query, queryShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ExportTextScanResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Query, queryShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ExportTextScanResultShrinkRequest() = default ;
    ExportTextScanResultShrinkRequest(const ExportTextScanResultShrinkRequest &) = default ;
    ExportTextScanResultShrinkRequest(ExportTextScanResultShrinkRequest &&) = default ;
    ExportTextScanResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportTextScanResultShrinkRequest() = default ;
    ExportTextScanResultShrinkRequest& operator=(const ExportTextScanResultShrinkRequest &) = default ;
    ExportTextScanResultShrinkRequest& operator=(ExportTextScanResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->queryShrink_ == nullptr && this->regionId_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ExportTextScanResultShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // queryShrink Field Functions 
    bool hasQueryShrink() const { return this->queryShrink_ != nullptr;};
    void deleteQueryShrink() { this->queryShrink_ = nullptr;};
    inline string getQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryShrink_, "") };
    inline ExportTextScanResultShrinkRequest& setQueryShrink(string queryShrink) { DARABONBA_PTR_SET_VALUE(queryShrink_, queryShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportTextScanResultShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ExportTextScanResultShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // End time of the query, in the format yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> endDate_ {};
    // Query conditions.
    shared_ptr<string> queryShrink_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Start time of the query, in the format yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
