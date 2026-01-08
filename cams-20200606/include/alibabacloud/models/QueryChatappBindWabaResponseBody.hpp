// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHATAPPBINDWABARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHATAPPBINDWABARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class QueryChatappBindWabaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChatappBindWabaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChatappBindWabaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryChatappBindWabaResponseBody() = default ;
    QueryChatappBindWabaResponseBody(const QueryChatappBindWabaResponseBody &) = default ;
    QueryChatappBindWabaResponseBody(QueryChatappBindWabaResponseBody &&) = default ;
    QueryChatappBindWabaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChatappBindWabaResponseBody() = default ;
    QueryChatappBindWabaResponseBody& operator=(const QueryChatappBindWabaResponseBody &) = default ;
    QueryChatappBindWabaResponseBody& operator=(QueryChatappBindWabaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountReviewStatus, accountReviewStatus_);
        DARABONBA_ANY_TO_JSON(AuthInternationalRateEligibility, authInternationalRateEligibility_);
        DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
        DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MarketingMessageLiteStatus, marketingMessageLiteStatus_);
        DARABONBA_PTR_TO_JSON(MessageTemplateNamespace, messageTemplateNamespace_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PrimaryBusinessLocation, primaryBusinessLocation_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountReviewStatus, accountReviewStatus_);
        DARABONBA_ANY_FROM_JSON(AuthInternationalRateEligibility, authInternationalRateEligibility_);
        DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
        DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MarketingMessageLiteStatus, marketingMessageLiteStatus_);
        DARABONBA_PTR_FROM_JSON(MessageTemplateNamespace, messageTemplateNamespace_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PrimaryBusinessLocation, primaryBusinessLocation_);
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
      virtual bool empty() const override { return this->accountReviewStatus_ == nullptr
        && this->authInternationalRateEligibility_ == nullptr && this->businessId_ == nullptr && this->businessName_ == nullptr && this->currency_ == nullptr && this->id_ == nullptr
        && this->marketingMessageLiteStatus_ == nullptr && this->messageTemplateNamespace_ == nullptr && this->name_ == nullptr && this->primaryBusinessLocation_ == nullptr; };
      // accountReviewStatus Field Functions 
      bool hasAccountReviewStatus() const { return this->accountReviewStatus_ != nullptr;};
      void deleteAccountReviewStatus() { this->accountReviewStatus_ = nullptr;};
      inline string getAccountReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(accountReviewStatus_, "") };
      inline Data& setAccountReviewStatus(string accountReviewStatus) { DARABONBA_PTR_SET_VALUE(accountReviewStatus_, accountReviewStatus) };


      // authInternationalRateEligibility Field Functions 
      bool hasAuthInternationalRateEligibility() const { return this->authInternationalRateEligibility_ != nullptr;};
      void deleteAuthInternationalRateEligibility() { this->authInternationalRateEligibility_ = nullptr;};
      inline       const Darabonba::Json & getAuthInternationalRateEligibility() const { DARABONBA_GET(authInternationalRateEligibility_) };
      Darabonba::Json & getAuthInternationalRateEligibility() { DARABONBA_GET(authInternationalRateEligibility_) };
      inline Data& setAuthInternationalRateEligibility(const Darabonba::Json & authInternationalRateEligibility) { DARABONBA_SET_VALUE(authInternationalRateEligibility_, authInternationalRateEligibility) };
      inline Data& setAuthInternationalRateEligibility(Darabonba::Json && authInternationalRateEligibility) { DARABONBA_SET_RVALUE(authInternationalRateEligibility_, authInternationalRateEligibility) };


      // businessId Field Functions 
      bool hasBusinessId() const { return this->businessId_ != nullptr;};
      void deleteBusinessId() { this->businessId_ = nullptr;};
      inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
      inline Data& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


      // businessName Field Functions 
      bool hasBusinessName() const { return this->businessName_ != nullptr;};
      void deleteBusinessName() { this->businessName_ = nullptr;};
      inline string getBusinessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
      inline Data& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // marketingMessageLiteStatus Field Functions 
      bool hasMarketingMessageLiteStatus() const { return this->marketingMessageLiteStatus_ != nullptr;};
      void deleteMarketingMessageLiteStatus() { this->marketingMessageLiteStatus_ = nullptr;};
      inline string getMarketingMessageLiteStatus() const { DARABONBA_PTR_GET_DEFAULT(marketingMessageLiteStatus_, "") };
      inline Data& setMarketingMessageLiteStatus(string marketingMessageLiteStatus) { DARABONBA_PTR_SET_VALUE(marketingMessageLiteStatus_, marketingMessageLiteStatus) };


      // messageTemplateNamespace Field Functions 
      bool hasMessageTemplateNamespace() const { return this->messageTemplateNamespace_ != nullptr;};
      void deleteMessageTemplateNamespace() { this->messageTemplateNamespace_ = nullptr;};
      inline string getMessageTemplateNamespace() const { DARABONBA_PTR_GET_DEFAULT(messageTemplateNamespace_, "") };
      inline Data& setMessageTemplateNamespace(string messageTemplateNamespace) { DARABONBA_PTR_SET_VALUE(messageTemplateNamespace_, messageTemplateNamespace) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // primaryBusinessLocation Field Functions 
      bool hasPrimaryBusinessLocation() const { return this->primaryBusinessLocation_ != nullptr;};
      void deletePrimaryBusinessLocation() { this->primaryBusinessLocation_ = nullptr;};
      inline string getPrimaryBusinessLocation() const { DARABONBA_PTR_GET_DEFAULT(primaryBusinessLocation_, "") };
      inline Data& setPrimaryBusinessLocation(string primaryBusinessLocation) { DARABONBA_PTR_SET_VALUE(primaryBusinessLocation_, primaryBusinessLocation) };


    protected:
      // The review state of the WhatsApp Business account (WABA).
      // 
      // >  Valid values:
      // 
      // *   PENDING: The WABA is to be reviewed.
      // 
      // *   APPROVED: The WABA was approved.
      // 
      // *   REJECTED: The WABA was rejected.
      // 
      // *   DISABLED: The WABA was forbidden.
      shared_ptr<string> accountReviewStatus_ {};
      // WABA related information.
      Darabonba::Json authInternationalRateEligibility_ {};
      // The business ID.
      shared_ptr<string> businessId_ {};
      // The business name.
      shared_ptr<string> businessName_ {};
      // The currency.
      shared_ptr<string> currency_ {};
      // The ID of the WhatsApp Business account.
      shared_ptr<string> id_ {};
      // The Marketing Messaging Lite status.
      shared_ptr<string> marketingMessageLiteStatus_ {};
      // The namespace of the message template.
      shared_ptr<string> messageTemplateNamespace_ {};
      // The name of the WhatsApp Business account.
      shared_ptr<string> name_ {};
      // The start time when the authentication-international rate applies.
      shared_ptr<string> primaryBusinessLocation_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryChatappBindWabaResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryChatappBindWabaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryChatappBindWabaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryChatappBindWabaResponseBody::Data) };
    inline QueryChatappBindWabaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryChatappBindWabaResponseBody::Data) };
    inline QueryChatappBindWabaResponseBody& setData(const QueryChatappBindWabaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryChatappBindWabaResponseBody& setData(QueryChatappBindWabaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryChatappBindWabaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryChatappBindWabaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryChatappBindWabaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The HTTP status code returned.
    // 
    // *   A value of OK indicates that the call is successful.
    // *   Other values indicate that the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryChatappBindWabaResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
