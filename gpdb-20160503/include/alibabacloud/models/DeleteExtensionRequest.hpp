// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXTENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXTENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteExtensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExtensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBNames, DBNames_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExtensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBNames, DBNames_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteExtensionRequest() = default ;
    DeleteExtensionRequest(const DeleteExtensionRequest &) = default ;
    DeleteExtensionRequest(DeleteExtensionRequest &&) = default ;
    DeleteExtensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExtensionRequest() = default ;
    DeleteExtensionRequest& operator=(const DeleteExtensionRequest &) = default ;
    DeleteExtensionRequest& operator=(DeleteExtensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBNames_ == nullptr && this->extension_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteExtensionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBNames Field Functions 
    bool hasDBNames() const { return this->DBNames_ != nullptr;};
    void deleteDBNames() { this->DBNames_ = nullptr;};
    inline string getDBNames() const { DARABONBA_PTR_GET_DEFAULT(DBNames_, "") };
    inline DeleteExtensionRequest& setDBNames(string DBNames) { DARABONBA_PTR_SET_VALUE(DBNames_, DBNames) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline DeleteExtensionRequest& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteExtensionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances in a specific region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> DBNames_ {};
    // The name of the extension.
    // 
    // This parameter is required.
    shared_ptr<string> extension_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
