// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESLOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SlotLifeCycle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class CreateSlotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IoType, ioType_);
      DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUri, storageUri_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IoType, ioType_);
      DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUri, storageUri_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateSlotRequest() = default ;
    CreateSlotRequest(const CreateSlotRequest &) = default ;
    CreateSlotRequest(CreateSlotRequest &&) = default ;
    CreateSlotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlotRequest() = default ;
    CreateSlotRequest& operator=(const CreateSlotRequest &) = default ;
    CreateSlotRequest& operator=(CreateSlotRequest &&) = default ;
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

    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Endpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Endpoints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Endpoints& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->capacity_ == nullptr
        && this->description_ == nullptr && this->endpointIds_ == nullptr && this->endpoints_ == nullptr && this->instanceId_ == nullptr && this->ioType_ == nullptr
        && this->lifeCycle_ == nullptr && this->name_ == nullptr && this->storageType_ == nullptr && this->storageUri_ == nullptr && this->tags_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
    inline CreateSlotRequest& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSlotRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointIds Field Functions 
    bool hasEndpointIds() const { return this->endpointIds_ != nullptr;};
    void deleteEndpointIds() { this->endpointIds_ = nullptr;};
    inline string getEndpointIds() const { DARABONBA_PTR_GET_DEFAULT(endpointIds_, "") };
    inline CreateSlotRequest& setEndpointIds(string endpointIds) { DARABONBA_PTR_SET_VALUE(endpointIds_, endpointIds) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<CreateSlotRequest::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<CreateSlotRequest::Endpoints>) };
    inline vector<CreateSlotRequest::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<CreateSlotRequest::Endpoints>) };
    inline CreateSlotRequest& setEndpoints(const vector<CreateSlotRequest::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline CreateSlotRequest& setEndpoints(vector<CreateSlotRequest::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSlotRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ioType Field Functions 
    bool hasIoType() const { return this->ioType_ != nullptr;};
    void deleteIoType() { this->ioType_ = nullptr;};
    inline string getIoType() const { DARABONBA_PTR_GET_DEFAULT(ioType_, "") };
    inline CreateSlotRequest& setIoType(string ioType) { DARABONBA_PTR_SET_VALUE(ioType_, ioType) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline const SlotLifeCycle & getLifeCycle() const { DARABONBA_PTR_GET_CONST(lifeCycle_, SlotLifeCycle) };
    inline SlotLifeCycle getLifeCycle() { DARABONBA_PTR_GET(lifeCycle_, SlotLifeCycle) };
    inline CreateSlotRequest& setLifeCycle(const SlotLifeCycle & lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };
    inline CreateSlotRequest& setLifeCycle(SlotLifeCycle && lifeCycle) { DARABONBA_PTR_SET_RVALUE(lifeCycle_, lifeCycle) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSlotRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateSlotRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUri Field Functions 
    bool hasStorageUri() const { return this->storageUri_ != nullptr;};
    void deleteStorageUri() { this->storageUri_ = nullptr;};
    inline string getStorageUri() const { DARABONBA_PTR_GET_DEFAULT(storageUri_, "") };
    inline CreateSlotRequest& setStorageUri(string storageUri) { DARABONBA_PTR_SET_VALUE(storageUri_, storageUri) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateSlotRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateSlotRequest::Tags>) };
    inline vector<CreateSlotRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateSlotRequest::Tags>) };
    inline CreateSlotRequest& setTags(const vector<CreateSlotRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateSlotRequest& setTags(vector<CreateSlotRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // This parameter is required.
    shared_ptr<string> capacity_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> endpointIds_ {};
    shared_ptr<vector<CreateSlotRequest::Endpoints>> endpoints_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ioType_ {};
    shared_ptr<SlotLifeCycle> lifeCycle_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> storageType_ {};
    // This parameter is required.
    shared_ptr<string> storageUri_ {};
    shared_ptr<vector<CreateSlotRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
