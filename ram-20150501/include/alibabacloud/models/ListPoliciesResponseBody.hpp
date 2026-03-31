// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPoliciesResponseBody() = default ;
    ListPoliciesResponseBody(const ListPoliciesResponseBody &) = default ;
    ListPoliciesResponseBody(ListPoliciesResponseBody &&) = default ;
    ListPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesResponseBody() = default ;
    ListPoliciesResponseBody& operator=(const ListPoliciesResponseBody &) = default ;
    ListPoliciesResponseBody& operator=(ListPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(Policy, policy_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
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
      class Policy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policy& obj) { 
          DARABONBA_PTR_TO_JSON(AttachmentCount, attachmentCount_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, Policy& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachmentCount, attachmentCount_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        Policy() = default ;
        Policy(const Policy &) = default ;
        Policy(Policy &&) = default ;
        Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Policy() = default ;
        Policy& operator=(const Policy &) = default ;
        Policy& operator=(Policy &&) = default ;
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
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
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
        && this->createDate_ == nullptr && this->defaultVersion_ == nullptr && this->description_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr
        && this->tags_ == nullptr && this->updateDate_ == nullptr; };
        // attachmentCount Field Functions 
        bool hasAttachmentCount() const { return this->attachmentCount_ != nullptr;};
        void deleteAttachmentCount() { this->attachmentCount_ = nullptr;};
        inline int32_t getAttachmentCount() const { DARABONBA_PTR_GET_DEFAULT(attachmentCount_, 0) };
        inline Policy& setAttachmentCount(int32_t attachmentCount) { DARABONBA_PTR_SET_VALUE(attachmentCount_, attachmentCount) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline Policy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // defaultVersion Field Functions 
        bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
        void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
        inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
        inline Policy& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Policy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline Policy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Policy::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Policy::Tags) };
        inline Policy::Tags getTags() { DARABONBA_PTR_GET(tags_, Policy::Tags) };
        inline Policy& setTags(const Policy::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Policy& setTags(Policy::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline Policy& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        shared_ptr<int32_t> attachmentCount_ {};
        shared_ptr<string> createDate_ {};
        shared_ptr<string> defaultVersion_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> policyName_ {};
        shared_ptr<string> policyType_ {};
        shared_ptr<Policy::Tags> tags_ {};
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->policy_ == nullptr; };
      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline const vector<Policies::Policy> & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, vector<Policies::Policy>) };
      inline vector<Policies::Policy> getPolicy() { DARABONBA_PTR_GET(policy_, vector<Policies::Policy>) };
      inline Policies& setPolicy(const vector<Policies::Policy> & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
      inline Policies& setPolicy(vector<Policies::Policy> && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    protected:
      shared_ptr<vector<Policies::Policy>> policy_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->marker_ == nullptr && this->policies_ == nullptr && this->requestId_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListPoliciesResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListPoliciesResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const ListPoliciesResponseBody::Policies & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, ListPoliciesResponseBody::Policies) };
    inline ListPoliciesResponseBody::Policies getPolicies() { DARABONBA_PTR_GET(policies_, ListPoliciesResponseBody::Policies) };
    inline ListPoliciesResponseBody& setPolicies(const ListPoliciesResponseBody::Policies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListPoliciesResponseBody& setPolicies(ListPoliciesResponseBody::Policies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the response is truncated.
    shared_ptr<bool> isTruncated_ {};
    // The marker. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set `Marker` to obtain the truncated part.``
    shared_ptr<string> marker_ {};
    shared_ptr<ListPoliciesResponseBody::Policies> policies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
