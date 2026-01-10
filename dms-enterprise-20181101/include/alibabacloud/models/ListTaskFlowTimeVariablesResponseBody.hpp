// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowTimeVariablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowTimeVariablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowTimeVariablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
    };
    ListTaskFlowTimeVariablesResponseBody() = default ;
    ListTaskFlowTimeVariablesResponseBody(const ListTaskFlowTimeVariablesResponseBody &) = default ;
    ListTaskFlowTimeVariablesResponseBody(ListTaskFlowTimeVariablesResponseBody &&) = default ;
    ListTaskFlowTimeVariablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowTimeVariablesResponseBody() = default ;
    ListTaskFlowTimeVariablesResponseBody& operator=(const ListTaskFlowTimeVariablesResponseBody &) = default ;
    ListTaskFlowTimeVariablesResponseBody& operator=(ListTaskFlowTimeVariablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeVariables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeVariables& obj) { 
        DARABONBA_PTR_TO_JSON(TimeVariable, timeVariable_);
      };
      friend void from_json(const Darabonba::Json& j, TimeVariables& obj) { 
        DARABONBA_PTR_FROM_JSON(TimeVariable, timeVariable_);
      };
      TimeVariables() = default ;
      TimeVariables(const TimeVariables &) = default ;
      TimeVariables(TimeVariables &&) = default ;
      TimeVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeVariables() = default ;
      TimeVariables& operator=(const TimeVariables &) = default ;
      TimeVariables& operator=(TimeVariables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimeVariable : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeVariable& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pattern, pattern_);
        };
        friend void from_json(const Darabonba::Json& j, TimeVariable& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
        };
        TimeVariable() = default ;
        TimeVariable(const TimeVariable &) = default ;
        TimeVariable(TimeVariable &&) = default ;
        TimeVariable(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeVariable() = default ;
        TimeVariable& operator=(const TimeVariable &) = default ;
        TimeVariable& operator=(TimeVariable &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->pattern_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TimeVariable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pattern Field Functions 
        bool hasPattern() const { return this->pattern_ != nullptr;};
        void deletePattern() { this->pattern_ = nullptr;};
        inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
        inline TimeVariable& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      protected:
        // The name of the time variable.
        shared_ptr<string> name_ {};
        // The format of the time variable.
        shared_ptr<string> pattern_ {};
      };

      virtual bool empty() const override { return this->timeVariable_ == nullptr; };
      // timeVariable Field Functions 
      bool hasTimeVariable() const { return this->timeVariable_ != nullptr;};
      void deleteTimeVariable() { this->timeVariable_ = nullptr;};
      inline const vector<TimeVariables::TimeVariable> & getTimeVariable() const { DARABONBA_PTR_GET_CONST(timeVariable_, vector<TimeVariables::TimeVariable>) };
      inline vector<TimeVariables::TimeVariable> getTimeVariable() { DARABONBA_PTR_GET(timeVariable_, vector<TimeVariables::TimeVariable>) };
      inline TimeVariables& setTimeVariable(const vector<TimeVariables::TimeVariable> & timeVariable) { DARABONBA_PTR_SET_VALUE(timeVariable_, timeVariable) };
      inline TimeVariables& setTimeVariable(vector<TimeVariables::TimeVariable> && timeVariable) { DARABONBA_PTR_SET_RVALUE(timeVariable_, timeVariable) };


    protected:
      shared_ptr<vector<TimeVariables::TimeVariable>> timeVariable_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timeVariables_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowTimeVariablesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowTimeVariablesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowTimeVariablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowTimeVariablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timeVariables Field Functions 
    bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
    void deleteTimeVariables() { this->timeVariables_ = nullptr;};
    inline const ListTaskFlowTimeVariablesResponseBody::TimeVariables & getTimeVariables() const { DARABONBA_PTR_GET_CONST(timeVariables_, ListTaskFlowTimeVariablesResponseBody::TimeVariables) };
    inline ListTaskFlowTimeVariablesResponseBody::TimeVariables getTimeVariables() { DARABONBA_PTR_GET(timeVariables_, ListTaskFlowTimeVariablesResponseBody::TimeVariables) };
    inline ListTaskFlowTimeVariablesResponseBody& setTimeVariables(const ListTaskFlowTimeVariablesResponseBody::TimeVariables & timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };
    inline ListTaskFlowTimeVariablesResponseBody& setTimeVariables(ListTaskFlowTimeVariablesResponseBody::TimeVariables && timeVariables) { DARABONBA_PTR_SET_RVALUE(timeVariables_, timeVariables) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The time variables for the task flow.
    shared_ptr<ListTaskFlowTimeVariablesResponseBody::TimeVariables> timeVariables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
