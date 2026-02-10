// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCastersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCastersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterList, casterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCastersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterList, casterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCastersResponseBody() = default ;
    DescribeCastersResponseBody(const DescribeCastersResponseBody &) = default ;
    DescribeCastersResponseBody(DescribeCastersResponseBody &&) = default ;
    DescribeCastersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCastersResponseBody() = default ;
    DescribeCastersResponseBody& operator=(const DescribeCastersResponseBody &) = default ;
    DescribeCastersResponseBody& operator=(DescribeCastersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CasterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CasterList& obj) { 
        DARABONBA_PTR_TO_JSON(Caster, caster_);
      };
      friend void from_json(const Darabonba::Json& j, CasterList& obj) { 
        DARABONBA_PTR_FROM_JSON(Caster, caster_);
      };
      CasterList() = default ;
      CasterList(const CasterList &) = default ;
      CasterList(CasterList &&) = default ;
      CasterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CasterList() = default ;
      CasterList& operator=(const CasterList &) = default ;
      CasterList& operator=(CasterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Caster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Caster& obj) { 
          DARABONBA_PTR_TO_JSON(CasterId, casterId_);
          DARABONBA_PTR_TO_JSON(CasterName, casterName_);
          DARABONBA_PTR_TO_JSON(CasterTemplate, casterTemplate_);
          DARABONBA_PTR_TO_JSON(ChannelEnable, channelEnable_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(ClientTokenId, clientTokenId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
          DARABONBA_PTR_TO_JSON(NormType, normType_);
          DARABONBA_PTR_TO_JSON(PurchaseTime, purchaseTime_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Caster& obj) { 
          DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
          DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
          DARABONBA_PTR_FROM_JSON(CasterTemplate, casterTemplate_);
          DARABONBA_PTR_FROM_JSON(ChannelEnable, channelEnable_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(ClientTokenId, clientTokenId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
          DARABONBA_PTR_FROM_JSON(NormType, normType_);
          DARABONBA_PTR_FROM_JSON(PurchaseTime, purchaseTime_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Caster() = default ;
        Caster(const Caster &) = default ;
        Caster(Caster &&) = default ;
        Caster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Caster() = default ;
        Caster& operator=(const Caster &) = default ;
        Caster& operator=(Caster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(tag, tag_);
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

        virtual bool empty() const override { return this->casterId_ == nullptr
        && this->casterName_ == nullptr && this->casterTemplate_ == nullptr && this->channelEnable_ == nullptr && this->chargeType_ == nullptr && this->clientTokenId_ == nullptr
        && this->createTime_ == nullptr && this->duration_ == nullptr && this->expireTime_ == nullptr && this->lastModified_ == nullptr && this->normType_ == nullptr
        && this->purchaseTime_ == nullptr && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
        // casterId Field Functions 
        bool hasCasterId() const { return this->casterId_ != nullptr;};
        void deleteCasterId() { this->casterId_ = nullptr;};
        inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
        inline Caster& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


        // casterName Field Functions 
        bool hasCasterName() const { return this->casterName_ != nullptr;};
        void deleteCasterName() { this->casterName_ = nullptr;};
        inline string getCasterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
        inline Caster& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


        // casterTemplate Field Functions 
        bool hasCasterTemplate() const { return this->casterTemplate_ != nullptr;};
        void deleteCasterTemplate() { this->casterTemplate_ = nullptr;};
        inline string getCasterTemplate() const { DARABONBA_PTR_GET_DEFAULT(casterTemplate_, "") };
        inline Caster& setCasterTemplate(string casterTemplate) { DARABONBA_PTR_SET_VALUE(casterTemplate_, casterTemplate) };


        // channelEnable Field Functions 
        bool hasChannelEnable() const { return this->channelEnable_ != nullptr;};
        void deleteChannelEnable() { this->channelEnable_ = nullptr;};
        inline int32_t getChannelEnable() const { DARABONBA_PTR_GET_DEFAULT(channelEnable_, 0) };
        inline Caster& setChannelEnable(int32_t channelEnable) { DARABONBA_PTR_SET_VALUE(channelEnable_, channelEnable) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Caster& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // clientTokenId Field Functions 
        bool hasClientTokenId() const { return this->clientTokenId_ != nullptr;};
        void deleteClientTokenId() { this->clientTokenId_ = nullptr;};
        inline string getClientTokenId() const { DARABONBA_PTR_GET_DEFAULT(clientTokenId_, "") };
        inline Caster& setClientTokenId(string clientTokenId) { DARABONBA_PTR_SET_VALUE(clientTokenId_, clientTokenId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Caster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Caster& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Caster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // lastModified Field Functions 
        bool hasLastModified() const { return this->lastModified_ != nullptr;};
        void deleteLastModified() { this->lastModified_ = nullptr;};
        inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
        inline Caster& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


        // normType Field Functions 
        bool hasNormType() const { return this->normType_ != nullptr;};
        void deleteNormType() { this->normType_ = nullptr;};
        inline int32_t getNormType() const { DARABONBA_PTR_GET_DEFAULT(normType_, 0) };
        inline Caster& setNormType(int32_t normType) { DARABONBA_PTR_SET_VALUE(normType_, normType) };


        // purchaseTime Field Functions 
        bool hasPurchaseTime() const { return this->purchaseTime_ != nullptr;};
        void deletePurchaseTime() { this->purchaseTime_ = nullptr;};
        inline string getPurchaseTime() const { DARABONBA_PTR_GET_DEFAULT(purchaseTime_, "") };
        inline Caster& setPurchaseTime(string purchaseTime) { DARABONBA_PTR_SET_VALUE(purchaseTime_, purchaseTime) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Caster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Caster& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Caster& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Caster::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Caster::Tags) };
        inline Caster::Tags getTags() { DARABONBA_PTR_GET(tags_, Caster::Tags) };
        inline Caster& setTags(const Caster::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Caster& setTags(Caster::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> casterId_ {};
        shared_ptr<string> casterName_ {};
        shared_ptr<string> casterTemplate_ {};
        shared_ptr<int32_t> channelEnable_ {};
        shared_ptr<string> chargeType_ {};
        shared_ptr<string> clientTokenId_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> duration_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> lastModified_ {};
        shared_ptr<int32_t> normType_ {};
        shared_ptr<string> purchaseTime_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<Caster::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->caster_ == nullptr; };
      // caster Field Functions 
      bool hasCaster() const { return this->caster_ != nullptr;};
      void deleteCaster() { this->caster_ = nullptr;};
      inline const vector<CasterList::Caster> & getCaster() const { DARABONBA_PTR_GET_CONST(caster_, vector<CasterList::Caster>) };
      inline vector<CasterList::Caster> getCaster() { DARABONBA_PTR_GET(caster_, vector<CasterList::Caster>) };
      inline CasterList& setCaster(const vector<CasterList::Caster> & caster) { DARABONBA_PTR_SET_VALUE(caster_, caster) };
      inline CasterList& setCaster(vector<CasterList::Caster> && caster) { DARABONBA_PTR_SET_RVALUE(caster_, caster) };


    protected:
      shared_ptr<vector<CasterList::Caster>> caster_ {};
    };

    virtual bool empty() const override { return this->casterList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // casterList Field Functions 
    bool hasCasterList() const { return this->casterList_ != nullptr;};
    void deleteCasterList() { this->casterList_ = nullptr;};
    inline const DescribeCastersResponseBody::CasterList & getCasterList() const { DARABONBA_PTR_GET_CONST(casterList_, DescribeCastersResponseBody::CasterList) };
    inline DescribeCastersResponseBody::CasterList getCasterList() { DARABONBA_PTR_GET(casterList_, DescribeCastersResponseBody::CasterList) };
    inline DescribeCastersResponseBody& setCasterList(const DescribeCastersResponseBody::CasterList & casterList) { DARABONBA_PTR_SET_VALUE(casterList_, casterList) };
    inline DescribeCastersResponseBody& setCasterList(DescribeCastersResponseBody::CasterList && casterList) { DARABONBA_PTR_SET_RVALUE(casterList_, casterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCastersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCastersResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<DescribeCastersResponseBody::CasterList> casterList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of production studios.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
