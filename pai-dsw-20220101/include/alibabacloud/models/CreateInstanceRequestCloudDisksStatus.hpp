// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCLOUDDISKSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCLOUDDISKSSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceRequestCloudDisksStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestCloudDisksStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestCloudDisksStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    CreateInstanceRequestCloudDisksStatus() = default ;
    CreateInstanceRequestCloudDisksStatus(const CreateInstanceRequestCloudDisksStatus &) = default ;
    CreateInstanceRequestCloudDisksStatus(CreateInstanceRequestCloudDisksStatus &&) = default ;
    CreateInstanceRequestCloudDisksStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestCloudDisksStatus() = default ;
    CreateInstanceRequestCloudDisksStatus& operator=(const CreateInstanceRequestCloudDisksStatus &) = default ;
    CreateInstanceRequestCloudDisksStatus& operator=(CreateInstanceRequestCloudDisksStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->capacity_ == nullptr && return this->usage_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline int64_t available() const { DARABONBA_PTR_GET_DEFAULT(available_, 0L) };
    inline CreateInstanceRequestCloudDisksStatus& setAvailable(int64_t available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline CreateInstanceRequestCloudDisksStatus& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int64_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
    inline CreateInstanceRequestCloudDisksStatus& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The available capacity. Unit: bytes.
    std::shared_ptr<int64_t> available_ = nullptr;
    // The capacity. Unit: bytes.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The used capacity. Unit: bytes.
    std::shared_ptr<int64_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
