// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRINTEREVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRINTEREVENTSRESPONSEBODY_HPP_
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
  class DescribePrinterEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrinterEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrinterEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrinterEventsResponseBody() = default ;
    DescribePrinterEventsResponseBody(const DescribePrinterEventsResponseBody &) = default ;
    DescribePrinterEventsResponseBody(DescribePrinterEventsResponseBody &&) = default ;
    DescribePrinterEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrinterEventsResponseBody() = default ;
    DescribePrinterEventsResponseBody& operator=(const DescribePrinterEventsResponseBody &) = default ;
    DescribePrinterEventsResponseBody& operator=(DescribePrinterEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(PrinterDriver, printerDriver_);
        DARABONBA_PTR_TO_JSON(PrinterJobCopies, printerJobCopies_);
        DARABONBA_PTR_TO_JSON(PrinterJobName, printerJobName_);
        DARABONBA_PTR_TO_JSON(PrinterJobPages, printerJobPages_);
        DARABONBA_PTR_TO_JSON(PrinterJobPrintedPages, printerJobPrintedPages_);
        DARABONBA_PTR_TO_JSON(PrinterJobSize, printerJobSize_);
        DARABONBA_PTR_TO_JSON(PrinterJobTime, printerJobTime_);
        DARABONBA_PTR_TO_JSON(PrinterName, printerName_);
        DARABONBA_PTR_TO_JSON(PrinterPort, printerPort_);
        DARABONBA_PTR_TO_JSON(PrinterRedirType, printerRedirType_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(PrinterDriver, printerDriver_);
        DARABONBA_PTR_FROM_JSON(PrinterJobCopies, printerJobCopies_);
        DARABONBA_PTR_FROM_JSON(PrinterJobName, printerJobName_);
        DARABONBA_PTR_FROM_JSON(PrinterJobPages, printerJobPages_);
        DARABONBA_PTR_FROM_JSON(PrinterJobPrintedPages, printerJobPrintedPages_);
        DARABONBA_PTR_FROM_JSON(PrinterJobSize, printerJobSize_);
        DARABONBA_PTR_FROM_JSON(PrinterJobTime, printerJobTime_);
        DARABONBA_PTR_FROM_JSON(PrinterName, printerName_);
        DARABONBA_PTR_FROM_JSON(PrinterPort, printerPort_);
        DARABONBA_PTR_FROM_JSON(PrinterRedirType, printerRedirType_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->endUserId_ == nullptr && this->eventId_ == nullptr && this->printerDriver_ == nullptr && this->printerJobCopies_ == nullptr
        && this->printerJobName_ == nullptr && this->printerJobPages_ == nullptr && this->printerJobPrintedPages_ == nullptr && this->printerJobSize_ == nullptr && this->printerJobTime_ == nullptr
        && this->printerName_ == nullptr && this->printerPort_ == nullptr && this->printerRedirType_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Events& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Events& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Events& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Events& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // printerDriver Field Functions 
      bool hasPrinterDriver() const { return this->printerDriver_ != nullptr;};
      void deletePrinterDriver() { this->printerDriver_ = nullptr;};
      inline string getPrinterDriver() const { DARABONBA_PTR_GET_DEFAULT(printerDriver_, "") };
      inline Events& setPrinterDriver(string printerDriver) { DARABONBA_PTR_SET_VALUE(printerDriver_, printerDriver) };


      // printerJobCopies Field Functions 
      bool hasPrinterJobCopies() const { return this->printerJobCopies_ != nullptr;};
      void deletePrinterJobCopies() { this->printerJobCopies_ = nullptr;};
      inline int32_t getPrinterJobCopies() const { DARABONBA_PTR_GET_DEFAULT(printerJobCopies_, 0) };
      inline Events& setPrinterJobCopies(int32_t printerJobCopies) { DARABONBA_PTR_SET_VALUE(printerJobCopies_, printerJobCopies) };


      // printerJobName Field Functions 
      bool hasPrinterJobName() const { return this->printerJobName_ != nullptr;};
      void deletePrinterJobName() { this->printerJobName_ = nullptr;};
      inline string getPrinterJobName() const { DARABONBA_PTR_GET_DEFAULT(printerJobName_, "") };
      inline Events& setPrinterJobName(string printerJobName) { DARABONBA_PTR_SET_VALUE(printerJobName_, printerJobName) };


      // printerJobPages Field Functions 
      bool hasPrinterJobPages() const { return this->printerJobPages_ != nullptr;};
      void deletePrinterJobPages() { this->printerJobPages_ = nullptr;};
      inline int32_t getPrinterJobPages() const { DARABONBA_PTR_GET_DEFAULT(printerJobPages_, 0) };
      inline Events& setPrinterJobPages(int32_t printerJobPages) { DARABONBA_PTR_SET_VALUE(printerJobPages_, printerJobPages) };


      // printerJobPrintedPages Field Functions 
      bool hasPrinterJobPrintedPages() const { return this->printerJobPrintedPages_ != nullptr;};
      void deletePrinterJobPrintedPages() { this->printerJobPrintedPages_ = nullptr;};
      inline int32_t getPrinterJobPrintedPages() const { DARABONBA_PTR_GET_DEFAULT(printerJobPrintedPages_, 0) };
      inline Events& setPrinterJobPrintedPages(int32_t printerJobPrintedPages) { DARABONBA_PTR_SET_VALUE(printerJobPrintedPages_, printerJobPrintedPages) };


      // printerJobSize Field Functions 
      bool hasPrinterJobSize() const { return this->printerJobSize_ != nullptr;};
      void deletePrinterJobSize() { this->printerJobSize_ = nullptr;};
      inline int64_t getPrinterJobSize() const { DARABONBA_PTR_GET_DEFAULT(printerJobSize_, 0L) };
      inline Events& setPrinterJobSize(int64_t printerJobSize) { DARABONBA_PTR_SET_VALUE(printerJobSize_, printerJobSize) };


      // printerJobTime Field Functions 
      bool hasPrinterJobTime() const { return this->printerJobTime_ != nullptr;};
      void deletePrinterJobTime() { this->printerJobTime_ = nullptr;};
      inline int64_t getPrinterJobTime() const { DARABONBA_PTR_GET_DEFAULT(printerJobTime_, 0L) };
      inline Events& setPrinterJobTime(int64_t printerJobTime) { DARABONBA_PTR_SET_VALUE(printerJobTime_, printerJobTime) };


      // printerName Field Functions 
      bool hasPrinterName() const { return this->printerName_ != nullptr;};
      void deletePrinterName() { this->printerName_ = nullptr;};
      inline string getPrinterName() const { DARABONBA_PTR_GET_DEFAULT(printerName_, "") };
      inline Events& setPrinterName(string printerName) { DARABONBA_PTR_SET_VALUE(printerName_, printerName) };


      // printerPort Field Functions 
      bool hasPrinterPort() const { return this->printerPort_ != nullptr;};
      void deletePrinterPort() { this->printerPort_ = nullptr;};
      inline string getPrinterPort() const { DARABONBA_PTR_GET_DEFAULT(printerPort_, "") };
      inline Events& setPrinterPort(string printerPort) { DARABONBA_PTR_SET_VALUE(printerPort_, printerPort) };


      // printerRedirType Field Functions 
      bool hasPrinterRedirType() const { return this->printerRedirType_ != nullptr;};
      void deletePrinterRedirType() { this->printerRedirType_ = nullptr;};
      inline int32_t getPrinterRedirType() const { DARABONBA_PTR_GET_DEFAULT(printerRedirType_, 0) };
      inline Events& setPrinterRedirType(int32_t printerRedirType) { DARABONBA_PTR_SET_VALUE(printerRedirType_, printerRedirType) };


    protected:
      // The cloud computer ID.
      shared_ptr<string> desktopId_ {};
      // The cloud computer name.
      shared_ptr<string> desktopName_ {};
      // The end user ID.
      shared_ptr<string> endUserId_ {};
      // The event ID.
      shared_ptr<string> eventId_ {};
      // The printer driver name.
      shared_ptr<string> printerDriver_ {};
      // The number of copies to print.
      shared_ptr<int32_t> printerJobCopies_ {};
      // The print job name.
      shared_ptr<string> printerJobName_ {};
      // The total number of pages in the print job.
      shared_ptr<int32_t> printerJobPages_ {};
      // The number of printed pages.
      shared_ptr<int32_t> printerJobPrintedPages_ {};
      // The print job size, in bytes.
      shared_ptr<int64_t> printerJobSize_ {};
      // The print job time, in millisecond-precision UNIX timestamp.
      shared_ptr<int64_t> printerJobTime_ {};
      // The printer name.
      shared_ptr<string> printerName_ {};
      // The printer port.
      shared_ptr<string> printerPort_ {};
      // The printer redirection type.
      shared_ptr<int32_t> printerRedirType_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribePrinterEventsResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribePrinterEventsResponseBody::Events>) };
    inline vector<DescribePrinterEventsResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<DescribePrinterEventsResponseBody::Events>) };
    inline DescribePrinterEventsResponseBody& setEvents(const vector<DescribePrinterEventsResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribePrinterEventsResponseBody& setEvents(vector<DescribePrinterEventsResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePrinterEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrinterEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The user events.
    shared_ptr<vector<DescribePrinterEventsResponseBody::Events>> events_ {};
    // The pagination token for the next query. If NextToken is empty, no more results exist.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
