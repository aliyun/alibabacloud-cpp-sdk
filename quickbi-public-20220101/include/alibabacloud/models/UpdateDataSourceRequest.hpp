// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateModel, updateModel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateModel, updateModel_);
    };
    UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest(UpdateDataSourceRequest &&) = default ;
    UpdateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest& operator=(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest& operator=(UpdateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateModel_ == nullptr; };
    // updateModel Field Functions 
    bool hasUpdateModel() const { return this->updateModel_ != nullptr;};
    void deleteUpdateModel() { this->updateModel_ = nullptr;};
    inline string getUpdateModel() const { DARABONBA_PTR_GET_DEFAULT(updateModel_, "") };
    inline UpdateDataSourceRequest& setUpdateModel(string updateModel) { DARABONBA_PTR_SET_VALUE(updateModel_, updateModel) };


  protected:
    // A JSON-formatted string defining the data source configuration to update. See the example for the specific format. The JSON string includes the following parameters:
    // 
    // - `dsId`: Required. The ID of the data source.
    // 
    // - `userId`: Optional. The Quick BI user ID of the user who modifies the data source. If you specify this parameter, the update runs as this user.
    // 
    // - `dsType`: Required. The type of the data source. This value cannot be changed and must match the existing data source type.
    // 
    // - `showName`: Optional. The display name of the data source.
    // 
    // - `address`: Optional. The database connection endpoint, which can be a domain name or an IP address.
    // 
    // - `port`: Optional. The connection port for the database.
    // 
    // - `schema`: Optional. The database schema. This parameter is required only for database types that support schemas. For example, the default schema for SQL Server is `dbo`, while MySQL does not use schemas.
    // 
    // - `instance`: Optional. The database instance.
    // 
    // - `username`: Optional. The username for the database account or the AccessKey ID.
    // 
    // - `password`: Optional. The password for the database account.
    // 
    // - `resource`: Specifies the VPC type. This parameter is required if you are using a VPC connection. If the data source was created with VPC settings, you must include this parameter in your update request. Omitting this parameter from the request disables the VPC connection. For a list of `resource` values, see the **Additional information** section below.
    // 
    // - `accessId`: Optional. The AccessKey ID for the VPC instance. This parameter is required if the `resource` parameter is specified.
    // 
    // - `accessKey`: Optional. The AccessKey secret for the VPC instance. This parameter is required if the `resource` parameter is specified.
    // 
    // - `instanceId`: Optional. The ID of the VPC instance. This parameter is required if the `resource` parameter is specified.
    // 
    // - `region`: Optional. The region where the VPC instance is located. This parameter is required if the `resource` parameter is specified. For a list of region IDs, see the **Additional information** section below.
    // 
    // - `config`: Optional. A JSON object that contains additional configuration parameters for the database. You only need to include the fields that you want to update. Any field that you include is updated to the new value, even if it is an empty string. Fields that are not included in the request remain unchanged.
    // 
    // This parameter is required.
    shared_ptr<string> updateModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
