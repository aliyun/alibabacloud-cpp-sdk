// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODYORDERINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODYORDERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class CreateInstanceResponseBodyOrderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceResponseBodyOrderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(StorageInstanceId, storageInstanceId_);
      DARABONBA_PTR_TO_JSON(StorageOrderId, storageOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceResponseBodyOrderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(StorageInstanceId, storageInstanceId_);
      DARABONBA_PTR_FROM_JSON(StorageOrderId, storageOrderId_);
    };
    CreateInstanceResponseBodyOrderInfo() = default ;
    CreateInstanceResponseBodyOrderInfo(const CreateInstanceResponseBodyOrderInfo &) = default ;
    CreateInstanceResponseBodyOrderInfo(CreateInstanceResponseBodyOrderInfo &&) = default ;
    CreateInstanceResponseBodyOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceResponseBodyOrderInfo() = default ;
    CreateInstanceResponseBodyOrderInfo& operator=(const CreateInstanceResponseBodyOrderInfo &) = default ;
    CreateInstanceResponseBodyOrderInfo& operator=(CreateInstanceResponseBodyOrderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->orderId_ != nullptr && this->storageInstanceId_ != nullptr && this->storageOrderId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateInstanceResponseBodyOrderInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateInstanceResponseBodyOrderInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // storageInstanceId Field Functions 
    bool hasStorageInstanceId() const { return this->storageInstanceId_ != nullptr;};
    void deleteStorageInstanceId() { this->storageInstanceId_ = nullptr;};
    inline string storageInstanceId() const { DARABONBA_PTR_GET_DEFAULT(storageInstanceId_, "") };
    inline CreateInstanceResponseBodyOrderInfo& setStorageInstanceId(string storageInstanceId) { DARABONBA_PTR_SET_VALUE(storageInstanceId_, storageInstanceId) };


    // storageOrderId Field Functions 
    bool hasStorageOrderId() const { return this->storageOrderId_ != nullptr;};
    void deleteStorageOrderId() { this->storageOrderId_ = nullptr;};
    inline int64_t storageOrderId() const { DARABONBA_PTR_GET_DEFAULT(storageOrderId_, 0L) };
    inline CreateInstanceResponseBodyOrderInfo& setStorageOrderId(int64_t storageOrderId) { DARABONBA_PTR_SET_VALUE(storageOrderId_, storageOrderId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> storageInstanceId_ = nullptr;
    std::shared_ptr<int64_t> storageOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
