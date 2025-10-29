// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICPUBLICKEYDELIVERIESRESPONSEBODYPUBLICKEYDELIVERINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTAICPUBLICKEYDELIVERIESRESPONSEBODYPUBLICKEYDELIVERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
    };
    ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo() = default ;
    ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo(const ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo &) = default ;
    ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo(ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo &&) = default ;
    ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo() = default ;
    ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& operator=(const ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo &) = default ;
    ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& operator=(ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->keyGroup_ == nullptr && return this->keyName_ == nullptr && return this->keyType_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string keyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline ListAICPublicKeyDeliveriesResponseBodyPublicKeyDeliverInfo& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> keyGroup_ = nullptr;
    std::shared_ptr<string> keyName_ = nullptr;
    std::shared_ptr<string> keyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
