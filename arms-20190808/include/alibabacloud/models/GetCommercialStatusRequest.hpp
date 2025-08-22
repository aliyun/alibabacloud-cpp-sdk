// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMERCIALSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMERCIALSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetCommercialStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommercialStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommercialStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetCommercialStatusRequest() = default ;
    GetCommercialStatusRequest(const GetCommercialStatusRequest &) = default ;
    GetCommercialStatusRequest(GetCommercialStatusRequest &&) = default ;
    GetCommercialStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommercialStatusRequest() = default ;
    GetCommercialStatusRequest& operator=(const GetCommercialStatusRequest &) = default ;
    GetCommercialStatusRequest& operator=(GetCommercialStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->regionId_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetCommercialStatusRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCommercialStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The product code.
    // 
    // *   arms_app_post
    // *   arms_web_post
    // *   arms_promethues_public_cn
    // *   prometheus_pay_public_cn
    // *   xtrace
    // *   arms_serverless_public_cn
    // *   arms_rumserverless_public_cn
    // *   prometheus_serverless_public_cn
    // *   xtrace_serverless_public_cn
    // 
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
