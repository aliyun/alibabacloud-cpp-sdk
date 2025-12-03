// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUSHRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUSHRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePushRuleRequestRuleInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdatePushRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePushRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(ruleInfos, ruleInfos_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePushRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(ruleInfos, ruleInfos_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    UpdatePushRuleRequest() = default ;
    UpdatePushRuleRequest(const UpdatePushRuleRequest &) = default ;
    UpdatePushRuleRequest(UpdatePushRuleRequest &&) = default ;
    UpdatePushRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePushRuleRequest() = default ;
    UpdatePushRuleRequest& operator=(const UpdatePushRuleRequest &) = default ;
    UpdatePushRuleRequest& operator=(UpdatePushRuleRequest &&) = default ;
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
    inline UpdatePushRuleRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // ruleInfos Field Functions 
    bool hasRuleInfos() const { return this->ruleInfos_ != nullptr;};
    void deleteRuleInfos() { this->ruleInfos_ = nullptr;};
    inline const vector<UpdatePushRuleRequestRuleInfos> & ruleInfos() const { DARABONBA_PTR_GET_CONST(ruleInfos_, vector<UpdatePushRuleRequestRuleInfos>) };
    inline vector<UpdatePushRuleRequestRuleInfos> ruleInfos() { DARABONBA_PTR_GET(ruleInfos_, vector<UpdatePushRuleRequestRuleInfos>) };
    inline UpdatePushRuleRequest& setRuleInfos(const vector<UpdatePushRuleRequestRuleInfos> & ruleInfos) { DARABONBA_PTR_SET_VALUE(ruleInfos_, ruleInfos) };
    inline UpdatePushRuleRequest& setRuleInfos(vector<UpdatePushRuleRequestRuleInfos> && ruleInfos) { DARABONBA_PTR_SET_RVALUE(ruleInfos_, ruleInfos) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdatePushRuleRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<vector<UpdatePushRuleRequestRuleInfos>> ruleInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
