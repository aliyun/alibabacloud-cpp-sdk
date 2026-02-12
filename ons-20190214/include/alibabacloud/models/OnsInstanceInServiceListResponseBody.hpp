// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSINSTANCEINSERVICELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSINSTANCEINSERVICELISTRESPONSEBODY_HPP_
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
  class OnsInstanceInServiceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsInstanceInServiceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsInstanceInServiceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsInstanceInServiceListResponseBody() = default ;
    OnsInstanceInServiceListResponseBody(const OnsInstanceInServiceListResponseBody &) = default ;
    OnsInstanceInServiceListResponseBody(OnsInstanceInServiceListResponseBody &&) = default ;
    OnsInstanceInServiceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsInstanceInServiceListResponseBody() = default ;
    OnsInstanceInServiceListResponseBody& operator=(const OnsInstanceInServiceListResponseBody &) = default ;
    OnsInstanceInServiceListResponseBody& operator=(OnsInstanceInServiceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceVO, instanceVO_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceVO, instanceVO_);
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
      class InstanceVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceVO& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_TO_JSON(IndependentNaming, independentNaming_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TopicCount, topicCount_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceVO& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_FROM_JSON(IndependentNaming, independentNaming_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TopicCount, topicCount_);
        };
        InstanceVO() = default ;
        InstanceVO(const InstanceVO &) = default ;
        InstanceVO(InstanceVO &&) = default ;
        InstanceVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceVO() = default ;
        InstanceVO& operator=(const InstanceVO &) = default ;
        InstanceVO& operator=(InstanceVO &&) = default ;
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
        && this->groupCount_ == nullptr && this->independentNaming_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr
        && this->instanceType_ == nullptr && this->releaseTime_ == nullptr && this->tags_ == nullptr && this->topicCount_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline InstanceVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // groupCount Field Functions 
        bool hasGroupCount() const { return this->groupCount_ != nullptr;};
        void deleteGroupCount() { this->groupCount_ = nullptr;};
        inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
        inline InstanceVO& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


        // independentNaming Field Functions 
        bool hasIndependentNaming() const { return this->independentNaming_ != nullptr;};
        void deleteIndependentNaming() { this->independentNaming_ = nullptr;};
        inline bool getIndependentNaming() const { DARABONBA_PTR_GET_DEFAULT(independentNaming_, false) };
        inline InstanceVO& setIndependentNaming(bool independentNaming) { DARABONBA_PTR_SET_VALUE(independentNaming_, independentNaming) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline InstanceVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline int32_t getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, 0) };
        inline InstanceVO& setInstanceStatus(int32_t instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline int32_t getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, 0) };
        inline InstanceVO& setInstanceType(int32_t instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
        inline InstanceVO& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const InstanceVO::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, InstanceVO::Tags) };
        inline InstanceVO::Tags getTags() { DARABONBA_PTR_GET(tags_, InstanceVO::Tags) };
        inline InstanceVO& setTags(const InstanceVO::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline InstanceVO& setTags(InstanceVO::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // topicCount Field Functions 
        bool hasTopicCount() const { return this->topicCount_ != nullptr;};
        void deleteTopicCount() { this->topicCount_ = nullptr;};
        inline int32_t getTopicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0) };
        inline InstanceVO& setTopicCount(int32_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<int32_t> groupCount_ {};
        shared_ptr<bool> independentNaming_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<int32_t> instanceStatus_ {};
        shared_ptr<int32_t> instanceType_ {};
        shared_ptr<int64_t> releaseTime_ {};
        shared_ptr<InstanceVO::Tags> tags_ {};
        shared_ptr<int32_t> topicCount_ {};
      };

      virtual bool empty() const override { return this->instanceVO_ == nullptr; };
      // instanceVO Field Functions 
      bool hasInstanceVO() const { return this->instanceVO_ != nullptr;};
      void deleteInstanceVO() { this->instanceVO_ = nullptr;};
      inline const vector<Data::InstanceVO> & getInstanceVO() const { DARABONBA_PTR_GET_CONST(instanceVO_, vector<Data::InstanceVO>) };
      inline vector<Data::InstanceVO> getInstanceVO() { DARABONBA_PTR_GET(instanceVO_, vector<Data::InstanceVO>) };
      inline Data& setInstanceVO(const vector<Data::InstanceVO> & instanceVO) { DARABONBA_PTR_SET_VALUE(instanceVO_, instanceVO) };
      inline Data& setInstanceVO(vector<Data::InstanceVO> && instanceVO) { DARABONBA_PTR_SET_RVALUE(instanceVO_, instanceVO) };


    protected:
      shared_ptr<vector<Data::InstanceVO>> instanceVO_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsInstanceInServiceListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsInstanceInServiceListResponseBody::Data) };
    inline OnsInstanceInServiceListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsInstanceInServiceListResponseBody::Data) };
    inline OnsInstanceInServiceListResponseBody& setData(const OnsInstanceInServiceListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsInstanceInServiceListResponseBody& setData(OnsInstanceInServiceListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsInstanceInServiceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<OnsInstanceInServiceListResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
