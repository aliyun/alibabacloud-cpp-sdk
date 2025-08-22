// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWRESPONSEBODYDATAFAILEDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWRESPONSEBODYDATAFAILEDINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusGlobalViewResponseBodyDataFailedInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdatePrometheusGlobalViewResponseBodyDataFailedInstances() = default ;
    UpdatePrometheusGlobalViewResponseBodyDataFailedInstances(const UpdatePrometheusGlobalViewResponseBodyDataFailedInstances &) = default ;
    UpdatePrometheusGlobalViewResponseBodyDataFailedInstances(UpdatePrometheusGlobalViewResponseBodyDataFailedInstances &&) = default ;
    UpdatePrometheusGlobalViewResponseBodyDataFailedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusGlobalViewResponseBodyDataFailedInstances() = default ;
    UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& operator=(const UpdatePrometheusGlobalViewResponseBodyDataFailedInstances &) = default ;
    UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& operator=(UpdatePrometheusGlobalViewResponseBodyDataFailedInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->sourceName_ != nullptr && this->sourceType_ != nullptr && this->userId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdatePrometheusGlobalViewResponseBodyDataFailedInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the Prometheus instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> sourceName_ = nullptr;
    // The type of the data source. AlibabaPrometheus MetricStore CustomPrometheus
    std::shared_ptr<string> sourceType_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
