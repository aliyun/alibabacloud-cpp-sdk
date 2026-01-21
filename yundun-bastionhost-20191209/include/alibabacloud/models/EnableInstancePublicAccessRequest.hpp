// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEINSTANCEPUBLICACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEINSTANCEPUBLICACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class EnableInstancePublicAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableInstancePublicAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableInstancePublicAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableInstancePublicAccessRequest() = default ;
    EnableInstancePublicAccessRequest(const EnableInstancePublicAccessRequest &) = default ;
    EnableInstancePublicAccessRequest(EnableInstancePublicAccessRequest &&) = default ;
    EnableInstancePublicAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableInstancePublicAccessRequest() = default ;
    EnableInstancePublicAccessRequest& operator=(const EnableInstancePublicAccessRequest &) = default ;
    EnableInstancePublicAccessRequest& operator=(EnableInstancePublicAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableInstancePublicAccessRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableInstancePublicAccessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the bastion host.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
