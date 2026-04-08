// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYENTITYRESPONSEBODY_HPP_
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
  class GetQualityEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityEntityResponseBody() = default ;
    GetQualityEntityResponseBody(const GetQualityEntityResponseBody &) = default ;
    GetQualityEntityResponseBody(GetQualityEntityResponseBody &&) = default ;
    GetQualityEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityEntityResponseBody() = default ;
    GetQualityEntityResponseBody& operator=(const GetQualityEntityResponseBody &) = default ;
    GetQualityEntityResponseBody& operator=(GetQualityEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EntityLevel, entityLevel_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Followers, followers_);
        DARABONBA_PTR_TO_JSON(HasRelativeNode, hasRelativeNode_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MatchExpression, matchExpression_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(OnDuty, onDuty_);
        DARABONBA_PTR_TO_JSON(OnDutyAccountName, onDutyAccountName_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(RelativeNode, relativeNode_);
        DARABONBA_PTR_TO_JSON(Sql, sql_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(Task, task_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EntityLevel, entityLevel_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Followers, followers_);
        DARABONBA_PTR_FROM_JSON(HasRelativeNode, hasRelativeNode_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MatchExpression, matchExpression_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(OnDuty, onDuty_);
        DARABONBA_PTR_FROM_JSON(OnDutyAccountName, onDutyAccountName_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(RelativeNode, relativeNode_);
        DARABONBA_PTR_FROM_JSON(Sql, sql_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(Task, task_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->entityLevel_ == nullptr && this->envType_ == nullptr && this->followers_ == nullptr && this->hasRelativeNode_ == nullptr && this->id_ == nullptr
        && this->matchExpression_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->onDuty_ == nullptr && this->onDutyAccountName_ == nullptr
        && this->projectName_ == nullptr && this->relativeNode_ == nullptr && this->sql_ == nullptr && this->tableName_ == nullptr && this->task_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // entityLevel Field Functions 
      bool hasEntityLevel() const { return this->entityLevel_ != nullptr;};
      void deleteEntityLevel() { this->entityLevel_ = nullptr;};
      inline int32_t getEntityLevel() const { DARABONBA_PTR_GET_DEFAULT(entityLevel_, 0) };
      inline Data& setEntityLevel(int32_t entityLevel) { DARABONBA_PTR_SET_VALUE(entityLevel_, entityLevel) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Data& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // followers Field Functions 
      bool hasFollowers() const { return this->followers_ != nullptr;};
      void deleteFollowers() { this->followers_ = nullptr;};
      inline string getFollowers() const { DARABONBA_PTR_GET_DEFAULT(followers_, "") };
      inline Data& setFollowers(string followers) { DARABONBA_PTR_SET_VALUE(followers_, followers) };


      // hasRelativeNode Field Functions 
      bool hasHasRelativeNode() const { return this->hasRelativeNode_ != nullptr;};
      void deleteHasRelativeNode() { this->hasRelativeNode_ = nullptr;};
      inline bool getHasRelativeNode() const { DARABONBA_PTR_GET_DEFAULT(hasRelativeNode_, false) };
      inline Data& setHasRelativeNode(bool hasRelativeNode) { DARABONBA_PTR_SET_VALUE(hasRelativeNode_, hasRelativeNode) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // matchExpression Field Functions 
      bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
      void deleteMatchExpression() { this->matchExpression_ = nullptr;};
      inline string getMatchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
      inline Data& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline Data& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // onDuty Field Functions 
      bool hasOnDuty() const { return this->onDuty_ != nullptr;};
      void deleteOnDuty() { this->onDuty_ = nullptr;};
      inline string getOnDuty() const { DARABONBA_PTR_GET_DEFAULT(onDuty_, "") };
      inline Data& setOnDuty(string onDuty) { DARABONBA_PTR_SET_VALUE(onDuty_, onDuty) };


      // onDutyAccountName Field Functions 
      bool hasOnDutyAccountName() const { return this->onDutyAccountName_ != nullptr;};
      void deleteOnDutyAccountName() { this->onDutyAccountName_ = nullptr;};
      inline string getOnDutyAccountName() const { DARABONBA_PTR_GET_DEFAULT(onDutyAccountName_, "") };
      inline Data& setOnDutyAccountName(string onDutyAccountName) { DARABONBA_PTR_SET_VALUE(onDutyAccountName_, onDutyAccountName) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // relativeNode Field Functions 
      bool hasRelativeNode() const { return this->relativeNode_ != nullptr;};
      void deleteRelativeNode() { this->relativeNode_ = nullptr;};
      inline string getRelativeNode() const { DARABONBA_PTR_GET_DEFAULT(relativeNode_, "") };
      inline Data& setRelativeNode(string relativeNode) { DARABONBA_PTR_SET_VALUE(relativeNode_, relativeNode) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline int32_t getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, 0) };
      inline Data& setSql(int32_t sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline int32_t getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, 0) };
      inline Data& setTask(int32_t task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    protected:
      // The time when the partition filter expression was created.
      shared_ptr<int64_t> createTime_ {};
      // The level of the partition filter expression. Valid values:
      // 
      // *   0: The partition filter expression is at the SQL level. This indicates that the system checks data quality after each SQL statement is executed.
      // *   1: The partition filter expression is at the node level. This indicates that the system checks data quality after all the SQL statements for a node are executed.
      shared_ptr<int32_t> entityLevel_ {};
      // The type of the compute engine instance or data source.
      shared_ptr<string> envType_ {};
      // The ID of the Alibaba Cloud account that is used to receive alert notifications.
      shared_ptr<string> followers_ {};
      // Indicates whether the partition filter expression is associated with a node. Valid values:
      // 
      // *   true: The partition filter expression is associated with a node.
      // *   false: The partition filter expression is not associated with a node.
      shared_ptr<bool> hasRelativeNode_ {};
      // The ID of the partition filter expression.
      shared_ptr<int64_t> id_ {};
      // The partition filter expression.
      shared_ptr<string> matchExpression_ {};
      // The time when the partition filter expression was modified.
      shared_ptr<int64_t> modifyTime_ {};
      // The ID of the Alibaba Cloud account that is used to modify the partition filter expression.
      shared_ptr<string> modifyUser_ {};
      // The ID of the Alibaba Cloud account that is used to configure the partition filter expression.
      shared_ptr<string> onDuty_ {};
      // The name of the Alibaba Cloud account that is used to configure the partition filter expression.
      shared_ptr<string> onDutyAccountName_ {};
      // The name of the compute engine instance or data source.
      shared_ptr<string> projectName_ {};
      // The information about the node with which the partition filter expression is associated. The information includes the following items:
      // 
      // *   ProjectName: the name of the workspace to which the node belongs.
      // *   NodeID: the ID of the node.
      shared_ptr<string> relativeNode_ {};
      // Indicates that the partition filter expression is at the SQL level.
      shared_ptr<int32_t> sql_ {};
      // The name of the partitioned table.
      shared_ptr<string> tableName_ {};
      // The node.
      shared_ptr<int32_t> task_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetQualityEntityResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetQualityEntityResponseBody::Data>) };
    inline vector<GetQualityEntityResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetQualityEntityResponseBody::Data>) };
    inline GetQualityEntityResponseBody& setData(const vector<GetQualityEntityResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityEntityResponseBody& setData(vector<GetQualityEntityResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQualityEntityResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetQualityEntityResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityEntityResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityEntityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the partition filter expression.
    shared_ptr<vector<GetQualityEntityResponseBody::Data>> data_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
