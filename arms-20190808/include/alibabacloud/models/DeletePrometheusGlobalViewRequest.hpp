// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROMETHEUSGLOBALVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROMETHEUSGLOBALVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeletePrometheusGlobalViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeletePrometheusGlobalViewRequest() = default ;
    DeletePrometheusGlobalViewRequest(const DeletePrometheusGlobalViewRequest &) = default ;
    DeletePrometheusGlobalViewRequest(DeletePrometheusGlobalViewRequest &&) = default ;
    DeletePrometheusGlobalViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrometheusGlobalViewRequest() = default ;
    DeletePrometheusGlobalViewRequest& operator=(const DeletePrometheusGlobalViewRequest &) = default ;
    DeletePrometheusGlobalViewRequest& operator=(DeletePrometheusGlobalViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalViewClusterId_ != nullptr
        && this->regionId_ != nullptr; };
    // globalViewClusterId Field Functions 
    bool hasGlobalViewClusterId() const { return this->globalViewClusterId_ != nullptr;};
    void deleteGlobalViewClusterId() { this->globalViewClusterId_ = nullptr;};
    inline string globalViewClusterId() const { DARABONBA_PTR_GET_DEFAULT(globalViewClusterId_, "") };
    inline DeletePrometheusGlobalViewRequest& setGlobalViewClusterId(string globalViewClusterId) { DARABONBA_PTR_SET_VALUE(globalViewClusterId_, globalViewClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePrometheusGlobalViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the global aggregation instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> globalViewClusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
