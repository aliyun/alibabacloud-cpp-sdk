// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESTORETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESTORETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateRestoreTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRestoreTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestoreTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateRestoreTaskResponseBody() = default ;
    CreateRestoreTaskResponseBody(const CreateRestoreTaskResponseBody &) = default ;
    CreateRestoreTaskResponseBody(CreateRestoreTaskResponseBody &&) = default ;
    CreateRestoreTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRestoreTaskResponseBody() = default ;
    CreateRestoreTaskResponseBody& operator=(const CreateRestoreTaskResponseBody &) = default ;
    CreateRestoreTaskResponseBody& operator=(CreateRestoreTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->restoreTaskId_ != nullptr && this->status_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRestoreTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreTaskId Field Functions 
    bool hasRestoreTaskId() const { return this->restoreTaskId_ != nullptr;};
    void deleteRestoreTaskId() { this->restoreTaskId_ = nullptr;};
    inline string restoreTaskId() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskId_, "") };
    inline CreateRestoreTaskResponseBody& setRestoreTaskId(string restoreTaskId) { DARABONBA_PTR_SET_VALUE(restoreTaskId_, restoreTaskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRestoreTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the restore task.
    std::shared_ptr<string> restoreTaskId_ = nullptr;
    // The status of the service instance. Valid values:
    // 
    // *   Restoring
    // *   Restored
    // *   RestoreFailed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
