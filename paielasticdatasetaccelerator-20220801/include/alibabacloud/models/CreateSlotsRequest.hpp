// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESLOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SlotLifeCycle.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class CreateSlotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Slots, slots_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Slots, slots_);
    };
    CreateSlotsRequest() = default ;
    CreateSlotsRequest(const CreateSlotsRequest &) = default ;
    CreateSlotsRequest(CreateSlotsRequest &&) = default ;
    CreateSlotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlotsRequest() = default ;
    CreateSlotsRequest& operator=(const CreateSlotsRequest &) = default ;
    CreateSlotsRequest& operator=(CreateSlotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Slots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Slots& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndpointIds, endpointIds_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IoType, ioType_);
        DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(StorageUri, storageUri_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Slots& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndpointIds, endpointIds_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IoType, ioType_);
        DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(StorageUri, storageUri_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Slots() = default ;
      Slots(const Slots &) = default ;
      Slots(Slots &&) = default ;
      Slots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Slots() = default ;
      Slots& operator=(const Slots &) = default ;
      Slots& operator=(Slots &&) = default ;
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

      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->description_ == nullptr && this->endpointIds_ == nullptr && this->instanceId_ == nullptr && this->ioType_ == nullptr && this->lifeCycle_ == nullptr
        && this->name_ == nullptr && this->storageType_ == nullptr && this->storageUri_ == nullptr && this->tags_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
      inline Slots& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Slots& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpointIds Field Functions 
      bool hasEndpointIds() const { return this->endpointIds_ != nullptr;};
      void deleteEndpointIds() { this->endpointIds_ = nullptr;};
      inline string getEndpointIds() const { DARABONBA_PTR_GET_DEFAULT(endpointIds_, "") };
      inline Slots& setEndpointIds(string endpointIds) { DARABONBA_PTR_SET_VALUE(endpointIds_, endpointIds) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Slots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ioType Field Functions 
      bool hasIoType() const { return this->ioType_ != nullptr;};
      void deleteIoType() { this->ioType_ = nullptr;};
      inline string getIoType() const { DARABONBA_PTR_GET_DEFAULT(ioType_, "") };
      inline Slots& setIoType(string ioType) { DARABONBA_PTR_SET_VALUE(ioType_, ioType) };


      // lifeCycle Field Functions 
      bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
      void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
      inline const SlotLifeCycle & getLifeCycle() const { DARABONBA_PTR_GET_CONST(lifeCycle_, SlotLifeCycle) };
      inline SlotLifeCycle getLifeCycle() { DARABONBA_PTR_GET(lifeCycle_, SlotLifeCycle) };
      inline Slots& setLifeCycle(const SlotLifeCycle & lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };
      inline Slots& setLifeCycle(SlotLifeCycle && lifeCycle) { DARABONBA_PTR_SET_RVALUE(lifeCycle_, lifeCycle) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Slots& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Slots& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // storageUri Field Functions 
      bool hasStorageUri() const { return this->storageUri_ != nullptr;};
      void deleteStorageUri() { this->storageUri_ = nullptr;};
      inline string getStorageUri() const { DARABONBA_PTR_GET_DEFAULT(storageUri_, "") };
      inline Slots& setStorageUri(string storageUri) { DARABONBA_PTR_SET_VALUE(storageUri_, storageUri) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Slots::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Slots::Tags>) };
      inline vector<Slots::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Slots::Tags>) };
      inline Slots& setTags(const vector<Slots::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Slots& setTags(vector<Slots::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> capacity_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> endpointIds_ {};
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> ioType_ {};
      shared_ptr<SlotLifeCycle> lifeCycle_ {};
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> storageType_ {};
      // This parameter is required.
      shared_ptr<string> storageUri_ {};
      shared_ptr<vector<Slots::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->slots_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSlotsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // slots Field Functions 
    bool hasSlots() const { return this->slots_ != nullptr;};
    void deleteSlots() { this->slots_ = nullptr;};
    inline const vector<CreateSlotsRequest::Slots> & getSlots() const { DARABONBA_PTR_GET_CONST(slots_, vector<CreateSlotsRequest::Slots>) };
    inline vector<CreateSlotsRequest::Slots> getSlots() { DARABONBA_PTR_GET(slots_, vector<CreateSlotsRequest::Slots>) };
    inline CreateSlotsRequest& setSlots(const vector<CreateSlotsRequest::Slots> & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
    inline CreateSlotsRequest& setSlots(vector<CreateSlotsRequest::Slots> && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


  protected:
    shared_ptr<bool> dryRun_ {};
    shared_ptr<vector<CreateSlotsRequest::Slots>> slots_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
