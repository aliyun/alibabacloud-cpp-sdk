// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
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
  class ListTagsForPrivateAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsForPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsForPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTagsForPrivateAccessPolicyResponseBody() = default ;
    ListTagsForPrivateAccessPolicyResponseBody(const ListTagsForPrivateAccessPolicyResponseBody &) = default ;
    ListTagsForPrivateAccessPolicyResponseBody(ListTagsForPrivateAccessPolicyResponseBody &&) = default ;
    ListTagsForPrivateAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsForPrivateAccessPolicyResponseBody() = default ;
    ListTagsForPrivateAccessPolicyResponseBody& operator=(const ListTagsForPrivateAccessPolicyResponseBody &) = default ;
    ListTagsForPrivateAccessPolicyResponseBody& operator=(ListTagsForPrivateAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Polices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Polices& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Polices& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagType, tagType_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagType, tagType_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->tagId_ == nullptr && this->tagType_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Tags& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Tags& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
        inline Tags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagType Field Functions 
        bool hasTagType() const { return this->tagType_ != nullptr;};
        void deleteTagType() { this->tagType_ = nullptr;};
        inline string getTagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
        inline Tags& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


      protected:
        // 内网访问标签创建时间。
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> tagId_ {};
        shared_ptr<string> tagType_ {};
      };

      virtual bool empty() const override { return this->policyId_ == nullptr
        && this->tags_ == nullptr; };
      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Polices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Polices::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Polices::Tags>) };
      inline vector<Polices::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Polices::Tags>) };
      inline Polices& setTags(const vector<Polices::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Polices& setTags(vector<Polices::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> policyId_ {};
      shared_ptr<vector<Polices::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->polices_ == nullptr
        && this->requestId_ == nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<ListTagsForPrivateAccessPolicyResponseBody::Polices> & getPolices() const { DARABONBA_PTR_GET_CONST(polices_, vector<ListTagsForPrivateAccessPolicyResponseBody::Polices>) };
    inline vector<ListTagsForPrivateAccessPolicyResponseBody::Polices> getPolices() { DARABONBA_PTR_GET(polices_, vector<ListTagsForPrivateAccessPolicyResponseBody::Polices>) };
    inline ListTagsForPrivateAccessPolicyResponseBody& setPolices(const vector<ListTagsForPrivateAccessPolicyResponseBody::Polices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListTagsForPrivateAccessPolicyResponseBody& setPolices(vector<ListTagsForPrivateAccessPolicyResponseBody::Polices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListTagsForPrivateAccessPolicyResponseBody::Polices>> polices_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
