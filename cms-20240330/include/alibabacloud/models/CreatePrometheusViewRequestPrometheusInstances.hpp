// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIEWREQUESTPROMETHEUSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIEWREQUESTPROMETHEUSINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreatePrometheusViewRequestPrometheusInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusViewRequestPrometheusInstances& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusViewRequestPrometheusInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreatePrometheusViewRequestPrometheusInstances() = default ;
    CreatePrometheusViewRequestPrometheusInstances(const CreatePrometheusViewRequestPrometheusInstances &) = default ;
    CreatePrometheusViewRequestPrometheusInstances(CreatePrometheusViewRequestPrometheusInstances &&) = default ;
    CreatePrometheusViewRequestPrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusViewRequestPrometheusInstances() = default ;
    CreatePrometheusViewRequestPrometheusInstances& operator=(const CreatePrometheusViewRequestPrometheusInstances &) = default ;
    CreatePrometheusViewRequestPrometheusInstances& operator=(CreatePrometheusViewRequestPrometheusInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prometheusInstanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->userId_ == nullptr; };
    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline CreatePrometheusViewRequestPrometheusInstances& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrometheusViewRequestPrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreatePrometheusViewRequestPrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Instance ID.
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // User ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
