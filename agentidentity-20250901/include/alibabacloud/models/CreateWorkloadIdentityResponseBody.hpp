// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkloadIdentityResponseBodyWorkloadIdentity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateWorkloadIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentity, workloadIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentity, workloadIdentity_);
    };
    CreateWorkloadIdentityResponseBody() = default ;
    CreateWorkloadIdentityResponseBody(const CreateWorkloadIdentityResponseBody &) = default ;
    CreateWorkloadIdentityResponseBody(CreateWorkloadIdentityResponseBody &&) = default ;
    CreateWorkloadIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkloadIdentityResponseBody() = default ;
    CreateWorkloadIdentityResponseBody& operator=(const CreateWorkloadIdentityResponseBody &) = default ;
    CreateWorkloadIdentityResponseBody& operator=(CreateWorkloadIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workloadIdentity_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkloadIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workloadIdentity Field Functions 
    bool hasWorkloadIdentity() const { return this->workloadIdentity_ != nullptr;};
    void deleteWorkloadIdentity() { this->workloadIdentity_ = nullptr;};
    inline const CreateWorkloadIdentityResponseBodyWorkloadIdentity & workloadIdentity() const { DARABONBA_PTR_GET_CONST(workloadIdentity_, CreateWorkloadIdentityResponseBodyWorkloadIdentity) };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity workloadIdentity() { DARABONBA_PTR_GET(workloadIdentity_, CreateWorkloadIdentityResponseBodyWorkloadIdentity) };
    inline CreateWorkloadIdentityResponseBody& setWorkloadIdentity(const CreateWorkloadIdentityResponseBodyWorkloadIdentity & workloadIdentity) { DARABONBA_PTR_SET_VALUE(workloadIdentity_, workloadIdentity) };
    inline CreateWorkloadIdentityResponseBody& setWorkloadIdentity(CreateWorkloadIdentityResponseBodyWorkloadIdentity && workloadIdentity) { DARABONBA_PTR_SET_RVALUE(workloadIdentity_, workloadIdentity) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateWorkloadIdentityResponseBodyWorkloadIdentity> workloadIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
