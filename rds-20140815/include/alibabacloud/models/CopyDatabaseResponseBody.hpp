// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CopyDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CopyDatabaseResponseBody() = default ;
    CopyDatabaseResponseBody(const CopyDatabaseResponseBody &) = default ;
    CopyDatabaseResponseBody(CopyDatabaseResponseBody &&) = default ;
    CopyDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDatabaseResponseBody() = default ;
    CopyDatabaseResponseBody& operator=(const CopyDatabaseResponseBody &) = default ;
    CopyDatabaseResponseBody& operator=(CopyDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBName_ == nullptr
        && return this->DBStatus_ == nullptr && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CopyDatabaseResponseBody& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBStatus Field Functions 
    bool hasDBStatus() const { return this->DBStatus_ != nullptr;};
    void deleteDBStatus() { this->DBStatus_ = nullptr;};
    inline string DBStatus() const { DARABONBA_PTR_GET_DEFAULT(DBStatus_, "") };
    inline CopyDatabaseResponseBody& setDBStatus(string DBStatus) { DARABONBA_PTR_SET_VALUE(DBStatus_, DBStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CopyDatabaseResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The status of the database. Valid values:
    // 
    // *   **Creating**
    // *   **Running**
    // *   **Deleting**
    std::shared_ptr<string> DBStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
