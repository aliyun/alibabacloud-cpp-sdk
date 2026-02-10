// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSRELATEMALICIOUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSRELATEMALICIOUSRESPONSEBODY_HPP_
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
  class ListAgentlessRelateMaliciousResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRelateMaliciousResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRelateMaliciousResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentlessRelateMaliciousResponseBody() = default ;
    ListAgentlessRelateMaliciousResponseBody(const ListAgentlessRelateMaliciousResponseBody &) = default ;
    ListAgentlessRelateMaliciousResponseBody(ListAgentlessRelateMaliciousResponseBody &&) = default ;
    ListAgentlessRelateMaliciousResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRelateMaliciousResponseBody() = default ;
    ListAgentlessRelateMaliciousResponseBody& operator=(const ListAgentlessRelateMaliciousResponseBody &) = default ;
    ListAgentlessRelateMaliciousResponseBody& operator=(ListAgentlessRelateMaliciousResponseBody &&) = default ;
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FirstScanTimestamp, firstScanTimestamp_);
        DARABONBA_PTR_TO_JSON(HighLight, highLight_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LatestScanTimestamp, latestScanTimestamp_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_TO_JSON(MaliciousName, maliciousName_);
        DARABONBA_PTR_TO_JSON(MaliciousType, maliciousType_);
        DARABONBA_PTR_TO_JSON(OperateResult, operateResult_);
        DARABONBA_PTR_TO_JSON(OperateTimestamp, operateTimestamp_);
        DARABONBA_PTR_TO_JSON(Partition, partition_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FirstScanTimestamp, firstScanTimestamp_);
        DARABONBA_PTR_FROM_JSON(HighLight, highLight_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LatestScanTimestamp, latestScanTimestamp_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_FROM_JSON(MaliciousName, maliciousName_);
        DARABONBA_PTR_FROM_JSON(MaliciousType, maliciousType_);
        DARABONBA_PTR_FROM_JSON(OperateResult, operateResult_);
        DARABONBA_PTR_FROM_JSON(OperateTimestamp, operateTimestamp_);
        DARABONBA_PTR_FROM_JSON(Partition, partition_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->nameKey_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Details& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Details& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Details& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the detailed item.
        shared_ptr<string> name_ {};
        // The name key of the detailed item.
        shared_ptr<string> nameKey_ {};
        // The type of the detailed item.
        shared_ptr<string> type_ {};
        // The value of the detailed item.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->details_ == nullptr
        && this->downloadUrl_ == nullptr && this->filePath_ == nullptr && this->firstScanTimestamp_ == nullptr && this->highLight_ == nullptr && this->id_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->latestScanTimestamp_ == nullptr && this->level_ == nullptr
        && this->maliciousMd5_ == nullptr && this->maliciousName_ == nullptr && this->maliciousType_ == nullptr && this->operateResult_ == nullptr && this->operateTimestamp_ == nullptr
        && this->partition_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr && this->uuid_ == nullptr; };
      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<List::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<List::Details>) };
      inline vector<List::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<List::Details>) };
      inline List& setDetails(const vector<List::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline List& setDetails(vector<List::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline List& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline List& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // firstScanTimestamp Field Functions 
      bool hasFirstScanTimestamp() const { return this->firstScanTimestamp_ != nullptr;};
      void deleteFirstScanTimestamp() { this->firstScanTimestamp_ = nullptr;};
      inline int64_t getFirstScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimestamp_, 0L) };
      inline List& setFirstScanTimestamp(int64_t firstScanTimestamp) { DARABONBA_PTR_SET_VALUE(firstScanTimestamp_, firstScanTimestamp) };


      // highLight Field Functions 
      bool hasHighLight() const { return this->highLight_ != nullptr;};
      void deleteHighLight() { this->highLight_ = nullptr;};
      inline string getHighLight() const { DARABONBA_PTR_GET_DEFAULT(highLight_, "") };
      inline List& setHighLight(string highLight) { DARABONBA_PTR_SET_VALUE(highLight_, highLight) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline List& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline List& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // latestScanTimestamp Field Functions 
      bool hasLatestScanTimestamp() const { return this->latestScanTimestamp_ != nullptr;};
      void deleteLatestScanTimestamp() { this->latestScanTimestamp_ = nullptr;};
      inline int64_t getLatestScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestScanTimestamp_, 0L) };
      inline List& setLatestScanTimestamp(int64_t latestScanTimestamp) { DARABONBA_PTR_SET_VALUE(latestScanTimestamp_, latestScanTimestamp) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline List& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // maliciousMd5 Field Functions 
      bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
      void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
      inline string getMaliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
      inline List& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


      // maliciousName Field Functions 
      bool hasMaliciousName() const { return this->maliciousName_ != nullptr;};
      void deleteMaliciousName() { this->maliciousName_ = nullptr;};
      inline string getMaliciousName() const { DARABONBA_PTR_GET_DEFAULT(maliciousName_, "") };
      inline List& setMaliciousName(string maliciousName) { DARABONBA_PTR_SET_VALUE(maliciousName_, maliciousName) };


      // maliciousType Field Functions 
      bool hasMaliciousType() const { return this->maliciousType_ != nullptr;};
      void deleteMaliciousType() { this->maliciousType_ = nullptr;};
      inline string getMaliciousType() const { DARABONBA_PTR_GET_DEFAULT(maliciousType_, "") };
      inline List& setMaliciousType(string maliciousType) { DARABONBA_PTR_SET_VALUE(maliciousType_, maliciousType) };


      // operateResult Field Functions 
      bool hasOperateResult() const { return this->operateResult_ != nullptr;};
      void deleteOperateResult() { this->operateResult_ = nullptr;};
      inline string getOperateResult() const { DARABONBA_PTR_GET_DEFAULT(operateResult_, "") };
      inline List& setOperateResult(string operateResult) { DARABONBA_PTR_SET_VALUE(operateResult_, operateResult) };


      // operateTimestamp Field Functions 
      bool hasOperateTimestamp() const { return this->operateTimestamp_ != nullptr;};
      void deleteOperateTimestamp() { this->operateTimestamp_ = nullptr;};
      inline string getOperateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(operateTimestamp_, "") };
      inline List& setOperateTimestamp(string operateTimestamp) { DARABONBA_PTR_SET_VALUE(operateTimestamp_, operateTimestamp) };


      // partition Field Functions 
      bool hasPartition() const { return this->partition_ != nullptr;};
      void deletePartition() { this->partition_ = nullptr;};
      inline string getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
      inline List& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline List& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline List& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline List& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The details of the alert events.
      shared_ptr<vector<List::Details>> details_ {};
      // The URL to download the malicious image sample.
      shared_ptr<string> downloadUrl_ {};
      // The file path.
      shared_ptr<string> filePath_ {};
      // The timestamp when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTimestamp_ {};
      // The highlighted JSON string.
      shared_ptr<string> highLight_ {};
      // The event ID.
      shared_ptr<int64_t> id_ {};
      // The name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The timestamp when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> latestScanTimestamp_ {};
      // The severity of the malicious file. Valid values:
      // 
      // *   serious
      // *   suspicious
      // *   remind
      shared_ptr<string> level_ {};
      // The MD5 hash value of the malicious file.
      shared_ptr<string> maliciousMd5_ {};
      // The name of the malicious file.
      shared_ptr<string> maliciousName_ {};
      // The type of the virus.
      shared_ptr<string> maliciousType_ {};
      // The handling result of the alert.
      shared_ptr<string> operateResult_ {};
      // The timestamp when the alert is handled. Unit: milliseconds.
      shared_ptr<string> operateTimestamp_ {};
      // The partition of the disk.
      shared_ptr<string> partition_ {};
      // The ID of the task object.
      shared_ptr<string> targetId_ {};
      // The name of the task object.
      shared_ptr<string> targetName_ {};
      // The type of the task object. Valid values:
      // 
      // *   **1**: snapshot.
      // *   **2**: image.
      shared_ptr<string> targetType_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAgentlessRelateMaliciousResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAgentlessRelateMaliciousResponseBody::List>) };
    inline vector<ListAgentlessRelateMaliciousResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListAgentlessRelateMaliciousResponseBody::List>) };
    inline ListAgentlessRelateMaliciousResponseBody& setList(const vector<ListAgentlessRelateMaliciousResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAgentlessRelateMaliciousResponseBody& setList(vector<ListAgentlessRelateMaliciousResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAgentlessRelateMaliciousResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAgentlessRelateMaliciousResponseBody::PageInfo) };
    inline ListAgentlessRelateMaliciousResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAgentlessRelateMaliciousResponseBody::PageInfo) };
    inline ListAgentlessRelateMaliciousResponseBody& setPageInfo(const ListAgentlessRelateMaliciousResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAgentlessRelateMaliciousResponseBody& setPageInfo(ListAgentlessRelateMaliciousResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessRelateMaliciousResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of hosts that are associated with the risk.
    shared_ptr<vector<ListAgentlessRelateMaliciousResponseBody::List>> list_ {};
    // The pagination information.
    shared_ptr<ListAgentlessRelateMaliciousResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
