// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESLOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESLOTREQUEST_HPP_
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
  class UpdateSlotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSlotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUri, storageUri_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSlotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUri, storageUri_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UpdateSlotRequest() = default ;
    UpdateSlotRequest(const UpdateSlotRequest &) = default ;
    UpdateSlotRequest(UpdateSlotRequest &&) = default ;
    UpdateSlotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSlotRequest() = default ;
    UpdateSlotRequest& operator=(const UpdateSlotRequest &) = default ;
    UpdateSlotRequest& operator=(UpdateSlotRequest &&) = default ;
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
        && this->description_ == nullptr && this->lifeCycle_ == nullptr && this->name_ == nullptr && this->storageType_ == nullptr && this->storageUri_ == nullptr
        && this->tags_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
    inline UpdateSlotRequest& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSlotRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline const SlotLifeCycle & getLifeCycle() const { DARABONBA_PTR_GET_CONST(lifeCycle_, SlotLifeCycle) };
    inline SlotLifeCycle getLifeCycle() { DARABONBA_PTR_GET(lifeCycle_, SlotLifeCycle) };
    inline UpdateSlotRequest& setLifeCycle(const SlotLifeCycle & lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };
    inline UpdateSlotRequest& setLifeCycle(SlotLifeCycle && lifeCycle) { DARABONBA_PTR_SET_RVALUE(lifeCycle_, lifeCycle) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSlotRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline UpdateSlotRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUri Field Functions 
    bool hasStorageUri() const { return this->storageUri_ != nullptr;};
    void deleteStorageUri() { this->storageUri_ = nullptr;};
    inline string getStorageUri() const { DARABONBA_PTR_GET_DEFAULT(storageUri_, "") };
    inline UpdateSlotRequest& setStorageUri(string storageUri) { DARABONBA_PTR_SET_VALUE(storageUri_, storageUri) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateSlotRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateSlotRequest::Tags>) };
    inline vector<UpdateSlotRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateSlotRequest::Tags>) };
    inline UpdateSlotRequest& setTags(const vector<UpdateSlotRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateSlotRequest& setTags(vector<UpdateSlotRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // This parameter is required.
    shared_ptr<string> capacity_ {};
    shared_ptr<string> description_ {};
    shared_ptr<SlotLifeCycle> lifeCycle_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> storageType_ {};
    // This parameter is required.
    shared_ptr<string> storageUri_ {};
    shared_ptr<vector<UpdateSlotRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
