// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSROOTPATHPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSROOTPATHPERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessPointsResponseBodyAccessPointsRootPathPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBodyAccessPointsRootPathPermission& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerGroupId, ownerGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBodyAccessPointsRootPathPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerGroupId, ownerGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
    };
    DescribeAccessPointsResponseBodyAccessPointsRootPathPermission() = default ;
    DescribeAccessPointsResponseBodyAccessPointsRootPathPermission(const DescribeAccessPointsResponseBodyAccessPointsRootPathPermission &) = default ;
    DescribeAccessPointsResponseBodyAccessPointsRootPathPermission(DescribeAccessPointsResponseBodyAccessPointsRootPathPermission &&) = default ;
    DescribeAccessPointsResponseBodyAccessPointsRootPathPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBodyAccessPointsRootPathPermission() = default ;
    DescribeAccessPointsResponseBodyAccessPointsRootPathPermission& operator=(const DescribeAccessPointsResponseBodyAccessPointsRootPathPermission &) = default ;
    DescribeAccessPointsResponseBodyAccessPointsRootPathPermission& operator=(DescribeAccessPointsResponseBodyAccessPointsRootPathPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerGroupId_ != nullptr
        && this->ownerUserId_ != nullptr && this->permission_ != nullptr; };
    // ownerGroupId Field Functions 
    bool hasOwnerGroupId() const { return this->ownerGroupId_ != nullptr;};
    void deleteOwnerGroupId() { this->ownerGroupId_ = nullptr;};
    inline int64_t ownerGroupId() const { DARABONBA_PTR_GET_DEFAULT(ownerGroupId_, 0L) };
    inline DescribeAccessPointsResponseBodyAccessPointsRootPathPermission& setOwnerGroupId(int64_t ownerGroupId) { DARABONBA_PTR_SET_VALUE(ownerGroupId_, ownerGroupId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline int64_t ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
    inline DescribeAccessPointsResponseBodyAccessPointsRootPathPermission& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointsRootPathPermission& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


  protected:
    // The ID of the owner group.
    std::shared_ptr<int64_t> ownerGroupId_ = nullptr;
    // The owner ID.
    std::shared_ptr<int64_t> ownerUserId_ = nullptr;
    // The POSIX permission.
    std::shared_ptr<string> permission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
