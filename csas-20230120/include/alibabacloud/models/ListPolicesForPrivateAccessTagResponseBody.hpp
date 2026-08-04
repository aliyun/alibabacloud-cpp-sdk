// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
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
  class ListPolicesForPrivateAccessTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListPolicesForPrivateAccessTagResponseBody() = default ;
    ListPolicesForPrivateAccessTagResponseBody(const ListPolicesForPrivateAccessTagResponseBody &) = default ;
    ListPolicesForPrivateAccessTagResponseBody(ListPolicesForPrivateAccessTagResponseBody &&) = default ;
    ListPolicesForPrivateAccessTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessTagResponseBody() = default ;
    ListPolicesForPrivateAccessTagResponseBody& operator=(const ListPolicesForPrivateAccessTagResponseBody &) = default ;
    ListPolicesForPrivateAccessTagResponseBody& operator=(ListPolicesForPrivateAccessTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Polices, polices_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Polices, polices_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
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
      class Polices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Polices& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Polices& obj) { 
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
          // The identity provider ID of the user group. This value exists if the custom user group type is **department**.
          shared_ptr<int32_t> idpId_ {};
          // The relationship of the user group. Values:
          // 
          // - **Equal**: Equal.
          // 
          // - **Unequal**: Unequal.
          shared_ptr<string> relation_ {};
          // The type of user group. Values:
          // 
          // - **username**: Username.
          // 
          // - **department**: Department.
          // 
          // - **email**: Mailbox.
          // 
          // - **telephone**: Mobile phone.
          shared_ptr<string> userGroupType_ {};
          // The value of the user group attribute.
          // 
          // - If the user group type is **username**, this indicates the username\\"s value. The length is 1 to 128 characters. It supports Chinese characters, uppercase and lowercase English letters, and can include numbers, periods (.), underscores (_), and hyphens (-).
          // 
          // - If the user group type is **department**, this indicates the department\\"s value. For example: OU=Department 1,OU=SASE DingTalk.
          // 
          // - If the user group type is **email**, this indicates the mailbox\\"s value. For example: username\\@example.com.
          // 
          // - If the user group type is **telephone**, this indicates the mobile phone\\"s value. For example: 13900001234.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->createTime_ == nullptr && this->customUserAttributes_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->policyAction_ == nullptr
        && this->policyId_ == nullptr && this->priority_ == nullptr && this->status_ == nullptr && this->userGroupType_ == nullptr; };
        // applicationType Field Functions 
        bool hasApplicationType() const { return this->applicationType_ != nullptr;};
        void deleteApplicationType() { this->applicationType_ = nullptr;};
        inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
        inline Polices& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Polices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // customUserAttributes Field Functions 
        bool hasCustomUserAttributes() const { return this->customUserAttributes_ != nullptr;};
        void deleteCustomUserAttributes() { this->customUserAttributes_ = nullptr;};
        inline const vector<Polices::CustomUserAttributes> & getCustomUserAttributes() const { DARABONBA_PTR_GET_CONST(customUserAttributes_, vector<Polices::CustomUserAttributes>) };
        inline vector<Polices::CustomUserAttributes> getCustomUserAttributes() { DARABONBA_PTR_GET(customUserAttributes_, vector<Polices::CustomUserAttributes>) };
        inline Polices& setCustomUserAttributes(const vector<Polices::CustomUserAttributes> & customUserAttributes) { DARABONBA_PTR_SET_VALUE(customUserAttributes_, customUserAttributes) };
        inline Polices& setCustomUserAttributes(vector<Polices::CustomUserAttributes> && customUserAttributes) { DARABONBA_PTR_SET_RVALUE(customUserAttributes_, customUserAttributes) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Polices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Polices& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Polices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userGroupType Field Functions 
        bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
        void deleteUserGroupType() { this->userGroupType_ = nullptr;};
        inline string getUserGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
        inline Polices& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


      protected:
        // The application type of the private network access policy. Values:
        // 
        // - **Application**: Application.
        // 
        // - **Tag**: Tag.
        shared_ptr<string> applicationType_ {};
        // Creation time of the private network access policy.
        shared_ptr<string> createTime_ {};
        // A collection of custom user group attributes. Multiple custom user group attributes have an OR relationship and take effect as a union.
        shared_ptr<vector<Polices::CustomUserAttributes>> customUserAttributes_ {};
        // Description of the private network access policy.
        shared_ptr<string> description_ {};
        // Private network access policy name.
        shared_ptr<string> name_ {};
        // The action that the private access policy performs. Valid values:
        // 
        // - **Block**: Blocks access.
        // 
        // - **Allow**: Allows access.
        shared_ptr<string> policyAction_ {};
        // Private network access policy ID.
        shared_ptr<string> policyId_ {};
        // The private network access policy priority. The number 1 indicates the highest priority.
        shared_ptr<int32_t> priority_ {};
        // The status of the private network access policy. Values:
        // 
        // - **Enabled**: Enabled.
        // 
        // - **Disabled**: Disabled.
        shared_ptr<string> status_ {};
        // The user group type of the private network access policy. Values:
        // 
        // - **Normal**: Normal user group.
        // 
        // - **Custom**: Custom user group.
        shared_ptr<string> userGroupType_ {};
      };

      virtual bool empty() const override { return this->polices_ == nullptr
        && this->tagId_ == nullptr; };
      // polices Field Functions 
      bool hasPolices() const { return this->polices_ != nullptr;};
      void deletePolices() { this->polices_ = nullptr;};
      inline const vector<Tags::Polices> & getPolices() const { DARABONBA_PTR_GET_CONST(polices_, vector<Tags::Polices>) };
      inline vector<Tags::Polices> getPolices() { DARABONBA_PTR_GET(polices_, vector<Tags::Polices>) };
      inline Tags& setPolices(const vector<Tags::Polices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
      inline Tags& setPolices(vector<Tags::Polices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline Tags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      // Collection of private network access policies.
      shared_ptr<vector<Tags::Polices>> polices_ {};
      // Private network access tag ID.
      shared_ptr<string> tagId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tags_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicesForPrivateAccessTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListPolicesForPrivateAccessTagResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListPolicesForPrivateAccessTagResponseBody::Tags>) };
    inline vector<ListPolicesForPrivateAccessTagResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListPolicesForPrivateAccessTagResponseBody::Tags>) };
    inline ListPolicesForPrivateAccessTagResponseBody& setTags(const vector<ListPolicesForPrivateAccessTagResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPolicesForPrivateAccessTagResponseBody& setTags(vector<ListPolicesForPrivateAccessTagResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of this request.
    shared_ptr<string> requestId_ {};
    // List of private network access tags.
    shared_ptr<vector<ListPolicesForPrivateAccessTagResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
