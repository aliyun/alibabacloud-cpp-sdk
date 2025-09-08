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
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->roleFor_ != nullptr && this->roleType_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImportedLogCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline string roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, "") };
    inline DescribeImportedLogCountRequest& setRoleFor(string roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeImportedLogCountRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> roleFor_ = nullptr;
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
