// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels.hpp>
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
    virtual bool empty() const override { this->cloudDrivePermissionModels_ != nullptr
        && this->requestId_ != nullptr; };
    // cloudDrivePermissionModels Field Functions 
    bool hasCloudDrivePermissionModels() const { return this->cloudDrivePermissionModels_ != nullptr;};
    void deleteCloudDrivePermissionModels() { this->cloudDrivePermissionModels_ = nullptr;};
    inline const vector<DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels> & cloudDrivePermissionModels() const { DARABONBA_PTR_GET_CONST(cloudDrivePermissionModels_, vector<DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels>) };
    inline vector<DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels> cloudDrivePermissionModels() { DARABONBA_PTR_GET(cloudDrivePermissionModels_, vector<DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels>) };
    inline DescribeCloudDrivePermissionsResponseBody& setCloudDrivePermissionModels(const vector<DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels> & cloudDrivePermissionModels) { DARABONBA_PTR_SET_VALUE(cloudDrivePermissionModels_, cloudDrivePermissionModels) };
    inline DescribeCloudDrivePermissionsResponseBody& setCloudDrivePermissionModels(vector<DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels> && cloudDrivePermissionModels) { DARABONBA_PTR_SET_RVALUE(cloudDrivePermissionModels_, cloudDrivePermissionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDrivePermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCloudDrivePermissionsResponseBodyCloudDrivePermissionModels>> cloudDrivePermissionModels_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
