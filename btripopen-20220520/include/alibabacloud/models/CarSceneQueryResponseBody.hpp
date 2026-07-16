// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARSCENEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARSCENEQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarSceneQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarSceneQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CarSceneQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CarSceneQueryResponseBody() = default ;
    CarSceneQueryResponseBody(const CarSceneQueryResponseBody &) = default ;
    CarSceneQueryResponseBody(CarSceneQueryResponseBody &&) = default ;
    CarSceneQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarSceneQueryResponseBody() = default ;
    CarSceneQueryResponseBody& operator=(const CarSceneQueryResponseBody &) = default ;
    CarSceneQueryResponseBody& operator=(CarSceneQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(scenarioTemplateId, scenarioTemplateId_);
        DARABONBA_PTR_TO_JSON(scenarioTemplateName, scenarioTemplateName_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(scenarioTemplateId, scenarioTemplateId_);
        DARABONBA_PTR_FROM_JSON(scenarioTemplateName, scenarioTemplateName_);
        DARABONBA_PTR_FROM_JSON(state, state_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scenarioTemplateId_ == nullptr
        && this->scenarioTemplateName_ == nullptr && this->state_ == nullptr; };
      // scenarioTemplateId Field Functions 
      bool hasScenarioTemplateId() const { return this->scenarioTemplateId_ != nullptr;};
      void deleteScenarioTemplateId() { this->scenarioTemplateId_ = nullptr;};
      inline string getScenarioTemplateId() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateId_, "") };
      inline Module& setScenarioTemplateId(string scenarioTemplateId) { DARABONBA_PTR_SET_VALUE(scenarioTemplateId_, scenarioTemplateId) };


      // scenarioTemplateName Field Functions 
      bool hasScenarioTemplateName() const { return this->scenarioTemplateName_ != nullptr;};
      void deleteScenarioTemplateName() { this->scenarioTemplateName_ = nullptr;};
      inline string getScenarioTemplateName() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateName_, "") };
      inline Module& setScenarioTemplateName(string scenarioTemplateName) { DARABONBA_PTR_SET_VALUE(scenarioTemplateName_, scenarioTemplateName) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Module& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The scenario template ID.
      shared_ptr<string> scenarioTemplateId_ {};
      // The scenario template name.
      shared_ptr<string> scenarioTemplateName_ {};
      // The scenario status.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CarSceneQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CarSceneQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<CarSceneQueryResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<CarSceneQueryResponseBody::Module>) };
    inline vector<CarSceneQueryResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<CarSceneQueryResponseBody::Module>) };
    inline CarSceneQueryResponseBody& setModule(const vector<CarSceneQueryResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CarSceneQueryResponseBody& setModule(vector<CarSceneQueryResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CarSceneQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CarSceneQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CarSceneQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The operation status.
    shared_ptr<string> code_ {};
    // The error details.
    shared_ptr<string> message_ {};
    // The list of car service scenario templates. An empty array [] is returned if no data exists.
    shared_ptr<vector<CarSceneQueryResponseBody::Module>> module_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the query was successful.
    // 
    // - true: Successful.
    // 
    // - false: Failed.
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
