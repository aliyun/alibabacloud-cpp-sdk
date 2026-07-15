// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOAUTHTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOAUTHTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateOauthTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOauthTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Audience, audience_);
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestedTokenType, requestedTokenType_);
      DARABONBA_PTR_TO_JSON(ScopeValues, scopeValues_);
      DARABONBA_PTR_TO_JSON(SubjectToken, subjectToken_);
      DARABONBA_PTR_TO_JSON(SubjectTokenType, subjectTokenType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOauthTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Audience, audience_);
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestedTokenType, requestedTokenType_);
      DARABONBA_PTR_FROM_JSON(ScopeValues, scopeValues_);
      DARABONBA_PTR_FROM_JSON(SubjectToken, subjectToken_);
      DARABONBA_PTR_FROM_JSON(SubjectTokenType, subjectTokenType_);
    };
    GenerateOauthTokenRequest() = default ;
    GenerateOauthTokenRequest(const GenerateOauthTokenRequest &) = default ;
    GenerateOauthTokenRequest(GenerateOauthTokenRequest &&) = default ;
    GenerateOauthTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOauthTokenRequest() = default ;
    GenerateOauthTokenRequest& operator=(const GenerateOauthTokenRequest &) = default ;
    GenerateOauthTokenRequest& operator=(GenerateOauthTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->audience_ == nullptr && this->grantType_ == nullptr && this->instanceId_ == nullptr && this->requestedTokenType_ == nullptr && this->scopeValues_ == nullptr
        && this->subjectToken_ == nullptr && this->subjectTokenType_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GenerateOauthTokenRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // audience Field Functions 
    bool hasAudience() const { return this->audience_ != nullptr;};
    void deleteAudience() { this->audience_ = nullptr;};
    inline string getAudience() const { DARABONBA_PTR_GET_DEFAULT(audience_, "") };
    inline GenerateOauthTokenRequest& setAudience(string audience) { DARABONBA_PTR_SET_VALUE(audience_, audience) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline GenerateOauthTokenRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateOauthTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestedTokenType Field Functions 
    bool hasRequestedTokenType() const { return this->requestedTokenType_ != nullptr;};
    void deleteRequestedTokenType() { this->requestedTokenType_ = nullptr;};
    inline string getRequestedTokenType() const { DARABONBA_PTR_GET_DEFAULT(requestedTokenType_, "") };
    inline GenerateOauthTokenRequest& setRequestedTokenType(string requestedTokenType) { DARABONBA_PTR_SET_VALUE(requestedTokenType_, requestedTokenType) };


    // scopeValues Field Functions 
    bool hasScopeValues() const { return this->scopeValues_ != nullptr;};
    void deleteScopeValues() { this->scopeValues_ = nullptr;};
    inline const vector<string> & getScopeValues() const { DARABONBA_PTR_GET_CONST(scopeValues_, vector<string>) };
    inline vector<string> getScopeValues() { DARABONBA_PTR_GET(scopeValues_, vector<string>) };
    inline GenerateOauthTokenRequest& setScopeValues(const vector<string> & scopeValues) { DARABONBA_PTR_SET_VALUE(scopeValues_, scopeValues) };
    inline GenerateOauthTokenRequest& setScopeValues(vector<string> && scopeValues) { DARABONBA_PTR_SET_RVALUE(scopeValues_, scopeValues) };


    // subjectToken Field Functions 
    bool hasSubjectToken() const { return this->subjectToken_ != nullptr;};
    void deleteSubjectToken() { this->subjectToken_ = nullptr;};
    inline string getSubjectToken() const { DARABONBA_PTR_GET_DEFAULT(subjectToken_, "") };
    inline GenerateOauthTokenRequest& setSubjectToken(string subjectToken) { DARABONBA_PTR_SET_VALUE(subjectToken_, subjectToken) };


    // subjectTokenType Field Functions 
    bool hasSubjectTokenType() const { return this->subjectTokenType_ != nullptr;};
    void deleteSubjectTokenType() { this->subjectTokenType_ = nullptr;};
    inline string getSubjectTokenType() const { DARABONBA_PTR_GET_DEFAULT(subjectTokenType_, "") };
    inline GenerateOauthTokenRequest& setSubjectTokenType(string subjectTokenType) { DARABONBA_PTR_SET_VALUE(subjectTokenType_, subjectTokenType) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The audience identifier of the resource server.
    // 
    // This parameter is required.
    shared_ptr<string> audience_ {};
    shared_ptr<string> grantType_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> requestedTokenType_ {};
    // The permission scopes.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> scopeValues_ {};
    shared_ptr<string> subjectToken_ {};
    shared_ptr<string> subjectTokenType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
