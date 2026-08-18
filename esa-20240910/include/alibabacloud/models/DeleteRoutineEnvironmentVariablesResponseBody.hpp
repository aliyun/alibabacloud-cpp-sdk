// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINEENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINEENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteRoutineEnvironmentVariablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeletedKeys, deletedKeys_);
      DARABONBA_PTR_TO_JSON(FailedKeys, failedKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletedKeys, deletedKeys_);
      DARABONBA_PTR_FROM_JSON(FailedKeys, failedKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteRoutineEnvironmentVariablesResponseBody() = default ;
    DeleteRoutineEnvironmentVariablesResponseBody(const DeleteRoutineEnvironmentVariablesResponseBody &) = default ;
    DeleteRoutineEnvironmentVariablesResponseBody(DeleteRoutineEnvironmentVariablesResponseBody &&) = default ;
    DeleteRoutineEnvironmentVariablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineEnvironmentVariablesResponseBody() = default ;
    DeleteRoutineEnvironmentVariablesResponseBody& operator=(const DeleteRoutineEnvironmentVariablesResponseBody &) = default ;
    DeleteRoutineEnvironmentVariablesResponseBody& operator=(DeleteRoutineEnvironmentVariablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletedKeys_ == nullptr
        && this->failedKeys_ == nullptr && this->requestId_ == nullptr; };
    // deletedKeys Field Functions 
    bool hasDeletedKeys() const { return this->deletedKeys_ != nullptr;};
    void deleteDeletedKeys() { this->deletedKeys_ = nullptr;};
    inline const vector<string> & getDeletedKeys() const { DARABONBA_PTR_GET_CONST(deletedKeys_, vector<string>) };
    inline vector<string> getDeletedKeys() { DARABONBA_PTR_GET(deletedKeys_, vector<string>) };
    inline DeleteRoutineEnvironmentVariablesResponseBody& setDeletedKeys(const vector<string> & deletedKeys) { DARABONBA_PTR_SET_VALUE(deletedKeys_, deletedKeys) };
    inline DeleteRoutineEnvironmentVariablesResponseBody& setDeletedKeys(vector<string> && deletedKeys) { DARABONBA_PTR_SET_RVALUE(deletedKeys_, deletedKeys) };


    // failedKeys Field Functions 
    bool hasFailedKeys() const { return this->failedKeys_ != nullptr;};
    void deleteFailedKeys() { this->failedKeys_ = nullptr;};
    inline const vector<string> & getFailedKeys() const { DARABONBA_PTR_GET_CONST(failedKeys_, vector<string>) };
    inline vector<string> getFailedKeys() { DARABONBA_PTR_GET(failedKeys_, vector<string>) };
    inline DeleteRoutineEnvironmentVariablesResponseBody& setFailedKeys(const vector<string> & failedKeys) { DARABONBA_PTR_SET_VALUE(failedKeys_, failedKeys) };
    inline DeleteRoutineEnvironmentVariablesResponseBody& setFailedKeys(vector<string> && failedKeys) { DARABONBA_PTR_SET_RVALUE(failedKeys_, failedKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteRoutineEnvironmentVariablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of environment variable keys that were deleted successfully.
    shared_ptr<vector<string>> deletedKeys_ {};
    // The list of environment variable keys that failed to be deleted.
    shared_ptr<vector<string>> failedKeys_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
