// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTEVENTRESPONSEBODY_HPP_
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
  class ListUnknownThreatDetectEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUnknownThreatDetectEventResponseBody() = default ;
    ListUnknownThreatDetectEventResponseBody(const ListUnknownThreatDetectEventResponseBody &) = default ;
    ListUnknownThreatDetectEventResponseBody(ListUnknownThreatDetectEventResponseBody &&) = default ;
    ListUnknownThreatDetectEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectEventResponseBody() = default ;
    ListUnknownThreatDetectEventResponseBody& operator=(const ListUnknownThreatDetectEventResponseBody &) = default ;
    ListUnknownThreatDetectEventResponseBody& operator=(ListUnknownThreatDetectEventResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(CmdChain, cmdChain_);
        DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(ParentCmdline, parentCmdline_);
        DARABONBA_PTR_TO_JSON(ParentPid, parentPid_);
        DARABONBA_PTR_TO_JSON(ParentProcessPath, parentProcessPath_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_TO_JSON(Sha256, sha256_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CmdChain, cmdChain_);
        DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(ParentCmdline, parentCmdline_);
        DARABONBA_PTR_FROM_JSON(ParentPid, parentPid_);
        DARABONBA_PTR_FROM_JSON(ParentProcessPath, parentProcessPath_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->cmdChain_ == nullptr
        && this->cmdline_ == nullptr && this->count_ == nullptr && this->firstTime_ == nullptr && this->hashKey_ == nullptr && this->id_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->lastTime_ == nullptr && this->md5_ == nullptr
        && this->parentCmdline_ == nullptr && this->parentPid_ == nullptr && this->parentProcessPath_ == nullptr && this->pid_ == nullptr && this->processPath_ == nullptr
        && this->sha256_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr; };
      // cmdChain Field Functions 
      bool hasCmdChain() const { return this->cmdChain_ != nullptr;};
      void deleteCmdChain() { this->cmdChain_ = nullptr;};
      inline string getCmdChain() const { DARABONBA_PTR_GET_DEFAULT(cmdChain_, "") };
      inline Data& setCmdChain(string cmdChain) { DARABONBA_PTR_SET_VALUE(cmdChain_, cmdChain) };


      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline Data& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline Data& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // hashKey Field Functions 
      bool hasHashKey() const { return this->hashKey_ != nullptr;};
      void deleteHashKey() { this->hashKey_ = nullptr;};
      inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
      inline Data& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline Data& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Data& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // parentCmdline Field Functions 
      bool hasParentCmdline() const { return this->parentCmdline_ != nullptr;};
      void deleteParentCmdline() { this->parentCmdline_ = nullptr;};
      inline string getParentCmdline() const { DARABONBA_PTR_GET_DEFAULT(parentCmdline_, "") };
      inline Data& setParentCmdline(string parentCmdline) { DARABONBA_PTR_SET_VALUE(parentCmdline_, parentCmdline) };


      // parentPid Field Functions 
      bool hasParentPid() const { return this->parentPid_ != nullptr;};
      void deleteParentPid() { this->parentPid_ = nullptr;};
      inline string getParentPid() const { DARABONBA_PTR_GET_DEFAULT(parentPid_, "") };
      inline Data& setParentPid(string parentPid) { DARABONBA_PTR_SET_VALUE(parentPid_, parentPid) };


      // parentProcessPath Field Functions 
      bool hasParentProcessPath() const { return this->parentProcessPath_ != nullptr;};
      void deleteParentProcessPath() { this->parentProcessPath_ = nullptr;};
      inline string getParentProcessPath() const { DARABONBA_PTR_GET_DEFAULT(parentProcessPath_, "") };
      inline Data& setParentProcessPath(string parentProcessPath) { DARABONBA_PTR_SET_VALUE(parentProcessPath_, parentProcessPath) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Data& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // processPath Field Functions 
      bool hasProcessPath() const { return this->processPath_ != nullptr;};
      void deleteProcessPath() { this->processPath_ = nullptr;};
      inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
      inline Data& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


      // sha256 Field Functions 
      bool hasSha256() const { return this->sha256_ != nullptr;};
      void deleteSha256() { this->sha256_ = nullptr;};
      inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
      inline Data& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> cmdChain_ {};
      shared_ptr<string> cmdline_ {};
      shared_ptr<int32_t> count_ {};
      shared_ptr<int64_t> firstTime_ {};
      shared_ptr<string> hashKey_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> internetIp_ {};
      shared_ptr<string> intranetIp_ {};
      shared_ptr<int64_t> lastTime_ {};
      shared_ptr<string> md5_ {};
      shared_ptr<string> parentCmdline_ {};
      shared_ptr<string> parentPid_ {};
      shared_ptr<string> parentProcessPath_ {};
      shared_ptr<string> pid_ {};
      shared_ptr<string> processPath_ {};
      shared_ptr<string> sha256_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUnknownThreatDetectEventResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUnknownThreatDetectEventResponseBody::Data>) };
    inline vector<ListUnknownThreatDetectEventResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUnknownThreatDetectEventResponseBody::Data>) };
    inline ListUnknownThreatDetectEventResponseBody& setData(const vector<ListUnknownThreatDetectEventResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUnknownThreatDetectEventResponseBody& setData(vector<ListUnknownThreatDetectEventResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListUnknownThreatDetectEventResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListUnknownThreatDetectEventResponseBody::PageInfo) };
    inline ListUnknownThreatDetectEventResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListUnknownThreatDetectEventResponseBody::PageInfo) };
    inline ListUnknownThreatDetectEventResponseBody& setPageInfo(const ListUnknownThreatDetectEventResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListUnknownThreatDetectEventResponseBody& setPageInfo(ListUnknownThreatDetectEventResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUnknownThreatDetectEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListUnknownThreatDetectEventResponseBody::Data>> data_ {};
    shared_ptr<ListUnknownThreatDetectEventResponseBody::PageInfo> pageInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
