// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeNetworkChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelInfos, channelInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelInfos, channelInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkChannelResponseBody() = default ;
    DescribeNetworkChannelResponseBody(const DescribeNetworkChannelResponseBody &) = default ;
    DescribeNetworkChannelResponseBody(DescribeNetworkChannelResponseBody &&) = default ;
    DescribeNetworkChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkChannelResponseBody() = default ;
    DescribeNetworkChannelResponseBody& operator=(const DescribeNetworkChannelResponseBody &) = default ;
    DescribeNetworkChannelResponseBody& operator=(DescribeNetworkChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChannelInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChannelInfos& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ChannelInfos& obj) { 
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
      ChannelInfos() = default ;
      ChannelInfos(const ChannelInfos &) = default ;
      ChannelInfos(ChannelInfos &&) = default ;
      ChannelInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChannelInfos() = default ;
      ChannelInfos& operator=(const ChannelInfos &) = default ;
      ChannelInfos& operator=(ChannelInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelName_ == nullptr
        && this->DBClusterId_ == nullptr && this->notes_ == nullptr && this->regionId_ == nullptr && this->targetDBClusterId_ == nullptr && this->targetIp_ == nullptr
        && this->targetPort_ == nullptr && this->targetType_ == nullptr && this->vpcId_ == nullptr; };
      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline ChannelInfos& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline ChannelInfos& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // notes Field Functions 
      bool hasNotes() const { return this->notes_ != nullptr;};
      void deleteNotes() { this->notes_ = nullptr;};
      inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
      inline ChannelInfos& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ChannelInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // targetDBClusterId Field Functions 
      bool hasTargetDBClusterId() const { return this->targetDBClusterId_ != nullptr;};
      void deleteTargetDBClusterId() { this->targetDBClusterId_ = nullptr;};
      inline string getTargetDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetDBClusterId_, "") };
      inline ChannelInfos& setTargetDBClusterId(string targetDBClusterId) { DARABONBA_PTR_SET_VALUE(targetDBClusterId_, targetDBClusterId) };


      // targetIp Field Functions 
      bool hasTargetIp() const { return this->targetIp_ != nullptr;};
      void deleteTargetIp() { this->targetIp_ = nullptr;};
      inline string getTargetIp() const { DARABONBA_PTR_GET_DEFAULT(targetIp_, "") };
      inline ChannelInfos& setTargetIp(string targetIp) { DARABONBA_PTR_SET_VALUE(targetIp_, targetIp) };


      // targetPort Field Functions 
      bool hasTargetPort() const { return this->targetPort_ != nullptr;};
      void deleteTargetPort() { this->targetPort_ = nullptr;};
      inline string getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
      inline ChannelInfos& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline ChannelInfos& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ChannelInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> channelName_ {};
      shared_ptr<string> DBClusterId_ {};
      shared_ptr<string> notes_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> targetDBClusterId_ {};
      shared_ptr<string> targetIp_ {};
      shared_ptr<string> targetPort_ {};
      shared_ptr<string> targetType_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->channelInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // channelInfos Field Functions 
    bool hasChannelInfos() const { return this->channelInfos_ != nullptr;};
    void deleteChannelInfos() { this->channelInfos_ = nullptr;};
    inline const vector<DescribeNetworkChannelResponseBody::ChannelInfos> & getChannelInfos() const { DARABONBA_PTR_GET_CONST(channelInfos_, vector<DescribeNetworkChannelResponseBody::ChannelInfos>) };
    inline vector<DescribeNetworkChannelResponseBody::ChannelInfos> getChannelInfos() { DARABONBA_PTR_GET(channelInfos_, vector<DescribeNetworkChannelResponseBody::ChannelInfos>) };
    inline DescribeNetworkChannelResponseBody& setChannelInfos(const vector<DescribeNetworkChannelResponseBody::ChannelInfos> & channelInfos) { DARABONBA_PTR_SET_VALUE(channelInfos_, channelInfos) };
    inline DescribeNetworkChannelResponseBody& setChannelInfos(vector<DescribeNetworkChannelResponseBody::ChannelInfos> && channelInfos) { DARABONBA_PTR_SET_RVALUE(channelInfos_, channelInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeNetworkChannelResponseBody::ChannelInfos>> channelInfos_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
