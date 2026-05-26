// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class WorkloadIdentity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkloadIdentity& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(SessionBindingEnabled, sessionBindingEnabled_);
        DARABONBA_PTR_TO_JSON(SourceAgentArn, sourceAgentArn_);
        DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(WorkloadIdentityArn, workloadIdentityArn_);
        DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
      };
      friend void from_json(const Darabonba::Json& j, WorkloadIdentity& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(SessionBindingEnabled, sessionBindingEnabled_);
        DARABONBA_PTR_FROM_JSON(SourceAgentArn, sourceAgentArn_);
        DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(WorkloadIdentityArn, workloadIdentityArn_);
        DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
      };
      WorkloadIdentity() = default ;
      WorkloadIdentity(const WorkloadIdentity &) = default ;
      WorkloadIdentity(WorkloadIdentity &&) = default ;
      WorkloadIdentity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkloadIdentity() = default ;
      WorkloadIdentity& operator=(const WorkloadIdentity &) = default ;
      WorkloadIdentity& operator=(WorkloadIdentity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedResourceOAuth2ReturnURLs_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->identityProviderName_ == nullptr && this->roleArn_ == nullptr && this->sessionBindingEnabled_ == nullptr
        && this->sourceAgentArn_ == nullptr && this->sourcePlatform_ == nullptr && this->updateTime_ == nullptr && this->workloadIdentityArn_ == nullptr && this->workloadIdentityName_ == nullptr; };
      // allowedResourceOAuth2ReturnURLs Field Functions 
      bool hasAllowedResourceOAuth2ReturnURLs() const { return this->allowedResourceOAuth2ReturnURLs_ != nullptr;};
      void deleteAllowedResourceOAuth2ReturnURLs() { this->allowedResourceOAuth2ReturnURLs_ = nullptr;};
      inline const vector<string> & getAllowedResourceOAuth2ReturnURLs() const { DARABONBA_PTR_GET_CONST(allowedResourceOAuth2ReturnURLs_, vector<string>) };
      inline vector<string> getAllowedResourceOAuth2ReturnURLs() { DARABONBA_PTR_GET(allowedResourceOAuth2ReturnURLs_, vector<string>) };
      inline WorkloadIdentity& setAllowedResourceOAuth2ReturnURLs(const vector<string> & allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_VALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };
      inline WorkloadIdentity& setAllowedResourceOAuth2ReturnURLs(vector<string> && allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_RVALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline WorkloadIdentity& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline WorkloadIdentity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // identityProviderName Field Functions 
      bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
      void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
      inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
      inline WorkloadIdentity& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline WorkloadIdentity& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // sessionBindingEnabled Field Functions 
      bool hasSessionBindingEnabled() const { return this->sessionBindingEnabled_ != nullptr;};
      void deleteSessionBindingEnabled() { this->sessionBindingEnabled_ = nullptr;};
      inline bool getSessionBindingEnabled() const { DARABONBA_PTR_GET_DEFAULT(sessionBindingEnabled_, false) };
      inline WorkloadIdentity& setSessionBindingEnabled(bool sessionBindingEnabled) { DARABONBA_PTR_SET_VALUE(sessionBindingEnabled_, sessionBindingEnabled) };


      // sourceAgentArn Field Functions 
      bool hasSourceAgentArn() const { return this->sourceAgentArn_ != nullptr;};
      void deleteSourceAgentArn() { this->sourceAgentArn_ = nullptr;};
      inline string getSourceAgentArn() const { DARABONBA_PTR_GET_DEFAULT(sourceAgentArn_, "") };
      inline WorkloadIdentity& setSourceAgentArn(string sourceAgentArn) { DARABONBA_PTR_SET_VALUE(sourceAgentArn_, sourceAgentArn) };


      // sourcePlatform Field Functions 
      bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
      void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
      inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
      inline WorkloadIdentity& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline WorkloadIdentity& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workloadIdentityArn Field Functions 
      bool hasWorkloadIdentityArn() const { return this->workloadIdentityArn_ != nullptr;};
      void deleteWorkloadIdentityArn() { this->workloadIdentityArn_ = nullptr;};
      inline string getWorkloadIdentityArn() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityArn_, "") };
      inline WorkloadIdentity& setWorkloadIdentityArn(string workloadIdentityArn) { DARABONBA_PTR_SET_VALUE(workloadIdentityArn_, workloadIdentityArn) };


      // workloadIdentityName Field Functions 
      bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
      void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
      inline string getWorkloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
      inline WorkloadIdentity& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


    protected:
      shared_ptr<vector<string>> allowedResourceOAuth2ReturnURLs_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> identityProviderName_ {};
      shared_ptr<string> roleArn_ {};
      shared_ptr<bool> sessionBindingEnabled_ {};
      shared_ptr<string> sourceAgentArn_ {};
      shared_ptr<string> sourcePlatform_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> workloadIdentityArn_ {};
      shared_ptr<string> workloadIdentityName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->workloadIdentity_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkloadIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workloadIdentity Field Functions 
    bool hasWorkloadIdentity() const { return this->workloadIdentity_ != nullptr;};
    void deleteWorkloadIdentity() { this->workloadIdentity_ = nullptr;};
    inline const CreateWorkloadIdentityResponseBody::WorkloadIdentity & getWorkloadIdentity() const { DARABONBA_PTR_GET_CONST(workloadIdentity_, CreateWorkloadIdentityResponseBody::WorkloadIdentity) };
    inline CreateWorkloadIdentityResponseBody::WorkloadIdentity getWorkloadIdentity() { DARABONBA_PTR_GET(workloadIdentity_, CreateWorkloadIdentityResponseBody::WorkloadIdentity) };
    inline CreateWorkloadIdentityResponseBody& setWorkloadIdentity(const CreateWorkloadIdentityResponseBody::WorkloadIdentity & workloadIdentity) { DARABONBA_PTR_SET_VALUE(workloadIdentity_, workloadIdentity) };
    inline CreateWorkloadIdentityResponseBody& setWorkloadIdentity(CreateWorkloadIdentityResponseBody::WorkloadIdentity && workloadIdentity) { DARABONBA_PTR_SET_RVALUE(workloadIdentity_, workloadIdentity) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateWorkloadIdentityResponseBody::WorkloadIdentity> workloadIdentity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
