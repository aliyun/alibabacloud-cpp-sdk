// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOADSAMPLEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNLOADSAMPLEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UnloadSampleDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnloadSampleDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UnloadSampleDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UnloadSampleDataResponseBody() = default ;
    UnloadSampleDataResponseBody(const UnloadSampleDataResponseBody &) = default ;
    UnloadSampleDataResponseBody(UnloadSampleDataResponseBody &&) = default ;
    UnloadSampleDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnloadSampleDataResponseBody() = default ;
    UnloadSampleDataResponseBody& operator=(const UnloadSampleDataResponseBody &) = default ;
    UnloadSampleDataResponseBody& operator=(UnloadSampleDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UnloadSampleDataResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UnloadSampleDataResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnloadSampleDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline UnloadSampleDataResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the instance.
    shared_ptr<string> DBInstanceId_ {};
    // The error message returned if an error occurs. This message does not affect the execution of the operation.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The execution state of the operation. Valid values:
    // 
    // *   **false**: The operation fails.
    // *   **true**: The operation is successful.
    shared_ptr<bool> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
