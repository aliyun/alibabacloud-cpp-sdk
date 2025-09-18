// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMODELFEATURETRAININGSETTABLEREQUESTLABELINPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMODELFEATURETRAININGSETTABLEREQUESTLABELINPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ExportModelFeatureTrainingSetTableRequestLabelInputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportModelFeatureTrainingSetTableRequestLabelInputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, ExportModelFeatureTrainingSetTableRequestLabelInputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
    };
    ExportModelFeatureTrainingSetTableRequestLabelInputConfig() = default ;
    ExportModelFeatureTrainingSetTableRequestLabelInputConfig(const ExportModelFeatureTrainingSetTableRequestLabelInputConfig &) = default ;
    ExportModelFeatureTrainingSetTableRequestLabelInputConfig(ExportModelFeatureTrainingSetTableRequestLabelInputConfig &&) = default ;
    ExportModelFeatureTrainingSetTableRequestLabelInputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportModelFeatureTrainingSetTableRequestLabelInputConfig() = default ;
    ExportModelFeatureTrainingSetTableRequestLabelInputConfig& operator=(const ExportModelFeatureTrainingSetTableRequestLabelInputConfig &) = default ;
    ExportModelFeatureTrainingSetTableRequestLabelInputConfig& operator=(ExportModelFeatureTrainingSetTableRequestLabelInputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventTime_ != nullptr
        && this->partitions_ != nullptr; };
    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline ExportModelFeatureTrainingSetTableRequestLabelInputConfig& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, Darabonba::Json> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> partitions() { DARABONBA_PTR_GET(partitions_, map<string, Darabonba::Json>) };
    inline ExportModelFeatureTrainingSetTableRequestLabelInputConfig& setPartitions(const map<string, Darabonba::Json> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline ExportModelFeatureTrainingSetTableRequestLabelInputConfig& setPartitions(map<string, Darabonba::Json> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    std::shared_ptr<string> eventTime_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> partitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
