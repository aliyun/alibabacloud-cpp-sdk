// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEPERMISSIONSRESPONSEBODYCLOUDDRIVEPERMISSIONMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEPERMISSIONSRESPONSEBODYCLOUDDRIVEPERMISSIONMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels& obj) { 
      DARABONBA_PTR_TO_JSON(EndUsers, endUsers_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUsers, endUsers_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
    };
    DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels() = default ;
    DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels(const DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels &) = default ;
    DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels(DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels &&) = default ;
    DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels() = default ;
    DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels& operator=(const DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels &) = default ;
    DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels& operator=(DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endUsers_ != nullptr
        && this->permission_ != nullptr; };
    // endUsers Field Functions 
    bool hasEndUsers() const { return this->endUsers_ != nullptr;};
    void deleteEndUsers() { this->endUsers_ = nullptr;};
    inline const vector<string> & endUsers() const { DARABONBA_PTR_GET_CONST(endUsers_, vector<string>) };
    inline vector<string> endUsers() { DARABONBA_PTR_GET(endUsers_, vector<string>) };
    inline DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels& setEndUsers(const vector<string> & endUsers) { DARABONBA_PTR_SET_VALUE(endUsers_, endUsers) };
    inline DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels& setEndUsers(vector<string> && endUsers) { DARABONBA_PTR_SET_RVALUE(endUsers_, endUsers) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


  protected:
    std::shared_ptr<vector<string>> endUsers_ = nullptr;
    std::shared_ptr<string> permission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
