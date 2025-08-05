// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EventCenterQueryEventsRequestBodyParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    EventCenterQueryEventsRequestBody() = default ;
    EventCenterQueryEventsRequestBody(const EventCenterQueryEventsRequestBody &) = default ;
    EventCenterQueryEventsRequestBody(EventCenterQueryEventsRequestBody &&) = default ;
    EventCenterQueryEventsRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequestBody() = default ;
    EventCenterQueryEventsRequestBody& operator=(const EventCenterQueryEventsRequestBody &) = default ;
    EventCenterQueryEventsRequestBody& operator=(EventCenterQueryEventsRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameters_ != nullptr
        && this->queryType_ != nullptr && this->schemaId_ != nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::EventCenterQueryEventsRequestBodyParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::EventCenterQueryEventsRequestBodyParameters) };
    inline Models::EventCenterQueryEventsRequestBodyParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::EventCenterQueryEventsRequestBodyParameters) };
    inline EventCenterQueryEventsRequestBody& setParameters(const Models::EventCenterQueryEventsRequestBodyParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline EventCenterQueryEventsRequestBody& setParameters(Models::EventCenterQueryEventsRequestBodyParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline EventCenterQueryEventsRequestBody& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline EventCenterQueryEventsRequestBody& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // The query parameters.
    // 
    // This parameter is required.
    std::shared_ptr<Models::EventCenterQueryEventsRequestBodyParameters> parameters_ = nullptr;
    // The query type. Valid values:
    // 
    // *   **timeseries**: queries time series data.
    // *   **table**: queries table data.
    // *   **timeseries_and_table**: queries time series data and table data at the same time.
    // 
    // This parameter is required.
    std::shared_ptr<string> queryType_ = nullptr;
    // The schema ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
