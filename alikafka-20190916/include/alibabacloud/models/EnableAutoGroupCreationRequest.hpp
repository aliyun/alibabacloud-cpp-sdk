// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEAUTOGROUPCREATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEAUTOGROUPCREATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class EnableAutoGroupCreationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableAutoGroupCreationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableAutoGroupCreationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableAutoGroupCreationRequest() = default ;
    EnableAutoGroupCreationRequest(const EnableAutoGroupCreationRequest &) = default ;
    EnableAutoGroupCreationRequest(EnableAutoGroupCreationRequest &&) = default ;
    EnableAutoGroupCreationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableAutoGroupCreationRequest() = default ;
    EnableAutoGroupCreationRequest& operator=(const EnableAutoGroupCreationRequest &) = default ;
    EnableAutoGroupCreationRequest& operator=(EnableAutoGroupCreationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline EnableAutoGroupCreationRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableAutoGroupCreationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableAutoGroupCreationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specify whether to enable the flexible group creation feature. Valid values:
    // 
    // *   **true**: enables the flexible group creation feature.
    // *   **false**: disabled the flexible group creation feature.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enable_ = nullptr;
    // The instance ID.
    // 
    // You can call the [GetInstanceList](https://help.aliyun.com/document_detail/437663.html) operation to query instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
