// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCETASKNOTIFICATIONSNOTIFICATIONSNOTIFICATIONCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCETASKNOTIFICATIONSNOTIFICATIONSNOTIFICATIONCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
    };
    DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels() = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels(const DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels &) = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels(DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels &&) = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels() = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels& operator=(const DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels &) = default ;
    DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels& operator=(DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channels_ != nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> channels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DataQualityEvaluationTaskInstanceTaskNotificationsNotificationsNotificationChannels& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


  protected:
    std::shared_ptr<vector<string>> channels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
