// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSVIEWREQUESTPROMETHEUSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSVIEWREQUESTPROMETHEUSINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdatePrometheusViewRequestPrometheusInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusViewRequestPrometheusInstances& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusViewRequestPrometheusInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    UpdatePrometheusViewRequestPrometheusInstances() = default ;
    UpdatePrometheusViewRequestPrometheusInstances(const UpdatePrometheusViewRequestPrometheusInstances &) = default ;
    UpdatePrometheusViewRequestPrometheusInstances(UpdatePrometheusViewRequestPrometheusInstances &&) = default ;
    UpdatePrometheusViewRequestPrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusViewRequestPrometheusInstances() = default ;
    UpdatePrometheusViewRequestPrometheusInstances& operator=(const UpdatePrometheusViewRequestPrometheusInstances &) = default ;
    UpdatePrometheusViewRequestPrometheusInstances& operator=(UpdatePrometheusViewRequestPrometheusInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prometheusInstanceId_ != nullptr
        && this->regionId_ != nullptr && this->userId_ != nullptr; };
    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline UpdatePrometheusViewRequestPrometheusInstances& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePrometheusViewRequestPrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdatePrometheusViewRequestPrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
