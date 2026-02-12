// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTOPICLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSTOPICLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTopicListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTopicListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTopicListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsTopicListResponseBody() = default ;
    OnsTopicListResponseBody(const OnsTopicListResponseBody &) = default ;
    OnsTopicListResponseBody(OnsTopicListResponseBody &&) = default ;
    OnsTopicListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTopicListResponseBody() = default ;
    OnsTopicListResponseBody& operator=(const OnsTopicListResponseBody &) = default ;
    OnsTopicListResponseBody& operator=(OnsTopicListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PublishInfoDo, publishInfoDo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PublishInfoDo, publishInfoDo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PublishInfoDo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublishInfoDo& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(IndependentNaming, independentNaming_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(MessageType, messageType_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Relation, relation_);
          DARABONBA_PTR_TO_JSON(RelationName, relationName_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, PublishInfoDo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(IndependentNaming, independentNaming_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Relation, relation_);
          DARABONBA_PTR_FROM_JSON(RelationName, relationName_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        PublishInfoDo() = default ;
        PublishInfoDo(const PublishInfoDo &) = default ;
        PublishInfoDo(PublishInfoDo &&) = default ;
        PublishInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublishInfoDo() = default ;
        PublishInfoDo& operator=(const PublishInfoDo &) = default ;
        PublishInfoDo& operator=(PublishInfoDo &&) = default ;
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
            shared_ptr<string> key_ {};
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

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->independentNaming_ == nullptr && this->instanceId_ == nullptr && this->messageType_ == nullptr && this->owner_ == nullptr && this->relation_ == nullptr
        && this->relationName_ == nullptr && this->remark_ == nullptr && this->serviceStatus_ == nullptr && this->tags_ == nullptr && this->topic_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline PublishInfoDo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // independentNaming Field Functions 
        bool hasIndependentNaming() const { return this->independentNaming_ != nullptr;};
        void deleteIndependentNaming() { this->independentNaming_ = nullptr;};
        inline bool getIndependentNaming() const { DARABONBA_PTR_GET_DEFAULT(independentNaming_, false) };
        inline PublishInfoDo& setIndependentNaming(bool independentNaming) { DARABONBA_PTR_SET_VALUE(independentNaming_, independentNaming) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline PublishInfoDo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // messageType Field Functions 
        bool hasMessageType() const { return this->messageType_ != nullptr;};
        void deleteMessageType() { this->messageType_ = nullptr;};
        inline int32_t getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, 0) };
        inline PublishInfoDo& setMessageType(int32_t messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline PublishInfoDo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // relation Field Functions 
        bool hasRelation() const { return this->relation_ != nullptr;};
        void deleteRelation() { this->relation_ = nullptr;};
        inline int32_t getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, 0) };
        inline PublishInfoDo& setRelation(int32_t relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


        // relationName Field Functions 
        bool hasRelationName() const { return this->relationName_ != nullptr;};
        void deleteRelationName() { this->relationName_ = nullptr;};
        inline string getRelationName() const { DARABONBA_PTR_GET_DEFAULT(relationName_, "") };
        inline PublishInfoDo& setRelationName(string relationName) { DARABONBA_PTR_SET_VALUE(relationName_, relationName) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline PublishInfoDo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // serviceStatus Field Functions 
        bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
        void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
        inline int32_t getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
        inline PublishInfoDo& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const PublishInfoDo::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, PublishInfoDo::Tags) };
        inline PublishInfoDo::Tags getTags() { DARABONBA_PTR_GET(tags_, PublishInfoDo::Tags) };
        inline PublishInfoDo& setTags(const PublishInfoDo::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline PublishInfoDo& setTags(PublishInfoDo::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline PublishInfoDo& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<bool> independentNaming_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> messageType_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<int32_t> relation_ {};
        shared_ptr<string> relationName_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<int32_t> serviceStatus_ {};
        shared_ptr<PublishInfoDo::Tags> tags_ {};
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->publishInfoDo_ == nullptr; };
      // publishInfoDo Field Functions 
      bool hasPublishInfoDo() const { return this->publishInfoDo_ != nullptr;};
      void deletePublishInfoDo() { this->publishInfoDo_ = nullptr;};
      inline const vector<Data::PublishInfoDo> & getPublishInfoDo() const { DARABONBA_PTR_GET_CONST(publishInfoDo_, vector<Data::PublishInfoDo>) };
      inline vector<Data::PublishInfoDo> getPublishInfoDo() { DARABONBA_PTR_GET(publishInfoDo_, vector<Data::PublishInfoDo>) };
      inline Data& setPublishInfoDo(const vector<Data::PublishInfoDo> & publishInfoDo) { DARABONBA_PTR_SET_VALUE(publishInfoDo_, publishInfoDo) };
      inline Data& setPublishInfoDo(vector<Data::PublishInfoDo> && publishInfoDo) { DARABONBA_PTR_SET_RVALUE(publishInfoDo_, publishInfoDo) };


    protected:
      shared_ptr<vector<Data::PublishInfoDo>> publishInfoDo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsTopicListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsTopicListResponseBody::Data) };
    inline OnsTopicListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsTopicListResponseBody::Data) };
    inline OnsTopicListResponseBody& setData(const OnsTopicListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsTopicListResponseBody& setData(OnsTopicListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsTopicListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<OnsTopicListResponseBody::Data> data_ {};
    // The ID of the request. This is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
