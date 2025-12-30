// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEPERMISSIONSRESPONSEBODY_HPP_
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
  class DescribeCloudDrivePermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDrivePermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudDrivePermissionModels, cloudDrivePermissionModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDrivePermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudDrivePermissionModels, cloudDrivePermissionModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudDrivePermissionsResponseBody() = default ;
    DescribeCloudDrivePermissionsResponseBody(const DescribeCloudDrivePermissionsResponseBody &) = default ;
    DescribeCloudDrivePermissionsResponseBody(DescribeCloudDrivePermissionsResponseBody &&) = default ;
    DescribeCloudDrivePermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDrivePermissionsResponseBody() = default ;
    DescribeCloudDrivePermissionsResponseBody& operator=(const DescribeCloudDrivePermissionsResponseBody &) = default ;
    DescribeCloudDrivePermissionsResponseBody& operator=(DescribeCloudDrivePermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudDrivePermissionModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudDrivePermissionModels& obj) { 
        DARABONBA_PTR_TO_JSON(EndUsers, endUsers_);
        DARABONBA_PTR_TO_JSON(Permission, permission_);
      };
      friend void from_json(const Darabonba::Json& j, CloudDrivePermissionModels& obj) { 
        DARABONBA_PTR_FROM_JSON(EndUsers, endUsers_);
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
      };
      CloudDrivePermissionModels() = default ;
      CloudDrivePermissionModels(const CloudDrivePermissionModels &) = default ;
      CloudDrivePermissionModels(CloudDrivePermissionModels &&) = default ;
      CloudDrivePermissionModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudDrivePermissionModels() = default ;
      CloudDrivePermissionModels& operator=(const CloudDrivePermissionModels &) = default ;
      CloudDrivePermissionModels& operator=(CloudDrivePermissionModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endUsers_ == nullptr
        && this->permission_ == nullptr; };
      // endUsers Field Functions 
      bool hasEndUsers() const { return this->endUsers_ != nullptr;};
      void deleteEndUsers() { this->endUsers_ = nullptr;};
      inline const vector<string> & getEndUsers() const { DARABONBA_PTR_GET_CONST(endUsers_, vector<string>) };
      inline vector<string> getEndUsers() { DARABONBA_PTR_GET(endUsers_, vector<string>) };
      inline CloudDrivePermissionModels& setEndUsers(const vector<string> & endUsers) { DARABONBA_PTR_SET_VALUE(endUsers_, endUsers) };
      inline CloudDrivePermissionModels& setEndUsers(vector<string> && endUsers) { DARABONBA_PTR_SET_RVALUE(endUsers_, endUsers) };


      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline CloudDrivePermissionModels& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    protected:
      shared_ptr<vector<string>> endUsers_ {};
      shared_ptr<string> permission_ {};
    };

    virtual bool empty() const override { return this->cloudDrivePermissionModels_ == nullptr
        && this->requestId_ == nullptr; };
    // cloudDrivePermissionModels Field Functions 
    bool hasCloudDrivePermissionModels() const { return this->cloudDrivePermissionModels_ != nullptr;};
    void deleteCloudDrivePermissionModels() { this->cloudDrivePermissionModels_ = nullptr;};
    inline const vector<DescribeCloudDrivePermissionsResponseBody::CloudDrivePermissionModels> & getCloudDrivePermissionModels() const { DARABONBA_PTR_GET_CONST(cloudDrivePermissionModels_, vector<DescribeCloudDrivePermissionsResponseBody::CloudDrivePermissionModels>) };
    inline vector<DescribeCloudDrivePermissionsResponseBody::CloudDrivePermissionModels> getCloudDrivePermissionModels() { DARABONBA_PTR_GET(cloudDrivePermissionModels_, vector<DescribeCloudDrivePermissionsResponseBody::CloudDrivePermissionModels>) };
    inline DescribeCloudDrivePermissionsResponseBody& setCloudDrivePermissionModels(const vector<DescribeCloudDrivePermissionsResponseBody::CloudDrivePermissionModels> & cloudDrivePermissionModels) { DARABONBA_PTR_SET_VALUE(cloudDrivePermissionModels_, cloudDrivePermissionModels) };
    inline DescribeCloudDrivePermissionsResponseBody& setCloudDrivePermissionModels(vector<DescribeCloudDrivePermissionsResponseBody::CloudDrivePermissionModels> && cloudDrivePermissionModels) { DARABONBA_PTR_SET_RVALUE(cloudDrivePermissionModels_, cloudDrivePermissionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDrivePermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCloudDrivePermissionsResponseBody::CloudDrivePermissionModels>> cloudDrivePermissionModels_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
