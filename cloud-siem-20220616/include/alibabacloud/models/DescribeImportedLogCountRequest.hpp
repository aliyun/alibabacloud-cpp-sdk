// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeImportedLogCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportedLogCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportedLogCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeImportedLogCountRequest() = default ;
    DescribeImportedLogCountRequest(const DescribeImportedLogCountRequest &) = default ;
    DescribeImportedLogCountRequest(DescribeImportedLogCountRequest &&) = default ;
    DescribeImportedLogCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportedLogCountRequest() = default ;
    DescribeImportedLogCountRequest& operator=(const DescribeImportedLogCountRequest &) = default ;
    DescribeImportedLogCountRequest& operator=(DescribeImportedLogCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImportedLogCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline string getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, "") };
    inline DescribeImportedLogCountRequest& setRoleFor(string roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeImportedLogCountRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The region where the management hub of Threat Analysis is located. Select the region of the management hub based on the region where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland or China (Hong Kong).
    // 
    // - ap-southeast-1: Your assets are in a region outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of the member. An administrator can specify this parameter to switch to the perspective of the member.
    shared_ptr<string> roleFor_ {};
    // The type of the view.
    // 
    // - 0: The view of the current Alibaba Cloud account.
    // 
    // - 1: The view of all accounts that belong to the enterprise.
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
