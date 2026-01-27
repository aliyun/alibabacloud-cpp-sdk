// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
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
  class ListPolicesForPrivateAccessApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPolicesForPrivateAccessApplicationResponseBody() = default ;
    ListPolicesForPrivateAccessApplicationResponseBody(const ListPolicesForPrivateAccessApplicationResponseBody &) = default ;
    ListPolicesForPrivateAccessApplicationResponseBody(ListPolicesForPrivateAccessApplicationResponseBody &&) = default ;
    ListPolicesForPrivateAccessApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessApplicationResponseBody() = default ;
    ListPolicesForPrivateAccessApplicationResponseBody& operator=(const ListPolicesForPrivateAccessApplicationResponseBody &) = default ;
    ListPolicesForPrivateAccessApplicationResponseBody& operator=(ListPolicesForPrivateAccessApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(Policies, policies_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(Policies, policies_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Policies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policies& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CustomUserAttributes, customUserAttributes_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
        };
        friend void from_json(const Darabonba::Json& j, Policies& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CustomUserAttributes, customUserAttributes_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
        };
        Policies() = default ;
        Policies(const Policies &) = default ;
        Policies(Policies &&) = default ;
        Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Policies() = default ;
        Policies& operator=(const Policies &) = default ;
        Policies& operator=(Policies &&) = default ;
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
          shared_ptr<int32_t> idpId_ {};
          shared_ptr<string> relation_ {};
          shared_ptr<string> userGroupType_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->createTime_ == nullptr && this->customUserAttributes_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->policyAction_ == nullptr
        && this->policyId_ == nullptr && this->priority_ == nullptr && this->status_ == nullptr && this->userGroupType_ == nullptr; };
        // applicationType Field Functions 
        bool hasApplicationType() const { return this->applicationType_ != nullptr;};
        void deleteApplicationType() { this->applicationType_ = nullptr;};
        inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
        inline Policies& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Policies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // customUserAttributes Field Functions 
        bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
        void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
        inline const vector<Policies::CustomUserAttributes> & getCustomUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Policies::CustomUserAttributes>) };
        inline vector<Policies::CustomUserAttributes> getCustomUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Policies::CustomUserAttributes>) };
        inline Policies& setCustomUserAttributes(const vector<Policies::CustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
        inline Policies& setCustomUserAttributes(vector<Policies::CustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Policies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policyAction Field Functions 
        bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
        void deletePolicyAction() { this->policyAction_ = nullptr;};
        inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
        inline Policies& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline Policies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Policies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Policies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userGroupType Field Functions 
        bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
        void deleteUserGroupType() { this->userGroupType_ = nullptr;};
        inline string getUserGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
        inline Policies& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


      protected:
        shared_ptr<string> applicationType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<vector<Policies::CustomUserAttributes>> customUserAttributes_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> policyAction_ {};
        shared_ptr<string> policyId_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> userGroupType_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->policies_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // policies Field Functions 
      bool hasPolicies() const { return this->policies_ != nullptr;};
      void deletePolicies() { this->policies_ = nullptr;};
      inline const vector<Applications::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Applications::Policies>) };
      inline vector<Applications::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<Applications::Policies>) };
      inline Applications& setPolicies(const vector<Applications::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
      inline Applications& setPolicies(vector<Applications::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    protected:
      shared_ptr<string> applicationId_ {};
      shared_ptr<vector<Applications::Policies>> policies_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListPolicesForPrivateAccessApplicationResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListPolicesForPrivateAccessApplicationResponseBody::Applications>) };
    inline vector<ListPolicesForPrivateAccessApplicationResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListPolicesForPrivateAccessApplicationResponseBody::Applications>) };
    inline ListPolicesForPrivateAccessApplicationResponseBody& setApplications(const vector<ListPolicesForPrivateAccessApplicationResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListPolicesForPrivateAccessApplicationResponseBody& setApplications(vector<ListPolicesForPrivateAccessApplicationResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicesForPrivateAccessApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListPolicesForPrivateAccessApplicationResponseBody::Applications>> applications_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
