// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPUSHRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPUSHRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePushRuleRequestRuleInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreatePushRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePushRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(ruleInfos, ruleInfos_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePushRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(ruleInfos, ruleInfos_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreatePushRuleRequest() = default ;
    CreatePushRuleRequest(const CreatePushRuleRequest &) = default ;
    CreatePushRuleRequest(CreatePushRuleRequest &&) = default ;
    CreatePushRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePushRuleRequest() = default ;
    CreatePushRuleRequest& operator=(const CreatePushRuleRequest &) = default ;
    CreatePushRuleRequest& operator=(CreatePushRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->ruleInfos_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreatePushRuleRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // ruleInfos Field Functions 
    bool hasRuleInfos() const { return this->ruleInfos_ != nullptr;};
    void deleteRuleInfos() { this->ruleInfos_ = nullptr;};
    inline const vector<CreatePushRuleRequestRuleInfos> & ruleInfos() const { DARABONBA_PTR_GET_CONST(ruleInfos_, vector<CreatePushRuleRequestRuleInfos>) };
    inline vector<CreatePushRuleRequestRuleInfos> ruleInfos() { DARABONBA_PTR_GET(ruleInfos_, vector<CreatePushRuleRequestRuleInfos>) };
    inline CreatePushRuleRequest& setRuleInfos(const vector<CreatePushRuleRequestRuleInfos> & ruleInfos) { DARABONBA_PTR_SET_VALUE(ruleInfos_, ruleInfos) };
    inline CreatePushRuleRequest& setRuleInfos(vector<CreatePushRuleRequestRuleInfos> && ruleInfos) { DARABONBA_PTR_SET_RVALUE(ruleInfos_, ruleInfos) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreatePushRuleRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreatePushRuleRequestRuleInfos>> ruleInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
