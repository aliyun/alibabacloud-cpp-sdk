// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTTEXTSCANRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTTEXTSCANRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ExportTextScanResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportTextScanResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ExportTextScanResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ExportTextScanResultRequest() = default ;
    ExportTextScanResultRequest(const ExportTextScanResultRequest &) = default ;
    ExportTextScanResultRequest(ExportTextScanResultRequest &&) = default ;
    ExportTextScanResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportTextScanResultRequest() = default ;
    ExportTextScanResultRequest& operator=(const ExportTextScanResultRequest &) = default ;
    ExportTextScanResultRequest& operator=(ExportTextScanResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->query_ == nullptr && return this->regionId_ == nullptr && return this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ExportTextScanResultRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const map<string, string> & query() const { DARABONBA_PTR_GET_CONST(query_, map<string, string>) };
    inline map<string, string> query() { DARABONBA_PTR_GET(query_, map<string, string>) };
    inline ExportTextScanResultRequest& setQuery(const map<string, string> & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline ExportTextScanResultRequest& setQuery(map<string, string> && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportTextScanResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ExportTextScanResultRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // End time of the query, in the format yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> endDate_ = nullptr;
    // Query conditions.
    std::shared_ptr<map<string, string>> query_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Start time of the query, in the format yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
