// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateElasticPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateElasticPlanResponseBody() = default ;
    CreateElasticPlanResponseBody(const CreateElasticPlanResponseBody &) = default ;
    CreateElasticPlanResponseBody(CreateElasticPlanResponseBody &&) = default ;
    CreateElasticPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticPlanResponseBody() = default ;
    CreateElasticPlanResponseBody& operator=(const CreateElasticPlanResponseBody &) = default ;
    CreateElasticPlanResponseBody& operator=(CreateElasticPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(appGroupId, appGroupId_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(customDates, customDates_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(elasticLcu, elasticLcu_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(endHour, endHour_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(startHour, startHour_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(appGroupId, appGroupId_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(customDates, customDates_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(elasticLcu, elasticLcu_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(endHour, endHour_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(startHour, startHour_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->created_ == nullptr && this->customDates_ == nullptr && this->description_ == nullptr && this->elasticLcu_ == nullptr && this->enabled_ == nullptr
        && this->endHour_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->scheduleType_ == nullptr && this->startHour_ == nullptr
        && this->updated_ == nullptr; };
      // appGroupId Field Functions 
      bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
      void deleteAppGroupId() { this->appGroupId_ = nullptr;};
      inline string getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, "") };
      inline Result& setAppGroupId(string appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Result& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // customDates Field Functions 
      bool hasCustomDates() const { return this->customDates_ != nullptr;};
      void deleteCustomDates() { this->customDates_ = nullptr;};
      inline const vector<string> & getCustomDates() const { DARABONBA_PTR_GET_CONST(customDates_, vector<string>) };
      inline vector<string> getCustomDates() { DARABONBA_PTR_GET(customDates_, vector<string>) };
      inline Result& setCustomDates(const vector<string> & customDates) { DARABONBA_PTR_SET_VALUE(customDates_, customDates) };
      inline Result& setCustomDates(vector<string> && customDates) { DARABONBA_PTR_SET_RVALUE(customDates_, customDates) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // elasticLcu Field Functions 
      bool hasElasticLcu() const { return this->elasticLcu_ != nullptr;};
      void deleteElasticLcu() { this->elasticLcu_ = nullptr;};
      inline int32_t getElasticLcu() const { DARABONBA_PTR_GET_DEFAULT(elasticLcu_, 0) };
      inline Result& setElasticLcu(int32_t elasticLcu) { DARABONBA_PTR_SET_VALUE(elasticLcu_, elasticLcu) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Result& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // endHour Field Functions 
      bool hasEndHour() const { return this->endHour_ != nullptr;};
      void deleteEndHour() { this->endHour_ = nullptr;};
      inline int32_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
      inline Result& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline Result& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // startHour Field Functions 
      bool hasStartHour() const { return this->startHour_ != nullptr;};
      void deleteStartHour() { this->startHour_ = nullptr;};
      inline int32_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
      inline Result& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int64_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
      inline Result& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      shared_ptr<string> appGroupId_ {};
      shared_ptr<int64_t> created_ {};
      shared_ptr<vector<string>> customDates_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> elasticLcu_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<int32_t> endHour_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> scheduleType_ {};
      shared_ptr<int32_t> startHour_ {};
      shared_ptr<int64_t> updated_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateElasticPlanResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline CreateElasticPlanResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateElasticPlanResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateElasticPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateElasticPlanResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateElasticPlanResponseBody::Result) };
    inline CreateElasticPlanResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateElasticPlanResponseBody::Result) };
    inline CreateElasticPlanResponseBody& setResult(const CreateElasticPlanResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateElasticPlanResponseBody& setResult(CreateElasticPlanResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateElasticPlanResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
