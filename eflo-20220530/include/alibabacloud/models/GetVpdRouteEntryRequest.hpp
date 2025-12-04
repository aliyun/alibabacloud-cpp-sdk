// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPDROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVPDROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVpdRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpdRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdRouteEntryId, vpdRouteEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpdRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdRouteEntryId, vpdRouteEntryId_);
    };
    GetVpdRouteEntryRequest() = default ;
    GetVpdRouteEntryRequest(const GetVpdRouteEntryRequest &) = default ;
    GetVpdRouteEntryRequest(GetVpdRouteEntryRequest &&) = default ;
    GetVpdRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpdRouteEntryRequest() = default ;
    GetVpdRouteEntryRequest& operator=(const GetVpdRouteEntryRequest &) = default ;
    GetVpdRouteEntryRequest& operator=(GetVpdRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->vpdId_ == nullptr && return this->vpdRouteEntryId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpdRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetVpdRouteEntryRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdRouteEntryId Field Functions 
    bool hasVpdRouteEntryId() const { return this->vpdRouteEntryId_ != nullptr;};
    void deleteVpdRouteEntryId() { this->vpdRouteEntryId_ = nullptr;};
    inline string vpdRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vpdRouteEntryId_, "") };
    inline GetVpdRouteEntryRequest& setVpdRouteEntryId(string vpdRouteEntryId) { DARABONBA_PTR_SET_VALUE(vpdRouteEntryId_, vpdRouteEntryId) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Lingjun CIDR block instance ID
    // 
    // This parameter is required.
    std::shared_ptr<string> vpdId_ = nullptr;
    // The ID of the route entry instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpdRouteEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
