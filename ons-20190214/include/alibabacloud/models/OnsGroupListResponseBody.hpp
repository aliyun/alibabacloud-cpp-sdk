// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSGROUPLISTRESPONSEBODY_HPP_
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
  class OnsGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsGroupListResponseBody() = default ;
    OnsGroupListResponseBody(const OnsGroupListResponseBody &) = default ;
    OnsGroupListResponseBody(OnsGroupListResponseBody &&) = default ;
    OnsGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsGroupListResponseBody() = default ;
    OnsGroupListResponseBody& operator=(const OnsGroupListResponseBody &) = default ;
    OnsGroupListResponseBody& operator=(OnsGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SubscribeInfoDo, subscribeInfoDo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SubscribeInfoDo, subscribeInfoDo_);
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
      class SubscribeInfoDo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscribeInfoDo& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(IndependentNaming, independentNaming_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, SubscribeInfoDo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(IndependentNaming, independentNaming_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        SubscribeInfoDo() = default ;
        SubscribeInfoDo(const SubscribeInfoDo &) = default ;
        SubscribeInfoDo(SubscribeInfoDo &&) = default ;
        SubscribeInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscribeInfoDo() = default ;
        SubscribeInfoDo& operator=(const SubscribeInfoDo &) = default ;
        SubscribeInfoDo& operator=(SubscribeInfoDo &&) = default ;
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
        && this->groupId_ == nullptr && this->groupType_ == nullptr && this->independentNaming_ == nullptr && this->instanceId_ == nullptr && this->owner_ == nullptr
        && this->remark_ == nullptr && this->tags_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SubscribeInfoDo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline SubscribeInfoDo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline SubscribeInfoDo& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // independentNaming Field Functions 
        bool hasIndependentNaming() const { return this->independentNaming_ != nullptr;};
        void deleteIndependentNaming() { this->independentNaming_ = nullptr;};
        inline bool getIndependentNaming() const { DARABONBA_PTR_GET_DEFAULT(independentNaming_, false) };
        inline SubscribeInfoDo& setIndependentNaming(bool independentNaming) { DARABONBA_PTR_SET_VALUE(independentNaming_, independentNaming) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SubscribeInfoDo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline SubscribeInfoDo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline SubscribeInfoDo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const SubscribeInfoDo::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, SubscribeInfoDo::Tags) };
        inline SubscribeInfoDo::Tags getTags() { DARABONBA_PTR_GET(tags_, SubscribeInfoDo::Tags) };
        inline SubscribeInfoDo& setTags(const SubscribeInfoDo::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline SubscribeInfoDo& setTags(SubscribeInfoDo::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline SubscribeInfoDo& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupType_ {};
        shared_ptr<bool> independentNaming_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<SubscribeInfoDo::Tags> tags_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->subscribeInfoDo_ == nullptr; };
      // subscribeInfoDo Field Functions 
      bool hasSubscribeInfoDo() const { return this->subscribeInfoDo_ != nullptr;};
      void deleteSubscribeInfoDo() { this->subscribeInfoDo_ = nullptr;};
      inline const vector<Data::SubscribeInfoDo> & getSubscribeInfoDo() const { DARABONBA_PTR_GET_CONST(subscribeInfoDo_, vector<Data::SubscribeInfoDo>) };
      inline vector<Data::SubscribeInfoDo> getSubscribeInfoDo() { DARABONBA_PTR_GET(subscribeInfoDo_, vector<Data::SubscribeInfoDo>) };
      inline Data& setSubscribeInfoDo(const vector<Data::SubscribeInfoDo> & subscribeInfoDo) { DARABONBA_PTR_SET_VALUE(subscribeInfoDo_, subscribeInfoDo) };
      inline Data& setSubscribeInfoDo(vector<Data::SubscribeInfoDo> && subscribeInfoDo) { DARABONBA_PTR_SET_RVALUE(subscribeInfoDo_, subscribeInfoDo) };


    protected:
      shared_ptr<vector<Data::SubscribeInfoDo>> subscribeInfoDo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsGroupListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsGroupListResponseBody::Data) };
    inline OnsGroupListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsGroupListResponseBody::Data) };
    inline OnsGroupListResponseBody& setData(const OnsGroupListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsGroupListResponseBody& setData(OnsGroupListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<OnsGroupListResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
