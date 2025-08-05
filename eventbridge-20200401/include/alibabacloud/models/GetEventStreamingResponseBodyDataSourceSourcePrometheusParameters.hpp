// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEPROMETHEUSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEPROMETHEUSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(ExternalLabels, externalLabels_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(ExternalLabels, externalLabels_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters(const GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters(GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters &&) = default ;
    GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& operator=(const GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& operator=(GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->dataType_ != nullptr && this->externalLabels_ != nullptr && this->labels_ != nullptr && this->regionId_ != nullptr && this->roleName_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // externalLabels Field Functions 
    bool hasExternalLabels() const { return this->externalLabels_ != nullptr;};
    void deleteExternalLabels() { this->externalLabels_ = nullptr;};
    inline string externalLabels() const { DARABONBA_PTR_GET_DEFAULT(externalLabels_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& setExternalLabels(string externalLabels) { DARABONBA_PTR_SET_VALUE(externalLabels_, externalLabels) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> externalLabels_ = nullptr;
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
