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
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScopeValues, scopeValues_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOauthTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Audience, audience_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScopeValues, scopeValues_);
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
        && this->audience_ == nullptr && this->instanceId_ == nullptr && this->scopeValues_ == nullptr; };
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


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateOauthTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scopeValues Field Functions 
    bool hasScopeValues() const { return this->scopeValues_ != nullptr;};
    void deleteScopeValues() { this->scopeValues_ = nullptr;};
    inline const vector<string> & getScopeValues() const { DARABONBA_PTR_GET_CONST(scopeValues_, vector<string>) };
    inline vector<string> getScopeValues() { DARABONBA_PTR_GET(scopeValues_, vector<string>) };
    inline GenerateOauthTokenRequest& setScopeValues(const vector<string> & scopeValues) { DARABONBA_PTR_SET_VALUE(scopeValues_, scopeValues) };
    inline GenerateOauthTokenRequest& setScopeValues(vector<string> && scopeValues) { DARABONBA_PTR_SET_RVALUE(scopeValues_, scopeValues) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> audience_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> scopeValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
