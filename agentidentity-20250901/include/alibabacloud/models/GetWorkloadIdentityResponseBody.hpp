// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKLOADIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKLOADIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkloadIdentityResponseBodyWorkloadIdentity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetWorkloadIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentity, workloadIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentity, workloadIdentity_);
    };
    GetWorkloadIdentityResponseBody() = default ;
    GetWorkloadIdentityResponseBody(const GetWorkloadIdentityResponseBody &) = default ;
    GetWorkloadIdentityResponseBody(GetWorkloadIdentityResponseBody &&) = default ;
    GetWorkloadIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkloadIdentityResponseBody() = default ;
    GetWorkloadIdentityResponseBody& operator=(const GetWorkloadIdentityResponseBody &) = default ;
    GetWorkloadIdentityResponseBody& operator=(GetWorkloadIdentityResponseBody &&) = default ;
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
    inline GetWorkloadIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workloadIdentity Field Functions 
    bool hasWorkloadIdentity() const { return this->workloadIdentity_ != nullptr;};
    void deleteWorkloadIdentity() { this->workloadIdentity_ = nullptr;};
    inline const GetWorkloadIdentityResponseBodyWorkloadIdentity & workloadIdentity() const { DARABONBA_PTR_GET_CONST(workloadIdentity_, GetWorkloadIdentityResponseBodyWorkloadIdentity) };
    inline GetWorkloadIdentityResponseBodyWorkloadIdentity workloadIdentity() { DARABONBA_PTR_GET(workloadIdentity_, GetWorkloadIdentityResponseBodyWorkloadIdentity) };
    inline GetWorkloadIdentityResponseBody& setWorkloadIdentity(const GetWorkloadIdentityResponseBodyWorkloadIdentity & workloadIdentity) { DARABONBA_PTR_SET_VALUE(workloadIdentity_, workloadIdentity) };
    inline GetWorkloadIdentityResponseBody& setWorkloadIdentity(GetWorkloadIdentityResponseBodyWorkloadIdentity && workloadIdentity) { DARABONBA_PTR_SET_RVALUE(workloadIdentity_, workloadIdentity) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetWorkloadIdentityResponseBodyWorkloadIdentity> workloadIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
