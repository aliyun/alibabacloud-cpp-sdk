// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINNERIPWHITELISTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINNERIPWHITELISTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInnerIpWhitelistGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInnerIpWhitelistGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInnerIpWhitelistGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeInnerIpWhitelistGroupsRequest() = default ;
    DescribeInnerIpWhitelistGroupsRequest(const DescribeInnerIpWhitelistGroupsRequest &) = default ;
    DescribeInnerIpWhitelistGroupsRequest(DescribeInnerIpWhitelistGroupsRequest &&) = default ;
    DescribeInnerIpWhitelistGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInnerIpWhitelistGroupsRequest() = default ;
    DescribeInnerIpWhitelistGroupsRequest& operator=(const DescribeInnerIpWhitelistGroupsRequest &) = default ;
    DescribeInnerIpWhitelistGroupsRequest& operator=(DescribeInnerIpWhitelistGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInnerIpWhitelistGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
