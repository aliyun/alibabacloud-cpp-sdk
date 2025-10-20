// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREVOKEPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHREVOKEPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FailurePermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class BatchRevokePermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRevokePermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(failurePermissions, failurePermissions_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRevokePermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(failurePermissions, failurePermissions_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    BatchRevokePermissionsResponseBody() = default ;
    BatchRevokePermissionsResponseBody(const BatchRevokePermissionsResponseBody &) = default ;
    BatchRevokePermissionsResponseBody(BatchRevokePermissionsResponseBody &&) = default ;
    BatchRevokePermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRevokePermissionsResponseBody() = default ;
    BatchRevokePermissionsResponseBody& operator=(const BatchRevokePermissionsResponseBody &) = default ;
    BatchRevokePermissionsResponseBody& operator=(BatchRevokePermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->failurePermissions_ == nullptr && return this->success_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BatchRevokePermissionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // failurePermissions Field Functions 
    bool hasFailurePermissions() const { return this->failurePermissions_ != nullptr;};
    void deleteFailurePermissions() { this->failurePermissions_ = nullptr;};
    inline const vector<FailurePermission> & failurePermissions() const { DARABONBA_PTR_GET_CONST(failurePermissions_, vector<FailurePermission>) };
    inline vector<FailurePermission> failurePermissions() { DARABONBA_PTR_GET(failurePermissions_, vector<FailurePermission>) };
    inline BatchRevokePermissionsResponseBody& setFailurePermissions(const vector<FailurePermission> & failurePermissions) { DARABONBA_PTR_SET_VALUE(failurePermissions_, failurePermissions) };
    inline BatchRevokePermissionsResponseBody& setFailurePermissions(vector<FailurePermission> && failurePermissions) { DARABONBA_PTR_SET_RVALUE(failurePermissions_, failurePermissions) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchRevokePermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<FailurePermission>> failurePermissions_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
