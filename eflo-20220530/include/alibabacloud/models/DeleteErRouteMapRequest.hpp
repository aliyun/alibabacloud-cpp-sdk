// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEERROUTEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEERROUTEMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class DeleteErRouteMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteErRouteMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_TO_JSON(ErRouteMapIds, erRouteMapIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteErRouteMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_FROM_JSON(ErRouteMapIds, erRouteMapIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteErRouteMapRequest() = default ;
    DeleteErRouteMapRequest(const DeleteErRouteMapRequest &) = default ;
    DeleteErRouteMapRequest(DeleteErRouteMapRequest &&) = default ;
    DeleteErRouteMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteErRouteMapRequest() = default ;
    DeleteErRouteMapRequest& operator=(const DeleteErRouteMapRequest &) = default ;
    DeleteErRouteMapRequest& operator=(DeleteErRouteMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erId_ == nullptr
        && return this->erRouteMapId_ == nullptr && return this->erRouteMapIds_ == nullptr && return this->regionId_ == nullptr; };
    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline DeleteErRouteMapRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erRouteMapId Field Functions 
    bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
    void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
    inline string erRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
    inline DeleteErRouteMapRequest& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


    // erRouteMapIds Field Functions 
    bool hasErRouteMapIds() const { return this->erRouteMapIds_ != nullptr;};
    void deleteErRouteMapIds() { this->erRouteMapIds_ = nullptr;};
    inline const vector<string> & erRouteMapIds() const { DARABONBA_PTR_GET_CONST(erRouteMapIds_, vector<string>) };
    inline vector<string> erRouteMapIds() { DARABONBA_PTR_GET(erRouteMapIds_, vector<string>) };
    inline DeleteErRouteMapRequest& setErRouteMapIds(const vector<string> & erRouteMapIds) { DARABONBA_PTR_SET_VALUE(erRouteMapIds_, erRouteMapIds) };
    inline DeleteErRouteMapRequest& setErRouteMapIds(vector<string> && erRouteMapIds) { DARABONBA_PTR_SET_RVALUE(erRouteMapIds_, erRouteMapIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteErRouteMapRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Lingjun HUB ID
    // 
    // This parameter is required.
    std::shared_ptr<string> erId_ = nullptr;
    std::shared_ptr<string> erRouteMapId_ = nullptr;
    // routing policy Instance ID List
    std::shared_ptr<vector<string>> erRouteMapIds_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
