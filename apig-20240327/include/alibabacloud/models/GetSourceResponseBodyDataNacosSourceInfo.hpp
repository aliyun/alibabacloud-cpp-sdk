// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODYDATANACOSSOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODYDATANACOSSOURCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetSourceResponseBodyDataNacosSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceResponseBodyDataNacosSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceResponseBodyDataNacosSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    GetSourceResponseBodyDataNacosSourceInfo() = default ;
    GetSourceResponseBodyDataNacosSourceInfo(const GetSourceResponseBodyDataNacosSourceInfo &) = default ;
    GetSourceResponseBodyDataNacosSourceInfo(GetSourceResponseBodyDataNacosSourceInfo &&) = default ;
    GetSourceResponseBodyDataNacosSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceResponseBodyDataNacosSourceInfo() = default ;
    GetSourceResponseBodyDataNacosSourceInfo& operator=(const GetSourceResponseBodyDataNacosSourceInfo &) = default ;
    GetSourceResponseBodyDataNacosSourceInfo& operator=(GetSourceResponseBodyDataNacosSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->clusterId_ == nullptr && return this->instanceId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetSourceResponseBodyDataNacosSourceInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetSourceResponseBodyDataNacosSourceInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSourceResponseBodyDataNacosSourceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The endpoint of the Nacos instance.
    std::shared_ptr<string> address_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The Nacos instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
