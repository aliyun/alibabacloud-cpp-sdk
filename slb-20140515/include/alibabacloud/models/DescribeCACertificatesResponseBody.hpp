// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeCACertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CACertificates, CACertificates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CACertificates, CACertificates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCACertificatesResponseBody() = default ;
    DescribeCACertificatesResponseBody(const DescribeCACertificatesResponseBody &) = default ;
    DescribeCACertificatesResponseBody(DescribeCACertificatesResponseBody &&) = default ;
    DescribeCACertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificatesResponseBody() = default ;
    DescribeCACertificatesResponseBody& operator=(const DescribeCACertificatesResponseBody &) = default ;
    DescribeCACertificatesResponseBody& operator=(DescribeCACertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CACertificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CACertificates& obj) { 
        DARABONBA_PTR_TO_JSON(CACertificate, CACertificate_);
      };
      friend void from_json(const Darabonba::Json& j, CACertificates& obj) { 
        DARABONBA_PTR_FROM_JSON(CACertificate, CACertificate_);
      };
      CACertificates() = default ;
      CACertificates(const CACertificates &) = default ;
      CACertificates(CACertificates &&) = default ;
      CACertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CACertificates() = default ;
      CACertificates& operator=(const CACertificates &) = default ;
      CACertificates& operator=(CACertificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CACertificate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CACertificate& obj) { 
          DARABONBA_PTR_TO_JSON(CACertificateId, CACertificateId_);
          DARABONBA_PTR_TO_JSON(CACertificateName, CACertificateName_);
          DARABONBA_PTR_TO_JSON(CommonName, commonName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ExpireTimeStamp, expireTimeStamp_);
          DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, CACertificate& obj) { 
          DARABONBA_PTR_FROM_JSON(CACertificateId, CACertificateId_);
          DARABONBA_PTR_FROM_JSON(CACertificateName, CACertificateName_);
          DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ExpireTimeStamp, expireTimeStamp_);
          DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        CACertificate() = default ;
        CACertificate(const CACertificate &) = default ;
        CACertificate(CACertificate &&) = default ;
        CACertificate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CACertificate() = default ;
        CACertificate& operator=(const CACertificate &) = default ;
        CACertificate& operator=(CACertificate &&) = default ;
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

        virtual bool empty() const override { return this->CACertificateId_ == nullptr
        && this->CACertificateName_ == nullptr && this->commonName_ == nullptr && this->createTime_ == nullptr && this->createTimeStamp_ == nullptr && this->expireTime_ == nullptr
        && this->expireTimeStamp_ == nullptr && this->fingerprint_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
        // CACertificateId Field Functions 
        bool hasCACertificateId() const { return this->CACertificateId_ != nullptr;};
        void deleteCACertificateId() { this->CACertificateId_ = nullptr;};
        inline string getCACertificateId() const { DARABONBA_PTR_GET_DEFAULT(CACertificateId_, "") };
        inline CACertificate& setCACertificateId(string CACertificateId) { DARABONBA_PTR_SET_VALUE(CACertificateId_, CACertificateId) };


        // CACertificateName Field Functions 
        bool hasCACertificateName() const { return this->CACertificateName_ != nullptr;};
        void deleteCACertificateName() { this->CACertificateName_ = nullptr;};
        inline string getCACertificateName() const { DARABONBA_PTR_GET_DEFAULT(CACertificateName_, "") };
        inline CACertificate& setCACertificateName(string CACertificateName) { DARABONBA_PTR_SET_VALUE(CACertificateName_, CACertificateName) };


        // commonName Field Functions 
        bool hasCommonName() const { return this->commonName_ != nullptr;};
        void deleteCommonName() { this->commonName_ = nullptr;};
        inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
        inline CACertificate& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline CACertificate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimeStamp Field Functions 
        bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
        void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
        inline int64_t getCreateTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
        inline CACertificate& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline CACertificate& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expireTimeStamp Field Functions 
        bool hasExpireTimeStamp() const { return this->expireTimeStamp_ != nullptr;};
        void deleteExpireTimeStamp() { this->expireTimeStamp_ = nullptr;};
        inline int64_t getExpireTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimeStamp_, 0L) };
        inline CACertificate& setExpireTimeStamp(int64_t expireTimeStamp) { DARABONBA_PTR_SET_VALUE(expireTimeStamp_, expireTimeStamp) };


        // fingerprint Field Functions 
        bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
        void deleteFingerprint() { this->fingerprint_ = nullptr;};
        inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
        inline CACertificate& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CACertificate& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline CACertificate& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const CACertificate::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, CACertificate::Tags) };
        inline CACertificate::Tags getTags() { DARABONBA_PTR_GET(tags_, CACertificate::Tags) };
        inline CACertificate& setTags(const CACertificate::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CACertificate& setTags(CACertificate::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> CACertificateId_ {};
        shared_ptr<string> CACertificateName_ {};
        shared_ptr<string> commonName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimeStamp_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<int64_t> expireTimeStamp_ {};
        shared_ptr<string> fingerprint_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<CACertificate::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->CACertificate_ == nullptr; };
      // CACertificate Field Functions 
      bool hasCACertificate() const { return this->CACertificate_ != nullptr;};
      void deleteCACertificate() { this->CACertificate_ = nullptr;};
      inline const vector<CACertificates::CACertificate> & getCACertificate() const { DARABONBA_PTR_GET_CONST(CACertificate_, vector<CACertificates::CACertificate>) };
      inline vector<CACertificates::CACertificate> getCACertificate() { DARABONBA_PTR_GET(CACertificate_, vector<CACertificates::CACertificate>) };
      inline CACertificates& setCACertificate(const vector<CACertificates::CACertificate> & cACertificate) { DARABONBA_PTR_SET_VALUE(CACertificate_, cACertificate) };
      inline CACertificates& setCACertificate(vector<CACertificates::CACertificate> && cACertificate) { DARABONBA_PTR_SET_RVALUE(CACertificate_, cACertificate) };


    protected:
      shared_ptr<vector<CACertificates::CACertificate>> CACertificate_ {};
    };

    virtual bool empty() const override { return this->CACertificates_ == nullptr
        && this->requestId_ == nullptr; };
    // CACertificates Field Functions 
    bool hasCACertificates() const { return this->CACertificates_ != nullptr;};
    void deleteCACertificates() { this->CACertificates_ = nullptr;};
    inline const DescribeCACertificatesResponseBody::CACertificates & getCACertificates() const { DARABONBA_PTR_GET_CONST(CACertificates_, DescribeCACertificatesResponseBody::CACertificates) };
    inline DescribeCACertificatesResponseBody::CACertificates getCACertificates() { DARABONBA_PTR_GET(CACertificates_, DescribeCACertificatesResponseBody::CACertificates) };
    inline DescribeCACertificatesResponseBody& setCACertificates(const DescribeCACertificatesResponseBody::CACertificates & cACertificates) { DARABONBA_PTR_SET_VALUE(CACertificates_, cACertificates) };
    inline DescribeCACertificatesResponseBody& setCACertificates(DescribeCACertificatesResponseBody::CACertificates && cACertificates) { DARABONBA_PTR_SET_RVALUE(CACertificates_, cACertificates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCACertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCACertificatesResponseBody::CACertificates> CACertificates_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
