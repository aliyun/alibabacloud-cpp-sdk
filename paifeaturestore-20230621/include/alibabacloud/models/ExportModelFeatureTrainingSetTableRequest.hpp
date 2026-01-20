// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMODELFEATURETRAININGSETTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMODELFEATURETRAININGSETTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FeatureViewConfigValue.hpp>
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
    class TrainingSetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrainingSetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      };
      friend void from_json(const Darabonba::Json& j, TrainingSetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      };
      TrainingSetConfig() = default ;
      TrainingSetConfig(const TrainingSetConfig &) = default ;
      TrainingSetConfig(TrainingSetConfig &&) = default ;
      TrainingSetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrainingSetConfig() = default ;
      TrainingSetConfig& operator=(const TrainingSetConfig &) = default ;
      TrainingSetConfig& operator=(TrainingSetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->partitions_ == nullptr; };
      // partitions Field Functions 
      bool hasPartitions() const { return this->partitions_ != nullptr;};
      void deletePartitions() { this->partitions_ = nullptr;};
      inline const map<string, Darabonba::Json> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, Darabonba::Json>) };
      inline map<string, Darabonba::Json> getPartitions() { DARABONBA_PTR_GET(partitions_, map<string, Darabonba::Json>) };
      inline TrainingSetConfig& setPartitions(const map<string, Darabonba::Json> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
      inline TrainingSetConfig& setPartitions(map<string, Darabonba::Json> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    protected:
      shared_ptr<map<string, Darabonba::Json>> partitions_ {};
    };

    class LabelInputConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LabelInputConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      };
      friend void from_json(const Darabonba::Json& j, LabelInputConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      };
      LabelInputConfig() = default ;
      LabelInputConfig(const LabelInputConfig &) = default ;
      LabelInputConfig(LabelInputConfig &&) = default ;
      LabelInputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LabelInputConfig() = default ;
      LabelInputConfig& operator=(const LabelInputConfig &) = default ;
      LabelInputConfig& operator=(LabelInputConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventTime_ == nullptr
        && this->partitions_ == nullptr; };
      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
      inline LabelInputConfig& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // partitions Field Functions 
      bool hasPartitions() const { return this->partitions_ != nullptr;};
      void deletePartitions() { this->partitions_ = nullptr;};
      inline const map<string, Darabonba::Json> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, Darabonba::Json>) };
      inline map<string, Darabonba::Json> getPartitions() { DARABONBA_PTR_GET(partitions_, map<string, Darabonba::Json>) };
      inline LabelInputConfig& setPartitions(const map<string, Darabonba::Json> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
      inline LabelInputConfig& setPartitions(map<string, Darabonba::Json> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    protected:
      shared_ptr<string> eventTime_ {};
      shared_ptr<map<string, Darabonba::Json>> partitions_ {};
    };

    virtual bool empty() const override { return this->featureViewConfig_ == nullptr
        && this->labelInputConfig_ == nullptr && this->realTimeIterateInterval_ == nullptr && this->realTimePartitionCountValue_ == nullptr && this->trainingSetConfig_ == nullptr; };
    // featureViewConfig Field Functions 
    bool hasFeatureViewConfig() const { return this->featureViewConfig_ != nullptr;};
    void deleteFeatureViewConfig() { this->featureViewConfig_ = nullptr;};
    inline const map<string, FeatureViewConfigValue> & getFeatureViewConfig() const { DARABONBA_PTR_GET_CONST(featureViewConfig_, map<string, FeatureViewConfigValue>) };
    inline map<string, FeatureViewConfigValue> getFeatureViewConfig() { DARABONBA_PTR_GET(featureViewConfig_, map<string, FeatureViewConfigValue>) };
    inline ExportModelFeatureTrainingSetTableRequest& setFeatureViewConfig(const map<string, FeatureViewConfigValue> & featureViewConfig) { DARABONBA_PTR_SET_VALUE(featureViewConfig_, featureViewConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setFeatureViewConfig(map<string, FeatureViewConfigValue> && featureViewConfig) { DARABONBA_PTR_SET_RVALUE(featureViewConfig_, featureViewConfig) };


    // labelInputConfig Field Functions 
    bool hasLabelInputConfig() const { return this->labelInputConfig_ != nullptr;};
    void deleteLabelInputConfig() { this->labelInputConfig_ = nullptr;};
    inline const ExportModelFeatureTrainingSetTableRequest::LabelInputConfig & getLabelInputConfig() const { DARABONBA_PTR_GET_CONST(labelInputConfig_, ExportModelFeatureTrainingSetTableRequest::LabelInputConfig) };
    inline ExportModelFeatureTrainingSetTableRequest::LabelInputConfig getLabelInputConfig() { DARABONBA_PTR_GET(labelInputConfig_, ExportModelFeatureTrainingSetTableRequest::LabelInputConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setLabelInputConfig(const ExportModelFeatureTrainingSetTableRequest::LabelInputConfig & labelInputConfig) { DARABONBA_PTR_SET_VALUE(labelInputConfig_, labelInputConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setLabelInputConfig(ExportModelFeatureTrainingSetTableRequest::LabelInputConfig && labelInputConfig) { DARABONBA_PTR_SET_RVALUE(labelInputConfig_, labelInputConfig) };


    // realTimeIterateInterval Field Functions 
    bool hasRealTimeIterateInterval() const { return this->realTimeIterateInterval_ != nullptr;};
    void deleteRealTimeIterateInterval() { this->realTimeIterateInterval_ = nullptr;};
    inline int64_t getRealTimeIterateInterval() const { DARABONBA_PTR_GET_DEFAULT(realTimeIterateInterval_, 0L) };
    inline ExportModelFeatureTrainingSetTableRequest& setRealTimeIterateInterval(int64_t realTimeIterateInterval) { DARABONBA_PTR_SET_VALUE(realTimeIterateInterval_, realTimeIterateInterval) };


    // realTimePartitionCountValue Field Functions 
    bool hasRealTimePartitionCountValue() const { return this->realTimePartitionCountValue_ != nullptr;};
    void deleteRealTimePartitionCountValue() { this->realTimePartitionCountValue_ = nullptr;};
    inline int64_t getRealTimePartitionCountValue() const { DARABONBA_PTR_GET_DEFAULT(realTimePartitionCountValue_, 0L) };
    inline ExportModelFeatureTrainingSetTableRequest& setRealTimePartitionCountValue(int64_t realTimePartitionCountValue) { DARABONBA_PTR_SET_VALUE(realTimePartitionCountValue_, realTimePartitionCountValue) };


    // trainingSetConfig Field Functions 
    bool hasTrainingSetConfig() const { return this->trainingSetConfig_ != nullptr;};
    void deleteTrainingSetConfig() { this->trainingSetConfig_ = nullptr;};
    inline const ExportModelFeatureTrainingSetTableRequest::TrainingSetConfig & getTrainingSetConfig() const { DARABONBA_PTR_GET_CONST(trainingSetConfig_, ExportModelFeatureTrainingSetTableRequest::TrainingSetConfig) };
    inline ExportModelFeatureTrainingSetTableRequest::TrainingSetConfig getTrainingSetConfig() { DARABONBA_PTR_GET(trainingSetConfig_, ExportModelFeatureTrainingSetTableRequest::TrainingSetConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setTrainingSetConfig(const ExportModelFeatureTrainingSetTableRequest::TrainingSetConfig & trainingSetConfig) { DARABONBA_PTR_SET_VALUE(trainingSetConfig_, trainingSetConfig) };
    inline ExportModelFeatureTrainingSetTableRequest& setTrainingSetConfig(ExportModelFeatureTrainingSetTableRequest::TrainingSetConfig && trainingSetConfig) { DARABONBA_PTR_SET_RVALUE(trainingSetConfig_, trainingSetConfig) };


  protected:
    shared_ptr<map<string, FeatureViewConfigValue>> featureViewConfig_ {};
    shared_ptr<ExportModelFeatureTrainingSetTableRequest::LabelInputConfig> labelInputConfig_ {};
    shared_ptr<int64_t> realTimeIterateInterval_ {};
    shared_ptr<int64_t> realTimePartitionCountValue_ {};
    shared_ptr<ExportModelFeatureTrainingSetTableRequest::TrainingSetConfig> trainingSetConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
