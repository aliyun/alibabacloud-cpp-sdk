// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTMACHINERESPONSEBODY_HPP_
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
  class ListUnknownThreatDetectMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUnknownThreatDetectMachineResponseBody() = default ;
    ListUnknownThreatDetectMachineResponseBody(const ListUnknownThreatDetectMachineResponseBody &) = default ;
    ListUnknownThreatDetectMachineResponseBody(ListUnknownThreatDetectMachineResponseBody &&) = default ;
    ListUnknownThreatDetectMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectMachineResponseBody() = default ;
    ListUnknownThreatDetectMachineResponseBody& operator=(const ListUnknownThreatDetectMachineResponseBody &) = default ;
    ListUnknownThreatDetectMachineResponseBody& operator=(ListUnknownThreatDetectMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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
      shared_ptr<int32_t> count_ {};
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(ProcessCount, processCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StudyMode, studyMode_);
        DARABONBA_PTR_TO_JSON(StudyStartTime, studyStartTime_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(ProcessCount, processCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StudyMode, studyMode_);
        DARABONBA_PTR_FROM_JSON(StudyStartTime, studyStartTime_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
      virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->processCount_ == nullptr && this->status_ == nullptr && this->studyMode_ == nullptr
        && this->studyStartTime_ == nullptr && this->uuid_ == nullptr; };
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


      // processCount Field Functions 
      bool hasProcessCount() const { return this->processCount_ != nullptr;};
      void deleteProcessCount() { this->processCount_ = nullptr;};
      inline int32_t getProcessCount() const { DARABONBA_PTR_GET_DEFAULT(processCount_, 0) };
      inline Data& setProcessCount(int32_t processCount) { DARABONBA_PTR_SET_VALUE(processCount_, processCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // studyMode Field Functions 
      bool hasStudyMode() const { return this->studyMode_ != nullptr;};
      void deleteStudyMode() { this->studyMode_ = nullptr;};
      inline string getStudyMode() const { DARABONBA_PTR_GET_DEFAULT(studyMode_, "") };
      inline Data& setStudyMode(string studyMode) { DARABONBA_PTR_SET_VALUE(studyMode_, studyMode) };


      // studyStartTime Field Functions 
      bool hasStudyStartTime() const { return this->studyStartTime_ != nullptr;};
      void deleteStudyStartTime() { this->studyStartTime_ = nullptr;};
      inline int64_t getStudyStartTime() const { DARABONBA_PTR_GET_DEFAULT(studyStartTime_, 0L) };
      inline Data& setStudyStartTime(int64_t studyStartTime) { DARABONBA_PTR_SET_VALUE(studyStartTime_, studyStartTime) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> internetIp_ {};
      shared_ptr<string> intranetIp_ {};
      shared_ptr<int32_t> processCount_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> studyMode_ {};
      shared_ptr<int64_t> studyStartTime_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUnknownThreatDetectMachineResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUnknownThreatDetectMachineResponseBody::Data>) };
    inline vector<ListUnknownThreatDetectMachineResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUnknownThreatDetectMachineResponseBody::Data>) };
    inline ListUnknownThreatDetectMachineResponseBody& setData(const vector<ListUnknownThreatDetectMachineResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUnknownThreatDetectMachineResponseBody& setData(vector<ListUnknownThreatDetectMachineResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListUnknownThreatDetectMachineResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListUnknownThreatDetectMachineResponseBody::PageInfo) };
    inline ListUnknownThreatDetectMachineResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListUnknownThreatDetectMachineResponseBody::PageInfo) };
    inline ListUnknownThreatDetectMachineResponseBody& setPageInfo(const ListUnknownThreatDetectMachineResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListUnknownThreatDetectMachineResponseBody& setPageInfo(ListUnknownThreatDetectMachineResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUnknownThreatDetectMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListUnknownThreatDetectMachineResponseBody::Data>> data_ {};
    shared_ptr<ListUnknownThreatDetectMachineResponseBody::PageInfo> pageInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
