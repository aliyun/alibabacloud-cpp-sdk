// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTINSTANCETOVBRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTINSTANCETOVBRREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GrantInstanceToVbrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantInstanceToVbrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceIds, vbrInstanceIds_);
      DARABONBA_PTR_TO_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_TO_JSON(VbrRegionNo, vbrRegionNo_);
    };
    friend void from_json(const Darabonba::Json& j, GrantInstanceToVbrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceIds, vbrInstanceIds_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_FROM_JSON(VbrRegionNo, vbrRegionNo_);
    };
    GrantInstanceToVbrRequest() = default ;
    GrantInstanceToVbrRequest(const GrantInstanceToVbrRequest &) = default ;
    GrantInstanceToVbrRequest(GrantInstanceToVbrRequest &&) = default ;
    GrantInstanceToVbrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantInstanceToVbrRequest() = default ;
    GrantInstanceToVbrRequest& operator=(const GrantInstanceToVbrRequest &) = default ;
    GrantInstanceToVbrRequest& operator=(GrantInstanceToVbrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantType_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->vbrInstanceIds_ != nullptr && this->vbrOwnerUid_ != nullptr && this->vbrRegionNo_ != nullptr; };
    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline GrantInstanceToVbrRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GrantInstanceToVbrRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrantInstanceToVbrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vbrInstanceIds Field Functions 
    bool hasVbrInstanceIds() const { return this->vbrInstanceIds_ != nullptr;};
    void deleteVbrInstanceIds() { this->vbrInstanceIds_ = nullptr;};
    inline const vector<string> & vbrInstanceIds() const { DARABONBA_PTR_GET_CONST(vbrInstanceIds_, vector<string>) };
    inline vector<string> vbrInstanceIds() { DARABONBA_PTR_GET(vbrInstanceIds_, vector<string>) };
    inline GrantInstanceToVbrRequest& setVbrInstanceIds(const vector<string> & vbrInstanceIds) { DARABONBA_PTR_SET_VALUE(vbrInstanceIds_, vbrInstanceIds) };
    inline GrantInstanceToVbrRequest& setVbrInstanceIds(vector<string> && vbrInstanceIds) { DARABONBA_PTR_SET_RVALUE(vbrInstanceIds_, vbrInstanceIds) };


    // vbrOwnerUid Field Functions 
    bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
    void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
    inline int64_t vbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, 0L) };
    inline GrantInstanceToVbrRequest& setVbrOwnerUid(int64_t vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


    // vbrRegionNo Field Functions 
    bool hasVbrRegionNo() const { return this->vbrRegionNo_ != nullptr;};
    void deleteVbrRegionNo() { this->vbrRegionNo_ = nullptr;};
    inline string vbrRegionNo() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionNo_, "") };
    inline GrantInstanceToVbrRequest& setVbrRegionNo(string vbrRegionNo) { DARABONBA_PTR_SET_VALUE(vbrRegionNo_, vbrRegionNo) };


  protected:
    // The VBRs that need to acquire permissions on the VPC. Valid values:
    // 
    // *   **All**: Permissions on the VPC are granted to all VBRs that belong to the specified region and Alibaba Cloud account. In this case, you can leave **VbrInstanceIds** empty.
    // *   **Specify**: Permissions on the VPC are granted to the specified VBRs. **VbrInstanceIds** must be assigned a value.
    // 
    // This parameter is required.
    std::shared_ptr<string> grantType_ = nullptr;
    // The ID of the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where the VPC is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about the VBRs.
    std::shared_ptr<vector<string>> vbrInstanceIds_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> vbrOwnerUid_ = nullptr;
    // The ID of the region where the VBR is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrRegionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
