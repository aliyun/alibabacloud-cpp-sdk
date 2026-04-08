// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYFOLLOWERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYFOLLOWERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetQualityFollowerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityFollowerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityFollowerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityFollowerResponseBody() = default ;
    GetQualityFollowerResponseBody(const GetQualityFollowerResponseBody &) = default ;
    GetQualityFollowerResponseBody(GetQualityFollowerResponseBody &&) = default ;
    GetQualityFollowerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityFollowerResponseBody() = default ;
    GetQualityFollowerResponseBody& operator=(const GetQualityFollowerResponseBody &) = default ;
    GetQualityFollowerResponseBody& operator=(GetQualityFollowerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmMode, alarmMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(Follower, follower_);
        DARABONBA_PTR_TO_JSON(FollowerAccountName, followerAccountName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmMode, alarmMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(Follower, follower_);
        DARABONBA_PTR_FROM_JSON(FollowerAccountName, followerAccountName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
      virtual bool empty() const override { return this->alarmMode_ == nullptr
        && this->createTime_ == nullptr && this->entityId_ == nullptr && this->follower_ == nullptr && this->followerAccountName_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->projectName_ == nullptr && this->tableName_ == nullptr; };
      // alarmMode Field Functions 
      bool hasAlarmMode() const { return this->alarmMode_ != nullptr;};
      void deleteAlarmMode() { this->alarmMode_ = nullptr;};
      inline int32_t getAlarmMode() const { DARABONBA_PTR_GET_DEFAULT(alarmMode_, 0) };
      inline Data& setAlarmMode(int32_t alarmMode) { DARABONBA_PTR_SET_VALUE(alarmMode_, alarmMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline Data& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // follower Field Functions 
      bool hasFollower() const { return this->follower_ != nullptr;};
      void deleteFollower() { this->follower_ = nullptr;};
      inline string getFollower() const { DARABONBA_PTR_GET_DEFAULT(follower_, "") };
      inline Data& setFollower(string follower) { DARABONBA_PTR_SET_VALUE(follower_, follower) };


      // followerAccountName Field Functions 
      bool hasFollowerAccountName() const { return this->followerAccountName_ != nullptr;};
      void deleteFollowerAccountName() { this->followerAccountName_ = nullptr;};
      inline string getFollowerAccountName() const { DARABONBA_PTR_GET_DEFAULT(followerAccountName_, "") };
      inline Data& setFollowerAccountName(string followerAccountName) { DARABONBA_PTR_SET_VALUE(followerAccountName_, followerAccountName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The alert mode. The value is as follows:
      // 
      // - 1 (Mail)
      // - 2 (email and SMS)
      // - 4 (DingTalk groups of robots or hook)
      // - 5 (DingTalk groups of robots @ ALL)
      shared_ptr<int32_t> alarmMode_ {};
      // The time when the data quality rule subscription configuration was created.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the partition expression.
      shared_ptr<string> entityId_ {};
      // The subscriber to receive alert information.
      shared_ptr<string> follower_ {};
      // The Alibaba Cloud account name of the subscriber.
      shared_ptr<string> followerAccountName_ {};
      // The ID of the subscription relationship.
      shared_ptr<int64_t> id_ {};
      // The update time of the data quality rule subscription configuration.
      shared_ptr<int64_t> modifyTime_ {};
      // The name of the engine or data source.
      shared_ptr<string> projectName_ {};
      // The name of the partitioned table.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetQualityFollowerResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetQualityFollowerResponseBody::Data>) };
    inline vector<GetQualityFollowerResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetQualityFollowerResponseBody::Data>) };
    inline GetQualityFollowerResponseBody& setData(const vector<GetQualityFollowerResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityFollowerResponseBody& setData(vector<GetQualityFollowerResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQualityFollowerResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetQualityFollowerResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityFollowerResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityFollowerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityFollowerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the subscription relationship.
    shared_ptr<vector<GetQualityFollowerResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP return code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
