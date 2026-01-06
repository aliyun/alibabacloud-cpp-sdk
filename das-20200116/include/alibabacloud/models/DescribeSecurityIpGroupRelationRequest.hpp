// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSecurityIPGroupRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPGroupRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPGroupRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    DescribeSecurityIPGroupRelationRequest() = default ;
    DescribeSecurityIPGroupRelationRequest(const DescribeSecurityIPGroupRelationRequest &) = default ;
    DescribeSecurityIPGroupRelationRequest(DescribeSecurityIPGroupRelationRequest &&) = default ;
    DescribeSecurityIPGroupRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPGroupRelationRequest() = default ;
    DescribeSecurityIPGroupRelationRequest& operator=(const DescribeSecurityIPGroupRelationRequest &) = default ;
    DescribeSecurityIPGroupRelationRequest& operator=(DescribeSecurityIPGroupRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityIPGroupRelationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeSecurityIPGroupRelationRequest& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
