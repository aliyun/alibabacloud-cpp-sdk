// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListTempFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTempFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TempFiles, tempFiles_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTempFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TempFiles, tempFiles_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTempFilesResponseBody() = default ;
    ListTempFilesResponseBody(const ListTempFilesResponseBody &) = default ;
    ListTempFilesResponseBody(ListTempFilesResponseBody &&) = default ;
    ListTempFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTempFilesResponseBody() = default ;
    ListTempFilesResponseBody& operator=(const ListTempFilesResponseBody &) = default ;
    ListTempFilesResponseBody& operator=(ListTempFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TempFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TempFiles& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtExpiredTime, gmtExpiredTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(Prefix, prefix_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, TempFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtExpiredTime, gmtExpiredTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      TempFiles() = default ;
      TempFiles(const TempFiles &) = default ;
      TempFiles(TempFiles &&) = default ;
      TempFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TempFiles() = default ;
      TempFiles& operator=(const TempFiles &) = default ;
      TempFiles& operator=(TempFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->capacity_ == nullptr && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtExpiredTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->prefix_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->type_ == nullptr && this->uploadUrl_ == nullptr && this->userId_ == nullptr
        && this->uuid_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline TempFiles& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline TempFiles& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TempFiles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline TempFiles& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline TempFiles& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtExpiredTime Field Functions 
      bool hasGmtExpiredTime() const { return this->gmtExpiredTime_ != nullptr;};
      void deleteGmtExpiredTime() { this->gmtExpiredTime_ = nullptr;};
      inline string getGmtExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(gmtExpiredTime_, "") };
      inline TempFiles& setGmtExpiredTime(string gmtExpiredTime) { DARABONBA_PTR_SET_VALUE(gmtExpiredTime_, gmtExpiredTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline TempFiles& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TempFiles& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TempFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline TempFiles& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // prefix Field Functions 
      bool hasPrefix() const { return this->prefix_ != nullptr;};
      void deletePrefix() { this->prefix_ = nullptr;};
      inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
      inline TempFiles& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TempFiles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TempFiles& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TempFiles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uploadUrl Field Functions 
      bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
      void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
      inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
      inline TempFiles& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TempFiles& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline TempFiles& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<int32_t> bandwidth_ {};
      shared_ptr<int64_t> capacity_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> downloadUrl_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtExpiredTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      // Owner Id
      shared_ptr<string> ownerId_ {};
      shared_ptr<string> prefix_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uploadUrl_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> uuid_ {};
    };

    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_TO_JSON(TotalFileNum, totalFileNum_);
        DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        DARABONBA_PTR_TO_JSON(UsedFileNum, usedFileNum_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_FROM_JSON(TotalFileNum, totalFileNum_);
        DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        DARABONBA_PTR_FROM_JSON(UsedFileNum, usedFileNum_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->totalCapacity_ == nullptr
        && this->totalFileNum_ == nullptr && this->usedCapacity_ == nullptr && this->usedFileNum_ == nullptr; };
      // totalCapacity Field Functions 
      bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
      void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
      inline int64_t getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0L) };
      inline Quota& setTotalCapacity(int64_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


      // totalFileNum Field Functions 
      bool hasTotalFileNum() const { return this->totalFileNum_ != nullptr;};
      void deleteTotalFileNum() { this->totalFileNum_ = nullptr;};
      inline int64_t getTotalFileNum() const { DARABONBA_PTR_GET_DEFAULT(totalFileNum_, 0L) };
      inline Quota& setTotalFileNum(int64_t totalFileNum) { DARABONBA_PTR_SET_VALUE(totalFileNum_, totalFileNum) };


      // usedCapacity Field Functions 
      bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
      void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
      inline int64_t getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
      inline Quota& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      // usedFileNum Field Functions 
      bool hasUsedFileNum() const { return this->usedFileNum_ != nullptr;};
      void deleteUsedFileNum() { this->usedFileNum_ = nullptr;};
      inline int64_t getUsedFileNum() const { DARABONBA_PTR_GET_DEFAULT(usedFileNum_, 0L) };
      inline Quota& setUsedFileNum(int64_t usedFileNum) { DARABONBA_PTR_SET_VALUE(usedFileNum_, usedFileNum) };


    protected:
      shared_ptr<int64_t> totalCapacity_ {};
      shared_ptr<int64_t> totalFileNum_ {};
      shared_ptr<int64_t> usedCapacity_ {};
      shared_ptr<int64_t> usedFileNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->quota_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->tempFiles_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTempFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTempFilesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTempFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const ListTempFilesResponseBody::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, ListTempFilesResponseBody::Quota) };
    inline ListTempFilesResponseBody::Quota getQuota() { DARABONBA_PTR_GET(quota_, ListTempFilesResponseBody::Quota) };
    inline ListTempFilesResponseBody& setQuota(const ListTempFilesResponseBody::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline ListTempFilesResponseBody& setQuota(ListTempFilesResponseBody::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTempFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTempFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tempFiles Field Functions 
    bool hasTempFiles() const { return this->tempFiles_ != nullptr;};
    void deleteTempFiles() { this->tempFiles_ = nullptr;};
    inline const vector<ListTempFilesResponseBody::TempFiles> & getTempFiles() const { DARABONBA_PTR_GET_CONST(tempFiles_, vector<ListTempFilesResponseBody::TempFiles>) };
    inline vector<ListTempFilesResponseBody::TempFiles> getTempFiles() { DARABONBA_PTR_GET(tempFiles_, vector<ListTempFilesResponseBody::TempFiles>) };
    inline ListTempFilesResponseBody& setTempFiles(const vector<ListTempFilesResponseBody::TempFiles> & tempFiles) { DARABONBA_PTR_SET_VALUE(tempFiles_, tempFiles) };
    inline ListTempFilesResponseBody& setTempFiles(vector<ListTempFilesResponseBody::TempFiles> && tempFiles) { DARABONBA_PTR_SET_RVALUE(tempFiles_, tempFiles) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTempFilesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListTempFilesResponseBody::Quota> quota_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<ListTempFilesResponseBody::TempFiles>> tempFiles_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
