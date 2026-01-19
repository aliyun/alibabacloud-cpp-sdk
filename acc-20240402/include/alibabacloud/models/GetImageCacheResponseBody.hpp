// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class GetImageCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_TO_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_FROM_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetImageCacheResponseBody() = default ;
    GetImageCacheResponseBody(const GetImageCacheResponseBody &) = default ;
    GetImageCacheResponseBody(GetImageCacheResponseBody &&) = default ;
    GetImageCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageCacheResponseBody() = default ;
    GetImageCacheResponseBody& operator=(const GetImageCacheResponseBody &) = default ;
    GetImageCacheResponseBody& operator=(GetImageCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class NetworkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EipInstance, eipInstance_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EipInstance, eipInstance_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      };
      NetworkConfig() = default ;
      NetworkConfig(const NetworkConfig &) = default ;
      NetworkConfig(NetworkConfig &&) = default ;
      NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkConfig() = default ;
      NetworkConfig& operator=(const NetworkConfig &) = default ;
      NetworkConfig& operator=(NetworkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipInstance& obj) { 
          DARABONBA_PTR_TO_JSON(AutoCreate, autoCreate_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, EipInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoCreate, autoCreate_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        EipInstance() = default ;
        EipInstance(const EipInstance &) = default ;
        EipInstance(EipInstance &&) = default ;
        EipInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipInstance() = default ;
        EipInstance& operator=(const EipInstance &) = default ;
        EipInstance& operator=(EipInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoCreate_ == nullptr
        && this->bandwidth_ == nullptr && this->instanceId_ == nullptr; };
        // autoCreate Field Functions 
        bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
        void deleteAutoCreate() { this->autoCreate_ = nullptr;};
        inline bool getAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, false) };
        inline EipInstance& setAutoCreate(bool autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline EipInstance& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EipInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        shared_ptr<bool> autoCreate_ {};
        shared_ptr<int32_t> bandwidth_ {};
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->eipInstance_ == nullptr
        && this->securityGroupId_ == nullptr && this->vSwitchIds_ == nullptr; };
      // eipInstance Field Functions 
      bool hasEipInstance() const { return this->eipInstance_ != nullptr;};
      void deleteEipInstance() { this->eipInstance_ = nullptr;};
      inline const NetworkConfig::EipInstance & getEipInstance() const { DARABONBA_PTR_GET_CONST(eipInstance_, NetworkConfig::EipInstance) };
      inline NetworkConfig::EipInstance getEipInstance() { DARABONBA_PTR_GET(eipInstance_, NetworkConfig::EipInstance) };
      inline NetworkConfig& setEipInstance(const NetworkConfig::EipInstance & eipInstance) { DARABONBA_PTR_SET_VALUE(eipInstance_, eipInstance) };
      inline NetworkConfig& setEipInstance(NetworkConfig::EipInstance && eipInstance) { DARABONBA_PTR_SET_RVALUE(eipInstance_, eipInstance) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline NetworkConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline NetworkConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline NetworkConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      shared_ptr<NetworkConfig::EipInstance> eipInstance_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(FirstTimestamp, firstTimestamp_);
        DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(FirstTimestamp, firstTimestamp_);
        DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->firstTimestamp_ == nullptr && this->lastTimestamp_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->reason_ == nullptr
        && this->type_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Events& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // firstTimestamp Field Functions 
      bool hasFirstTimestamp() const { return this->firstTimestamp_ != nullptr;};
      void deleteFirstTimestamp() { this->firstTimestamp_ = nullptr;};
      inline string getFirstTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstTimestamp_, "") };
      inline Events& setFirstTimestamp(string firstTimestamp) { DARABONBA_PTR_SET_VALUE(firstTimestamp_, firstTimestamp) };


      // lastTimestamp Field Functions 
      bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
      void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
      inline string getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, "") };
      inline Events& setLastTimestamp(string lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Events& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Events& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Events& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Events& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<string> firstTimestamp_ {};
      shared_ptr<string> lastTimestamp_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->events_ == nullptr && this->imageCacheId_ == nullptr && this->imageCacheName_ == nullptr && this->images_ == nullptr && this->networkConfig_ == nullptr
        && this->paymentType_ == nullptr && this->readyTime_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->size_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetImageCacheResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<GetImageCacheResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<GetImageCacheResponseBody::Events>) };
    inline vector<GetImageCacheResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<GetImageCacheResponseBody::Events>) };
    inline GetImageCacheResponseBody& setEvents(const vector<GetImageCacheResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetImageCacheResponseBody& setEvents(vector<GetImageCacheResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // imageCacheId Field Functions 
    bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
    void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
    inline string getImageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
    inline GetImageCacheResponseBody& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


    // imageCacheName Field Functions 
    bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
    void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
    inline string getImageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
    inline GetImageCacheResponseBody& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline GetImageCacheResponseBody& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline GetImageCacheResponseBody& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const GetImageCacheResponseBody::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, GetImageCacheResponseBody::NetworkConfig) };
    inline GetImageCacheResponseBody::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, GetImageCacheResponseBody::NetworkConfig) };
    inline GetImageCacheResponseBody& setNetworkConfig(const GetImageCacheResponseBody::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline GetImageCacheResponseBody& setNetworkConfig(GetImageCacheResponseBody::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetImageCacheResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // readyTime Field Functions 
    bool hasReadyTime() const { return this->readyTime_ != nullptr;};
    void deleteReadyTime() { this->readyTime_ = nullptr;};
    inline string getReadyTime() const { DARABONBA_PTR_GET_DEFAULT(readyTime_, "") };
    inline GetImageCacheResponseBody& setReadyTime(string readyTime) { DARABONBA_PTR_SET_VALUE(readyTime_, readyTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetImageCacheResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetImageCacheResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetImageCacheResponseBody& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageCacheResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetImageCacheResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetImageCacheResponseBody::Tags>) };
    inline vector<GetImageCacheResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetImageCacheResponseBody::Tags>) };
    inline GetImageCacheResponseBody& setTags(const vector<GetImageCacheResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetImageCacheResponseBody& setTags(vector<GetImageCacheResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<vector<GetImageCacheResponseBody::Events>> events_ {};
    shared_ptr<string> imageCacheId_ {};
    shared_ptr<string> imageCacheName_ {};
    shared_ptr<vector<string>> images_ {};
    shared_ptr<GetImageCacheResponseBody::NetworkConfig> networkConfig_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> readyTime_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<GetImageCacheResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
