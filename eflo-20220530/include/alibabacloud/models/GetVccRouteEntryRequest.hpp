// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVCCROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VccRouteEntryId, vccRouteEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VccRouteEntryId, vccRouteEntryId_);
    };
    GetVccRouteEntryRequest() = default ;
    GetVccRouteEntryRequest(const GetVccRouteEntryRequest &) = default ;
    GetVccRouteEntryRequest(GetVccRouteEntryRequest &&) = default ;
    GetVccRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccRouteEntryRequest() = default ;
    GetVccRouteEntryRequest& operator=(const GetVccRouteEntryRequest &) = default ;
    GetVccRouteEntryRequest& operator=(GetVccRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->vccId_ == nullptr && return this->vccRouteEntryId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVccRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline GetVccRouteEntryRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vccRouteEntryId Field Functions 
    bool hasVccRouteEntryId() const { return this->vccRouteEntryId_ != nullptr;};
    void deleteVccRouteEntryId() { this->vccRouteEntryId_ = nullptr;};
    inline string vccRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vccRouteEntryId_, "") };
    inline GetVccRouteEntryRequest& setVccRouteEntryId(string vccRouteEntryId) { DARABONBA_PTR_SET_VALUE(vccRouteEntryId_, vccRouteEntryId) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Lingjun Connection ID
    // 
    // This parameter is required.
    std::shared_ptr<string> vccId_ = nullptr;
    // The ID of the route entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> vccRouteEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
