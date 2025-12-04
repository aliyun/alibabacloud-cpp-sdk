// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERROUTEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERROUTEMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErRouteMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErRouteMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErRouteMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetErRouteMapRequest() = default ;
    GetErRouteMapRequest(const GetErRouteMapRequest &) = default ;
    GetErRouteMapRequest(GetErRouteMapRequest &&) = default ;
    GetErRouteMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErRouteMapRequest() = default ;
    GetErRouteMapRequest& operator=(const GetErRouteMapRequest &) = default ;
    GetErRouteMapRequest& operator=(GetErRouteMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erId_ == nullptr
        && return this->erRouteMapId_ == nullptr && return this->regionId_ == nullptr; };
    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetErRouteMapRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erRouteMapId Field Functions 
    bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
    void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
    inline string erRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
    inline GetErRouteMapRequest& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetErRouteMapRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Lingjun HUB ID
    // 
    // This parameter is required.
    std::shared_ptr<string> erId_ = nullptr;
    // routing policy ID
    // 
    // This parameter is required.
    std::shared_ptr<string> erRouteMapId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
