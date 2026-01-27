// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPRIVATEACCESSPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPRIVATEACCESSPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserPrivateAccessPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPrivateAccessPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPrivateAccessPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListUserPrivateAccessPoliciesResponseBody() = default ;
    ListUserPrivateAccessPoliciesResponseBody(const ListUserPrivateAccessPoliciesResponseBody &) = default ;
    ListUserPrivateAccessPoliciesResponseBody(ListUserPrivateAccessPoliciesResponseBody &&) = default ;
    ListUserPrivateAccessPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPrivateAccessPoliciesResponseBody() = default ;
    ListUserPrivateAccessPoliciesResponseBody& operator=(const ListUserPrivateAccessPoliciesResponseBody &) = default ;
    ListUserPrivateAccessPoliciesResponseBody& operator=(ListUserPrivateAccessPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Polices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Polices& obj) { 
        DARABONBA_PTR_TO_JSON(CustomUserAttributes, customUserAttributes_);
        DARABONBA_PTR_TO_JSON(DeviceAttributeName, deviceAttributeName_);
        DARABONBA_PTR_TO_JSON(MatchedUserGroup, matchedUserGroup_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(TrustedProcessGroupIds, trustedProcessGroupIds_);
        DARABONBA_PTR_TO_JSON(TrustedSoftwareIds, trustedSoftwareIds_);
        DARABONBA_PTR_TO_JSON(UserGroupMode, userGroupMode_);
      };
      friend void from_json(const Darabonba::Json& j, Polices& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomUserAttributes, customUserAttributes_);
        DARABONBA_PTR_FROM_JSON(DeviceAttributeName, deviceAttributeName_);
        DARABONBA_PTR_FROM_JSON(MatchedUserGroup, matchedUserGroup_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(TrustedProcessGroupIds, trustedProcessGroupIds_);
        DARABONBA_PTR_FROM_JSON(TrustedSoftwareIds, trustedSoftwareIds_);
        DARABONBA_PTR_FROM_JSON(UserGroupMode, userGroupMode_);
      };
      Polices() = default ;
      Polices(const Polices &) = default ;
      Polices(Polices &&) = default ;
      Polices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Polices() = default ;
      Polices& operator=(const Polices &) = default ;
      Polices& operator=(Polices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomUserAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomUserAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(IdpId, idpId_);
          DARABONBA_PTR_TO_JSON(Relation, relation_);
          DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, CustomUserAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
          DARABONBA_PTR_FROM_JSON(Relation, relation_);
          DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        CustomUserAttributes() = default ;
        CustomUserAttributes(const CustomUserAttributes &) = default ;
        CustomUserAttributes(CustomUserAttributes &&) = default ;
        CustomUserAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomUserAttributes() = default ;
        CustomUserAttributes& operator=(const CustomUserAttributes &) = default ;
        CustomUserAttributes& operator=(CustomUserAttributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->idpId_ == nullptr
        && this->relation_ == nullptr && this->userGroupType_ == nullptr && this->value_ == nullptr; };
        // idpId Field Functions 
        bool hasIdpId() const { return this->idpId_ != nullptr;};
        void deleteIdpId() { this->idpId_ = nullptr;};
        inline int32_t getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, 0) };
        inline CustomUserAttributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


        // relation Field Functions 
        bool hasRelation() const { return this->relation_ != nullptr;};
        void deleteRelation() { this->relation_ = nullptr;};
        inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
        inline CustomUserAttributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


        // userGroupType Field Functions 
        bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
        void deleteUserGroupType() { this->userGroupType_ = nullptr;};
        inline string getUserGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
        inline CustomUserAttributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline CustomUserAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The identity provider ID of the user group. This value exists when the custom user group type is **department**.
        shared_ptr<int32_t> idpId_ {};
        // Relation of the user group. Values:
        // - **Equal**: Equal.
        // - **Unequal**: Not equal.
        shared_ptr<string> relation_ {};
        // Type of the user group. Values:
        // - **username**: Username.
        // - **department**: Department.
        // - **email**: Email.
        // - **telephone**: Telephone.
        shared_ptr<string> userGroupType_ {};
        // The value of the user group attribute.
        // - When the user group type is **username**, it represents the value of the username. The length is 1 to 128 characters, supporting Chinese and case-sensitive English letters, and can include numbers, periods (.), underscores (_), and hyphens (-).
        // - When the user group type is **department**, it represents the value of the department. For example: OU=Department1,OU=SASE DingTalk.
        // - When the user group type is **email**, it represents the value of the email. For example: username@example.com.
        // - When the user group type is **telephone**, it represents the value of the phone number. For example: 13900001234.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->customUserAttributes_ == nullptr
        && this->deviceAttributeName_ == nullptr && this->matchedUserGroup_ == nullptr && this->name_ == nullptr && this->policyAction_ == nullptr && this->policyId_ == nullptr
        && this->priority_ == nullptr && this->trustedProcessGroupIds_ == nullptr && this->trustedSoftwareIds_ == nullptr && this->userGroupMode_ == nullptr; };
      // customUserAttributes Field Functions 
      bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
      void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
      inline const vector<Polices::CustomUserAttributes> & getCustomUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Polices::CustomUserAttributes>) };
      inline vector<Polices::CustomUserAttributes> getCustomUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Polices::CustomUserAttributes>) };
      inline Polices& setCustomUserAttributes(const vector<Polices::CustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
      inline Polices& setCustomUserAttributes(vector<Polices::CustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


      // deviceAttributeName Field Functions 
      bool hasDeviceAttributeName() const { return this->deviceAttributeName_ != nullptr;};
      void deleteDeviceAttributeName() { this->deviceAttributeName_ = nullptr;};
      inline string getDeviceAttributeName() const { DARABONBA_PTR_GET_DEFAULT(deviceAttributeName_, "") };
      inline Polices& setDeviceAttributeName(string deviceAttributeName) { DARABONBA_PTR_SET_VALUE(deviceAttributeName_, deviceAttributeName) };


      // matchedUserGroup Field Functions 
      bool hasMatchedUserGroup() const { return this->matchedUserGroup_ != nullptr;};
      void deleteMatchedUserGroup() { this->matchedUserGroup_ = nullptr;};
      inline string getMatchedUserGroup() const { DARABONBA_PTR_GET_DEFAULT(matchedUserGroup_, "") };
      inline Polices& setMatchedUserGroup(string matchedUserGroup) { DARABONBA_PTR_SET_VALUE(matchedUserGroup_, matchedUserGroup) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Polices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policyAction Field Functions 
      bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
      void deletePolicyAction() { this->policyAction_ = nullptr;};
      inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
      inline Polices& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Polices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline Polices& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // trustedProcessGroupIds Field Functions 
      bool hasTrustedProcessGroupIds() const { return this->trustedProcessGroupIds_ != nullptr;};
      void deleteTrustedProcessGroupIds() { this->trustedProcessGroupIds_ = nullptr;};
      inline const vector<string> & getTrustedProcessGroupIds() const { DARABONBA_PTR_GET_CONST(trustedProcessGroupIds_, vector<string>) };
      inline vector<string> getTrustedProcessGroupIds() { DARABONBA_PTR_GET(trustedProcessGroupIds_, vector<string>) };
      inline Polices& setTrustedProcessGroupIds(const vector<string> & trustedProcessGroupIds) { DARABONBA_PTR_SET_VALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };
      inline Polices& setTrustedProcessGroupIds(vector<string> && trustedProcessGroupIds) { DARABONBA_PTR_SET_RVALUE(trustedProcessGroupIds_, trustedProcessGroupIds) };


      // trustedSoftwareIds Field Functions 
      bool hasTrustedSoftwareIds() const { return this->trustedSoftwareIds_ != nullptr;};
      void deleteTrustedSoftwareIds() { this->trustedSoftwareIds_ = nullptr;};
      inline const vector<string> & getTrustedSoftwareIds() const { DARABONBA_PTR_GET_CONST(trustedSoftwareIds_, vector<string>) };
      inline vector<string> getTrustedSoftwareIds() { DARABONBA_PTR_GET(trustedSoftwareIds_, vector<string>) };
      inline Polices& setTrustedSoftwareIds(const vector<string> & trustedSoftwareIds) { DARABONBA_PTR_SET_VALUE(trustedSoftwareIds_, trustedSoftwareIds) };
      inline Polices& setTrustedSoftwareIds(vector<string> && trustedSoftwareIds) { DARABONBA_PTR_SET_RVALUE(trustedSoftwareIds_, trustedSoftwareIds) };


      // userGroupMode Field Functions 
      bool hasUserGroupMode() const { return this->userGroupMode_ != nullptr;};
      void deleteUserGroupMode() { this->userGroupMode_ = nullptr;};
      inline string getUserGroupMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupMode_, "") };
      inline Polices& setUserGroupMode(string userGroupMode) { DARABONBA_PTR_SET_VALUE(userGroupMode_, userGroupMode) };


    protected:
      // Set of custom user group attributes. Multiple custom user group attributes are in an OR relationship, effective as a union.
      shared_ptr<vector<Polices::CustomUserAttributes>> customUserAttributes_ {};
      // Associated security baseline.
      shared_ptr<string> deviceAttributeName_ {};
      // Associated user group.
      shared_ptr<string> matchedUserGroup_ {};
      // Intranet access policy name.
      shared_ptr<string> name_ {};
      // Action of the intranet access policy. Values:
      // - **Block**: Block.
      // - **Allow**: Allow.
      shared_ptr<string> policyAction_ {};
      // Intranet access policy ID.
      shared_ptr<string> policyId_ {};
      // Priority of the intranet access policy. The number 1 indicates the highest priority.
      shared_ptr<int64_t> priority_ {};
      // List of trusted process group IDs.
      shared_ptr<vector<string>> trustedProcessGroupIds_ {};
      // List of trusted software IDs.
      shared_ptr<vector<string>> trustedSoftwareIds_ {};
      // Type of the user group for the intranet access policy. Values:
      // - **Normal**: Normal user group.
      // - **Custom**: Custom user group.
      shared_ptr<string> userGroupMode_ {};
    };

    virtual bool empty() const override { return this->polices_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<ListUserPrivateAccessPoliciesResponseBody::Polices> & getPolices() const { DARABONBA_PTR_GET_CONST(polices_, vector<ListUserPrivateAccessPoliciesResponseBody::Polices>) };
    inline vector<ListUserPrivateAccessPoliciesResponseBody::Polices> getPolices() { DARABONBA_PTR_GET(polices_, vector<ListUserPrivateAccessPoliciesResponseBody::Polices>) };
    inline ListUserPrivateAccessPoliciesResponseBody& setPolices(const vector<ListUserPrivateAccessPoliciesResponseBody::Polices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListUserPrivateAccessPoliciesResponseBody& setPolices(vector<ListUserPrivateAccessPoliciesResponseBody::Polices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPrivateAccessPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListUserPrivateAccessPoliciesResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // List of authorized policies.
    shared_ptr<vector<ListUserPrivateAccessPoliciesResponseBody::Polices>> polices_ {};
    // ID of the request.
    shared_ptr<string> requestId_ {};
    // Total number of authorized policies.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
