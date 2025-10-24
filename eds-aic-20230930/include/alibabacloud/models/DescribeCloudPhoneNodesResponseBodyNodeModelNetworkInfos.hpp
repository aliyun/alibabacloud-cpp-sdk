// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODYNODEMODELNETWORKINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODYNODEMODELNETWORKINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos() = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos(const DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos &) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos(DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos &&) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos() = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& operator=(const DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos &) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& operator=(DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr
        && return this->bandwidthPackageType_ == nullptr && return this->networkId_ == nullptr && return this->networkType_ == nullptr && return this->vSwitchId_ == nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageType_ = nullptr;
    std::shared_ptr<string> networkId_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
