// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetHostAccountRequest() = default ;
    GetHostAccountRequest(const GetHostAccountRequest &) = default ;
    GetHostAccountRequest(GetHostAccountRequest &&) = default ;
    GetHostAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostAccountRequest() = default ;
    GetHostAccountRequest& operator=(const GetHostAccountRequest &) = default ;
    GetHostAccountRequest& operator=(GetHostAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline GetHostAccountRequest& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHostAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetHostAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the host account that you want to query.
    // 
    // > You can call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query the ID of the host account.
    // 
    // This parameter is required.
    shared_ptr<string> hostAccountId_ {};
    // The ID of the bastion host in which you want to query the details of the host account.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host in which you want to query the details of the host account.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
