// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEDEVICEGROUPBIZCHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEDEVICEGROUPBIZCHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AuthorizeDeviceGroupBizChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeDeviceGroupBizChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainIdList, bizChainIdList_);
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeDeviceGroupBizChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainIdList, bizChainIdList_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AuthorizeDeviceGroupBizChainRequest() = default ;
    AuthorizeDeviceGroupBizChainRequest(const AuthorizeDeviceGroupBizChainRequest &) = default ;
    AuthorizeDeviceGroupBizChainRequest(AuthorizeDeviceGroupBizChainRequest &&) = default ;
    AuthorizeDeviceGroupBizChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeDeviceGroupBizChainRequest() = default ;
    AuthorizeDeviceGroupBizChainRequest& operator=(const AuthorizeDeviceGroupBizChainRequest &) = default ;
    AuthorizeDeviceGroupBizChainRequest& operator=(AuthorizeDeviceGroupBizChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainIdList_ == nullptr
        && return this->deviceGroupId_ == nullptr && return this->regionId_ == nullptr; };
    // bizChainIdList Field Functions 
    bool hasBizChainIdList() const { return this->bizChainIdList_ != nullptr;};
    void deleteBizChainIdList() { this->bizChainIdList_ = nullptr;};
    inline string bizChainIdList() const { DARABONBA_PTR_GET_DEFAULT(bizChainIdList_, "") };
    inline AuthorizeDeviceGroupBizChainRequest& setBizChainIdList(string bizChainIdList) { DARABONBA_PTR_SET_VALUE(bizChainIdList_, bizChainIdList) };


    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string deviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline AuthorizeDeviceGroupBizChainRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AuthorizeDeviceGroupBizChainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> bizChainIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceGroupId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
