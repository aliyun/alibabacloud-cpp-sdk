// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanMachineEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanMachineEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanMachineEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVirusScanMachineEventResponseBody() = default ;
    ListVirusScanMachineEventResponseBody(const ListVirusScanMachineEventResponseBody &) = default ;
    ListVirusScanMachineEventResponseBody(ListVirusScanMachineEventResponseBody &&) = default ;
    ListVirusScanMachineEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanMachineEventResponseBody() = default ;
    ListVirusScanMachineEventResponseBody& operator=(const ListVirusScanMachineEventResponseBody &) = default ;
    ListVirusScanMachineEventResponseBody& operator=(ListVirusScanMachineEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(InfoType, infoType_);
          DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(ValueDisplay, valueDisplay_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(InfoType, infoType_);
          DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(ValueDisplay, valueDisplay_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->infoType_ == nullptr
        && this->nameDisplay_ == nullptr && this->type_ == nullptr && this->valueDisplay_ == nullptr; };
        // infoType Field Functions 
        bool hasInfoType() const { return this->infoType_ != nullptr;};
        void deleteInfoType() { this->infoType_ = nullptr;};
        inline string getInfoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
        inline Details& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


        // nameDisplay Field Functions 
        bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
        void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
        inline string getNameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
        inline Details& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // valueDisplay Field Functions 
        bool hasValueDisplay() const { return this->valueDisplay_ != nullptr;};
        void deleteValueDisplay() { this->valueDisplay_ = nullptr;};
        inline string getValueDisplay() const { DARABONBA_PTR_GET_DEFAULT(valueDisplay_, "") };
        inline Details& setValueDisplay(string valueDisplay) { DARABONBA_PTR_SET_VALUE(valueDisplay_, valueDisplay) };


      protected:
        // The display type of the value for ValueDisplay. Valid value:
        // 
        // *   **download_url**, which indicates a download URL.
        shared_ptr<string> infoType_ {};
        // The display name of the alert event.
        shared_ptr<string> nameDisplay_ {};
        // The format in which the details of the exception are displayed.
        // 
        // Valid values:
        // 
        // *   **text**
        // *   **html**
        shared_ptr<string> type_ {};
        // The attribute information about the exception. The information includes the logon time or location of an alert triggered by an unusual logon, and the trojan file path or trojan type of an alert.
        shared_ptr<string> valueDisplay_ {};
      };

      virtual bool empty() const override { return this->details_ == nullptr
        && this->eventId_ == nullptr && this->eventName_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->lastTimeStamp_ == nullptr && this->level_ == nullptr; };
      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Data::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Data::Details>) };
      inline vector<Data::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Data::Details>) };
      inline Data& setDetails(const vector<Data::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Data& setDetails(vector<Data::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
      inline Data& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Data& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // lastTimeStamp Field Functions 
      bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
      void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
      inline int64_t getLastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
      inline Data& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Data& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The details of the exception.
      shared_ptr<vector<Data::Details>> details_ {};
      // The ID of the alert event.
      shared_ptr<int64_t> eventId_ {};
      // The name of the alert event. The value indicates a subtype.
      shared_ptr<string> eventName_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address.
      shared_ptr<string> internetIp_ {};
      // The private IP address.
      shared_ptr<string> intranetIp_ {};
      // The timestamp when the alert event was last generated. Unit: milliseconds.
      shared_ptr<int64_t> lastTimeStamp_ {};
      // The risk level of the alert event. Valid values:
      // 
      // *   **serious**
      // *   **suspicious**
      // *   **remind**
      shared_ptr<string> level_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListVirusScanMachineEventResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListVirusScanMachineEventResponseBody::Data>) };
    inline vector<ListVirusScanMachineEventResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListVirusScanMachineEventResponseBody::Data>) };
    inline ListVirusScanMachineEventResponseBody& setData(const vector<ListVirusScanMachineEventResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVirusScanMachineEventResponseBody& setData(vector<ListVirusScanMachineEventResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListVirusScanMachineEventResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListVirusScanMachineEventResponseBody::PageInfo) };
    inline ListVirusScanMachineEventResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListVirusScanMachineEventResponseBody::PageInfo) };
    inline ListVirusScanMachineEventResponseBody& setPageInfo(const ListVirusScanMachineEventResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListVirusScanMachineEventResponseBody& setPageInfo(ListVirusScanMachineEventResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanMachineEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the alert event.
    shared_ptr<vector<ListVirusScanMachineEventResponseBody::Data>> data_ {};
    // The pagination information.
    shared_ptr<ListVirusScanMachineEventResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
