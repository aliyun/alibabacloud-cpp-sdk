// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class MoveIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
    };
    MoveIpRequest() = default ;
    MoveIpRequest(const MoveIpRequest &) = default ;
    MoveIpRequest(MoveIpRequest &&) = default ;
    MoveIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveIpRequest() = default ;
    MoveIpRequest& operator=(const MoveIpRequest &) = default ;
    MoveIpRequest& operator=(MoveIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ipList_ == nullptr && this->regionId_ == nullptr && this->sourceInstanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MoveIpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline MoveIpRequest& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MoveIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline MoveIpRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


  protected:
    // The ID of the destination Anti-DDoS Origin instance.
    // 
    // > You can call the [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) operation to query the IDs of all Anti-DDoS Origin instances.
    shared_ptr<string> instanceId_ {};
    // The list of IP addresses to migrate to an Anti-DDoS Origin instance for protection. The list is represented as a character string in JSON array format. Each element in the JSON array is a structure that contains the following fields:
    // 
    // - **ip**: String type. Required. The IP address to add.
    // 
    // - **member_uid**: String type. Optional. The member accounts to which the asset belongs. This field is required only when you add an asset under member accounts. Example: [{"ip":"121.41.XX.XX","member_uid":"120100811162****"}]
    shared_ptr<string> ipList_ {};
    // The region ID of the Anti-DDoS Origin instance.
    // 
    // > You can call the DescribeRegions operation to query all regions supported by Anti-DDoS Origin.
    shared_ptr<string> regionId_ {};
    // The ID of the source Anti-DDoS Origin instance.
    // 
    // > You can call the [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) operation to query the IDs of all Anti-DDoS Origin instances.
    shared_ptr<string> sourceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
