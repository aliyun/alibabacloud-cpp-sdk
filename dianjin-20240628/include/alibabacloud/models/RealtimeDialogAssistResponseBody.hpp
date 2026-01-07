// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealtimeDialogAssistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    RealtimeDialogAssistResponseBody() = default ;
    RealtimeDialogAssistResponseBody(const RealtimeDialogAssistResponseBody &) = default ;
    RealtimeDialogAssistResponseBody(RealtimeDialogAssistResponseBody &&) = default ;
    RealtimeDialogAssistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistResponseBody() = default ;
    RealtimeDialogAssistResponseBody& operator=(const RealtimeDialogAssistResponseBody &) = default ;
    RealtimeDialogAssistResponseBody& operator=(RealtimeDialogAssistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(analysisProcess, analysisProcess_);
        DARABONBA_PTR_TO_JSON(assistScripts, assistScripts_);
        DARABONBA_PTR_TO_JSON(assistSop, assistSop_);
        DARABONBA_PTR_TO_JSON(conversationModel, conversationModel_);
        DARABONBA_PTR_TO_JSON(interrupt, interrupt_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(analysisProcess, analysisProcess_);
        DARABONBA_PTR_FROM_JSON(assistScripts, assistScripts_);
        DARABONBA_PTR_FROM_JSON(assistSop, assistSop_);
        DARABONBA_PTR_FROM_JSON(conversationModel, conversationModel_);
        DARABONBA_PTR_FROM_JSON(interrupt, interrupt_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConversationModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConversationModel& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(customerId, customerId_);
          DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ConversationModel& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(customerId, customerId_);
          DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ConversationModel() = default ;
        ConversationModel(const ConversationModel &) = default ;
        ConversationModel(ConversationModel &&) = default ;
        ConversationModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConversationModel() = default ;
        ConversationModel& operator=(const ConversationModel &) = default ;
        ConversationModel& operator=(ConversationModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->customerId_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceType_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ConversationModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // customerId Field Functions 
        bool hasCustomerId() const { return this->customerId_ != nullptr;};
        void deleteCustomerId() { this->customerId_ = nullptr;};
        inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
        inline ConversationModel& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


        // customerServiceId Field Functions 
        bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
        void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
        inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
        inline ConversationModel& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


        // customerServiceType Field Functions 
        bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
        void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
        inline string getCustomerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
        inline ConversationModel& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline ConversationModel& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ConversationModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> customerId_ {};
        shared_ptr<string> customerServiceId_ {};
        shared_ptr<string> customerServiceType_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> type_ {};
      };

      class AssistSop : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssistSop& obj) { 
          DARABONBA_PTR_TO_JSON(assistSop, assistSop_);
          DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
          DARABONBA_PTR_TO_JSON(intentName, intentName_);
          DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
        };
        friend void from_json(const Darabonba::Json& j, AssistSop& obj) { 
          DARABONBA_PTR_FROM_JSON(assistSop, assistSop_);
          DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
          DARABONBA_PTR_FROM_JSON(intentName, intentName_);
          DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
        };
        AssistSop() = default ;
        AssistSop(const AssistSop &) = default ;
        AssistSop(AssistSop &&) = default ;
        AssistSop(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssistSop() = default ;
        AssistSop& operator=(const AssistSop &) = default ;
        AssistSop& operator=(AssistSop &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assistSop_ == nullptr
        && this->intentCode_ == nullptr && this->intentName_ == nullptr && this->isDefault_ == nullptr; };
        // assistSop Field Functions 
        bool hasAssistSop() const { return this->assistSop_ != nullptr;};
        void deleteAssistSop() { this->assistSop_ = nullptr;};
        inline string getAssistSop() const { DARABONBA_PTR_GET_DEFAULT(assistSop_, "") };
        inline AssistSop& setAssistSop(string assistSop) { DARABONBA_PTR_SET_VALUE(assistSop_, assistSop) };


        // intentCode Field Functions 
        bool hasIntentCode() const { return this->intentCode_ != nullptr;};
        void deleteIntentCode() { this->intentCode_ = nullptr;};
        inline string getIntentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
        inline AssistSop& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


        // intentName Field Functions 
        bool hasIntentName() const { return this->intentName_ != nullptr;};
        void deleteIntentName() { this->intentName_ = nullptr;};
        inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
        inline AssistSop& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline AssistSop& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      protected:
        shared_ptr<string> assistSop_ {};
        shared_ptr<string> intentCode_ {};
        shared_ptr<string> intentName_ {};
        shared_ptr<bool> isDefault_ {};
      };

      class AssistScripts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssistScripts& obj) { 
          DARABONBA_PTR_TO_JSON(assistScript, assistScript_);
          DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
          DARABONBA_PTR_TO_JSON(intentLabels, intentLabels_);
          DARABONBA_PTR_TO_JSON(intentName, intentName_);
          DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
        };
        friend void from_json(const Darabonba::Json& j, AssistScripts& obj) { 
          DARABONBA_PTR_FROM_JSON(assistScript, assistScript_);
          DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
          DARABONBA_PTR_FROM_JSON(intentLabels, intentLabels_);
          DARABONBA_PTR_FROM_JSON(intentName, intentName_);
          DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
        };
        AssistScripts() = default ;
        AssistScripts(const AssistScripts &) = default ;
        AssistScripts(AssistScripts &&) = default ;
        AssistScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssistScripts() = default ;
        AssistScripts& operator=(const AssistScripts &) = default ;
        AssistScripts& operator=(AssistScripts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assistScript_ == nullptr
        && this->intentCode_ == nullptr && this->intentLabels_ == nullptr && this->intentName_ == nullptr && this->isDefault_ == nullptr; };
        // assistScript Field Functions 
        bool hasAssistScript() const { return this->assistScript_ != nullptr;};
        void deleteAssistScript() { this->assistScript_ = nullptr;};
        inline string getAssistScript() const { DARABONBA_PTR_GET_DEFAULT(assistScript_, "") };
        inline AssistScripts& setAssistScript(string assistScript) { DARABONBA_PTR_SET_VALUE(assistScript_, assistScript) };


        // intentCode Field Functions 
        bool hasIntentCode() const { return this->intentCode_ != nullptr;};
        void deleteIntentCode() { this->intentCode_ = nullptr;};
        inline string getIntentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
        inline AssistScripts& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


        // intentLabels Field Functions 
        bool hasIntentLabels() const { return this->intentLabels_ != nullptr;};
        void deleteIntentLabels() { this->intentLabels_ = nullptr;};
        inline string getIntentLabels() const { DARABONBA_PTR_GET_DEFAULT(intentLabels_, "") };
        inline AssistScripts& setIntentLabels(string intentLabels) { DARABONBA_PTR_SET_VALUE(intentLabels_, intentLabels) };


        // intentName Field Functions 
        bool hasIntentName() const { return this->intentName_ != nullptr;};
        void deleteIntentName() { this->intentName_ = nullptr;};
        inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
        inline AssistScripts& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline AssistScripts& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      protected:
        shared_ptr<string> assistScript_ {};
        shared_ptr<string> intentCode_ {};
        shared_ptr<string> intentLabels_ {};
        shared_ptr<string> intentName_ {};
        shared_ptr<bool> isDefault_ {};
      };

      virtual bool empty() const override { return this->analysisProcess_ == nullptr
        && this->assistScripts_ == nullptr && this->assistSop_ == nullptr && this->conversationModel_ == nullptr && this->interrupt_ == nullptr && this->requestId_ == nullptr
        && this->sessionId_ == nullptr; };
      // analysisProcess Field Functions 
      bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
      void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
      inline string getAnalysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
      inline Data& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


      // assistScripts Field Functions 
      bool hasAssistScripts() const { return this->assistScripts_ != nullptr;};
      void deleteAssistScripts() { this->assistScripts_ = nullptr;};
      inline const vector<Data::AssistScripts> & getAssistScripts() const { DARABONBA_PTR_GET_CONST(assistScripts_, vector<Data::AssistScripts>) };
      inline vector<Data::AssistScripts> getAssistScripts() { DARABONBA_PTR_GET(assistScripts_, vector<Data::AssistScripts>) };
      inline Data& setAssistScripts(const vector<Data::AssistScripts> & assistScripts) { DARABONBA_PTR_SET_VALUE(assistScripts_, assistScripts) };
      inline Data& setAssistScripts(vector<Data::AssistScripts> && assistScripts) { DARABONBA_PTR_SET_RVALUE(assistScripts_, assistScripts) };


      // assistSop Field Functions 
      bool hasAssistSop() const { return this->assistSop_ != nullptr;};
      void deleteAssistSop() { this->assistSop_ = nullptr;};
      inline const vector<Data::AssistSop> & getAssistSop() const { DARABONBA_PTR_GET_CONST(assistSop_, vector<Data::AssistSop>) };
      inline vector<Data::AssistSop> getAssistSop() { DARABONBA_PTR_GET(assistSop_, vector<Data::AssistSop>) };
      inline Data& setAssistSop(const vector<Data::AssistSop> & assistSop) { DARABONBA_PTR_SET_VALUE(assistSop_, assistSop) };
      inline Data& setAssistSop(vector<Data::AssistSop> && assistSop) { DARABONBA_PTR_SET_RVALUE(assistSop_, assistSop) };


      // conversationModel Field Functions 
      bool hasConversationModel() const { return this->conversationModel_ != nullptr;};
      void deleteConversationModel() { this->conversationModel_ = nullptr;};
      inline const vector<Data::ConversationModel> & getConversationModel() const { DARABONBA_PTR_GET_CONST(conversationModel_, vector<Data::ConversationModel>) };
      inline vector<Data::ConversationModel> getConversationModel() { DARABONBA_PTR_GET(conversationModel_, vector<Data::ConversationModel>) };
      inline Data& setConversationModel(const vector<Data::ConversationModel> & conversationModel) { DARABONBA_PTR_SET_VALUE(conversationModel_, conversationModel) };
      inline Data& setConversationModel(vector<Data::ConversationModel> && conversationModel) { DARABONBA_PTR_SET_RVALUE(conversationModel_, conversationModel) };


      // interrupt Field Functions 
      bool hasInterrupt() const { return this->interrupt_ != nullptr;};
      void deleteInterrupt() { this->interrupt_ = nullptr;};
      inline bool getInterrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
      inline Data& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<string> analysisProcess_ {};
      shared_ptr<vector<Data::AssistScripts>> assistScripts_ {};
      shared_ptr<vector<Data::AssistSop>> assistSop_ {};
      shared_ptr<vector<Data::ConversationModel>> conversationModel_ {};
      shared_ptr<bool> interrupt_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline RealtimeDialogAssistResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RealtimeDialogAssistResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RealtimeDialogAssistResponseBody::Data) };
    inline RealtimeDialogAssistResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RealtimeDialogAssistResponseBody::Data) };
    inline RealtimeDialogAssistResponseBody& setData(const RealtimeDialogAssistResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RealtimeDialogAssistResponseBody& setData(RealtimeDialogAssistResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline RealtimeDialogAssistResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline RealtimeDialogAssistResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RealtimeDialogAssistResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RealtimeDialogAssistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RealtimeDialogAssistResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline RealtimeDialogAssistResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<RealtimeDialogAssistResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
