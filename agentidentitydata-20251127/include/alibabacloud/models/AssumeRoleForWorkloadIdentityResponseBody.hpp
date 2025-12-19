// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser.hpp>
#include <alibabacloud/models/AssumeRoleForWorkloadIdentityResponseBodyCredentials.hpp>
#include <alibabacloud/models/AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkloadContextInfo, workloadContextInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkloadContextInfo, workloadContextInfo_);
    };
    AssumeRoleForWorkloadIdentityResponseBody() = default ;
    AssumeRoleForWorkloadIdentityResponseBody(const AssumeRoleForWorkloadIdentityResponseBody &) = default ;
    AssumeRoleForWorkloadIdentityResponseBody(AssumeRoleForWorkloadIdentityResponseBody &&) = default ;
    AssumeRoleForWorkloadIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityResponseBody() = default ;
    AssumeRoleForWorkloadIdentityResponseBody& operator=(const AssumeRoleForWorkloadIdentityResponseBody &) = default ;
    AssumeRoleForWorkloadIdentityResponseBody& operator=(AssumeRoleForWorkloadIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumedRoleUser_ == nullptr
        && return this->credentials_ == nullptr && return this->requestId_ == nullptr && return this->workloadContextInfo_ == nullptr; };
    // assumedRoleUser Field Functions 
    bool hasAssumedRoleUser() const { return this->assumedRoleUser_ != nullptr;};
    void deleteAssumedRoleUser() { this->assumedRoleUser_ = nullptr;};
    inline const AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser & assumedRoleUser() const { DARABONBA_PTR_GET_CONST(assumedRoleUser_, AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser) };
    inline AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser assumedRoleUser() { DARABONBA_PTR_GET(assumedRoleUser_, AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setAssumedRoleUser(const AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser & assumedRoleUser) { DARABONBA_PTR_SET_VALUE(assumedRoleUser_, assumedRoleUser) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setAssumedRoleUser(AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser && assumedRoleUser) { DARABONBA_PTR_SET_RVALUE(assumedRoleUser_, assumedRoleUser) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const AssumeRoleForWorkloadIdentityResponseBodyCredentials & credentials() const { DARABONBA_PTR_GET_CONST(credentials_, AssumeRoleForWorkloadIdentityResponseBodyCredentials) };
    inline AssumeRoleForWorkloadIdentityResponseBodyCredentials credentials() { DARABONBA_PTR_GET(credentials_, AssumeRoleForWorkloadIdentityResponseBodyCredentials) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setCredentials(const AssumeRoleForWorkloadIdentityResponseBodyCredentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setCredentials(AssumeRoleForWorkloadIdentityResponseBodyCredentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workloadContextInfo Field Functions 
    bool hasWorkloadContextInfo() const { return this->workloadContextInfo_ != nullptr;};
    void deleteWorkloadContextInfo() { this->workloadContextInfo_ = nullptr;};
    inline const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo & workloadContextInfo() const { DARABONBA_PTR_GET_CONST(workloadContextInfo_, AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo) };
    inline AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo workloadContextInfo() { DARABONBA_PTR_GET(workloadContextInfo_, AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setWorkloadContextInfo(const AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo & workloadContextInfo) { DARABONBA_PTR_SET_VALUE(workloadContextInfo_, workloadContextInfo) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setWorkloadContextInfo(AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo && workloadContextInfo) { DARABONBA_PTR_SET_RVALUE(workloadContextInfo_, workloadContextInfo) };


  protected:
    std::shared_ptr<AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser> assumedRoleUser_ = nullptr;
    std::shared_ptr<AssumeRoleForWorkloadIdentityResponseBodyCredentials> credentials_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<AssumeRoleForWorkloadIdentityResponseBodyWorkloadContextInfo> workloadContextInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
