// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListRouteRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_TO_JSON(ChainUpMode, chainUpMode_);
      DARABONBA_PTR_TO_JSON(DeviceGroupName, deviceGroupName_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_FROM_JSON(ChainUpMode, chainUpMode_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupName, deviceGroupName_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListRouteRuleRequest() = default ;
    ListRouteRuleRequest(const ListRouteRuleRequest &) = default ;
    ListRouteRuleRequest(ListRouteRuleRequest &&) = default ;
    ListRouteRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteRuleRequest() = default ;
    ListRouteRuleRequest& operator=(const ListRouteRuleRequest &) = default ;
    ListRouteRuleRequest& operator=(ListRouteRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainName_ == nullptr
        && return this->chainUpMode_ == nullptr && return this->deviceGroupName_ == nullptr && return this->num_ == nullptr && return this->regionId_ == nullptr && return this->size_ == nullptr; };
    // bizChainName Field Functions 
    bool hasBizChainName() const { return this->bizChainName_ != nullptr;};
    void deleteBizChainName() { this->bizChainName_ = nullptr;};
    inline string bizChainName() const { DARABONBA_PTR_GET_DEFAULT(bizChainName_, "") };
    inline ListRouteRuleRequest& setBizChainName(string bizChainName) { DARABONBA_PTR_SET_VALUE(bizChainName_, bizChainName) };


    // chainUpMode Field Functions 
    bool hasChainUpMode() const { return this->chainUpMode_ != nullptr;};
    void deleteChainUpMode() { this->chainUpMode_ = nullptr;};
    inline string chainUpMode() const { DARABONBA_PTR_GET_DEFAULT(chainUpMode_, "") };
    inline ListRouteRuleRequest& setChainUpMode(string chainUpMode) { DARABONBA_PTR_SET_VALUE(chainUpMode_, chainUpMode) };


    // deviceGroupName Field Functions 
    bool hasDeviceGroupName() const { return this->deviceGroupName_ != nullptr;};
    void deleteDeviceGroupName() { this->deviceGroupName_ = nullptr;};
    inline string deviceGroupName() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupName_, "") };
    inline ListRouteRuleRequest& setDeviceGroupName(string deviceGroupName) { DARABONBA_PTR_SET_VALUE(deviceGroupName_, deviceGroupName) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ListRouteRuleRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRouteRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListRouteRuleRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> bizChainName_ = nullptr;
    std::shared_ptr<string> chainUpMode_ = nullptr;
    std::shared_ptr<string> deviceGroupName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> num_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
