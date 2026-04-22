// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSGLOBALOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSGLOBALOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribePvtzStatisticsGlobalOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePvtzStatisticsGlobalOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkParams, networkParams_);
      DARABONBA_PTR_TO_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_TO_JSON(ServerRegion, serverRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePvtzStatisticsGlobalOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkParams, networkParams_);
      DARABONBA_PTR_FROM_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_FROM_JSON(ServerRegion, serverRegion_);
    };
    DescribePvtzStatisticsGlobalOverviewRequest() = default ;
    DescribePvtzStatisticsGlobalOverviewRequest(const DescribePvtzStatisticsGlobalOverviewRequest &) = default ;
    DescribePvtzStatisticsGlobalOverviewRequest(DescribePvtzStatisticsGlobalOverviewRequest &&) = default ;
    DescribePvtzStatisticsGlobalOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePvtzStatisticsGlobalOverviewRequest() = default ;
    DescribePvtzStatisticsGlobalOverviewRequest& operator=(const DescribePvtzStatisticsGlobalOverviewRequest &) = default ;
    DescribePvtzStatisticsGlobalOverviewRequest& operator=(DescribePvtzStatisticsGlobalOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkParams& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcOwner, vpcOwner_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkParams& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcOwner, vpcOwner_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
      };
      NetworkParams() = default ;
      NetworkParams(const NetworkParams &) = default ;
      NetworkParams(NetworkParams &&) = default ;
      NetworkParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkParams() = default ;
      NetworkParams& operator=(const NetworkParams &) = default ;
      NetworkParams& operator=(NetworkParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcOwner_ == nullptr && this->vpcType_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline NetworkParams& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkParams& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcOwner Field Functions 
      bool hasVpcOwner() const { return this->vpcOwner_ != nullptr;};
      void deleteVpcOwner() { this->vpcOwner_ = nullptr;};
      inline string getVpcOwner() const { DARABONBA_PTR_GET_DEFAULT(vpcOwner_, "") };
      inline NetworkParams& setVpcOwner(string vpcOwner) { DARABONBA_PTR_SET_VALUE(vpcOwner_, vpcOwner) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline NetworkParams& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


    protected:
      shared_ptr<string> regionId_ {};
      // VPC ID。
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vpcOwner_ {};
      shared_ptr<string> vpcType_ {};
    };

    virtual bool empty() const override { return this->networkParams_ == nullptr
        && this->overviewPeriod_ == nullptr && this->serverRegion_ == nullptr; };
    // networkParams Field Functions 
    bool hasNetworkParams() const { return this->networkParams_ != nullptr;};
    void deleteNetworkParams() { this->networkParams_ = nullptr;};
    inline const vector<DescribePvtzStatisticsGlobalOverviewRequest::NetworkParams> & getNetworkParams() const { DARABONBA_PTR_GET_CONST(networkParams_, vector<DescribePvtzStatisticsGlobalOverviewRequest::NetworkParams>) };
    inline vector<DescribePvtzStatisticsGlobalOverviewRequest::NetworkParams> getNetworkParams() { DARABONBA_PTR_GET(networkParams_, vector<DescribePvtzStatisticsGlobalOverviewRequest::NetworkParams>) };
    inline DescribePvtzStatisticsGlobalOverviewRequest& setNetworkParams(const vector<DescribePvtzStatisticsGlobalOverviewRequest::NetworkParams> & networkParams) { DARABONBA_PTR_SET_VALUE(networkParams_, networkParams) };
    inline DescribePvtzStatisticsGlobalOverviewRequest& setNetworkParams(vector<DescribePvtzStatisticsGlobalOverviewRequest::NetworkParams> && networkParams) { DARABONBA_PTR_SET_RVALUE(networkParams_, networkParams) };


    // overviewPeriod Field Functions 
    bool hasOverviewPeriod() const { return this->overviewPeriod_ != nullptr;};
    void deleteOverviewPeriod() { this->overviewPeriod_ = nullptr;};
    inline string getOverviewPeriod() const { DARABONBA_PTR_GET_DEFAULT(overviewPeriod_, "") };
    inline DescribePvtzStatisticsGlobalOverviewRequest& setOverviewPeriod(string overviewPeriod) { DARABONBA_PTR_SET_VALUE(overviewPeriod_, overviewPeriod) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribePvtzStatisticsGlobalOverviewRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


  protected:
    shared_ptr<vector<DescribePvtzStatisticsGlobalOverviewRequest::NetworkParams>> networkParams_ {};
    shared_ptr<string> overviewPeriod_ {};
    shared_ptr<string> serverRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
