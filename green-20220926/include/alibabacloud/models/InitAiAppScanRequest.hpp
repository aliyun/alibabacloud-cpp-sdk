// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITAIAPPSCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITAIAPPSCANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class InitAiAppScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitAiAppScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InitAiAppScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InitAiAppScanRequest() = default ;
    InitAiAppScanRequest(const InitAiAppScanRequest &) = default ;
    InitAiAppScanRequest(InitAiAppScanRequest &&) = default ;
    InitAiAppScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitAiAppScanRequest() = default ;
    InitAiAppScanRequest& operator=(const InitAiAppScanRequest &) = default ;
    InitAiAppScanRequest& operator=(InitAiAppScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->commodityCode_ == nullptr && this->regionId_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline InitAiAppScanRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline InitAiAppScanRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InitAiAppScanRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The channel type.
    shared_ptr<string> channel_ {};
    // The commodity code.
    // 
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
