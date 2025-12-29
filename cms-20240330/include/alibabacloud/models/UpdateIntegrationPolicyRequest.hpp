// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTEGRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTEGRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateIntegrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(feePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(feePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    UpdateIntegrationPolicyRequest() = default ;
    UpdateIntegrationPolicyRequest(const UpdateIntegrationPolicyRequest &) = default ;
    UpdateIntegrationPolicyRequest(UpdateIntegrationPolicyRequest &&) = default ;
    UpdateIntegrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntegrationPolicyRequest() = default ;
    UpdateIntegrationPolicyRequest& operator=(const UpdateIntegrationPolicyRequest &) = default ;
    UpdateIntegrationPolicyRequest& operator=(UpdateIntegrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Tag `key` value.
      shared_ptr<string> key_ {};
      // Tag `value` value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->feePackage_ == nullptr
        && this->policyName_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string getFeePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline UpdateIntegrationPolicyRequest& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdateIntegrationPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateIntegrationPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateIntegrationPolicyRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateIntegrationPolicyRequest::Tags>) };
    inline vector<UpdateIntegrationPolicyRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateIntegrationPolicyRequest::Tags>) };
    inline UpdateIntegrationPolicyRequest& setTags(const vector<UpdateIntegrationPolicyRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateIntegrationPolicyRequest& setTags(vector<UpdateIntegrationPolicyRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Fee package type, CS_Pro/CS_Basic/empty.
    shared_ptr<string> feePackage_ {};
    // Rule name, minimum 3 characters, maximum 63 characters, must start with a letter.
    shared_ptr<string> policyName_ {};
    // Resource group ID of the instance.
    shared_ptr<string> resourceGroupId_ {};
    // Resource tags.
    shared_ptr<vector<UpdateIntegrationPolicyRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
