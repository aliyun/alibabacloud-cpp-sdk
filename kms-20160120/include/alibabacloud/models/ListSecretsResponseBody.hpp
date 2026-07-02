// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretList, secretList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretList, secretList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSecretsResponseBody() = default ;
    ListSecretsResponseBody(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody(ListSecretsResponseBody &&) = default ;
    ListSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBody() = default ;
    ListSecretsResponseBody& operator=(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody& operator=(ListSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretList& obj) { 
        DARABONBA_PTR_TO_JSON(Secret, secret_);
      };
      friend void from_json(const Darabonba::Json& j, SecretList& obj) { 
        DARABONBA_PTR_FROM_JSON(Secret, secret_);
      };
      SecretList() = default ;
      SecretList(const SecretList &) = default ;
      SecretList(SecretList &&) = default ;
      SecretList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretList() = default ;
      SecretList& operator=(const SecretList &) = default ;
      SecretList& operator=(SecretList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Secret : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Secret& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(OwingService, owingService_);
          DARABONBA_PTR_TO_JSON(PlannedDeleteTime, plannedDeleteTime_);
          DARABONBA_PTR_TO_JSON(SecretName, secretName_);
          DARABONBA_PTR_TO_JSON(SecretType, secretType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Secret& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(OwingService, owingService_);
          DARABONBA_PTR_FROM_JSON(PlannedDeleteTime, plannedDeleteTime_);
          DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
          DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Secret() = default ;
        Secret(const Secret &) = default ;
        Secret(Secret &&) = default ;
        Secret(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Secret() = default ;
        Secret& operator=(const Secret &) = default ;
        Secret& operator=(Secret &&) = default ;
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

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->owingService_ == nullptr && this->plannedDeleteTime_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr && this->tags_ == nullptr
        && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Secret& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // owingService Field Functions 
        bool hasOwingService() const { return this->owingService_ != nullptr;};
        void deleteOwingService() { this->owingService_ = nullptr;};
        inline string getOwingService() const { DARABONBA_PTR_GET_DEFAULT(owingService_, "") };
        inline Secret& setOwingService(string owingService) { DARABONBA_PTR_SET_VALUE(owingService_, owingService) };


        // plannedDeleteTime Field Functions 
        bool hasPlannedDeleteTime() const { return this->plannedDeleteTime_ != nullptr;};
        void deletePlannedDeleteTime() { this->plannedDeleteTime_ = nullptr;};
        inline string getPlannedDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(plannedDeleteTime_, "") };
        inline Secret& setPlannedDeleteTime(string plannedDeleteTime) { DARABONBA_PTR_SET_VALUE(plannedDeleteTime_, plannedDeleteTime) };


        // secretName Field Functions 
        bool hasSecretName() const { return this->secretName_ != nullptr;};
        void deleteSecretName() { this->secretName_ = nullptr;};
        inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
        inline Secret& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


        // secretType Field Functions 
        bool hasSecretType() const { return this->secretType_ != nullptr;};
        void deleteSecretType() { this->secretType_ = nullptr;};
        inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
        inline Secret& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Secret::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Secret::Tags) };
        inline Secret::Tags getTags() { DARABONBA_PTR_GET(tags_, Secret::Tags) };
        inline Secret& setTags(const Secret::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Secret& setTags(Secret::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Secret& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> owingService_ {};
        shared_ptr<string> plannedDeleteTime_ {};
        shared_ptr<string> secretName_ {};
        shared_ptr<string> secretType_ {};
        shared_ptr<Secret::Tags> tags_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->secret_ == nullptr; };
      // secret Field Functions 
      bool hasSecret() const { return this->secret_ != nullptr;};
      void deleteSecret() { this->secret_ = nullptr;};
      inline const vector<SecretList::Secret> & getSecret() const { DARABONBA_PTR_GET_CONST(secret_, vector<SecretList::Secret>) };
      inline vector<SecretList::Secret> getSecret() { DARABONBA_PTR_GET(secret_, vector<SecretList::Secret>) };
      inline SecretList& setSecret(const vector<SecretList::Secret> & secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };
      inline SecretList& setSecret(vector<SecretList::Secret> && secret) { DARABONBA_PTR_SET_RVALUE(secret_, secret) };


    protected:
      shared_ptr<vector<SecretList::Secret>> secret_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->secretList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretList Field Functions 
    bool hasSecretList() const { return this->secretList_ != nullptr;};
    void deleteSecretList() { this->secretList_ = nullptr;};
    inline const ListSecretsResponseBody::SecretList & getSecretList() const { DARABONBA_PTR_GET_CONST(secretList_, ListSecretsResponseBody::SecretList) };
    inline ListSecretsResponseBody::SecretList getSecretList() { DARABONBA_PTR_GET(secretList_, ListSecretsResponseBody::SecretList) };
    inline ListSecretsResponseBody& setSecretList(const ListSecretsResponseBody::SecretList & secretList) { DARABONBA_PTR_SET_VALUE(secretList_, secretList) };
    inline ListSecretsResponseBody& setSecretList(ListSecretsResponseBody::SecretList && secretList) { DARABONBA_PTR_SET_RVALUE(secretList_, secretList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecretsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier generated by Alibaba Cloud for the request. Use it to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListSecretsResponseBody::SecretList> secretList_ {};
    // The number of secrets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
