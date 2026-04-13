// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetDetectConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(detectConfig, detectConfig_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetectConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(detectConfig, detectConfig_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDetectConfigResponseBody() = default ;
    GetDetectConfigResponseBody(const GetDetectConfigResponseBody &) = default ;
    GetDetectConfigResponseBody(GetDetectConfigResponseBody &&) = default ;
    GetDetectConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectConfigResponseBody() = default ;
    GetDetectConfigResponseBody& operator=(const GetDetectConfigResponseBody &) = default ;
    GetDetectConfigResponseBody& operator=(GetDetectConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectConfig& obj) { 
        DARABONBA_PTR_TO_JSON(alarmConfigs, alarmConfigs_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(detectConfigId, detectConfigId_);
        DARABONBA_PTR_TO_JSON(detectConfigName, detectConfigName_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, DetectConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(alarmConfigs, alarmConfigs_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(detectConfigId, detectConfigId_);
        DARABONBA_PTR_FROM_JSON(detectConfigName, detectConfigName_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
      };
      DetectConfig() = default ;
      DetectConfig(const DetectConfig &) = default ;
      DetectConfig(DetectConfig &&) = default ;
      DetectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectConfig() = default ;
      DetectConfig& operator=(const DetectConfig &) = default ;
      DetectConfig& operator=(DetectConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlarmConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(address, address_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AlarmConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(address, address_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        AlarmConfigs() = default ;
        AlarmConfigs(const AlarmConfigs &) = default ;
        AlarmConfigs(AlarmConfigs &&) = default ;
        AlarmConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlarmConfigs() = default ;
        AlarmConfigs& operator=(const AlarmConfigs &) = default ;
        AlarmConfigs& operator=(AlarmConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->type_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline AlarmConfigs& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AlarmConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->alarmConfigs_ == nullptr
        && this->createTime_ == nullptr && this->cronExpression_ == nullptr && this->description_ == nullptr && this->detectConfigId_ == nullptr && this->detectConfigName_ == nullptr
        && this->enabled_ == nullptr && this->triggerType_ == nullptr; };
      // alarmConfigs Field Functions 
      bool hasAlarmConfigs() const { return this->alarmConfigs_ != nullptr;};
      void deleteAlarmConfigs() { this->alarmConfigs_ = nullptr;};
      inline const vector<DetectConfig::AlarmConfigs> & getAlarmConfigs() const { DARABONBA_PTR_GET_CONST(alarmConfigs_, vector<DetectConfig::AlarmConfigs>) };
      inline vector<DetectConfig::AlarmConfigs> getAlarmConfigs() { DARABONBA_PTR_GET(alarmConfigs_, vector<DetectConfig::AlarmConfigs>) };
      inline DetectConfig& setAlarmConfigs(const vector<DetectConfig::AlarmConfigs> & alarmConfigs) { DARABONBA_PTR_SET_VALUE(alarmConfigs_, alarmConfigs) };
      inline DetectConfig& setAlarmConfigs(vector<DetectConfig::AlarmConfigs> && alarmConfigs) { DARABONBA_PTR_SET_RVALUE(alarmConfigs_, alarmConfigs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DetectConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline DetectConfig& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DetectConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // detectConfigId Field Functions 
      bool hasDetectConfigId() const { return this->detectConfigId_ != nullptr;};
      void deleteDetectConfigId() { this->detectConfigId_ = nullptr;};
      inline string getDetectConfigId() const { DARABONBA_PTR_GET_DEFAULT(detectConfigId_, "") };
      inline DetectConfig& setDetectConfigId(string detectConfigId) { DARABONBA_PTR_SET_VALUE(detectConfigId_, detectConfigId) };


      // detectConfigName Field Functions 
      bool hasDetectConfigName() const { return this->detectConfigName_ != nullptr;};
      void deleteDetectConfigName() { this->detectConfigName_ = nullptr;};
      inline string getDetectConfigName() const { DARABONBA_PTR_GET_DEFAULT(detectConfigName_, "") };
      inline DetectConfig& setDetectConfigName(string detectConfigName) { DARABONBA_PTR_SET_VALUE(detectConfigName_, detectConfigName) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DetectConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline DetectConfig& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      shared_ptr<vector<DetectConfig::AlarmConfigs>> alarmConfigs_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> cronExpression_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> detectConfigId_ {};
      shared_ptr<string> detectConfigName_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->detectConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // detectConfig Field Functions 
    bool hasDetectConfig() const { return this->detectConfig_ != nullptr;};
    void deleteDetectConfig() { this->detectConfig_ = nullptr;};
    inline const GetDetectConfigResponseBody::DetectConfig & getDetectConfig() const { DARABONBA_PTR_GET_CONST(detectConfig_, GetDetectConfigResponseBody::DetectConfig) };
    inline GetDetectConfigResponseBody::DetectConfig getDetectConfig() { DARABONBA_PTR_GET(detectConfig_, GetDetectConfigResponseBody::DetectConfig) };
    inline GetDetectConfigResponseBody& setDetectConfig(const GetDetectConfigResponseBody::DetectConfig & detectConfig) { DARABONBA_PTR_SET_VALUE(detectConfig_, detectConfig) };
    inline GetDetectConfigResponseBody& setDetectConfig(GetDetectConfigResponseBody::DetectConfig && detectConfig) { DARABONBA_PTR_SET_RVALUE(detectConfig_, detectConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDetectConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetDetectConfigResponseBody::DetectConfig> detectConfig_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
