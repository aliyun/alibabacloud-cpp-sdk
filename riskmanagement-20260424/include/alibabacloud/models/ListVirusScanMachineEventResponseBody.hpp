// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class ListVirusScanMachineEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanMachineEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanMachineEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(VirusScanLatestTaskStatistic, virusScanLatestTaskStatistic_);
        DARABONBA_PTR_TO_JSON(VirusScanMachineEventList, virusScanMachineEventList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(VirusScanLatestTaskStatistic, virusScanLatestTaskStatistic_);
        DARABONBA_PTR_FROM_JSON(VirusScanMachineEventList, virusScanMachineEventList_);
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
      class VirusScanMachineEventList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirusScanMachineEventList& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        };
        friend void from_json(const Darabonba::Json& j, VirusScanMachineEventList& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        };
        VirusScanMachineEventList() = default ;
        VirusScanMachineEventList(const VirusScanMachineEventList &) = default ;
        VirusScanMachineEventList(VirusScanMachineEventList &&) = default ;
        VirusScanMachineEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirusScanMachineEventList() = default ;
        VirusScanMachineEventList& operator=(const VirusScanMachineEventList &) = default ;
        VirusScanMachineEventList& operator=(VirusScanMachineEventList &&) = default ;
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
          shared_ptr<int32_t> currentPage_ {};
          shared_ptr<int32_t> pageSize_ {};
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
            shared_ptr<string> infoType_ {};
            shared_ptr<string> nameDisplay_ {};
            shared_ptr<string> type_ {};
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
          shared_ptr<vector<Data::Details>> details_ {};
          shared_ptr<int64_t> eventId_ {};
          shared_ptr<string> eventName_ {};
          shared_ptr<string> instanceName_ {};
          shared_ptr<string> internetIp_ {};
          shared_ptr<string> intranetIp_ {};
          shared_ptr<int64_t> lastTimeStamp_ {};
          shared_ptr<string> level_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<VirusScanMachineEventList::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<VirusScanMachineEventList::Data>) };
        inline vector<VirusScanMachineEventList::Data> getData() { DARABONBA_PTR_GET(data_, vector<VirusScanMachineEventList::Data>) };
        inline VirusScanMachineEventList& setData(const vector<VirusScanMachineEventList::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline VirusScanMachineEventList& setData(vector<VirusScanMachineEventList::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // pageInfo Field Functions 
        bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
        void deletePageInfo() { this->pageInfo_ = nullptr;};
        inline const VirusScanMachineEventList::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, VirusScanMachineEventList::PageInfo) };
        inline VirusScanMachineEventList::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, VirusScanMachineEventList::PageInfo) };
        inline VirusScanMachineEventList& setPageInfo(const VirusScanMachineEventList::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
        inline VirusScanMachineEventList& setPageInfo(VirusScanMachineEventList::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      protected:
        shared_ptr<vector<VirusScanMachineEventList::Data>> data_ {};
        shared_ptr<VirusScanMachineEventList::PageInfo> pageInfo_ {};
      };

      class VirusScanLatestTaskStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirusScanLatestTaskStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(CompleteMachine, completeMachine_);
          DARABONBA_PTR_TO_JSON(MachineName, machineName_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(SafeMachine, safeMachine_);
          DARABONBA_PTR_TO_JSON(ScanMachine, scanMachine_);
          DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
          DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
          DARABONBA_PTR_TO_JSON(ScanType, scanType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SuspiciousCount, suspiciousCount_);
          DARABONBA_PTR_TO_JSON(SuspiciousMachine, suspiciousMachine_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(UnCompleteMachine, unCompleteMachine_);
        };
        friend void from_json(const Darabonba::Json& j, VirusScanLatestTaskStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(CompleteMachine, completeMachine_);
          DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(SafeMachine, safeMachine_);
          DARABONBA_PTR_FROM_JSON(ScanMachine, scanMachine_);
          DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
          DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
          DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SuspiciousCount, suspiciousCount_);
          DARABONBA_PTR_FROM_JSON(SuspiciousMachine, suspiciousMachine_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(UnCompleteMachine, unCompleteMachine_);
        };
        VirusScanLatestTaskStatistic() = default ;
        VirusScanLatestTaskStatistic(const VirusScanLatestTaskStatistic &) = default ;
        VirusScanLatestTaskStatistic(VirusScanLatestTaskStatistic &&) = default ;
        VirusScanLatestTaskStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirusScanLatestTaskStatistic() = default ;
        VirusScanLatestTaskStatistic& operator=(const VirusScanLatestTaskStatistic &) = default ;
        VirusScanLatestTaskStatistic& operator=(VirusScanLatestTaskStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->completeMachine_ == nullptr
        && this->machineName_ == nullptr && this->progress_ == nullptr && this->riskLevel_ == nullptr && this->safeMachine_ == nullptr && this->scanMachine_ == nullptr
        && this->scanPath_ == nullptr && this->scanTime_ == nullptr && this->scanType_ == nullptr && this->status_ == nullptr && this->suspiciousCount_ == nullptr
        && this->suspiciousMachine_ == nullptr && this->taskId_ == nullptr && this->unCompleteMachine_ == nullptr; };
        // completeMachine Field Functions 
        bool hasCompleteMachine() const { return this->completeMachine_ != nullptr;};
        void deleteCompleteMachine() { this->completeMachine_ = nullptr;};
        inline int32_t getCompleteMachine() const { DARABONBA_PTR_GET_DEFAULT(completeMachine_, 0) };
        inline VirusScanLatestTaskStatistic& setCompleteMachine(int32_t completeMachine) { DARABONBA_PTR_SET_VALUE(completeMachine_, completeMachine) };


        // machineName Field Functions 
        bool hasMachineName() const { return this->machineName_ != nullptr;};
        void deleteMachineName() { this->machineName_ = nullptr;};
        inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
        inline VirusScanLatestTaskStatistic& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline VirusScanLatestTaskStatistic& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline VirusScanLatestTaskStatistic& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // safeMachine Field Functions 
        bool hasSafeMachine() const { return this->safeMachine_ != nullptr;};
        void deleteSafeMachine() { this->safeMachine_ = nullptr;};
        inline int32_t getSafeMachine() const { DARABONBA_PTR_GET_DEFAULT(safeMachine_, 0) };
        inline VirusScanLatestTaskStatistic& setSafeMachine(int32_t safeMachine) { DARABONBA_PTR_SET_VALUE(safeMachine_, safeMachine) };


        // scanMachine Field Functions 
        bool hasScanMachine() const { return this->scanMachine_ != nullptr;};
        void deleteScanMachine() { this->scanMachine_ = nullptr;};
        inline int32_t getScanMachine() const { DARABONBA_PTR_GET_DEFAULT(scanMachine_, 0) };
        inline VirusScanLatestTaskStatistic& setScanMachine(int32_t scanMachine) { DARABONBA_PTR_SET_VALUE(scanMachine_, scanMachine) };


        // scanPath Field Functions 
        bool hasScanPath() const { return this->scanPath_ != nullptr;};
        void deleteScanPath() { this->scanPath_ = nullptr;};
        inline const vector<string> & getScanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
        inline vector<string> getScanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
        inline VirusScanLatestTaskStatistic& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
        inline VirusScanLatestTaskStatistic& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


        // scanTime Field Functions 
        bool hasScanTime() const { return this->scanTime_ != nullptr;};
        void deleteScanTime() { this->scanTime_ = nullptr;};
        inline int64_t getScanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
        inline VirusScanLatestTaskStatistic& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


        // scanType Field Functions 
        bool hasScanType() const { return this->scanType_ != nullptr;};
        void deleteScanType() { this->scanType_ = nullptr;};
        inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
        inline VirusScanLatestTaskStatistic& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline VirusScanLatestTaskStatistic& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // suspiciousCount Field Functions 
        bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
        void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
        inline int32_t getSuspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
        inline VirusScanLatestTaskStatistic& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


        // suspiciousMachine Field Functions 
        bool hasSuspiciousMachine() const { return this->suspiciousMachine_ != nullptr;};
        void deleteSuspiciousMachine() { this->suspiciousMachine_ = nullptr;};
        inline int32_t getSuspiciousMachine() const { DARABONBA_PTR_GET_DEFAULT(suspiciousMachine_, 0) };
        inline VirusScanLatestTaskStatistic& setSuspiciousMachine(int32_t suspiciousMachine) { DARABONBA_PTR_SET_VALUE(suspiciousMachine_, suspiciousMachine) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline VirusScanLatestTaskStatistic& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // unCompleteMachine Field Functions 
        bool hasUnCompleteMachine() const { return this->unCompleteMachine_ != nullptr;};
        void deleteUnCompleteMachine() { this->unCompleteMachine_ = nullptr;};
        inline int32_t getUnCompleteMachine() const { DARABONBA_PTR_GET_DEFAULT(unCompleteMachine_, 0) };
        inline VirusScanLatestTaskStatistic& setUnCompleteMachine(int32_t unCompleteMachine) { DARABONBA_PTR_SET_VALUE(unCompleteMachine_, unCompleteMachine) };


      protected:
        shared_ptr<int32_t> completeMachine_ {};
        shared_ptr<string> machineName_ {};
        shared_ptr<string> progress_ {};
        shared_ptr<string> riskLevel_ {};
        shared_ptr<int32_t> safeMachine_ {};
        shared_ptr<int32_t> scanMachine_ {};
        shared_ptr<vector<string>> scanPath_ {};
        shared_ptr<int64_t> scanTime_ {};
        shared_ptr<string> scanType_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<int32_t> suspiciousCount_ {};
        shared_ptr<int32_t> suspiciousMachine_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<int32_t> unCompleteMachine_ {};
      };

      virtual bool empty() const override { return this->requestId_ == nullptr
        && this->virusScanLatestTaskStatistic_ == nullptr && this->virusScanMachineEventList_ == nullptr; };
      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // virusScanLatestTaskStatistic Field Functions 
      bool hasVirusScanLatestTaskStatistic() const { return this->virusScanLatestTaskStatistic_ != nullptr;};
      void deleteVirusScanLatestTaskStatistic() { this->virusScanLatestTaskStatistic_ = nullptr;};
      inline const Data::VirusScanLatestTaskStatistic & getVirusScanLatestTaskStatistic() const { DARABONBA_PTR_GET_CONST(virusScanLatestTaskStatistic_, Data::VirusScanLatestTaskStatistic) };
      inline Data::VirusScanLatestTaskStatistic getVirusScanLatestTaskStatistic() { DARABONBA_PTR_GET(virusScanLatestTaskStatistic_, Data::VirusScanLatestTaskStatistic) };
      inline Data& setVirusScanLatestTaskStatistic(const Data::VirusScanLatestTaskStatistic & virusScanLatestTaskStatistic) { DARABONBA_PTR_SET_VALUE(virusScanLatestTaskStatistic_, virusScanLatestTaskStatistic) };
      inline Data& setVirusScanLatestTaskStatistic(Data::VirusScanLatestTaskStatistic && virusScanLatestTaskStatistic) { DARABONBA_PTR_SET_RVALUE(virusScanLatestTaskStatistic_, virusScanLatestTaskStatistic) };


      // virusScanMachineEventList Field Functions 
      bool hasVirusScanMachineEventList() const { return this->virusScanMachineEventList_ != nullptr;};
      void deleteVirusScanMachineEventList() { this->virusScanMachineEventList_ = nullptr;};
      inline const Data::VirusScanMachineEventList & getVirusScanMachineEventList() const { DARABONBA_PTR_GET_CONST(virusScanMachineEventList_, Data::VirusScanMachineEventList) };
      inline Data::VirusScanMachineEventList getVirusScanMachineEventList() { DARABONBA_PTR_GET(virusScanMachineEventList_, Data::VirusScanMachineEventList) };
      inline Data& setVirusScanMachineEventList(const Data::VirusScanMachineEventList & virusScanMachineEventList) { DARABONBA_PTR_SET_VALUE(virusScanMachineEventList_, virusScanMachineEventList) };
      inline Data& setVirusScanMachineEventList(Data::VirusScanMachineEventList && virusScanMachineEventList) { DARABONBA_PTR_SET_RVALUE(virusScanMachineEventList_, virusScanMachineEventList) };


    protected:
      shared_ptr<string> requestId_ {};
      shared_ptr<Data::VirusScanLatestTaskStatistic> virusScanLatestTaskStatistic_ {};
      shared_ptr<Data::VirusScanMachineEventList> virusScanMachineEventList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVirusScanMachineEventResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVirusScanMachineEventResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVirusScanMachineEventResponseBody::Data) };
    inline ListVirusScanMachineEventResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVirusScanMachineEventResponseBody::Data) };
    inline ListVirusScanMachineEventResponseBody& setData(const ListVirusScanMachineEventResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVirusScanMachineEventResponseBody& setData(ListVirusScanMachineEventResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVirusScanMachineEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanMachineEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListVirusScanMachineEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListVirusScanMachineEventResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
