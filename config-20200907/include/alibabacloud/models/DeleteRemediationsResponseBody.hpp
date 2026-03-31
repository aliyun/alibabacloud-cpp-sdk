// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEREMEDIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationDeleteResults, remediationDeleteResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationDeleteResults, remediationDeleteResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteRemediationsResponseBody() = default ;
    DeleteRemediationsResponseBody(const DeleteRemediationsResponseBody &) = default ;
    DeleteRemediationsResponseBody(DeleteRemediationsResponseBody &&) = default ;
    DeleteRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRemediationsResponseBody() = default ;
    DeleteRemediationsResponseBody& operator=(const DeleteRemediationsResponseBody &) = default ;
    DeleteRemediationsResponseBody& operator=(DeleteRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemediationDeleteResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemediationDeleteResults& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, RemediationDeleteResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      RemediationDeleteResults() = default ;
      RemediationDeleteResults(const RemediationDeleteResults &) = default ;
      RemediationDeleteResults(RemediationDeleteResults &&) = default ;
      RemediationDeleteResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemediationDeleteResults() = default ;
      RemediationDeleteResults& operator=(const RemediationDeleteResults &) = default ;
      RemediationDeleteResults& operator=(RemediationDeleteResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->remediationId_ == nullptr && this->success_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline RemediationDeleteResults& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // remediationId Field Functions 
      bool hasRemediationId() const { return this->remediationId_ != nullptr;};
      void deleteRemediationId() { this->remediationId_ = nullptr;};
      inline string getRemediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
      inline RemediationDeleteResults& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline RemediationDeleteResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The error code returned.
      // 
      // *   If the remediation template is deleted, no error code is returned.
      // *   If the remediation template fails to be deleted, an error code is returned. For more information about error codes, see [Error codes](https://error-center.alibabacloud.com/status/product/Config).
      shared_ptr<string> errorMessage_ {};
      // The ID of the remediation template.
      shared_ptr<string> remediationId_ {};
      // Indicates whether the request was successful. Valid values:
      // 
      // *   true: The request was successful.
      // *   false: The request failed.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->remediationDeleteResults_ == nullptr
        && this->requestId_ == nullptr; };
    // remediationDeleteResults Field Functions 
    bool hasRemediationDeleteResults() const { return this->remediationDeleteResults_ != nullptr;};
    void deleteRemediationDeleteResults() { this->remediationDeleteResults_ = nullptr;};
    inline const vector<DeleteRemediationsResponseBody::RemediationDeleteResults> & getRemediationDeleteResults() const { DARABONBA_PTR_GET_CONST(remediationDeleteResults_, vector<DeleteRemediationsResponseBody::RemediationDeleteResults>) };
    inline vector<DeleteRemediationsResponseBody::RemediationDeleteResults> getRemediationDeleteResults() { DARABONBA_PTR_GET(remediationDeleteResults_, vector<DeleteRemediationsResponseBody::RemediationDeleteResults>) };
    inline DeleteRemediationsResponseBody& setRemediationDeleteResults(const vector<DeleteRemediationsResponseBody::RemediationDeleteResults> & remediationDeleteResults) { DARABONBA_PTR_SET_VALUE(remediationDeleteResults_, remediationDeleteResults) };
    inline DeleteRemediationsResponseBody& setRemediationDeleteResults(vector<DeleteRemediationsResponseBody::RemediationDeleteResults> && remediationDeleteResults) { DARABONBA_PTR_SET_RVALUE(remediationDeleteResults_, remediationDeleteResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<vector<DeleteRemediationsResponseBody::RemediationDeleteResults>> remediationDeleteResults_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
