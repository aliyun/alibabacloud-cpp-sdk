// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMIGRATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateMigrationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateMigrationTaskResponseBody() = default ;
    UpdateMigrationTaskResponseBody(const UpdateMigrationTaskResponseBody &) = default ;
    UpdateMigrationTaskResponseBody(UpdateMigrationTaskResponseBody &&) = default ;
    UpdateMigrationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMigrationTaskResponseBody() = default ;
    UpdateMigrationTaskResponseBody& operator=(const UpdateMigrationTaskResponseBody &) = default ;
    UpdateMigrationTaskResponseBody& operator=(UpdateMigrationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(OriginInstanceAddress, originInstanceAddress_);
        DARABONBA_PTR_TO_JSON(OriginInstanceName, originInstanceName_);
        DARABONBA_PTR_TO_JSON(OriginInstanceNamespace, originInstanceNamespace_);
        DARABONBA_PTR_TO_JSON(ProjectDesc, projectDesc_);
        DARABONBA_PTR_TO_JSON(SyncType, syncType_);
        DARABONBA_PTR_TO_JSON(TargetClusterName, targetClusterName_);
        DARABONBA_PTR_TO_JSON(TargetClusterUrl, targetClusterUrl_);
        DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(OriginInstanceAddress, originInstanceAddress_);
        DARABONBA_PTR_FROM_JSON(OriginInstanceName, originInstanceName_);
        DARABONBA_PTR_FROM_JSON(OriginInstanceNamespace, originInstanceNamespace_);
        DARABONBA_PTR_FROM_JSON(ProjectDesc, projectDesc_);
        DARABONBA_PTR_FROM_JSON(SyncType, syncType_);
        DARABONBA_PTR_FROM_JSON(TargetClusterName, targetClusterName_);
        DARABONBA_PTR_FROM_JSON(TargetClusterUrl, targetClusterUrl_);
        DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->originInstanceAddress_ == nullptr && this->originInstanceName_ == nullptr
        && this->originInstanceNamespace_ == nullptr && this->projectDesc_ == nullptr && this->syncType_ == nullptr && this->targetClusterName_ == nullptr && this->targetClusterUrl_ == nullptr
        && this->targetInstanceId_ == nullptr && this->userId_ == nullptr; };
      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Data& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // originInstanceAddress Field Functions 
      bool hasOriginInstanceAddress() const { return this->originInstanceAddress_ != nullptr;};
      void deleteOriginInstanceAddress() { this->originInstanceAddress_ = nullptr;};
      inline string getOriginInstanceAddress() const { DARABONBA_PTR_GET_DEFAULT(originInstanceAddress_, "") };
      inline Data& setOriginInstanceAddress(string originInstanceAddress) { DARABONBA_PTR_SET_VALUE(originInstanceAddress_, originInstanceAddress) };


      // originInstanceName Field Functions 
      bool hasOriginInstanceName() const { return this->originInstanceName_ != nullptr;};
      void deleteOriginInstanceName() { this->originInstanceName_ = nullptr;};
      inline string getOriginInstanceName() const { DARABONBA_PTR_GET_DEFAULT(originInstanceName_, "") };
      inline Data& setOriginInstanceName(string originInstanceName) { DARABONBA_PTR_SET_VALUE(originInstanceName_, originInstanceName) };


      // originInstanceNamespace Field Functions 
      bool hasOriginInstanceNamespace() const { return this->originInstanceNamespace_ != nullptr;};
      void deleteOriginInstanceNamespace() { this->originInstanceNamespace_ = nullptr;};
      inline string getOriginInstanceNamespace() const { DARABONBA_PTR_GET_DEFAULT(originInstanceNamespace_, "") };
      inline Data& setOriginInstanceNamespace(string originInstanceNamespace) { DARABONBA_PTR_SET_VALUE(originInstanceNamespace_, originInstanceNamespace) };


      // projectDesc Field Functions 
      bool hasProjectDesc() const { return this->projectDesc_ != nullptr;};
      void deleteProjectDesc() { this->projectDesc_ = nullptr;};
      inline string getProjectDesc() const { DARABONBA_PTR_GET_DEFAULT(projectDesc_, "") };
      inline Data& setProjectDesc(string projectDesc) { DARABONBA_PTR_SET_VALUE(projectDesc_, projectDesc) };


      // syncType Field Functions 
      bool hasSyncType() const { return this->syncType_ != nullptr;};
      void deleteSyncType() { this->syncType_ = nullptr;};
      inline string getSyncType() const { DARABONBA_PTR_GET_DEFAULT(syncType_, "") };
      inline Data& setSyncType(string syncType) { DARABONBA_PTR_SET_VALUE(syncType_, syncType) };


      // targetClusterName Field Functions 
      bool hasTargetClusterName() const { return this->targetClusterName_ != nullptr;};
      void deleteTargetClusterName() { this->targetClusterName_ = nullptr;};
      inline string getTargetClusterName() const { DARABONBA_PTR_GET_DEFAULT(targetClusterName_, "") };
      inline Data& setTargetClusterName(string targetClusterName) { DARABONBA_PTR_SET_VALUE(targetClusterName_, targetClusterName) };


      // targetClusterUrl Field Functions 
      bool hasTargetClusterUrl() const { return this->targetClusterUrl_ != nullptr;};
      void deleteTargetClusterUrl() { this->targetClusterUrl_ = nullptr;};
      inline string getTargetClusterUrl() const { DARABONBA_PTR_GET_DEFAULT(targetClusterUrl_, "") };
      inline Data& setTargetClusterUrl(string targetClusterUrl) { DARABONBA_PTR_SET_VALUE(targetClusterUrl_, targetClusterUrl) };


      // targetInstanceId Field Functions 
      bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
      void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
      inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
      inline Data& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The type of the instance.
      // 
      // *   Nacos-Ans
      // *   ZooKeeper
      // *   Eureka
      shared_ptr<string> clusterType_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // The ID of the task.
      shared_ptr<string> id_ {};
      // The address of the source instance node.
      shared_ptr<string> originInstanceAddress_ {};
      // The name of the source instance.
      shared_ptr<string> originInstanceName_ {};
      // The list of namespaces. This parameter is optional if applications are migrated from a Nacos instance.
      shared_ptr<string> originInstanceNamespace_ {};
      // The description.
      shared_ptr<string> projectDesc_ {};
      shared_ptr<string> syncType_ {};
      // The name of the destination instance.
      shared_ptr<string> targetClusterName_ {};
      // The URL of the destination instance.
      shared_ptr<string> targetClusterUrl_ {};
      // The ID of the destination instance.
      shared_ptr<string> targetInstanceId_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateMigrationTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateMigrationTaskResponseBody::Data) };
    inline UpdateMigrationTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateMigrationTaskResponseBody::Data) };
    inline UpdateMigrationTaskResponseBody& setData(const UpdateMigrationTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateMigrationTaskResponseBody& setData(UpdateMigrationTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateMigrationTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline UpdateMigrationTaskResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateMigrationTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMigrationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateMigrationTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data structure.
    shared_ptr<UpdateMigrationTaskResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
