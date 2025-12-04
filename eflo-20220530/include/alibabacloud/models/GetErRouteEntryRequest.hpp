// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErRouteEntryId, erRouteEntryId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErRouteEntryId, erRouteEntryId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetErRouteEntryRequest() = default ;
    GetErRouteEntryRequest(const GetErRouteEntryRequest &) = default ;
    GetErRouteEntryRequest(GetErRouteEntryRequest &&) = default ;
    GetErRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErRouteEntryRequest() = default ;
    GetErRouteEntryRequest& operator=(const GetErRouteEntryRequest &) = default ;
    GetErRouteEntryRequest& operator=(GetErRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erId_ == nullptr
        && return this->erRouteEntryId_ == nullptr && return this->regionId_ == nullptr; };
    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetErRouteEntryRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erRouteEntryId Field Functions 
    bool hasErRouteEntryId() const { return this->erRouteEntryId_ != nullptr;};
    void deleteErRouteEntryId() { this->erRouteEntryId_ = nullptr;};
    inline string erRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(erRouteEntryId_, "") };
    inline GetErRouteEntryRequest& setErRouteEntryId(string erRouteEntryId) { DARABONBA_PTR_SET_VALUE(erRouteEntryId_, erRouteEntryId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetErRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Lingjun HUB ID
    // 
    // This parameter is required.
    std::shared_ptr<string> erId_ = nullptr;
    // The ID of the route entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> erRouteEntryId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
