// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONNECTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONNECTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceConnectivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConnectivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnCheckErrorCode, connCheckErrorCode_);
      DARABONBA_PTR_TO_JSON(ConnCheckErrorMessage, connCheckErrorMessage_);
      DARABONBA_PTR_TO_JSON(ConnCheckResult, connCheckResult_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConnectivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnCheckErrorCode, connCheckErrorCode_);
      DARABONBA_PTR_FROM_JSON(ConnCheckErrorMessage, connCheckErrorMessage_);
      DARABONBA_PTR_FROM_JSON(ConnCheckResult, connCheckResult_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceConnectivityResponseBody() = default ;
    DescribeDBInstanceConnectivityResponseBody(const DescribeDBInstanceConnectivityResponseBody &) = default ;
    DescribeDBInstanceConnectivityResponseBody(DescribeDBInstanceConnectivityResponseBody &&) = default ;
    DescribeDBInstanceConnectivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConnectivityResponseBody() = default ;
    DescribeDBInstanceConnectivityResponseBody& operator=(const DescribeDBInstanceConnectivityResponseBody &) = default ;
    DescribeDBInstanceConnectivityResponseBody& operator=(DescribeDBInstanceConnectivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connCheckErrorCode_ == nullptr
        && this->connCheckErrorMessage_ == nullptr && this->connCheckResult_ == nullptr && this->dbInstanceName_ == nullptr && this->requestId_ == nullptr; };
    // connCheckErrorCode Field Functions 
    bool hasConnCheckErrorCode() const { return this->connCheckErrorCode_ != nullptr;};
    void deleteConnCheckErrorCode() { this->connCheckErrorCode_ = nullptr;};
    inline string getConnCheckErrorCode() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorCode_, "") };
    inline DescribeDBInstanceConnectivityResponseBody& setConnCheckErrorCode(string connCheckErrorCode) { DARABONBA_PTR_SET_VALUE(connCheckErrorCode_, connCheckErrorCode) };


    // connCheckErrorMessage Field Functions 
    bool hasConnCheckErrorMessage() const { return this->connCheckErrorMessage_ != nullptr;};
    void deleteConnCheckErrorMessage() { this->connCheckErrorMessage_ = nullptr;};
    inline string getConnCheckErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorMessage_, "") };
    inline DescribeDBInstanceConnectivityResponseBody& setConnCheckErrorMessage(string connCheckErrorMessage) { DARABONBA_PTR_SET_VALUE(connCheckErrorMessage_, connCheckErrorMessage) };


    // connCheckResult Field Functions 
    bool hasConnCheckResult() const { return this->connCheckResult_ != nullptr;};
    void deleteConnCheckResult() { this->connCheckResult_ = nullptr;};
    inline string getConnCheckResult() const { DARABONBA_PTR_GET_DEFAULT(connCheckResult_, "") };
    inline DescribeDBInstanceConnectivityResponseBody& setConnCheckResult(string connCheckResult) { DARABONBA_PTR_SET_VALUE(connCheckResult_, connCheckResult) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeDBInstanceConnectivityResponseBody& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceConnectivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code for connection diagnosis. Valid values:
    // 
    // *   **SRC_IP_NOT_IN_USER_WHITELIST**: The source IP address is not added to the whitelist.
    // *   **CONNECTION_ABNORMAL**: The connection to the cluster is normal.
    shared_ptr<string> connCheckErrorCode_ {};
    // The error message for connection diagnosis.
    shared_ptr<string> connCheckErrorMessage_ {};
    // The connection diagnosis result. Valid values:
    // 
    // *   **Success**
    // *   **Failed**
    shared_ptr<string> connCheckResult_ {};
    // The instance ID.
    shared_ptr<string> dbInstanceName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
