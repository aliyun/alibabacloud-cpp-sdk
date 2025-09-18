// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMODELFEATURETRAININGSETTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMODELFEATURETRAININGSETTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FeatureViewConfigValue.hpp>
#include <alibabacloud/models/ExportModelFeatureTrainingSetTableRequestLabelInputConfig.hpp>
#include <alibabacloud/models/ExportModelFeatureTrainingSetTableRequestTrainingSetConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ExportModelFeatureTrainingSetTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportModelFeatureTrainingSetTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViewConfig, featureViewConfig_);
      DARABONBA_PTR_TO_JSON(LabelInputConfig, labelInputConfig_);
      DARABONBA_PTR_TO_JSON(RealTimeIterateInterval, realTimeIterateInterval_);
      DARABONBA_PTR_TO_JSON(RealTimePartitionCountValue, realTimePartitionCountValue_);
      DARABONBA_PTR_TO_JSON(TrainingSetConfig, trainingSetConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ExportModelFeatureTrainingSetTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViewConfig, featureViewConfig_);
      DARABONBA_PTR_FROM_JSON(LabelInputConfig, labelInputConfig_);
      DARABONBA_PTR_FROM_JSON(RealTimeIterateInterval, realTimeIterateInterval_);
      DARABONBA_PTR_FROM_JSON(RealTimePartitionCountValue, realTimePartitionCountValue_);
      DARABONBA_PTR_FROM_JSON(TrainingSetConfig, trainingSetConfig_);
    };
    ExportModelFeatureTrainingSetTableRequest() = default ;
    ExportModelFeatureTrainingSetTableRequest(const ExportModelFeatureTrainingSetTableRequest &) = default ;
    ExportModelFeatureTrainingSetTableRequest(ExportModelFeatureTrainingSetTableRequest &&) = default ;
    ExportModelFeatureTrainingSetTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportModelFeatureTrainingSetTableRequest() = default ;
    ExportModelFeatureTrainingSetTableRequest& operator=(const ExportModelFeatureTrainingSetTableRequest &) = default ;
    ExportModelFeatureTrainingSetTableRequest& operator=(ExportModelFeatureTrainingSetTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureViewConfig_ != nullptr
        && this->labelInputConfig_ != nullptr && this->realTimeIterateInterval_ != nullptr && this->realTimePartitionCountValue_ != nullptr && this->trainingSetConfig_ != nullptr; };
    // featureViewConfig Field Functions 
    bool hasFeatureViewConfig() const { return this->featureViewConfig_ != nullptr;};
    void deleteFeatureViewConfig() { this->featureViewConfig_ = nullptr;};
    inline const map<string, FeatureViewConfigValue> & featureViewConfig() const { DARABONBA_PTR_GET_CONST(featureViewConfig_, map<string, FeatureViewConfigValue>) };
    inline map<string, FeatureViewConfigValue> featureViewConfig() { DARABONBA_PTR_GET(featureViewConfig_, map<string, FeatureViewConfigValue>) };
    inline ExportModelFeatureTrainingSetTableRequest& setFeatureViewConfig(const map<string, FeatureViewConfigValue> & featureViewConfig) { DARABONBA_PTR_SET_VALUE(featureViewConfig_, featureViewConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setFeatureViewConfig(map<string, FeatureViewConfigValue> && featureViewConfig) { DARABONBA_PTR_SET_RVALUE(featureViewConfig_, featureViewConfig) };


    // labelInputConfig Field Functions 
    bool hasLabelInputConfig() const { return this->labelInputConfig_ != nullptr;};
    void deleteLabelInputConfig() { this->labelInputConfig_ = nullptr;};
    inline const ExportModelFeatureTrainingSetTableRequestLabelInputConfig & labelInputConfig() const { DARABONBA_PTR_GET_CONST(labelInputConfig_, ExportModelFeatureTrainingSetTableRequestLabelInputConfig) };
    inline ExportModelFeatureTrainingSetTableRequestLabelInputConfig labelInputConfig() { DARABONBA_PTR_GET(labelInputConfig_, ExportModelFeatureTrainingSetTableRequestLabelInputConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setLabelInputConfig(const ExportModelFeatureTrainingSetTableRequestLabelInputConfig & labelInputConfig) { DARABONBA_PTR_SET_VALUE(labelInputConfig_, labelInputConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setLabelInputConfig(ExportModelFeatureTrainingSetTableRequestLabelInputConfig && labelInputConfig) { DARABONBA_PTR_SET_RVALUE(labelInputConfig_, labelInputConfig) };


    // realTimeIterateInterval Field Functions 
    bool hasRealTimeIterateInterval() const { return this->realTimeIterateInterval_ != nullptr;};
    void deleteRealTimeIterateInterval() { this->realTimeIterateInterval_ = nullptr;};
    inline int64_t realTimeIterateInterval() const { DARABONBA_PTR_GET_DEFAULT(realTimeIterateInterval_, 0L) };
    inline ExportModelFeatureTrainingSetTableRequest& setRealTimeIterateInterval(int64_t realTimeIterateInterval) { DARABONBA_PTR_SET_VALUE(realTimeIterateInterval_, realTimeIterateInterval) };


    // realTimePartitionCountValue Field Functions 
    bool hasRealTimePartitionCountValue() const { return this->realTimePartitionCountValue_ != nullptr;};
    void deleteRealTimePartitionCountValue() { this->realTimePartitionCountValue_ = nullptr;};
    inline int64_t realTimePartitionCountValue() const { DARABONBA_PTR_GET_DEFAULT(realTimePartitionCountValue_, 0L) };
    inline ExportModelFeatureTrainingSetTableRequest& setRealTimePartitionCountValue(int64_t realTimePartitionCountValue) { DARABONBA_PTR_SET_VALUE(realTimePartitionCountValue_, realTimePartitionCountValue) };


    // trainingSetConfig Field Functions 
    bool hasTrainingSetConfig() const { return this->trainingSetConfig_ != nullptr;};
    void deleteTrainingSetConfig() { this->trainingSetConfig_ = nullptr;};
    inline const ExportModelFeatureTrainingSetTableRequestTrainingSetConfig & trainingSetConfig() const { DARABONBA_PTR_GET_CONST(trainingSetConfig_, ExportModelFeatureTrainingSetTableRequestTrainingSetConfig) };
    inline ExportModelFeatureTrainingSetTableRequestTrainingSetConfig trainingSetConfig() { DARABONBA_PTR_GET(trainingSetConfig_, ExportModelFeatureTrainingSetTableRequestTrainingSetConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setTrainingSetConfig(const ExportModelFeatureTrainingSetTableRequestTrainingSetConfig & trainingSetConfig) { DARABONBA_PTR_SET_VALUE(trainingSetConfig_, trainingSetConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setTrainingSetConfig(ExportModelFeatureTrainingSetTableRequestTrainingSetConfig && trainingSetConfig) { DARABONBA_PTR_SET_RVALUE(trainingSetConfig_, trainingSetConfig) };


  protected:
    std::shared_ptr<map<string, FeatureViewConfigValue>> featureViewConfig_ = nullptr;
    std::shared_ptr<ExportModelFeatureTrainingSetTableRequestLabelInputConfig> labelInputConfig_ = nullptr;
    std::shared_ptr<int64_t> realTimeIterateInterval_ = nullptr;
    std::shared_ptr<int64_t> realTimePartitionCountValue_ = nullptr;
    std::shared_ptr<ExportModelFeatureTrainingSetTableRequestTrainingSetConfig> trainingSetConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
