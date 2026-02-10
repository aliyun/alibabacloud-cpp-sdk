// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESRESPONSEBODY_HPP_
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
  class DescribeSuspEventQuaraFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventQuaraFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QuaraFiles, quaraFiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventQuaraFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QuaraFiles, quaraFiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSuspEventQuaraFilesResponseBody() = default ;
    DescribeSuspEventQuaraFilesResponseBody(const DescribeSuspEventQuaraFilesResponseBody &) = default ;
    DescribeSuspEventQuaraFilesResponseBody(DescribeSuspEventQuaraFilesResponseBody &&) = default ;
    DescribeSuspEventQuaraFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventQuaraFilesResponseBody() = default ;
    DescribeSuspEventQuaraFilesResponseBody& operator=(const DescribeSuspEventQuaraFilesResponseBody &) = default ;
    DescribeSuspEventQuaraFilesResponseBody& operator=(DescribeSuspEventQuaraFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuaraFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuaraFiles& obj) { 
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Link, link_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, QuaraFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Link, link_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      QuaraFiles() = default ;
      QuaraFiles(const QuaraFiles &) = default ;
      QuaraFiles(QuaraFiles &&) = default ;
      QuaraFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuaraFiles() = default ;
      QuaraFiles& operator=(const QuaraFiles &) = default ;
      QuaraFiles& operator=(QuaraFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventType_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->ip_ == nullptr && this->link_ == nullptr && this->md5_ == nullptr && this->modifyTime_ == nullptr
        && this->path_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->uuid_ == nullptr; };
      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline QuaraFiles& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline QuaraFiles& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline QuaraFiles& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline QuaraFiles& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline QuaraFiles& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline QuaraFiles& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline QuaraFiles& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline QuaraFiles& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
      inline QuaraFiles& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline QuaraFiles& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline QuaraFiles& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline QuaraFiles& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QuaraFiles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline QuaraFiles& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline QuaraFiles& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The name of the event.
      shared_ptr<string> eventName_ {};
      // The type of the event.
      shared_ptr<string> eventType_ {};
      // The ID of the quarantined file.
      shared_ptr<int32_t> id_ {};
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The name of the server on which the quarantined file is located.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server on which the quarantined file is located.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server on which the quarantined file is located.
      shared_ptr<string> intranetIp_ {};
      // The public IP address of the server on which the quarantined file is located.
      shared_ptr<string> ip_ {};
      // The download link of the quarantined file.
      shared_ptr<string> link_ {};
      // The MD5 hash value of the quarantined file.
      shared_ptr<string> md5_ {};
      // The time when the quarantined file was last modified.
      shared_ptr<string> modifyTime_ {};
      // The path to the quarantined file on the server.
      shared_ptr<string> path_ {};
      // The status of the quarantined file. Valid values:
      // 
      // *   **quaraFailed**: The file fails to be quarantined.
      // *   **quaraDone**: The file is quarantined.
      // *   **quaraing**: The file is being quarantined.
      // *   **rollbackFailed**: The system fails to cancel quarantining the file.
      // *   **rollbackDone**: The system cancelled quarantining the file.
      // *   **rollbacking**: The system is cancelling quarantining the file.
      shared_ptr<string> status_ {};
      // The unique ID of the event.
      shared_ptr<string> tag_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->quaraFiles_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quaraFiles Field Functions 
    bool hasQuaraFiles() const { return this->quaraFiles_ != nullptr;};
    void deleteQuaraFiles() { this->quaraFiles_ = nullptr;};
    inline const vector<DescribeSuspEventQuaraFilesResponseBody::QuaraFiles> & getQuaraFiles() const { DARABONBA_PTR_GET_CONST(quaraFiles_, vector<DescribeSuspEventQuaraFilesResponseBody::QuaraFiles>) };
    inline vector<DescribeSuspEventQuaraFilesResponseBody::QuaraFiles> getQuaraFiles() { DARABONBA_PTR_GET(quaraFiles_, vector<DescribeSuspEventQuaraFilesResponseBody::QuaraFiles>) };
    inline DescribeSuspEventQuaraFilesResponseBody& setQuaraFiles(const vector<DescribeSuspEventQuaraFilesResponseBody::QuaraFiles> & quaraFiles) { DARABONBA_PTR_SET_VALUE(quaraFiles_, quaraFiles) };
    inline DescribeSuspEventQuaraFilesResponseBody& setQuaraFiles(vector<DescribeSuspEventQuaraFilesResponseBody::QuaraFiles> && quaraFiles) { DARABONBA_PTR_SET_RVALUE(quaraFiles_, quaraFiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspEventQuaraFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSuspEventQuaraFilesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // An array that consists of the quarantined files.
    shared_ptr<vector<DescribeSuspEventQuaraFilesResponseBody::QuaraFiles>> quaraFiles_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
