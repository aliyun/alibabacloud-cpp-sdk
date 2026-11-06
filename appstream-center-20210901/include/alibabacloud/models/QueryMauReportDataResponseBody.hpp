// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAUREPORTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAUREPORTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryMauReportDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMauReportDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MauReportDataModel, mauReportDataModel_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMauReportDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MauReportDataModel, mauReportDataModel_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMauReportDataResponseBody() = default ;
    QueryMauReportDataResponseBody(const QueryMauReportDataResponseBody &) = default ;
    QueryMauReportDataResponseBody(QueryMauReportDataResponseBody &&) = default ;
    QueryMauReportDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMauReportDataResponseBody() = default ;
    QueryMauReportDataResponseBody& operator=(const QueryMauReportDataResponseBody &) = default ;
    QueryMauReportDataResponseBody& operator=(QueryMauReportDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MauReportDataModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MauReportDataModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(Mau, mau_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StatDate, statDate_);
        DARABONBA_PTR_TO_JSON(StatMonth, statMonth_);
      };
      friend void from_json(const Darabonba::Json& j, MauReportDataModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(Mau, mau_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StatDate, statDate_);
        DARABONBA_PTR_FROM_JSON(StatMonth, statMonth_);
      };
      MauReportDataModel() = default ;
      MauReportDataModel(const MauReportDataModel &) = default ;
      MauReportDataModel(MauReportDataModel &&) = default ;
      MauReportDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MauReportDataModel() = default ;
      MauReportDataModel& operator=(const MauReportDataModel &) = default ;
      MauReportDataModel& operator=(MauReportDataModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->mau_ == nullptr && this->regionId_ == nullptr && this->statDate_ == nullptr && this->statMonth_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline MauReportDataModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // mau Field Functions 
      bool hasMau() const { return this->mau_ != nullptr;};
      void deleteMau() { this->mau_ = nullptr;};
      inline int64_t getMau() const { DARABONBA_PTR_GET_DEFAULT(mau_, 0L) };
      inline MauReportDataModel& setMau(int64_t mau) { DARABONBA_PTR_SET_VALUE(mau_, mau) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline MauReportDataModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // statDate Field Functions 
      bool hasStatDate() const { return this->statDate_ != nullptr;};
      void deleteStatDate() { this->statDate_ = nullptr;};
      inline string getStatDate() const { DARABONBA_PTR_GET_DEFAULT(statDate_, "") };
      inline MauReportDataModel& setStatDate(string statDate) { DARABONBA_PTR_SET_VALUE(statDate_, statDate) };


      // statMonth Field Functions 
      bool hasStatMonth() const { return this->statMonth_ != nullptr;};
      void deleteStatMonth() { this->statMonth_ = nullptr;};
      inline string getStatMonth() const { DARABONBA_PTR_GET_DEFAULT(statMonth_, "") };
      inline MauReportDataModel& setStatMonth(string statMonth) { DARABONBA_PTR_SET_VALUE(statMonth_, statMonth) };


    protected:
      // The app instance group ID.
      shared_ptr<string> appInstanceGroupId_ {};
      // The number of monthly active users in the statistical month. Unit: users.
      shared_ptr<int64_t> mau_ {};
      // The business region ID to which the report data belongs.
      shared_ptr<string> regionId_ {};
      // The statistical cutoff date used for the month. Format: `yyyy-MM-dd`. For the last month, this is usually the day before the requested `EndDate`. The date is interpreted as a calendar date in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> statDate_ {};
      // The statistical month. Format: `yyyy-MM`. The month is interpreted as a calendar month in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> statMonth_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->mauReportDataModel_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMauReportDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryMauReportDataResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // mauReportDataModel Field Functions 
    bool hasMauReportDataModel() const { return this->mauReportDataModel_ != nullptr;};
    void deleteMauReportDataModel() { this->mauReportDataModel_ = nullptr;};
    inline const vector<QueryMauReportDataResponseBody::MauReportDataModel> & getMauReportDataModel() const { DARABONBA_PTR_GET_CONST(mauReportDataModel_, vector<QueryMauReportDataResponseBody::MauReportDataModel>) };
    inline vector<QueryMauReportDataResponseBody::MauReportDataModel> getMauReportDataModel() { DARABONBA_PTR_GET(mauReportDataModel_, vector<QueryMauReportDataResponseBody::MauReportDataModel>) };
    inline QueryMauReportDataResponseBody& setMauReportDataModel(const vector<QueryMauReportDataResponseBody::MauReportDataModel> & mauReportDataModel) { DARABONBA_PTR_SET_VALUE(mauReportDataModel_, mauReportDataModel) };
    inline QueryMauReportDataResponseBody& setMauReportDataModel(vector<QueryMauReportDataResponseBody::MauReportDataModel> && mauReportDataModel) { DARABONBA_PTR_SET_RVALUE(mauReportDataModel_, mauReportDataModel) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMauReportDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryMauReportDataResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMauReportDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMauReportDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of `200` indicates that the request is processed successfully. Other values indicate that the request fails to be processed.
    shared_ptr<string> code_ {};
    // The total number of entries that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The list of monthly active user report data.
    shared_ptr<vector<QueryMauReportDataResponseBody::MauReportDataModel>> mauReportDataModel_ {};
    // The description of the request processing result. If the request is successful, `success` is usually returned.
    shared_ptr<string> message_ {};
    // The page number corresponding to the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page used in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
