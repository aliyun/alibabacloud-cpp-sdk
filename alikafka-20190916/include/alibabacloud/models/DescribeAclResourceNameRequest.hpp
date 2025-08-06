// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLRESOURCENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLRESOURCENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeAclResourceNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclResourceNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_TO_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclResourceNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclResourcePatternType, aclResourcePatternType_);
      DARABONBA_PTR_FROM_JSON(AclResourceType, aclResourceType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAclResourceNameRequest() = default ;
    DescribeAclResourceNameRequest(const DescribeAclResourceNameRequest &) = default ;
    DescribeAclResourceNameRequest(DescribeAclResourceNameRequest &&) = default ;
    DescribeAclResourceNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclResourceNameRequest() = default ;
    DescribeAclResourceNameRequest& operator=(const DescribeAclResourceNameRequest &) = default ;
    DescribeAclResourceNameRequest& operator=(DescribeAclResourceNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclResourcePatternType_ != nullptr
        && this->aclResourceType_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr; };
    // aclResourcePatternType Field Functions 
    bool hasAclResourcePatternType() const { return this->aclResourcePatternType_ != nullptr;};
    void deleteAclResourcePatternType() { this->aclResourcePatternType_ = nullptr;};
    inline string aclResourcePatternType() const { DARABONBA_PTR_GET_DEFAULT(aclResourcePatternType_, "") };
    inline DescribeAclResourceNameRequest& setAclResourcePatternType(string aclResourcePatternType) { DARABONBA_PTR_SET_VALUE(aclResourcePatternType_, aclResourcePatternType) };


    // aclResourceType Field Functions 
    bool hasAclResourceType() const { return this->aclResourceType_ != nullptr;};
    void deleteAclResourceType() { this->aclResourceType_ = nullptr;};
    inline string aclResourceType() const { DARABONBA_PTR_GET_DEFAULT(aclResourceType_, "") };
    inline DescribeAclResourceNameRequest& setAclResourceType(string aclResourceType) { DARABONBA_PTR_SET_VALUE(aclResourceType_, aclResourceType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAclResourceNameRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAclResourceNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> aclResourcePatternType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> aclResourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
