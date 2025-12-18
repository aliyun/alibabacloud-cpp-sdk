// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREMEDIATIONSRESPONSEBODYREMEDIATIONDELETERESULTS_HPP_
#define ALIBABACLOUD_MODELS_DELETEREMEDIATIONSRESPONSEBODYREMEDIATIONDELETERESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteRemediationsResponseBodyRemediationDeleteResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRemediationsResponseBodyRemediationDeleteResults& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRemediationsResponseBodyRemediationDeleteResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteRemediationsResponseBodyRemediationDeleteResults() = default ;
    DeleteRemediationsResponseBodyRemediationDeleteResults(const DeleteRemediationsResponseBodyRemediationDeleteResults &) = default ;
    DeleteRemediationsResponseBodyRemediationDeleteResults(DeleteRemediationsResponseBodyRemediationDeleteResults &&) = default ;
    DeleteRemediationsResponseBodyRemediationDeleteResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRemediationsResponseBodyRemediationDeleteResults() = default ;
    DeleteRemediationsResponseBodyRemediationDeleteResults& operator=(const DeleteRemediationsResponseBodyRemediationDeleteResults &) = default ;
    DeleteRemediationsResponseBodyRemediationDeleteResults& operator=(DeleteRemediationsResponseBodyRemediationDeleteResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->remediationId_ == nullptr && return this->success_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DeleteRemediationsResponseBodyRemediationDeleteResults& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // remediationId Field Functions 
    bool hasRemediationId() const { return this->remediationId_ != nullptr;};
    void deleteRemediationId() { this->remediationId_ = nullptr;};
    inline string remediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
    inline DeleteRemediationsResponseBodyRemediationDeleteResults& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteRemediationsResponseBodyRemediationDeleteResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    // 
    // *   If the remediation template is deleted, no error code is returned.
    // *   If the remediation template fails to be deleted, an error code is returned. For more information about error codes, see [Error codes](https://error-center.alibabacloud.com/status/product/Config).
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the remediation template.
    std::shared_ptr<string> remediationId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
