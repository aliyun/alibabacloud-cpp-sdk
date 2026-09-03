// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRINTEREVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRINTEREVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePrinterEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrinterEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrinterDriver, printerDriver_);
      DARABONBA_PTR_TO_JSON(PrinterName, printerName_);
      DARABONBA_PTR_TO_JSON(PrinterRedirType, printerRedirType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrinterEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrinterDriver, printerDriver_);
      DARABONBA_PTR_FROM_JSON(PrinterName, printerName_);
      DARABONBA_PTR_FROM_JSON(PrinterRedirType, printerRedirType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribePrinterEventsRequest() = default ;
    DescribePrinterEventsRequest(const DescribePrinterEventsRequest &) = default ;
    DescribePrinterEventsRequest(DescribePrinterEventsRequest &&) = default ;
    DescribePrinterEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrinterEventsRequest() = default ;
    DescribePrinterEventsRequest& operator=(const DescribePrinterEventsRequest &) = default ;
    DescribePrinterEventsRequest& operator=(DescribePrinterEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->endTime_ == nullptr && this->endUserId_ == nullptr && this->endUserIds_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->printerDriver_ == nullptr && this->printerName_ == nullptr && this->printerRedirType_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribePrinterEventsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribePrinterEventsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePrinterEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribePrinterEventsRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribePrinterEventsRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribePrinterEventsRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePrinterEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePrinterEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // printerDriver Field Functions 
    bool hasPrinterDriver() const { return this->printerDriver_ != nullptr;};
    void deletePrinterDriver() { this->printerDriver_ = nullptr;};
    inline string getPrinterDriver() const { DARABONBA_PTR_GET_DEFAULT(printerDriver_, "") };
    inline DescribePrinterEventsRequest& setPrinterDriver(string printerDriver) { DARABONBA_PTR_SET_VALUE(printerDriver_, printerDriver) };


    // printerName Field Functions 
    bool hasPrinterName() const { return this->printerName_ != nullptr;};
    void deletePrinterName() { this->printerName_ = nullptr;};
    inline string getPrinterName() const { DARABONBA_PTR_GET_DEFAULT(printerName_, "") };
    inline DescribePrinterEventsRequest& setPrinterName(string printerName) { DARABONBA_PTR_SET_VALUE(printerName_, printerName) };


    // printerRedirType Field Functions 
    bool hasPrinterRedirType() const { return this->printerRedirType_ != nullptr;};
    void deletePrinterRedirType() { this->printerRedirType_ = nullptr;};
    inline int32_t getPrinterRedirType() const { DARABONBA_PTR_GET_DEFAULT(printerRedirType_, 0) };
    inline DescribePrinterEventsRequest& setPrinterRedirType(int32_t printerRedirType) { DARABONBA_PTR_SET_VALUE(printerRedirType_, printerRedirType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePrinterEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePrinterEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cloud computer ID. If you do not specify this parameter, all cloud computers in the region are queried.
    shared_ptr<string> desktopId_ {};
    // The cloud computer name.
    shared_ptr<string> desktopName_ {};
    // The end time. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC+0. If you do not specify this parameter, the current time is used.
    shared_ptr<string> endTime_ {};
    // The logon user information, which is a RAM user ID or an Active Directory (AD) username. If you do not specify this parameter, events of all users in the region are queried.
    shared_ptr<string> endUserId_ {};
    // The list of end user IDs.
    shared_ptr<vector<string>> endUserIds_ {};
    // The number of entries per page in a paged query. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the value of NextToken that was returned in the previous API call.
    shared_ptr<string> nextToken_ {};
    // The printer driver name.
    shared_ptr<string> printerDriver_ {};
    // The printer name.
    shared_ptr<string> printerName_ {};
    // The printer redirection type.
    shared_ptr<int32_t> printerRedirType_ {};
    // The region ID. You can call DescribeRegions to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start time. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC+0. If you do not specify this parameter, the query starts from the time that is calculated backward from the time specified by `EndTime`.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
