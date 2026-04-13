// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTCONFIGSRESPONSEBODY_HPP_
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
  class ListDetectConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(detectConfigs, detectConfigs_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(detectConfigs, detectConfigs_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDetectConfigsResponseBody() = default ;
    ListDetectConfigsResponseBody(const ListDetectConfigsResponseBody &) = default ;
    ListDetectConfigsResponseBody(ListDetectConfigsResponseBody &&) = default ;
    ListDetectConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectConfigsResponseBody() = default ;
    ListDetectConfigsResponseBody& operator=(const ListDetectConfigsResponseBody &) = default ;
    ListDetectConfigsResponseBody& operator=(ListDetectConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(alarmConfigs, alarmConfigs_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(detectConfigId, detectConfigId_);
        DARABONBA_PTR_TO_JSON(detectConfigName, detectConfigName_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, DetectConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(alarmConfigs, alarmConfigs_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(detectConfigId, detectConfigId_);
        DARABONBA_PTR_FROM_JSON(detectConfigName, detectConfigName_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
      };
      DetectConfigs() = default ;
      DetectConfigs(const DetectConfigs &) = default ;
      DetectConfigs(DetectConfigs &&) = default ;
      DetectConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectConfigs() = default ;
      DetectConfigs& operator=(const DetectConfigs &) = default ;
      DetectConfigs& operator=(DetectConfigs &&) = default ;
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
      inline const vector<DetectConfigs::AlarmConfigs> & getAlarmConfigs() const { DARABONBA_PTR_GET_CONST(alarmConfigs_, vector<DetectConfigs::AlarmConfigs>) };
      inline vector<DetectConfigs::AlarmConfigs> getAlarmConfigs() { DARABONBA_PTR_GET(alarmConfigs_, vector<DetectConfigs::AlarmConfigs>) };
      inline DetectConfigs& setAlarmConfigs(const vector<DetectConfigs::AlarmConfigs> & alarmConfigs) { DARABONBA_PTR_SET_VALUE(alarmConfigs_, alarmConfigs) };
      inline DetectConfigs& setAlarmConfigs(vector<DetectConfigs::AlarmConfigs> && alarmConfigs) { DARABONBA_PTR_SET_RVALUE(alarmConfigs_, alarmConfigs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DetectConfigs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline DetectConfigs& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DetectConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // detectConfigId Field Functions 
      bool hasDetectConfigId() const { return this->detectConfigId_ != nullptr;};
      void deleteDetectConfigId() { this->detectConfigId_ = nullptr;};
      inline string getDetectConfigId() const { DARABONBA_PTR_GET_DEFAULT(detectConfigId_, "") };
      inline DetectConfigs& setDetectConfigId(string detectConfigId) { DARABONBA_PTR_SET_VALUE(detectConfigId_, detectConfigId) };


      // detectConfigName Field Functions 
      bool hasDetectConfigName() const { return this->detectConfigName_ != nullptr;};
      void deleteDetectConfigName() { this->detectConfigName_ = nullptr;};
      inline string getDetectConfigName() const { DARABONBA_PTR_GET_DEFAULT(detectConfigName_, "") };
      inline DetectConfigs& setDetectConfigName(string detectConfigName) { DARABONBA_PTR_SET_VALUE(detectConfigName_, detectConfigName) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DetectConfigs& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline DetectConfigs& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      shared_ptr<vector<DetectConfigs::AlarmConfigs>> alarmConfigs_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> cronExpression_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> detectConfigId_ {};
      shared_ptr<string> detectConfigName_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->detectConfigs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // detectConfigs Field Functions 
    bool hasDetectConfigs() const { return this->detectConfigs_ != nullptr;};
    void deleteDetectConfigs() { this->detectConfigs_ = nullptr;};
    inline const vector<ListDetectConfigsResponseBody::DetectConfigs> & getDetectConfigs() const { DARABONBA_PTR_GET_CONST(detectConfigs_, vector<ListDetectConfigsResponseBody::DetectConfigs>) };
    inline vector<ListDetectConfigsResponseBody::DetectConfigs> getDetectConfigs() { DARABONBA_PTR_GET(detectConfigs_, vector<ListDetectConfigsResponseBody::DetectConfigs>) };
    inline ListDetectConfigsResponseBody& setDetectConfigs(const vector<ListDetectConfigsResponseBody::DetectConfigs> & detectConfigs) { DARABONBA_PTR_SET_VALUE(detectConfigs_, detectConfigs) };
    inline ListDetectConfigsResponseBody& setDetectConfigs(vector<ListDetectConfigsResponseBody::DetectConfigs> && detectConfigs) { DARABONBA_PTR_SET_RVALUE(detectConfigs_, detectConfigs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDetectConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDetectConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDetectConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDetectConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDetectConfigsResponseBody::DetectConfigs>> detectConfigs_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
