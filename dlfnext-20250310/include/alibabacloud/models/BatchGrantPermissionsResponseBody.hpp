// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGRANTPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGRANTPERMISSIONSRESPONSEBODY_HPP_
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
  class BatchGrantPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGrantPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(failurePermissions, failurePermissions_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGrantPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(failurePermissions, failurePermissions_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    BatchGrantPermissionsResponseBody() = default ;
    BatchGrantPermissionsResponseBody(const BatchGrantPermissionsResponseBody &) = default ;
    BatchGrantPermissionsResponseBody(BatchGrantPermissionsResponseBody &&) = default ;
    BatchGrantPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGrantPermissionsResponseBody() = default ;
    BatchGrantPermissionsResponseBody& operator=(const BatchGrantPermissionsResponseBody &) = default ;
    BatchGrantPermissionsResponseBody& operator=(BatchGrantPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->failurePermissions_ != nullptr && this->success_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BatchGrantPermissionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // failurePermissions Field Functions 
    bool hasFailurePermissions() const { return this->failurePermissions_ != nullptr;};
    void deleteFailurePermissions() { this->failurePermissions_ = nullptr;};
    inline const vector<FailurePermission> & failurePermissions() const { DARABONBA_PTR_GET_CONST(failurePermissions_, vector<FailurePermission>) };
    inline vector<FailurePermission> failurePermissions() { DARABONBA_PTR_GET(failurePermissions_, vector<FailurePermission>) };
    inline BatchGrantPermissionsResponseBody& setFailurePermissions(const vector<FailurePermission> & failurePermissions) { DARABONBA_PTR_SET_VALUE(failurePermissions_, failurePermissions) };
    inline BatchGrantPermissionsResponseBody& setFailurePermissions(vector<FailurePermission> && failurePermissions) { DARABONBA_PTR_SET_RVALUE(failurePermissions_, failurePermissions) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchGrantPermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<FailurePermission>> failurePermissions_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
