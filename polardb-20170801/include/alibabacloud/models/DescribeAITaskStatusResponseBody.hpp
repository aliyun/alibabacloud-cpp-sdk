// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAITASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAITASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAITaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAITaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAITaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
    };
    DescribeAITaskStatusResponseBody() = default ;
    DescribeAITaskStatusResponseBody(const DescribeAITaskStatusResponseBody &) = default ;
    DescribeAITaskStatusResponseBody(DescribeAITaskStatusResponseBody &&) = default ;
    DescribeAITaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAITaskStatusResponseBody() = default ;
    DescribeAITaskStatusResponseBody& operator=(const DescribeAITaskStatusResponseBody &) = default ;
    DescribeAITaskStatusResponseBody& operator=(DescribeAITaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBClusterId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->statusName_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAITaskStatusResponseBody& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAITaskStatusResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAITaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAITaskStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline DescribeAITaskStatusResponseBody& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


  protected:
    // The name of the database account that is used to connect to the AI nodes in the cluster.
    shared_ptr<string> accountName_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the PolarDB for AI feature. Valid values:
    // 
    // *   **1**: enabled.
    // *   **2**: disabled.
    shared_ptr<string> status_ {};
    // The description of the status of the PolarDB for AI feature.
    shared_ptr<string> statusName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
