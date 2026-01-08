// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWHATSAPPHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWHATSAPPHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetWhatsappHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWhatsappHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWhatsappHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWhatsappHealthStatusResponseBody() = default ;
    GetWhatsappHealthStatusResponseBody(const GetWhatsappHealthStatusResponseBody &) = default ;
    GetWhatsappHealthStatusResponseBody(GetWhatsappHealthStatusResponseBody &&) = default ;
    GetWhatsappHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWhatsappHealthStatusResponseBody() = default ;
    GetWhatsappHealthStatusResponseBody& operator=(const GetWhatsappHealthStatusResponseBody &) = default ;
    GetWhatsappHealthStatusResponseBody& operator=(GetWhatsappHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanSendMessage, canSendMessage_);
        DARABONBA_PTR_TO_JSON(Entities, entities_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanSendMessage, canSendMessage_);
        DARABONBA_PTR_FROM_JSON(Entities, entities_);
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
      class Entities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Entities& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
          DARABONBA_PTR_TO_JSON(CanSendMessage, canSendMessage_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(Errors, errors_);
          DARABONBA_PTR_TO_JSON(Language, language_);
          DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
          DARABONBA_PTR_TO_JSON(WabaId, wabaId_);
        };
        friend void from_json(const Darabonba::Json& j, Entities& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
          DARABONBA_PTR_FROM_JSON(CanSendMessage, canSendMessage_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(Errors, errors_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
          DARABONBA_PTR_FROM_JSON(WabaId, wabaId_);
        };
        Entities() = default ;
        Entities(const Entities &) = default ;
        Entities(Entities &&) = default ;
        Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Entities() = default ;
        Entities& operator=(const Entities &) = default ;
        Entities& operator=(Entities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Errors : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Errors& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorDescription, errorDescription_);
            DARABONBA_PTR_TO_JSON(PossibleSolution, possibleSolution_);
          };
          friend void from_json(const Darabonba::Json& j, Errors& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorDescription, errorDescription_);
            DARABONBA_PTR_FROM_JSON(PossibleSolution, possibleSolution_);
          };
          Errors() = default ;
          Errors(const Errors &) = default ;
          Errors(Errors &&) = default ;
          Errors(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Errors() = default ;
          Errors& operator=(const Errors &) = default ;
          Errors& operator=(Errors &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorDescription_ == nullptr && this->possibleSolution_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline Errors& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorDescription Field Functions 
          bool hasErrorDescription() const { return this->errorDescription_ != nullptr;};
          void deleteErrorDescription() { this->errorDescription_ = nullptr;};
          inline string getErrorDescription() const { DARABONBA_PTR_GET_DEFAULT(errorDescription_, "") };
          inline Errors& setErrorDescription(string errorDescription) { DARABONBA_PTR_SET_VALUE(errorDescription_, errorDescription) };


          // possibleSolution Field Functions 
          bool hasPossibleSolution() const { return this->possibleSolution_ != nullptr;};
          void deletePossibleSolution() { this->possibleSolution_ = nullptr;};
          inline string getPossibleSolution() const { DARABONBA_PTR_GET_DEFAULT(possibleSolution_, "") };
          inline Errors& setPossibleSolution(string possibleSolution) { DARABONBA_PTR_SET_VALUE(possibleSolution_, possibleSolution) };


        protected:
          // The error code.
          shared_ptr<string> errorCode_ {};
          // The description of the error.
          shared_ptr<string> errorDescription_ {};
          // The possible solution to the error.
          shared_ptr<string> possibleSolution_ {};
        };

        virtual bool empty() const override { return this->businessId_ == nullptr
        && this->canSendMessage_ == nullptr && this->entityType_ == nullptr && this->errors_ == nullptr && this->language_ == nullptr && this->phoneNumber_ == nullptr
        && this->templateCode_ == nullptr && this->wabaId_ == nullptr; };
        // businessId Field Functions 
        bool hasBusinessId() const { return this->businessId_ != nullptr;};
        void deleteBusinessId() { this->businessId_ = nullptr;};
        inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
        inline Entities& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


        // canSendMessage Field Functions 
        bool hasCanSendMessage() const { return this->canSendMessage_ != nullptr;};
        void deleteCanSendMessage() { this->canSendMessage_ = nullptr;};
        inline string getCanSendMessage() const { DARABONBA_PTR_GET_DEFAULT(canSendMessage_, "") };
        inline Entities& setCanSendMessage(string canSendMessage) { DARABONBA_PTR_SET_VALUE(canSendMessage_, canSendMessage) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline Entities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // errors Field Functions 
        bool hasErrors() const { return this->errors_ != nullptr;};
        void deleteErrors() { this->errors_ = nullptr;};
        inline const vector<Entities::Errors> & getErrors() const { DARABONBA_PTR_GET_CONST(errors_, vector<Entities::Errors>) };
        inline vector<Entities::Errors> getErrors() { DARABONBA_PTR_GET(errors_, vector<Entities::Errors>) };
        inline Entities& setErrors(const vector<Entities::Errors> & errors) { DARABONBA_PTR_SET_VALUE(errors_, errors) };
        inline Entities& setErrors(vector<Entities::Errors> && errors) { DARABONBA_PTR_SET_RVALUE(errors_, errors) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Entities& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline Entities& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline Entities& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


        // wabaId Field Functions 
        bool hasWabaId() const { return this->wabaId_ != nullptr;};
        void deleteWabaId() { this->wabaId_ = nullptr;};
        inline string getWabaId() const { DARABONBA_PTR_GET_DEFAULT(wabaId_, "") };
        inline Entities& setWabaId(string wabaId) { DARABONBA_PTR_SET_VALUE(wabaId_, wabaId) };


      protected:
        // The Business Manager ID.
        shared_ptr<string> businessId_ {};
        // Indicates whether the messages can be sent.
        shared_ptr<string> canSendMessage_ {};
        // The entity type.
        shared_ptr<string> entityType_ {};
        // The reasons why the messages failed to be sent.
        shared_ptr<vector<Entities::Errors>> errors_ {};
        // The template language.
        shared_ptr<string> language_ {};
        // The phone number to which the messages are sent.
        shared_ptr<string> phoneNumber_ {};
        // The template code. This parameter is returned when the NodeType parameter is set to **template**.
        shared_ptr<string> templateCode_ {};
        // The WABA ID. You can view the WABA ID in the Chat App Message Service console after you create the WABA.
        shared_ptr<string> wabaId_ {};
      };

      virtual bool empty() const override { return this->canSendMessage_ == nullptr
        && this->entities_ == nullptr; };
      // canSendMessage Field Functions 
      bool hasCanSendMessage() const { return this->canSendMessage_ != nullptr;};
      void deleteCanSendMessage() { this->canSendMessage_ = nullptr;};
      inline string getCanSendMessage() const { DARABONBA_PTR_GET_DEFAULT(canSendMessage_, "") };
      inline Data& setCanSendMessage(string canSendMessage) { DARABONBA_PTR_SET_VALUE(canSendMessage_, canSendMessage) };


      // entities Field Functions 
      bool hasEntities() const { return this->entities_ != nullptr;};
      void deleteEntities() { this->entities_ = nullptr;};
      inline const vector<Data::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Data::Entities>) };
      inline vector<Data::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<Data::Entities>) };
      inline Data& setEntities(const vector<Data::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
      inline Data& setEntities(vector<Data::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    protected:
      // Indicates whether the messages can be sent.
      shared_ptr<string> canSendMessage_ {};
      // The queried entities.
      shared_ptr<vector<Data::Entities>> entities_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetWhatsappHealthStatusResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWhatsappHealthStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWhatsappHealthStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWhatsappHealthStatusResponseBody::Data) };
    inline GetWhatsappHealthStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWhatsappHealthStatusResponseBody::Data) };
    inline GetWhatsappHealthStatusResponseBody& setData(const GetWhatsappHealthStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWhatsappHealthStatusResponseBody& setData(GetWhatsappHealthStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWhatsappHealthStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWhatsappHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWhatsappHealthStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetWhatsappHealthStatusResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
