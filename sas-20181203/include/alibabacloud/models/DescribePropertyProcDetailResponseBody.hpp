// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILRESPONSEBODY_HPP_
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
  class DescribePropertyProcDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyProcDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyProcDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyProcDetailResponseBody() = default ;
    DescribePropertyProcDetailResponseBody(const DescribePropertyProcDetailResponseBody &) = default ;
    DescribePropertyProcDetailResponseBody(DescribePropertyProcDetailResponseBody &&) = default ;
    DescribePropertyProcDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyProcDetailResponseBody() = default ;
    DescribePropertyProcDetailResponseBody& operator=(const DescribePropertyProcDetailResponseBody &) = default ;
    DescribePropertyProcDetailResponseBody& operator=(DescribePropertyProcDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Propertys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Propertys& obj) { 
        DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(EuidName, euidName_);
        DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(IsPackage, isPackage_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(Pname, pname_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StartTimeDt, startTimeDt_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(User, user_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Propertys& obj) { 
        DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(EuidName, euidName_);
        DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(IsPackage, isPackage_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(Pname, pname_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StartTimeDt, startTimeDt_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(User, user_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Propertys() = default ;
      Propertys(const Propertys &) = default ;
      Propertys(Propertys &&) = default ;
      Propertys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Propertys() = default ;
      Propertys& operator=(const Propertys &) = default ;
      Propertys& operator=(Propertys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cmdline_ == nullptr
        && this->createTimestamp_ == nullptr && this->euidName_ == nullptr && this->fileHash_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->isPackage_ == nullptr && this->md5_ == nullptr && this->name_ == nullptr
        && this->path_ == nullptr && this->pid_ == nullptr && this->pname_ == nullptr && this->startTime_ == nullptr && this->startTimeDt_ == nullptr
        && this->state_ == nullptr && this->user_ == nullptr && this->uuid_ == nullptr; };
      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline Propertys& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Propertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // euidName Field Functions 
      bool hasEuidName() const { return this->euidName_ != nullptr;};
      void deleteEuidName() { this->euidName_ = nullptr;};
      inline string getEuidName() const { DARABONBA_PTR_GET_DEFAULT(euidName_, "") };
      inline Propertys& setEuidName(string euidName) { DARABONBA_PTR_SET_VALUE(euidName_, euidName) };


      // fileHash Field Functions 
      bool hasFileHash() const { return this->fileHash_ != nullptr;};
      void deleteFileHash() { this->fileHash_ = nullptr;};
      inline string getFileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
      inline Propertys& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Propertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Propertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Propertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Propertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // isPackage Field Functions 
      bool hasIsPackage() const { return this->isPackage_ != nullptr;};
      void deleteIsPackage() { this->isPackage_ = nullptr;};
      inline int32_t getIsPackage() const { DARABONBA_PTR_GET_DEFAULT(isPackage_, 0) };
      inline Propertys& setIsPackage(int32_t isPackage) { DARABONBA_PTR_SET_VALUE(isPackage_, isPackage) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Propertys& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Propertys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Propertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Propertys& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // pname Field Functions 
      bool hasPname() const { return this->pname_ != nullptr;};
      void deletePname() { this->pname_ = nullptr;};
      inline string getPname() const { DARABONBA_PTR_GET_DEFAULT(pname_, "") };
      inline Propertys& setPname(string pname) { DARABONBA_PTR_SET_VALUE(pname_, pname) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Propertys& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // startTimeDt Field Functions 
      bool hasStartTimeDt() const { return this->startTimeDt_ != nullptr;};
      void deleteStartTimeDt() { this->startTimeDt_ = nullptr;};
      inline int64_t getStartTimeDt() const { DARABONBA_PTR_GET_DEFAULT(startTimeDt_, 0L) };
      inline Propertys& setStartTimeDt(int64_t startTimeDt) { DARABONBA_PTR_SET_VALUE(startTimeDt_, startTimeDt) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Propertys& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Propertys& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Propertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The startup parameter of the process.
      shared_ptr<string> cmdline_ {};
      // The timestamp of last data collection. Unit: milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // The permission that is required to run the process.
      shared_ptr<string> euidName_ {};
      // Process file hash information.
      shared_ptr<string> fileHash_ {};
      // The ID of the server that is associated with the process.
      shared_ptr<string> instanceId_ {};
      // The name of the server that is associated with the process.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // Indicates whether the process is a package installation process. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> isPackage_ {};
      // The MD5 hash value of the process file.
      shared_ptr<string> md5_ {};
      // The name of the process.
      shared_ptr<string> name_ {};
      // The path of the process.
      shared_ptr<string> path_ {};
      // The ID of the process.
      shared_ptr<string> pid_ {};
      // The name of the parent process to which the process belongs.
      shared_ptr<string> pname_ {};
      // The time when the process starts.
      shared_ptr<string> startTime_ {};
      // The timestamp when the process starts. Unit: milliseconds.
      shared_ptr<int64_t> startTimeDt_ {};
      // The status of the process.
      shared_ptr<string> state_ {};
      // The user who runs the process.
      shared_ptr<string> user_ {};
      // The UUID of the server that is associated with the process.
      shared_ptr<string> uuid_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
        && this->currentPage_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The value of NextToken that is returned when the NextToken method is used.
      shared_ptr<string> nextToken_ {};
      // The number of entries returned per page. Default value: **10**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->propertys_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyProcDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyProcDetailResponseBody::PageInfo) };
    inline DescribePropertyProcDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyProcDetailResponseBody::PageInfo) };
    inline DescribePropertyProcDetailResponseBody& setPageInfo(const DescribePropertyProcDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyProcDetailResponseBody& setPageInfo(DescribePropertyProcDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyProcDetailResponseBody::Propertys> & getPropertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyProcDetailResponseBody::Propertys>) };
    inline vector<DescribePropertyProcDetailResponseBody::Propertys> getPropertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyProcDetailResponseBody::Propertys>) };
    inline DescribePropertyProcDetailResponseBody& setPropertys(const vector<DescribePropertyProcDetailResponseBody::Propertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyProcDetailResponseBody& setPropertys(vector<DescribePropertyProcDetailResponseBody::Propertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyProcDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribePropertyProcDetailResponseBody::PageInfo> pageInfo_ {};
    // An array that consists of the fingerprints of the processes.
    shared_ptr<vector<DescribePropertyProcDetailResponseBody::Propertys>> propertys_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
