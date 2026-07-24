// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMAIAPPSCANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMAIAPPSCANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ConfirmAiAppScanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmAiAppScanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmAiAppScanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ConfirmAiAppScanRequest() = default ;
    ConfirmAiAppScanRequest(const ConfirmAiAppScanRequest &) = default ;
    ConfirmAiAppScanRequest(ConfirmAiAppScanRequest &&) = default ;
    ConfirmAiAppScanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmAiAppScanRequest() = default ;
    ConfirmAiAppScanRequest& operator=(const ConfirmAiAppScanRequest &) = default ;
    ConfirmAiAppScanRequest& operator=(ConfirmAiAppScanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->regionId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ConfirmAiAppScanRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfirmAiAppScanRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The commodity code.
    // 
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    // The ID of the region where the application resides.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
