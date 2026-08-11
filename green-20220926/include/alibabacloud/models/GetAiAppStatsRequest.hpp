// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAiAppStatsRequest() = default ;
    GetAiAppStatsRequest(const GetAiAppStatsRequest &) = default ;
    GetAiAppStatsRequest(GetAiAppStatsRequest &&) = default ;
    GetAiAppStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppStatsRequest() = default ;
    GetAiAppStatsRequest& operator=(const GetAiAppStatsRequest &) = default ;
    GetAiAppStatsRequest& operator=(GetAiAppStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byMonth_ == nullptr
        && this->endDate_ == nullptr && this->query_ == nullptr && this->regionId_ == nullptr && this->startDate_ == nullptr && this->type_ == nullptr; };
    // byMonth Field Functions 
    bool hasByMonth() const { return this->byMonth_ != nullptr;};
    void deleteByMonth() { this->byMonth_ = nullptr;};
    inline bool getByMonth() const { DARABONBA_PTR_GET_DEFAULT(byMonth_, false) };
    inline GetAiAppStatsRequest& setByMonth(bool byMonth) { DARABONBA_PTR_SET_VALUE(byMonth_, byMonth) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetAiAppStatsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetAiAppStatsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAiAppStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetAiAppStatsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAiAppStatsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to aggregate by month. Default value: false.
    shared_ptr<bool> byMonth_ {};
    // The query end date.
    shared_ptr<string> endDate_ {};
    // The query condition.
    shared_ptr<string> query_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The query start date.
    shared_ptr<string> startDate_ {};
    // The type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
