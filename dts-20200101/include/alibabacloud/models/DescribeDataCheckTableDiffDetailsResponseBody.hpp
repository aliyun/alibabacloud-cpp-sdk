// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDIFFDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDIFFDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDataCheckTableDiffDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataCheckTableDiffDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DiffCount, diffCount_);
      DARABONBA_PTR_TO_JSON(DiffDetails, diffDetails_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TbName, tbName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataCheckTableDiffDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DiffCount, diffCount_);
      DARABONBA_PTR_FROM_JSON(DiffDetails, diffDetails_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TbName, tbName_);
    };
    DescribeDataCheckTableDiffDetailsResponseBody() = default ;
    DescribeDataCheckTableDiffDetailsResponseBody(const DescribeDataCheckTableDiffDetailsResponseBody &) = default ;
    DescribeDataCheckTableDiffDetailsResponseBody(DescribeDataCheckTableDiffDetailsResponseBody &&) = default ;
    DescribeDataCheckTableDiffDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataCheckTableDiffDetailsResponseBody() = default ;
    DescribeDataCheckTableDiffDetailsResponseBody& operator=(const DescribeDataCheckTableDiffDetailsResponseBody &) = default ;
    DescribeDataCheckTableDiffDetailsResponseBody& operator=(DescribeDataCheckTableDiffDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiffDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiffDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Diff, diff_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, DiffDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Diff, diff_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      DiffDetails() = default ;
      DiffDetails(const DiffDetails &) = default ;
      DiffDetails(DiffDetails &&) = default ;
      DiffDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiffDetails() = default ;
      DiffDetails& operator=(const DiffDetails &) = default ;
      DiffDetails& operator=(DiffDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diff_ == nullptr
        && this->gmtCreated_ == nullptr && this->id_ == nullptr; };
      // diff Field Functions 
      bool hasDiff() const { return this->diff_ != nullptr;};
      void deleteDiff() { this->diff_ = nullptr;};
      inline string getDiff() const { DARABONBA_PTR_GET_DEFAULT(diff_, "") };
      inline DiffDetails& setDiff(string diff) { DARABONBA_PTR_SET_VALUE(diff_, diff) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline DiffDetails& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DiffDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The details of the inconsistent data, whose value is a JSON string. The JSON string contains the following parameters:
      // 
      // *   column: the name of the field.
      // *   source: the value of the field in the source database.
      // *   dest: the value of the field in the destination database.
      // *   isPrimary: indicates whether the field is a primary key.
      shared_ptr<string> diff_ {};
      // The time when the data verification was performed.
      shared_ptr<string> gmtCreated_ {};
      // The auto-increment primary key that is used to identify the data in a verification result.
      shared_ptr<int64_t> id_ {};
    };

    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->diffCount_ == nullptr && this->diffDetails_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr
        && this->httpStatusCode_ == nullptr && this->instanceId_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tbName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // diffCount Field Functions 
    bool hasDiffCount() const { return this->diffCount_ != nullptr;};
    void deleteDiffCount() { this->diffCount_ = nullptr;};
    inline int64_t getDiffCount() const { DARABONBA_PTR_GET_DEFAULT(diffCount_, 0L) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDiffCount(int64_t diffCount) { DARABONBA_PTR_SET_VALUE(diffCount_, diffCount) };


    // diffDetails Field Functions 
    bool hasDiffDetails() const { return this->diffDetails_ != nullptr;};
    void deleteDiffDetails() { this->diffDetails_ = nullptr;};
    inline const vector<DescribeDataCheckTableDiffDetailsResponseBody::DiffDetails> & getDiffDetails() const { DARABONBA_PTR_GET_CONST(diffDetails_, vector<DescribeDataCheckTableDiffDetailsResponseBody::DiffDetails>) };
    inline vector<DescribeDataCheckTableDiffDetailsResponseBody::DiffDetails> getDiffDetails() { DARABONBA_PTR_GET(diffDetails_, vector<DescribeDataCheckTableDiffDetailsResponseBody::DiffDetails>) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDiffDetails(const vector<DescribeDataCheckTableDiffDetailsResponseBody::DiffDetails> & diffDetails) { DARABONBA_PTR_SET_VALUE(diffDetails_, diffDetails) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDiffDetails(vector<DescribeDataCheckTableDiffDetailsResponseBody::DiffDetails> && diffDetails) { DARABONBA_PTR_SET_RVALUE(diffDetails_, diffDetails) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tbName Field Functions 
    bool hasTbName() const { return this->tbName_ != nullptr;};
    void deleteTbName() { this->tbName_ = nullptr;};
    inline string getTbName() const { DARABONBA_PTR_GET_DEFAULT(tbName_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setTbName(string tbName) { DARABONBA_PTR_SET_VALUE(tbName_, tbName) };


  protected:
    // The name of the source database to which the table that contains inconsistent data belongs.
    shared_ptr<string> dbName_ {};
    // The number of data rows that contain inconsistent data.
    shared_ptr<int64_t> diffCount_ {};
    // The information about the inconsistent data.
    shared_ptr<vector<DescribeDataCheckTableDiffDetailsResponseBody::DiffDetails>> diffDetails_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // > For example, if the value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the value of the **DynamicMessage** parameter is **Type**, the specified **Type** parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The name of the table that contains inconsistent data in the source database.
    shared_ptr<string> tbName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
