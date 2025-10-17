// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDIFFDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDIFFDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails.hpp>
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
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->diffCount_ == nullptr && return this->diffDetails_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->instanceId_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tbName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // diffCount Field Functions 
    bool hasDiffCount() const { return this->diffCount_ != nullptr;};
    void deleteDiffCount() { this->diffCount_ = nullptr;};
    inline int64_t diffCount() const { DARABONBA_PTR_GET_DEFAULT(diffCount_, 0L) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDiffCount(int64_t diffCount) { DARABONBA_PTR_SET_VALUE(diffCount_, diffCount) };


    // diffDetails Field Functions 
    bool hasDiffDetails() const { return this->diffDetails_ != nullptr;};
    void deleteDiffDetails() { this->diffDetails_ = nullptr;};
    inline const vector<DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails> & diffDetails() const { DARABONBA_PTR_GET_CONST(diffDetails_, vector<DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails>) };
    inline vector<DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails> diffDetails() { DARABONBA_PTR_GET(diffDetails_, vector<DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails>) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDiffDetails(const vector<DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails> & diffDetails) { DARABONBA_PTR_SET_VALUE(diffDetails_, diffDetails) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDiffDetails(vector<DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails> && diffDetails) { DARABONBA_PTR_SET_RVALUE(diffDetails_, diffDetails) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tbName Field Functions 
    bool hasTbName() const { return this->tbName_ != nullptr;};
    void deleteTbName() { this->tbName_ = nullptr;};
    inline string tbName() const { DARABONBA_PTR_GET_DEFAULT(tbName_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBody& setTbName(string tbName) { DARABONBA_PTR_SET_VALUE(tbName_, tbName) };


  protected:
    // The name of the source database to which the table that contains inconsistent data belongs.
    std::shared_ptr<string> dbName_ = nullptr;
    // The number of data rows that contain inconsistent data.
    std::shared_ptr<int64_t> diffCount_ = nullptr;
    // The information about the inconsistent data.
    std::shared_ptr<vector<DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails>> diffDetails_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // > For example, if the value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the value of the **DynamicMessage** parameter is **Type**, the specified **Type** parameter is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The name of the table that contains inconsistent data in the source database.
    std::shared_ptr<string> tbName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
