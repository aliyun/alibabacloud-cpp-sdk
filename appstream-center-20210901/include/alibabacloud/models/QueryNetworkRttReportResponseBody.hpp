// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNETWORKRTTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYNETWORKRTTREPORTRESPONSEBODY_HPP_
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
  class QueryNetworkRttReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNetworkRttReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NetworkRttReportDataModel, networkRttReportDataModel_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNetworkRttReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NetworkRttReportDataModel, networkRttReportDataModel_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryNetworkRttReportResponseBody() = default ;
    QueryNetworkRttReportResponseBody(const QueryNetworkRttReportResponseBody &) = default ;
    QueryNetworkRttReportResponseBody(QueryNetworkRttReportResponseBody &&) = default ;
    QueryNetworkRttReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNetworkRttReportResponseBody() = default ;
    QueryNetworkRttReportResponseBody& operator=(const QueryNetworkRttReportResponseBody &) = default ;
    QueryNetworkRttReportResponseBody& operator=(QueryNetworkRttReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkRttReportDataModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkRttReportDataModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(LowRttUserCount, lowRttUserCount_);
        DARABONBA_PTR_TO_JSON(LowRttUserRate, lowRttUserRate_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RttAvg, rttAvg_);
        DARABONBA_PTR_TO_JSON(RttMax, rttMax_);
        DARABONBA_PTR_TO_JSON(RttMin, rttMin_);
        DARABONBA_PTR_TO_JSON(StatEndDate, statEndDate_);
        DARABONBA_PTR_TO_JSON(StatStartDate, statStartDate_);
        DARABONBA_PTR_TO_JSON(TotalUserCount, totalUserCount_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkRttReportDataModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(LowRttUserCount, lowRttUserCount_);
        DARABONBA_PTR_FROM_JSON(LowRttUserRate, lowRttUserRate_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RttAvg, rttAvg_);
        DARABONBA_PTR_FROM_JSON(RttMax, rttMax_);
        DARABONBA_PTR_FROM_JSON(RttMin, rttMin_);
        DARABONBA_PTR_FROM_JSON(StatEndDate, statEndDate_);
        DARABONBA_PTR_FROM_JSON(StatStartDate, statStartDate_);
        DARABONBA_PTR_FROM_JSON(TotalUserCount, totalUserCount_);
      };
      NetworkRttReportDataModel() = default ;
      NetworkRttReportDataModel(const NetworkRttReportDataModel &) = default ;
      NetworkRttReportDataModel(NetworkRttReportDataModel &&) = default ;
      NetworkRttReportDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkRttReportDataModel() = default ;
      NetworkRttReportDataModel& operator=(const NetworkRttReportDataModel &) = default ;
      NetworkRttReportDataModel& operator=(NetworkRttReportDataModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->lowRttUserCount_ == nullptr && this->lowRttUserRate_ == nullptr && this->regionId_ == nullptr && this->rttAvg_ == nullptr && this->rttMax_ == nullptr
        && this->rttMin_ == nullptr && this->statEndDate_ == nullptr && this->statStartDate_ == nullptr && this->totalUserCount_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline NetworkRttReportDataModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // lowRttUserCount Field Functions 
      bool hasLowRttUserCount() const { return this->lowRttUserCount_ != nullptr;};
      void deleteLowRttUserCount() { this->lowRttUserCount_ = nullptr;};
      inline int64_t getLowRttUserCount() const { DARABONBA_PTR_GET_DEFAULT(lowRttUserCount_, 0L) };
      inline NetworkRttReportDataModel& setLowRttUserCount(int64_t lowRttUserCount) { DARABONBA_PTR_SET_VALUE(lowRttUserCount_, lowRttUserCount) };


      // lowRttUserRate Field Functions 
      bool hasLowRttUserRate() const { return this->lowRttUserRate_ != nullptr;};
      void deleteLowRttUserRate() { this->lowRttUserRate_ = nullptr;};
      inline double getLowRttUserRate() const { DARABONBA_PTR_GET_DEFAULT(lowRttUserRate_, 0.0) };
      inline NetworkRttReportDataModel& setLowRttUserRate(double lowRttUserRate) { DARABONBA_PTR_SET_VALUE(lowRttUserRate_, lowRttUserRate) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline NetworkRttReportDataModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // rttAvg Field Functions 
      bool hasRttAvg() const { return this->rttAvg_ != nullptr;};
      void deleteRttAvg() { this->rttAvg_ = nullptr;};
      inline double getRttAvg() const { DARABONBA_PTR_GET_DEFAULT(rttAvg_, 0.0) };
      inline NetworkRttReportDataModel& setRttAvg(double rttAvg) { DARABONBA_PTR_SET_VALUE(rttAvg_, rttAvg) };


      // rttMax Field Functions 
      bool hasRttMax() const { return this->rttMax_ != nullptr;};
      void deleteRttMax() { this->rttMax_ = nullptr;};
      inline double getRttMax() const { DARABONBA_PTR_GET_DEFAULT(rttMax_, 0.0) };
      inline NetworkRttReportDataModel& setRttMax(double rttMax) { DARABONBA_PTR_SET_VALUE(rttMax_, rttMax) };


      // rttMin Field Functions 
      bool hasRttMin() const { return this->rttMin_ != nullptr;};
      void deleteRttMin() { this->rttMin_ = nullptr;};
      inline double getRttMin() const { DARABONBA_PTR_GET_DEFAULT(rttMin_, 0.0) };
      inline NetworkRttReportDataModel& setRttMin(double rttMin) { DARABONBA_PTR_SET_VALUE(rttMin_, rttMin) };


      // statEndDate Field Functions 
      bool hasStatEndDate() const { return this->statEndDate_ != nullptr;};
      void deleteStatEndDate() { this->statEndDate_ = nullptr;};
      inline string getStatEndDate() const { DARABONBA_PTR_GET_DEFAULT(statEndDate_, "") };
      inline NetworkRttReportDataModel& setStatEndDate(string statEndDate) { DARABONBA_PTR_SET_VALUE(statEndDate_, statEndDate) };


      // statStartDate Field Functions 
      bool hasStatStartDate() const { return this->statStartDate_ != nullptr;};
      void deleteStatStartDate() { this->statStartDate_ = nullptr;};
      inline string getStatStartDate() const { DARABONBA_PTR_GET_DEFAULT(statStartDate_, "") };
      inline NetworkRttReportDataModel& setStatStartDate(string statStartDate) { DARABONBA_PTR_SET_VALUE(statStartDate_, statStartDate) };


      // totalUserCount Field Functions 
      bool hasTotalUserCount() const { return this->totalUserCount_ != nullptr;};
      void deleteTotalUserCount() { this->totalUserCount_ = nullptr;};
      inline int64_t getTotalUserCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserCount_, 0L) };
      inline NetworkRttReportDataModel& setTotalUserCount(int64_t totalUserCount) { DARABONBA_PTR_SET_VALUE(totalUserCount_, totalUserCount) };


    protected:
      // The ID of the app instance group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The number of users that meet the low-RTT criteria of the report. Unit: users. The current API operation does not return the specific threshold.
      shared_ptr<int64_t> lowRttUserCount_ {};
      // The ratio of low-RTT users to the total number of users involved in the statistics. Valid values: 0 to 1. To obtain the percentage, multiply the value by 100.
      shared_ptr<double> lowRttUserRate_ {};
      // The ID of the business region to which the report data belongs.
      shared_ptr<string> regionId_ {};
      // The average RTT of all users involved in the statistics. Unit: milliseconds.
      shared_ptr<double> rttAvg_ {};
      // The maximum value among the average RTTs of all users. Unit: milliseconds.
      shared_ptr<double> rttMax_ {};
      // The minimum value among the average RTTs of all users. Unit: milliseconds.
      shared_ptr<double> rttMin_ {};
      // The end time of the statistical window. Format: `yyyy-MM-dd HH:mm:ss`. The string itself does not carry a time zone and is interpreted as Asia/Shanghai (UTC+8).
      shared_ptr<string> statEndDate_ {};
      // The start time of the statistical window. Format: `yyyy-MM-dd HH:mm:ss`. The string itself does not carry a time zone and is interpreted as Asia/Shanghai (UTC+8).
      shared_ptr<string> statStartDate_ {};
      // The total number of users involved in the RTT calculation for the current statistical window. Unit: users.
      shared_ptr<int64_t> totalUserCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->message_ == nullptr && this->networkRttReportDataModel_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryNetworkRttReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryNetworkRttReportResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryNetworkRttReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // networkRttReportDataModel Field Functions 
    bool hasNetworkRttReportDataModel() const { return this->networkRttReportDataModel_ != nullptr;};
    void deleteNetworkRttReportDataModel() { this->networkRttReportDataModel_ = nullptr;};
    inline const vector<QueryNetworkRttReportResponseBody::NetworkRttReportDataModel> & getNetworkRttReportDataModel() const { DARABONBA_PTR_GET_CONST(networkRttReportDataModel_, vector<QueryNetworkRttReportResponseBody::NetworkRttReportDataModel>) };
    inline vector<QueryNetworkRttReportResponseBody::NetworkRttReportDataModel> getNetworkRttReportDataModel() { DARABONBA_PTR_GET(networkRttReportDataModel_, vector<QueryNetworkRttReportResponseBody::NetworkRttReportDataModel>) };
    inline QueryNetworkRttReportResponseBody& setNetworkRttReportDataModel(const vector<QueryNetworkRttReportResponseBody::NetworkRttReportDataModel> & networkRttReportDataModel) { DARABONBA_PTR_SET_VALUE(networkRttReportDataModel_, networkRttReportDataModel) };
    inline QueryNetworkRttReportResponseBody& setNetworkRttReportDataModel(vector<QueryNetworkRttReportResponseBody::NetworkRttReportDataModel> && networkRttReportDataModel) { DARABONBA_PTR_SET_RVALUE(networkRttReportDataModel_, networkRttReportDataModel) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryNetworkRttReportResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryNetworkRttReportResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryNetworkRttReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. `200` indicates that the request is processed successfully. Other values indicate that the processing failed.
    shared_ptr<string> code_ {};
    // The total number of records that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The description of the request processing result. If the request is successful, `success` is usually returned.
    shared_ptr<string> message_ {};
    // The list of network RTT report data.
    shared_ptr<vector<QueryNetworkRttReportResponseBody::NetworkRttReportDataModel>> networkRttReportDataModel_ {};
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
