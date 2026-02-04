// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicies, controlPolicies_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicies, controlPolicies_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListControlPoliciesResponseBody() = default ;
    ListControlPoliciesResponseBody(const ListControlPoliciesResponseBody &) = default ;
    ListControlPoliciesResponseBody(ListControlPoliciesResponseBody &&) = default ;
    ListControlPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPoliciesResponseBody() = default ;
    ListControlPoliciesResponseBody& operator=(const ListControlPoliciesResponseBody &) = default ;
    ListControlPoliciesResponseBody& operator=(ListControlPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ControlPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ControlPolicy, controlPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlPolicy, controlPolicy_);
      };
      ControlPolicies() = default ;
      ControlPolicies(const ControlPolicies &) = default ;
      ControlPolicies(ControlPolicies &&) = default ;
      ControlPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPolicies() = default ;
      ControlPolicies& operator=(const ControlPolicies &) = default ;
      ControlPolicies& operator=(ControlPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ControlPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ControlPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(AttachmentCount, attachmentCount_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EffectScope, effectScope_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, ControlPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachmentCount, attachmentCount_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EffectScope, effectScope_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        ControlPolicy() = default ;
        ControlPolicy(const ControlPolicy &) = default ;
        ControlPolicy(ControlPolicy &&) = default ;
        ControlPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ControlPolicy() = default ;
        ControlPolicy& operator=(const ControlPolicy &) = default ;
        ControlPolicy& operator=(ControlPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->attachmentCount_ == nullptr
        && this->createDate_ == nullptr && this->description_ == nullptr && this->effectScope_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policyType_ == nullptr && this->tags_ == nullptr && this->updateDate_ == nullptr; };
        // attachmentCount Field Functions 
        bool hasAttachmentCount() const { return this->attachmentCount_ != nullptr;};
        void deleteAttachmentCount() { this->attachmentCount_ = nullptr;};
        inline string getAttachmentCount() const { DARABONBA_PTR_GET_DEFAULT(attachmentCount_, "") };
        inline ControlPolicy& setAttachmentCount(string attachmentCount) { DARABONBA_PTR_SET_VALUE(attachmentCount_, attachmentCount) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline ControlPolicy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ControlPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectScope Field Functions 
        bool hasEffectScope() const { return this->effectScope_ != nullptr;};
        void deleteEffectScope() { this->effectScope_ = nullptr;};
        inline string getEffectScope() const { DARABONBA_PTR_GET_DEFAULT(effectScope_, "") };
        inline ControlPolicy& setEffectScope(string effectScope) { DARABONBA_PTR_SET_VALUE(effectScope_, effectScope) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline ControlPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline ControlPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline ControlPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ControlPolicy::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ControlPolicy::Tags) };
        inline ControlPolicy::Tags getTags() { DARABONBA_PTR_GET(tags_, ControlPolicy::Tags) };
        inline ControlPolicy& setTags(const ControlPolicy::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ControlPolicy& setTags(ControlPolicy::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline ControlPolicy& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        // The number of times that the access control policy is referenced.
        shared_ptr<string> attachmentCount_ {};
        // The time when the access control policy was created.
        shared_ptr<string> createDate_ {};
        // The description of the access control policy.
        shared_ptr<string> description_ {};
        // The effective scope of the access control policy. Valid values:
        // 
        // *   All: The access control policy is in effect for Alibaba Cloud accounts, RAM users, and RAM roles.
        // *   RAM: The access control policy is in effect only for RAM users and RAM roles.
        shared_ptr<string> effectScope_ {};
        // The ID of the access control policy.
        shared_ptr<string> policyId_ {};
        // The name of the access control policy.
        shared_ptr<string> policyName_ {};
        // The type of the access control policy. Valid values:
        // 
        // *   System: system access control policy
        // *   Custom: custom access control policy
        shared_ptr<string> policyType_ {};
        // The tags.
        shared_ptr<ControlPolicy::Tags> tags_ {};
        // The time when the access control policy was updated.
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->controlPolicy_ == nullptr; };
      // controlPolicy Field Functions 
      bool hasControlPolicy() const { return this->controlPolicy_ != nullptr;};
      void deleteControlPolicy() { this->controlPolicy_ = nullptr;};
      inline const vector<ControlPolicies::ControlPolicy> & getControlPolicy() const { DARABONBA_PTR_GET_CONST(controlPolicy_, vector<ControlPolicies::ControlPolicy>) };
      inline vector<ControlPolicies::ControlPolicy> getControlPolicy() { DARABONBA_PTR_GET(controlPolicy_, vector<ControlPolicies::ControlPolicy>) };
      inline ControlPolicies& setControlPolicy(const vector<ControlPolicies::ControlPolicy> & controlPolicy) { DARABONBA_PTR_SET_VALUE(controlPolicy_, controlPolicy) };
      inline ControlPolicies& setControlPolicy(vector<ControlPolicies::ControlPolicy> && controlPolicy) { DARABONBA_PTR_SET_RVALUE(controlPolicy_, controlPolicy) };


    protected:
      shared_ptr<vector<ControlPolicies::ControlPolicy>> controlPolicy_ {};
    };

    virtual bool empty() const override { return this->controlPolicies_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // controlPolicies Field Functions 
    bool hasControlPolicies() const { return this->controlPolicies_ != nullptr;};
    void deleteControlPolicies() { this->controlPolicies_ = nullptr;};
    inline const ListControlPoliciesResponseBody::ControlPolicies & getControlPolicies() const { DARABONBA_PTR_GET_CONST(controlPolicies_, ListControlPoliciesResponseBody::ControlPolicies) };
    inline ListControlPoliciesResponseBody::ControlPolicies getControlPolicies() { DARABONBA_PTR_GET(controlPolicies_, ListControlPoliciesResponseBody::ControlPolicies) };
    inline ListControlPoliciesResponseBody& setControlPolicies(const ListControlPoliciesResponseBody::ControlPolicies & controlPolicies) { DARABONBA_PTR_SET_VALUE(controlPolicies_, controlPolicies) };
    inline ListControlPoliciesResponseBody& setControlPolicies(ListControlPoliciesResponseBody::ControlPolicies && controlPolicies) { DARABONBA_PTR_SET_RVALUE(controlPolicies_, controlPolicies) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListControlPoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListControlPoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListControlPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListControlPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The access control policies.
    shared_ptr<ListControlPoliciesResponseBody::ControlPolicies> controlPolicies_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of access control policies.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
