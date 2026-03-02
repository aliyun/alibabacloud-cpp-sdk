// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstanceResponseBody() = default ;
    ListInstanceResponseBody(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody(ListInstanceResponseBody &&) = default ;
    ListInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBody() = default ;
    ListInstanceResponseBody& operator=(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody& operator=(ListInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instances, instances_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
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
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
          DARABONBA_PTR_TO_JSON(ClassicEndpoint, classicEndpoint_);
          DARABONBA_PTR_TO_JSON(Expire, expire_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(MaxEIPTPS, maxEIPTPS_);
          DARABONBA_PTR_TO_JSON(MaxQueue, maxQueue_);
          DARABONBA_PTR_TO_JSON(MaxTPS, maxTPS_);
          DARABONBA_PTR_TO_JSON(MaxVhost, maxVhost_);
          DARABONBA_PTR_TO_JSON(OrderCreate, orderCreate_);
          DARABONBA_PTR_TO_JSON(OrderType, orderType_);
          DARABONBA_PTR_TO_JSON(PrivateEndpoint, privateEndpoint_);
          DARABONBA_PTR_TO_JSON(PublicEndpoint, publicEndpoint_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_TO_JSON(SupportEIP, supportEIP_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
          DARABONBA_PTR_FROM_JSON(ClassicEndpoint, classicEndpoint_);
          DARABONBA_PTR_FROM_JSON(Expire, expire_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(MaxEIPTPS, maxEIPTPS_);
          DARABONBA_PTR_FROM_JSON(MaxQueue, maxQueue_);
          DARABONBA_PTR_FROM_JSON(MaxTPS, maxTPS_);
          DARABONBA_PTR_FROM_JSON(MaxVhost, maxVhost_);
          DARABONBA_PTR_FROM_JSON(OrderCreate, orderCreate_);
          DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
          DARABONBA_PTR_FROM_JSON(PrivateEndpoint, privateEndpoint_);
          DARABONBA_PTR_FROM_JSON(PublicEndpoint, publicEndpoint_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_FROM_JSON(SupportEIP, supportEIP_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Instances() = default ;
        Instances(const Instances &) = default ;
        Instances(Instances &&) = default ;
        Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instances() = default ;
        Instances& operator=(const Instances &) = default ;
        Instances& operator=(Instances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(tags, tags_);
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
          class TagsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagsItem() = default ;
            TagsItem(const TagsItem &) = default ;
            TagsItem(TagsItem &&) = default ;
            TagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagsItem() = default ;
            TagsItem& operator=(const TagsItem &) = default ;
            TagsItem& operator=(TagsItem &&) = default ;
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
            inline TagsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tags_ == nullptr; };
          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Tags::TagsItem> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tags::TagsItem>) };
          inline vector<Tags::TagsItem> getTags() { DARABONBA_PTR_GET(tags_, vector<Tags::TagsItem>) };
          inline Tags& setTags(const vector<Tags::TagsItem> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Tags& setTags(vector<Tags::TagsItem> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          shared_ptr<vector<Tags::TagsItem>> tags_ {};
        };

        virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->classicEndpoint_ == nullptr && this->expire_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr
        && this->maxEIPTPS_ == nullptr && this->maxQueue_ == nullptr && this->maxTPS_ == nullptr && this->maxVhost_ == nullptr && this->orderCreate_ == nullptr
        && this->orderType_ == nullptr && this->privateEndpoint_ == nullptr && this->publicEndpoint_ == nullptr && this->status_ == nullptr && this->storageSize_ == nullptr
        && this->supportEIP_ == nullptr && this->tags_ == nullptr; };
        // autoRenew Field Functions 
        bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
        void deleteAutoRenew() { this->autoRenew_ = nullptr;};
        inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
        inline Instances& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


        // classicEndpoint Field Functions 
        bool hasClassicEndpoint() const { return this->classicEndpoint_ != nullptr;};
        void deleteClassicEndpoint() { this->classicEndpoint_ = nullptr;};
        inline string getClassicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(classicEndpoint_, "") };
        inline Instances& setClassicEndpoint(string classicEndpoint) { DARABONBA_PTR_SET_VALUE(classicEndpoint_, classicEndpoint) };


        // expire Field Functions 
        bool hasExpire() const { return this->expire_ != nullptr;};
        void deleteExpire() { this->expire_ = nullptr;};
        inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
        inline Instances& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Instances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // maxEIPTPS Field Functions 
        bool hasMaxEIPTPS() const { return this->maxEIPTPS_ != nullptr;};
        void deleteMaxEIPTPS() { this->maxEIPTPS_ = nullptr;};
        inline int32_t getMaxEIPTPS() const { DARABONBA_PTR_GET_DEFAULT(maxEIPTPS_, 0) };
        inline Instances& setMaxEIPTPS(int32_t maxEIPTPS) { DARABONBA_PTR_SET_VALUE(maxEIPTPS_, maxEIPTPS) };


        // maxQueue Field Functions 
        bool hasMaxQueue() const { return this->maxQueue_ != nullptr;};
        void deleteMaxQueue() { this->maxQueue_ = nullptr;};
        inline int32_t getMaxQueue() const { DARABONBA_PTR_GET_DEFAULT(maxQueue_, 0) };
        inline Instances& setMaxQueue(int32_t maxQueue) { DARABONBA_PTR_SET_VALUE(maxQueue_, maxQueue) };


        // maxTPS Field Functions 
        bool hasMaxTPS() const { return this->maxTPS_ != nullptr;};
        void deleteMaxTPS() { this->maxTPS_ = nullptr;};
        inline int32_t getMaxTPS() const { DARABONBA_PTR_GET_DEFAULT(maxTPS_, 0) };
        inline Instances& setMaxTPS(int32_t maxTPS) { DARABONBA_PTR_SET_VALUE(maxTPS_, maxTPS) };


        // maxVhost Field Functions 
        bool hasMaxVhost() const { return this->maxVhost_ != nullptr;};
        void deleteMaxVhost() { this->maxVhost_ = nullptr;};
        inline int32_t getMaxVhost() const { DARABONBA_PTR_GET_DEFAULT(maxVhost_, 0) };
        inline Instances& setMaxVhost(int32_t maxVhost) { DARABONBA_PTR_SET_VALUE(maxVhost_, maxVhost) };


        // orderCreate Field Functions 
        bool hasOrderCreate() const { return this->orderCreate_ != nullptr;};
        void deleteOrderCreate() { this->orderCreate_ = nullptr;};
        inline int64_t getOrderCreate() const { DARABONBA_PTR_GET_DEFAULT(orderCreate_, 0L) };
        inline Instances& setOrderCreate(int64_t orderCreate) { DARABONBA_PTR_SET_VALUE(orderCreate_, orderCreate) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline Instances& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // privateEndpoint Field Functions 
        bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
        void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
        inline string getPrivateEndpoint() const { DARABONBA_PTR_GET_DEFAULT(privateEndpoint_, "") };
        inline Instances& setPrivateEndpoint(string privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };


        // publicEndpoint Field Functions 
        bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
        void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
        inline string getPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
        inline Instances& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
        inline Instances& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


        // supportEIP Field Functions 
        bool hasSupportEIP() const { return this->supportEIP_ != nullptr;};
        void deleteSupportEIP() { this->supportEIP_ = nullptr;};
        inline bool getSupportEIP() const { DARABONBA_PTR_GET_DEFAULT(supportEIP_, false) };
        inline Instances& setSupportEIP(bool supportEIP) { DARABONBA_PTR_SET_VALUE(supportEIP_, supportEIP) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Instances::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Instances::Tags) };
        inline Instances::Tags getTags() { DARABONBA_PTR_GET(tags_, Instances::Tags) };
        inline Instances& setTags(const Instances::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Instances& setTags(Instances::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<bool> autoRenew_ {};
        shared_ptr<string> classicEndpoint_ {};
        shared_ptr<int64_t> expire_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<int32_t> maxEIPTPS_ {};
        shared_ptr<int32_t> maxQueue_ {};
        shared_ptr<int32_t> maxTPS_ {};
        shared_ptr<int32_t> maxVhost_ {};
        shared_ptr<int64_t> orderCreate_ {};
        shared_ptr<string> orderType_ {};
        shared_ptr<string> privateEndpoint_ {};
        shared_ptr<string> publicEndpoint_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> storageSize_ {};
        shared_ptr<bool> supportEIP_ {};
        shared_ptr<Instances::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->instances_ == nullptr; };
      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    protected:
      shared_ptr<vector<Data::Instances>> instances_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListInstanceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInstanceResponseBody::Data) };
    inline ListInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInstanceResponseBody::Data) };
    inline ListInstanceResponseBody& setData(const ListInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstanceResponseBody& setData(ListInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListInstanceResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
