// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINTEGRATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINTEGRATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusIntegrationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusIntegrationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusIntegrationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    UpdatePrometheusIntegrationResponseBodyData() = default ;
    UpdatePrometheusIntegrationResponseBodyData(const UpdatePrometheusIntegrationResponseBodyData &) = default ;
    UpdatePrometheusIntegrationResponseBodyData(UpdatePrometheusIntegrationResponseBodyData &&) = default ;
    UpdatePrometheusIntegrationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusIntegrationResponseBodyData() = default ;
    UpdatePrometheusIntegrationResponseBodyData& operator=(const UpdatePrometheusIntegrationResponseBodyData &) = default ;
    UpdatePrometheusIntegrationResponseBodyData& operator=(UpdatePrometheusIntegrationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceName_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline UpdatePrometheusIntegrationResponseBodyData& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdatePrometheusIntegrationResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The exporter ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The exporter name.
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
