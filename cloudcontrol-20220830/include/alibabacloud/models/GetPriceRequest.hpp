// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_ANY_TO_JSON(resourceAttributes, resourceAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, GetPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_ANY_FROM_JSON(resourceAttributes, resourceAttributes_);
    };
    GetPriceRequest() = default ;
    GetPriceRequest(const GetPriceRequest &) = default ;
    GetPriceRequest(GetPriceRequest &&) = default ;
    GetPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPriceRequest() = default ;
    GetPriceRequest& operator=(const GetPriceRequest &) = default ;
    GetPriceRequest& operator=(GetPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceAttributes_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetPriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceAttributes Field Functions 
    bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
    void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
    inline     const Darabonba::Json & resourceAttributes() const { DARABONBA_GET(resourceAttributes_) };
    Darabonba::Json & resourceAttributes() { DARABONBA_GET(resourceAttributes_) };
    inline GetPriceRequest& setResourceAttributes(const Darabonba::Json & resourceAttributes) { DARABONBA_SET_VALUE(resourceAttributes_, resourceAttributes) };
    inline GetPriceRequest& setResourceAttributes(Darabonba::Json & resourceAttributes) { DARABONBA_SET_RVALUE(resourceAttributes_, resourceAttributes) };


  protected:
    // The region ID. This parameter is required if the cloud product is deployed in a region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The attributes based on which the price is queried (in JSON format).
    Darabonba::Json resourceAttributes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
