// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONSNOTIFICATIONCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTNOTIFICATIONSNOTIFICATIONSNOTIFICATIONCHANNELS_HPP_
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
  class UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
    };
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels() = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels(const UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels &) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels(UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels &&) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels() = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels& operator=(const UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels &) = default ;
    UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels& operator=(UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> channels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline UpdateDataQualityEvaluationTaskRequestNotificationsNotificationsNotificationChannels& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


  protected:
    // The alert notification methods.
    std::shared_ptr<vector<string>> channels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
