// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSIGNATUREAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSIGNATUREAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetSignatureApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSignatureApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, SetSignatureApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    SetSignatureApisRequest() = default ;
    SetSignatureApisRequest(const SetSignatureApisRequest &) = default ;
    SetSignatureApisRequest(SetSignatureApisRequest &&) = default ;
    SetSignatureApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSignatureApisRequest() = default ;
    SetSignatureApisRequest& operator=(const SetSignatureApisRequest &) = default ;
    SetSignatureApisRequest& operator=(SetSignatureApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIds_ == nullptr
        && this->groupId_ == nullptr && this->securityToken_ == nullptr && this->signatureId_ == nullptr && this->stageName_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline string getApiIds() const { DARABONBA_PTR_GET_DEFAULT(apiIds_, "") };
    inline SetSignatureApisRequest& setApiIds(string apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetSignatureApisRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetSignatureApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string getSignatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline SetSignatureApisRequest& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline SetSignatureApisRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The API IDs.
    // 
    // This parameter is required.
    shared_ptr<string> apiIds_ {};
    // The API group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    shared_ptr<string> securityToken_ {};
    // The signature ID.
    // 
    // This parameter is required.
    shared_ptr<string> signatureId_ {};
    // The environment. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the staging environment
    // *   **TEST**: the testing environment
    // 
    // This parameter is required.
    shared_ptr<string> stageName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
