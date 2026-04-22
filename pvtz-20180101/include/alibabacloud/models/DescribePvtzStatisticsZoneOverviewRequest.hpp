// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSZONEOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSZONEOVERVIEWREQUEST_HPP_
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
  class DescribePvtzStatisticsZoneOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePvtzStatisticsZoneOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NetworkParams, networkParams_);
      DARABONBA_PTR_TO_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_TO_JSON(ServerRegion, serverRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePvtzStatisticsZoneOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NetworkParams, networkParams_);
      DARABONBA_PTR_FROM_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_FROM_JSON(ServerRegion, serverRegion_);
    };
    DescribePvtzStatisticsZoneOverviewRequest() = default ;
    DescribePvtzStatisticsZoneOverviewRequest(const DescribePvtzStatisticsZoneOverviewRequest &) = default ;
    DescribePvtzStatisticsZoneOverviewRequest(DescribePvtzStatisticsZoneOverviewRequest &&) = default ;
    DescribePvtzStatisticsZoneOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePvtzStatisticsZoneOverviewRequest() = default ;
    DescribePvtzStatisticsZoneOverviewRequest& operator=(const DescribePvtzStatisticsZoneOverviewRequest &) = default ;
    DescribePvtzStatisticsZoneOverviewRequest& operator=(DescribePvtzStatisticsZoneOverviewRequest &&) = default ;
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

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clientToken_ == nullptr && this->module_ == nullptr && this->networkParams_ == nullptr && this->overviewPeriod_ == nullptr && this->serverRegion_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribePvtzStatisticsZoneOverviewRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribePvtzStatisticsZoneOverviewRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribePvtzStatisticsZoneOverviewRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // networkParams Field Functions 
    bool hasNetworkParams() const { return this->networkParams_ != nullptr;};
    void deleteNetworkParams() { this->networkParams_ = nullptr;};
    inline const vector<DescribePvtzStatisticsZoneOverviewRequest::NetworkParams> & getNetworkParams() const { DARABONBA_PTR_GET_CONST(networkParams_, vector<DescribePvtzStatisticsZoneOverviewRequest::NetworkParams>) };
    inline vector<DescribePvtzStatisticsZoneOverviewRequest::NetworkParams> getNetworkParams() { DARABONBA_PTR_GET(networkParams_, vector<DescribePvtzStatisticsZoneOverviewRequest::NetworkParams>) };
    inline DescribePvtzStatisticsZoneOverviewRequest& setNetworkParams(const vector<DescribePvtzStatisticsZoneOverviewRequest::NetworkParams> & networkParams) { DARABONBA_PTR_SET_VALUE(networkParams_, networkParams) };
    inline DescribePvtzStatisticsZoneOverviewRequest& setNetworkParams(vector<DescribePvtzStatisticsZoneOverviewRequest::NetworkParams> && networkParams) { DARABONBA_PTR_SET_RVALUE(networkParams_, networkParams) };


    // overviewPeriod Field Functions 
    bool hasOverviewPeriod() const { return this->overviewPeriod_ != nullptr;};
    void deleteOverviewPeriod() { this->overviewPeriod_ = nullptr;};
    inline string getOverviewPeriod() const { DARABONBA_PTR_GET_DEFAULT(overviewPeriod_, "") };
    inline DescribePvtzStatisticsZoneOverviewRequest& setOverviewPeriod(string overviewPeriod) { DARABONBA_PTR_SET_VALUE(overviewPeriod_, overviewPeriod) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribePvtzStatisticsZoneOverviewRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> module_ {};
    shared_ptr<vector<DescribePvtzStatisticsZoneOverviewRequest::NetworkParams>> networkParams_ {};
    shared_ptr<string> overviewPeriod_ {};
    shared_ptr<string> serverRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
