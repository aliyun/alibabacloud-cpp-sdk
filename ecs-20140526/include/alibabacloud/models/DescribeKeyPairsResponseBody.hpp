// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeKeyPairsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeKeyPairsResponseBody() = default ;
    DescribeKeyPairsResponseBody(const DescribeKeyPairsResponseBody &) = default ;
    DescribeKeyPairsResponseBody(DescribeKeyPairsResponseBody &&) = default ;
    DescribeKeyPairsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsResponseBody() = default ;
    DescribeKeyPairsResponseBody& operator=(const DescribeKeyPairsResponseBody &) = default ;
    DescribeKeyPairsResponseBody& operator=(DescribeKeyPairsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KeyPairs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KeyPairs& obj) { 
        DARABONBA_PTR_TO_JSON(KeyPair, keyPair_);
      };
      friend void from_json(const Darabonba::Json& j, KeyPairs& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyPair, keyPair_);
      };
      KeyPairs() = default ;
      KeyPairs(const KeyPairs &) = default ;
      KeyPairs(KeyPairs &&) = default ;
      KeyPairs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KeyPairs() = default ;
      KeyPairs& operator=(const KeyPairs &) = default ;
      KeyPairs& operator=(KeyPairs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KeyPair : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeyPair& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
          DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, KeyPair& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
          DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        KeyPair() = default ;
        KeyPair(const KeyPair &) = default ;
        KeyPair(KeyPair &&) = default ;
        KeyPair(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeyPair() = default ;
        KeyPair& operator=(const KeyPair &) = default ;
        KeyPair& operator=(KeyPair &&) = default ;
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
            // The tag key of the key pair.
            shared_ptr<string> tagKey_ {};
            // The tag value of the key pair.
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

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->keyPairFingerPrint_ == nullptr && this->keyPairName_ == nullptr && this->publicKey_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline KeyPair& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // keyPairFingerPrint Field Functions 
        bool hasKeyPairFingerPrint() const { return this->keyPairFingerPrint_ != nullptr;};
        void deleteKeyPairFingerPrint() { this->keyPairFingerPrint_ = nullptr;};
        inline string getKeyPairFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(keyPairFingerPrint_, "") };
        inline KeyPair& setKeyPairFingerPrint(string keyPairFingerPrint) { DARABONBA_PTR_SET_VALUE(keyPairFingerPrint_, keyPairFingerPrint) };


        // keyPairName Field Functions 
        bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
        void deleteKeyPairName() { this->keyPairName_ = nullptr;};
        inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
        inline KeyPair& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


        // publicKey Field Functions 
        bool hasPublicKey() const { return this->publicKey_ != nullptr;};
        void deletePublicKey() { this->publicKey_ = nullptr;};
        inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
        inline KeyPair& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline KeyPair& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const KeyPair::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, KeyPair::Tags) };
        inline KeyPair::Tags getTags() { DARABONBA_PTR_GET(tags_, KeyPair::Tags) };
        inline KeyPair& setTags(const KeyPair::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline KeyPair& setTags(KeyPair::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The time when the key pair was created.
        shared_ptr<string> creationTime_ {};
        // The fingerprint of the key pair.
        shared_ptr<string> keyPairFingerPrint_ {};
        // The name of the key pair.
        shared_ptr<string> keyPairName_ {};
        // The content of the public key.
        shared_ptr<string> publicKey_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The tags of the key pair.
        shared_ptr<KeyPair::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->keyPair_ == nullptr; };
      // keyPair Field Functions 
      bool hasKeyPair() const { return this->keyPair_ != nullptr;};
      void deleteKeyPair() { this->keyPair_ = nullptr;};
      inline const vector<KeyPairs::KeyPair> & getKeyPair() const { DARABONBA_PTR_GET_CONST(keyPair_, vector<KeyPairs::KeyPair>) };
      inline vector<KeyPairs::KeyPair> getKeyPair() { DARABONBA_PTR_GET(keyPair_, vector<KeyPairs::KeyPair>) };
      inline KeyPairs& setKeyPair(const vector<KeyPairs::KeyPair> & keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };
      inline KeyPairs& setKeyPair(vector<KeyPairs::KeyPair> && keyPair) { DARABONBA_PTR_SET_RVALUE(keyPair_, keyPair) };


    protected:
      shared_ptr<vector<KeyPairs::KeyPair>> keyPair_ {};
    };

    virtual bool empty() const override { return this->keyPairs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // keyPairs Field Functions 
    bool hasKeyPairs() const { return this->keyPairs_ != nullptr;};
    void deleteKeyPairs() { this->keyPairs_ = nullptr;};
    inline const DescribeKeyPairsResponseBody::KeyPairs & getKeyPairs() const { DARABONBA_PTR_GET_CONST(keyPairs_, DescribeKeyPairsResponseBody::KeyPairs) };
    inline DescribeKeyPairsResponseBody::KeyPairs getKeyPairs() { DARABONBA_PTR_GET(keyPairs_, DescribeKeyPairsResponseBody::KeyPairs) };
    inline DescribeKeyPairsResponseBody& setKeyPairs(const DescribeKeyPairsResponseBody::KeyPairs & keyPairs) { DARABONBA_PTR_SET_VALUE(keyPairs_, keyPairs) };
    inline DescribeKeyPairsResponseBody& setKeyPairs(DescribeKeyPairsResponseBody::KeyPairs && keyPairs) { DARABONBA_PTR_SET_RVALUE(keyPairs_, keyPairs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKeyPairsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKeyPairsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKeyPairsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeKeyPairsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information of the key pairs.
    shared_ptr<DescribeKeyPairsResponseBody::KeyPairs> keyPairs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of key pairs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
