// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class CreateProtectionPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectionPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BoundResourceCategoryIds, boundResourceCategoryIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProtectionPolicyName, protectionPolicyName_);
      DARABONBA_PTR_TO_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
      DARABONBA_PTR_TO_JSON(SubProtectionPolicies, subProtectionPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectionPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BoundResourceCategoryIds, boundResourceCategoryIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProtectionPolicyName, protectionPolicyName_);
      DARABONBA_PTR_FROM_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
      DARABONBA_PTR_FROM_JSON(SubProtectionPolicies, subProtectionPolicies_);
    };
    CreateProtectionPolicyRequest() = default ;
    CreateProtectionPolicyRequest(const CreateProtectionPolicyRequest &) = default ;
    CreateProtectionPolicyRequest(CreateProtectionPolicyRequest &&) = default ;
    CreateProtectionPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectionPolicyRequest() = default ;
    CreateProtectionPolicyRequest& operator=(const CreateProtectionPolicyRequest &) = default ;
    CreateProtectionPolicyRequest& operator=(CreateProtectionPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubProtectionPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubProtectionPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
      };
      friend void from_json(const Darabonba::Json& j, SubProtectionPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
      };
      SubProtectionPolicies() = default ;
      SubProtectionPolicies(const SubProtectionPolicies &) = default ;
      SubProtectionPolicies(SubProtectionPolicies &&) = default ;
      SubProtectionPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubProtectionPolicies() = default ;
      SubProtectionPolicies& operator=(const SubProtectionPolicies &) = default ;
      SubProtectionPolicies& operator=(SubProtectionPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->subProtectionPolicyType_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline SubProtectionPolicies& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // subProtectionPolicyType Field Functions 
      bool hasSubProtectionPolicyType() const { return this->subProtectionPolicyType_ != nullptr;};
      void deleteSubProtectionPolicyType() { this->subProtectionPolicyType_ = nullptr;};
      inline string getSubProtectionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(subProtectionPolicyType_, "") };
      inline SubProtectionPolicies& setSubProtectionPolicyType(string subProtectionPolicyType) { DARABONBA_PTR_SET_VALUE(subProtectionPolicyType_, subProtectionPolicyType) };


    protected:
      // The configuration of the sub-protection policy.
      shared_ptr<string> config_ {};
      // The type of the sub-protection policy.
      // 
      // This parameter is required.
      shared_ptr<string> subProtectionPolicyType_ {};
    };

    virtual bool empty() const override { return this->boundResourceCategoryIds_ == nullptr
        && this->clientToken_ == nullptr && this->protectionPolicyName_ == nullptr && this->protectionPolicyRegionId_ == nullptr && this->subProtectionPolicies_ == nullptr; };
    // boundResourceCategoryIds Field Functions 
    bool hasBoundResourceCategoryIds() const { return this->boundResourceCategoryIds_ != nullptr;};
    void deleteBoundResourceCategoryIds() { this->boundResourceCategoryIds_ = nullptr;};
    inline const vector<string> & getBoundResourceCategoryIds() const { DARABONBA_PTR_GET_CONST(boundResourceCategoryIds_, vector<string>) };
    inline vector<string> getBoundResourceCategoryIds() { DARABONBA_PTR_GET(boundResourceCategoryIds_, vector<string>) };
    inline CreateProtectionPolicyRequest& setBoundResourceCategoryIds(const vector<string> & boundResourceCategoryIds) { DARABONBA_PTR_SET_VALUE(boundResourceCategoryIds_, boundResourceCategoryIds) };
    inline CreateProtectionPolicyRequest& setBoundResourceCategoryIds(vector<string> && boundResourceCategoryIds) { DARABONBA_PTR_SET_RVALUE(boundResourceCategoryIds_, boundResourceCategoryIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProtectionPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // protectionPolicyName Field Functions 
    bool hasProtectionPolicyName() const { return this->protectionPolicyName_ != nullptr;};
    void deleteProtectionPolicyName() { this->protectionPolicyName_ = nullptr;};
    inline string getProtectionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyName_, "") };
    inline CreateProtectionPolicyRequest& setProtectionPolicyName(string protectionPolicyName) { DARABONBA_PTR_SET_VALUE(protectionPolicyName_, protectionPolicyName) };


    // protectionPolicyRegionId Field Functions 
    bool hasProtectionPolicyRegionId() const { return this->protectionPolicyRegionId_ != nullptr;};
    void deleteProtectionPolicyRegionId() { this->protectionPolicyRegionId_ = nullptr;};
    inline string getProtectionPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyRegionId_, "") };
    inline CreateProtectionPolicyRequest& setProtectionPolicyRegionId(string protectionPolicyRegionId) { DARABONBA_PTR_SET_VALUE(protectionPolicyRegionId_, protectionPolicyRegionId) };


    // subProtectionPolicies Field Functions 
    bool hasSubProtectionPolicies() const { return this->subProtectionPolicies_ != nullptr;};
    void deleteSubProtectionPolicies() { this->subProtectionPolicies_ = nullptr;};
    inline const vector<CreateProtectionPolicyRequest::SubProtectionPolicies> & getSubProtectionPolicies() const { DARABONBA_PTR_GET_CONST(subProtectionPolicies_, vector<CreateProtectionPolicyRequest::SubProtectionPolicies>) };
    inline vector<CreateProtectionPolicyRequest::SubProtectionPolicies> getSubProtectionPolicies() { DARABONBA_PTR_GET(subProtectionPolicies_, vector<CreateProtectionPolicyRequest::SubProtectionPolicies>) };
    inline CreateProtectionPolicyRequest& setSubProtectionPolicies(const vector<CreateProtectionPolicyRequest::SubProtectionPolicies> & subProtectionPolicies) { DARABONBA_PTR_SET_VALUE(subProtectionPolicies_, subProtectionPolicies) };
    inline CreateProtectionPolicyRequest& setSubProtectionPolicies(vector<CreateProtectionPolicyRequest::SubProtectionPolicies> && subProtectionPolicies) { DARABONBA_PTR_SET_RVALUE(subProtectionPolicies_, subProtectionPolicies) };


  protected:
    // The IDs of associated resource categories.
    shared_ptr<vector<string>> boundResourceCategoryIds_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The name of the protection policy.
    // 
    // This parameter is required.
    shared_ptr<string> protectionPolicyName_ {};
    // The region ID of the protection policy.
    // 
    // This parameter is required.
    shared_ptr<string> protectionPolicyRegionId_ {};
    // The sub-protection policies.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateProtectionPolicyRequest::SubProtectionPolicies>> subProtectionPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
