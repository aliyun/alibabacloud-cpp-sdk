// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONPOLICIESINACCESSCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONPOLICIESINACCESSCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListPermissionPoliciesInAccessConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionPoliciesInAccessConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionPolicies, permissionPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionPoliciesInAccessConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionPolicies, permissionPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListPermissionPoliciesInAccessConfigurationResponseBody() = default ;
    ListPermissionPoliciesInAccessConfigurationResponseBody(const ListPermissionPoliciesInAccessConfigurationResponseBody &) = default ;
    ListPermissionPoliciesInAccessConfigurationResponseBody(ListPermissionPoliciesInAccessConfigurationResponseBody &&) = default ;
    ListPermissionPoliciesInAccessConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionPoliciesInAccessConfigurationResponseBody() = default ;
    ListPermissionPoliciesInAccessConfigurationResponseBody& operator=(const ListPermissionPoliciesInAccessConfigurationResponseBody &) = default ;
    ListPermissionPoliciesInAccessConfigurationResponseBody& operator=(ListPermissionPoliciesInAccessConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PermissionPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PermissionPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AddTime, addTime_);
        DARABONBA_PTR_TO_JSON(PermissionPolicyDocument, permissionPolicyDocument_);
        DARABONBA_PTR_TO_JSON(PermissionPolicyName, permissionPolicyName_);
        DARABONBA_PTR_TO_JSON(PermissionPolicyType, permissionPolicyType_);
      };
      friend void from_json(const Darabonba::Json& j, PermissionPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
        DARABONBA_PTR_FROM_JSON(PermissionPolicyDocument, permissionPolicyDocument_);
        DARABONBA_PTR_FROM_JSON(PermissionPolicyName, permissionPolicyName_);
        DARABONBA_PTR_FROM_JSON(PermissionPolicyType, permissionPolicyType_);
      };
      PermissionPolicies() = default ;
      PermissionPolicies(const PermissionPolicies &) = default ;
      PermissionPolicies(PermissionPolicies &&) = default ;
      PermissionPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PermissionPolicies() = default ;
      PermissionPolicies& operator=(const PermissionPolicies &) = default ;
      PermissionPolicies& operator=(PermissionPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addTime_ == nullptr
        && this->permissionPolicyDocument_ == nullptr && this->permissionPolicyName_ == nullptr && this->permissionPolicyType_ == nullptr; };
      // addTime Field Functions 
      bool hasAddTime() const { return this->addTime_ != nullptr;};
      void deleteAddTime() { this->addTime_ = nullptr;};
      inline string getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, "") };
      inline PermissionPolicies& setAddTime(string addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


      // permissionPolicyDocument Field Functions 
      bool hasPermissionPolicyDocument() const { return this->permissionPolicyDocument_ != nullptr;};
      void deletePermissionPolicyDocument() { this->permissionPolicyDocument_ = nullptr;};
      inline string getPermissionPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyDocument_, "") };
      inline PermissionPolicies& setPermissionPolicyDocument(string permissionPolicyDocument) { DARABONBA_PTR_SET_VALUE(permissionPolicyDocument_, permissionPolicyDocument) };


      // permissionPolicyName Field Functions 
      bool hasPermissionPolicyName() const { return this->permissionPolicyName_ != nullptr;};
      void deletePermissionPolicyName() { this->permissionPolicyName_ = nullptr;};
      inline string getPermissionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyName_, "") };
      inline PermissionPolicies& setPermissionPolicyName(string permissionPolicyName) { DARABONBA_PTR_SET_VALUE(permissionPolicyName_, permissionPolicyName) };


      // permissionPolicyType Field Functions 
      bool hasPermissionPolicyType() const { return this->permissionPolicyType_ != nullptr;};
      void deletePermissionPolicyType() { this->permissionPolicyType_ = nullptr;};
      inline string getPermissionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyType_, "") };
      inline PermissionPolicies& setPermissionPolicyType(string permissionPolicyType) { DARABONBA_PTR_SET_VALUE(permissionPolicyType_, permissionPolicyType) };


    protected:
      // The time when the policy was created for the access configuration.
      shared_ptr<string> addTime_ {};
      // The configurations of the inline policy.
      // 
      // >  This parameter is returned only when the value of the PermissionPolicyType parameter is Inline.
      shared_ptr<string> permissionPolicyDocument_ {};
      // The name of the policy.
      shared_ptr<string> permissionPolicyName_ {};
      // The type of the policy.
      shared_ptr<string> permissionPolicyType_ {};
    };

    virtual bool empty() const override { return this->permissionPolicies_ == nullptr
        && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // permissionPolicies Field Functions 
    bool hasPermissionPolicies() const { return this->permissionPolicies_ != nullptr;};
    void deletePermissionPolicies() { this->permissionPolicies_ = nullptr;};
    inline const vector<ListPermissionPoliciesInAccessConfigurationResponseBody::PermissionPolicies> & getPermissionPolicies() const { DARABONBA_PTR_GET_CONST(permissionPolicies_, vector<ListPermissionPoliciesInAccessConfigurationResponseBody::PermissionPolicies>) };
    inline vector<ListPermissionPoliciesInAccessConfigurationResponseBody::PermissionPolicies> getPermissionPolicies() { DARABONBA_PTR_GET(permissionPolicies_, vector<ListPermissionPoliciesInAccessConfigurationResponseBody::PermissionPolicies>) };
    inline ListPermissionPoliciesInAccessConfigurationResponseBody& setPermissionPolicies(const vector<ListPermissionPoliciesInAccessConfigurationResponseBody::PermissionPolicies> & permissionPolicies) { DARABONBA_PTR_SET_VALUE(permissionPolicies_, permissionPolicies) };
    inline ListPermissionPoliciesInAccessConfigurationResponseBody& setPermissionPolicies(vector<ListPermissionPoliciesInAccessConfigurationResponseBody::PermissionPolicies> && permissionPolicies) { DARABONBA_PTR_SET_RVALUE(permissionPolicies_, permissionPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPermissionPoliciesInAccessConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListPermissionPoliciesInAccessConfigurationResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The policies.
    shared_ptr<vector<ListPermissionPoliciesInAccessConfigurationResponseBody::PermissionPolicies>> permissionPolicies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of policies.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
