// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARFSOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARFSOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarFsObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarFsObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ObjectsToDelete, objectsToDelete_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarFsObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ObjectsToDelete, objectsToDelete_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    DeletePolarFsObjectsRequest() = default ;
    DeletePolarFsObjectsRequest(const DeletePolarFsObjectsRequest &) = default ;
    DeletePolarFsObjectsRequest(DeletePolarFsObjectsRequest &&) = default ;
    DeletePolarFsObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarFsObjectsRequest() = default ;
    DeletePolarFsObjectsRequest& operator=(const DeletePolarFsObjectsRequest &) = default ;
    DeletePolarFsObjectsRequest& operator=(DeletePolarFsObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->objectsToDelete_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeletePolarFsObjectsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // objectsToDelete Field Functions 
    bool hasObjectsToDelete() const { return this->objectsToDelete_ != nullptr;};
    void deleteObjectsToDelete() { this->objectsToDelete_ = nullptr;};
    inline const vector<string> & getObjectsToDelete() const { DARABONBA_PTR_GET_CONST(objectsToDelete_, vector<string>) };
    inline vector<string> getObjectsToDelete() { DARABONBA_PTR_GET(objectsToDelete_, vector<string>) };
    inline DeletePolarFsObjectsRequest& setObjectsToDelete(const vector<string> & objectsToDelete) { DARABONBA_PTR_SET_VALUE(objectsToDelete_, objectsToDelete) };
    inline DeletePolarFsObjectsRequest& setObjectsToDelete(vector<string> && objectsToDelete) { DARABONBA_PTR_SET_RVALUE(objectsToDelete_, objectsToDelete) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DeletePolarFsObjectsRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> objectsToDelete_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
