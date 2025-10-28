// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERINTERREGIONTRANSITMODERESPONSEBODYINTERREGIONTRANSITMODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERINTERREGIONTRANSITMODERESPONSEBODYINTERREGIONTRANSITMODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList() = default ;
    DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList(const DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList &) = default ;
    DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList(DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList &&) = default ;
    DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList() = default ;
    DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList& operator=(const DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList &) = default ;
    DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList& operator=(DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->regionId_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cross-region forwarding mode of the ECR. Valid values:
    // 
    // *   **ECMP**: the load balancing mode.
    // *   **NearBy**: the nearby forwarding mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The region ID of the ECR.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
