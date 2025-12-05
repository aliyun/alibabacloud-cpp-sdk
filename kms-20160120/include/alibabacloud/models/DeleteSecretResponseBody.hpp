// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DeleteSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlannedDeleteTime, plannedDeleteTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlannedDeleteTime, plannedDeleteTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    DeleteSecretResponseBody() = default ;
    DeleteSecretResponseBody(const DeleteSecretResponseBody &) = default ;
    DeleteSecretResponseBody(DeleteSecretResponseBody &&) = default ;
    DeleteSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecretResponseBody() = default ;
    DeleteSecretResponseBody& operator=(const DeleteSecretResponseBody &) = default ;
    DeleteSecretResponseBody& operator=(DeleteSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->plannedDeleteTime_ == nullptr
        && return this->requestId_ == nullptr && return this->secretName_ == nullptr; };
    // plannedDeleteTime Field Functions 
    bool hasPlannedDeleteTime() const { return this->plannedDeleteTime_ != nullptr;};
    void deletePlannedDeleteTime() { this->plannedDeleteTime_ = nullptr;};
    inline string plannedDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(plannedDeleteTime_, "") };
    inline DeleteSecretResponseBody& setPlannedDeleteTime(string plannedDeleteTime) { DARABONBA_PTR_SET_VALUE(plannedDeleteTime_, plannedDeleteTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DeleteSecretResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // The time when the secret is scheduled to be deleted.
    std::shared_ptr<string> plannedDeleteTime_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
