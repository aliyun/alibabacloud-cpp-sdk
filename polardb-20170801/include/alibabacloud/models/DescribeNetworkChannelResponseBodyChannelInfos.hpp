// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKCHANNELRESPONSEBODYCHANNELINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKCHANNELRESPONSEBODYCHANNELINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeNetworkChannelResponseBodyChannelInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkChannelResponseBodyChannelInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetDBClusterId, targetDBClusterId_);
      DARABONBA_PTR_TO_JSON(TargetIp, targetIp_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkChannelResponseBodyChannelInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetDBClusterId, targetDBClusterId_);
      DARABONBA_PTR_FROM_JSON(TargetIp, targetIp_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeNetworkChannelResponseBodyChannelInfos() = default ;
    DescribeNetworkChannelResponseBodyChannelInfos(const DescribeNetworkChannelResponseBodyChannelInfos &) = default ;
    DescribeNetworkChannelResponseBodyChannelInfos(DescribeNetworkChannelResponseBodyChannelInfos &&) = default ;
    DescribeNetworkChannelResponseBodyChannelInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkChannelResponseBodyChannelInfos() = default ;
    DescribeNetworkChannelResponseBodyChannelInfos& operator=(const DescribeNetworkChannelResponseBodyChannelInfos &) = default ;
    DescribeNetworkChannelResponseBodyChannelInfos& operator=(DescribeNetworkChannelResponseBodyChannelInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->notes_ == nullptr && return this->regionId_ == nullptr && return this->targetDBClusterId_ == nullptr && return this->targetIp_ == nullptr
        && return this->targetPort_ == nullptr && return this->targetType_ == nullptr && return this->vpcId_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string notes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetDBClusterId Field Functions 
    bool hasTargetDBClusterId() const { return this->targetDBClusterId_ != nullptr;};
    void deleteTargetDBClusterId() { this->targetDBClusterId_ = nullptr;};
    inline string targetDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetDBClusterId_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setTargetDBClusterId(string targetDBClusterId) { DARABONBA_PTR_SET_VALUE(targetDBClusterId_, targetDBClusterId) };


    // targetIp Field Functions 
    bool hasTargetIp() const { return this->targetIp_ != nullptr;};
    void deleteTargetIp() { this->targetIp_ = nullptr;};
    inline string targetIp() const { DARABONBA_PTR_GET_DEFAULT(targetIp_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setTargetIp(string targetIp) { DARABONBA_PTR_SET_VALUE(targetIp_, targetIp) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNetworkChannelResponseBodyChannelInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> notes_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> targetDBClusterId_ = nullptr;
    std::shared_ptr<string> targetIp_ = nullptr;
    std::shared_ptr<string> targetPort_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
