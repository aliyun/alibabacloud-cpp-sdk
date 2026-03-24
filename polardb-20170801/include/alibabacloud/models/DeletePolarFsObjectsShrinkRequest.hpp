// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARFSOBJECTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARFSOBJECTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarFsObjectsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarFsObjectsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ObjectsToDelete, objectsToDeleteShrink_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarFsObjectsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ObjectsToDelete, objectsToDeleteShrink_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    DeletePolarFsObjectsShrinkRequest() = default ;
    DeletePolarFsObjectsShrinkRequest(const DeletePolarFsObjectsShrinkRequest &) = default ;
    DeletePolarFsObjectsShrinkRequest(DeletePolarFsObjectsShrinkRequest &&) = default ;
    DeletePolarFsObjectsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarFsObjectsShrinkRequest() = default ;
    DeletePolarFsObjectsShrinkRequest& operator=(const DeletePolarFsObjectsShrinkRequest &) = default ;
    DeletePolarFsObjectsShrinkRequest& operator=(DeletePolarFsObjectsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->objectsToDeleteShrink_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeletePolarFsObjectsShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // objectsToDeleteShrink Field Functions 
    bool hasObjectsToDeleteShrink() const { return this->objectsToDeleteShrink_ != nullptr;};
    void deleteObjectsToDeleteShrink() { this->objectsToDeleteShrink_ = nullptr;};
    inline string getObjectsToDeleteShrink() const { DARABONBA_PTR_GET_DEFAULT(objectsToDeleteShrink_, "") };
    inline DeletePolarFsObjectsShrinkRequest& setObjectsToDeleteShrink(string objectsToDeleteShrink) { DARABONBA_PTR_SET_VALUE(objectsToDeleteShrink_, objectsToDeleteShrink) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DeletePolarFsObjectsShrinkRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> objectsToDeleteShrink_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
