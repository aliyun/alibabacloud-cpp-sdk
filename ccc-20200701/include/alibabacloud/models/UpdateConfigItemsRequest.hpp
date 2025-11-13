// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UpdateConfigItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigItems, configItems_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigItems, configItems_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    UpdateConfigItemsRequest() = default ;
    UpdateConfigItemsRequest(const UpdateConfigItemsRequest &) = default ;
    UpdateConfigItemsRequest(UpdateConfigItemsRequest &&) = default ;
    UpdateConfigItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigItemsRequest() = default ;
    UpdateConfigItemsRequest& operator=(const UpdateConfigItemsRequest &) = default ;
    UpdateConfigItemsRequest& operator=(UpdateConfigItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configItems_ == nullptr
        && return this->instanceId_ == nullptr && return this->objectId_ == nullptr && return this->objectType_ == nullptr; };
    // configItems Field Functions 
    bool hasConfigItems() const { return this->configItems_ != nullptr;};
    void deleteConfigItems() { this->configItems_ = nullptr;};
    inline string configItems() const { DARABONBA_PTR_GET_DEFAULT(configItems_, "") };
    inline UpdateConfigItemsRequest& setConfigItems(string configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateConfigItemsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline UpdateConfigItemsRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline UpdateConfigItemsRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> configItems_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> objectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> objectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
