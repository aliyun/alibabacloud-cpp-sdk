// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONNECTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONNECTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterConnectivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterConnectivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnCheckErrorCode, connCheckErrorCode_);
      DARABONBA_PTR_TO_JSON(ConnCheckErrorMessage, connCheckErrorMessage_);
      DARABONBA_PTR_TO_JSON(ConnCheckResult, connCheckResult_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterConnectivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnCheckErrorCode, connCheckErrorCode_);
      DARABONBA_PTR_FROM_JSON(ConnCheckErrorMessage, connCheckErrorMessage_);
      DARABONBA_PTR_FROM_JSON(ConnCheckResult, connCheckResult_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterConnectivityResponseBody() = default ;
    DescribeDBClusterConnectivityResponseBody(const DescribeDBClusterConnectivityResponseBody &) = default ;
    DescribeDBClusterConnectivityResponseBody(DescribeDBClusterConnectivityResponseBody &&) = default ;
    DescribeDBClusterConnectivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterConnectivityResponseBody() = default ;
    DescribeDBClusterConnectivityResponseBody& operator=(const DescribeDBClusterConnectivityResponseBody &) = default ;
    DescribeDBClusterConnectivityResponseBody& operator=(DescribeDBClusterConnectivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connCheckErrorCode_ != nullptr
        && this->connCheckErrorMessage_ != nullptr && this->connCheckResult_ != nullptr && this->DBClusterId_ != nullptr && this->requestId_ != nullptr; };
    // connCheckErrorCode Field Functions 
    bool hasConnCheckErrorCode() const { return this->connCheckErrorCode_ != nullptr;};
    void deleteConnCheckErrorCode() { this->connCheckErrorCode_ = nullptr;};
    inline string connCheckErrorCode() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorCode_, "") };
    inline DescribeDBClusterConnectivityResponseBody& setConnCheckErrorCode(string connCheckErrorCode) { DARABONBA_PTR_SET_VALUE(connCheckErrorCode_, connCheckErrorCode) };


    // connCheckErrorMessage Field Functions 
    bool hasConnCheckErrorMessage() const { return this->connCheckErrorMessage_ != nullptr;};
    void deleteConnCheckErrorMessage() { this->connCheckErrorMessage_ = nullptr;};
    inline string connCheckErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(connCheckErrorMessage_, "") };
    inline DescribeDBClusterConnectivityResponseBody& setConnCheckErrorMessage(string connCheckErrorMessage) { DARABONBA_PTR_SET_VALUE(connCheckErrorMessage_, connCheckErrorMessage) };


    // connCheckResult Field Functions 
    bool hasConnCheckResult() const { return this->connCheckResult_ != nullptr;};
    void deleteConnCheckResult() { this->connCheckResult_ = nullptr;};
    inline string connCheckResult() const { DARABONBA_PTR_GET_DEFAULT(connCheckResult_, "") };
    inline DescribeDBClusterConnectivityResponseBody& setConnCheckResult(string connCheckResult) { DARABONBA_PTR_SET_VALUE(connCheckResult_, connCheckResult) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterConnectivityResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterConnectivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code for connection diagnosis. Valid values:
    // 
    // *   **SRC_IP_NOT_IN_USER_WHITELIST**: The source IP address is not added to the whitelist.
    // *   **CONNECTION_ABNORMAL**: The connection to the cluster is normal.
    std::shared_ptr<string> connCheckErrorCode_ = nullptr;
    // The error message for connection diagnosis.
    std::shared_ptr<string> connCheckErrorMessage_ = nullptr;
    // The connection diagnosis result. Valid values:
    // 
    // *   **Success**
    // *   **Failed**
    std::shared_ptr<string> connCheckResult_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
