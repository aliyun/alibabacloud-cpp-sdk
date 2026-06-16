// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECURITYCHECKREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECURITYCHECKREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QuerySecurityCheckReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecurityCheckReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecurityCheckReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySecurityCheckReportResponseBody() = default ;
    QuerySecurityCheckReportResponseBody(const QuerySecurityCheckReportResponseBody &) = default ;
    QuerySecurityCheckReportResponseBody(QuerySecurityCheckReportResponseBody &&) = default ;
    QuerySecurityCheckReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecurityCheckReportResponseBody() = default ;
    QuerySecurityCheckReportResponseBody& operator=(const QuerySecurityCheckReportResponseBody &) = default ;
    QuerySecurityCheckReportResponseBody& operator=(QuerySecurityCheckReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CloudSecurityGuide, cloudSecurityGuide_);
        DARABONBA_PTR_TO_JSON(ConfigCheckNumber, configCheckNumber_);
        DARABONBA_PTR_TO_JSON(ContactCheckNumber, contactCheckNumber_);
        DARABONBA_PTR_TO_JSON(RiskEventNumber, riskEventNumber_);
        DARABONBA_PTR_TO_JSON(SasCheckNumber, sasCheckNumber_);
        DARABONBA_PTR_TO_JSON(SecurityStatus, securityStatus_);
        DARABONBA_PTR_TO_JSON(SuggestionText, suggestionText_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudSecurityGuide, cloudSecurityGuide_);
        DARABONBA_PTR_FROM_JSON(ConfigCheckNumber, configCheckNumber_);
        DARABONBA_PTR_FROM_JSON(ContactCheckNumber, contactCheckNumber_);
        DARABONBA_PTR_FROM_JSON(RiskEventNumber, riskEventNumber_);
        DARABONBA_PTR_FROM_JSON(SasCheckNumber, sasCheckNumber_);
        DARABONBA_PTR_FROM_JSON(SecurityStatus, securityStatus_);
        DARABONBA_PTR_FROM_JSON(SuggestionText, suggestionText_);
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
      virtual bool empty() const override { return this->cloudSecurityGuide_ == nullptr
        && this->configCheckNumber_ == nullptr && this->contactCheckNumber_ == nullptr && this->riskEventNumber_ == nullptr && this->sasCheckNumber_ == nullptr && this->securityStatus_ == nullptr
        && this->suggestionText_ == nullptr; };
      // cloudSecurityGuide Field Functions 
      bool hasCloudSecurityGuide() const { return this->cloudSecurityGuide_ != nullptr;};
      void deleteCloudSecurityGuide() { this->cloudSecurityGuide_ = nullptr;};
      inline int32_t getCloudSecurityGuide() const { DARABONBA_PTR_GET_DEFAULT(cloudSecurityGuide_, 0) };
      inline Data& setCloudSecurityGuide(int32_t cloudSecurityGuide) { DARABONBA_PTR_SET_VALUE(cloudSecurityGuide_, cloudSecurityGuide) };


      // configCheckNumber Field Functions 
      bool hasConfigCheckNumber() const { return this->configCheckNumber_ != nullptr;};
      void deleteConfigCheckNumber() { this->configCheckNumber_ = nullptr;};
      inline int32_t getConfigCheckNumber() const { DARABONBA_PTR_GET_DEFAULT(configCheckNumber_, 0) };
      inline Data& setConfigCheckNumber(int32_t configCheckNumber) { DARABONBA_PTR_SET_VALUE(configCheckNumber_, configCheckNumber) };


      // contactCheckNumber Field Functions 
      bool hasContactCheckNumber() const { return this->contactCheckNumber_ != nullptr;};
      void deleteContactCheckNumber() { this->contactCheckNumber_ = nullptr;};
      inline int32_t getContactCheckNumber() const { DARABONBA_PTR_GET_DEFAULT(contactCheckNumber_, 0) };
      inline Data& setContactCheckNumber(int32_t contactCheckNumber) { DARABONBA_PTR_SET_VALUE(contactCheckNumber_, contactCheckNumber) };


      // riskEventNumber Field Functions 
      bool hasRiskEventNumber() const { return this->riskEventNumber_ != nullptr;};
      void deleteRiskEventNumber() { this->riskEventNumber_ = nullptr;};
      inline int32_t getRiskEventNumber() const { DARABONBA_PTR_GET_DEFAULT(riskEventNumber_, 0) };
      inline Data& setRiskEventNumber(int32_t riskEventNumber) { DARABONBA_PTR_SET_VALUE(riskEventNumber_, riskEventNumber) };


      // sasCheckNumber Field Functions 
      bool hasSasCheckNumber() const { return this->sasCheckNumber_ != nullptr;};
      void deleteSasCheckNumber() { this->sasCheckNumber_ = nullptr;};
      inline int32_t getSasCheckNumber() const { DARABONBA_PTR_GET_DEFAULT(sasCheckNumber_, 0) };
      inline Data& setSasCheckNumber(int32_t sasCheckNumber) { DARABONBA_PTR_SET_VALUE(sasCheckNumber_, sasCheckNumber) };


      // securityStatus Field Functions 
      bool hasSecurityStatus() const { return this->securityStatus_ != nullptr;};
      void deleteSecurityStatus() { this->securityStatus_ = nullptr;};
      inline int32_t getSecurityStatus() const { DARABONBA_PTR_GET_DEFAULT(securityStatus_, 0) };
      inline Data& setSecurityStatus(int32_t securityStatus) { DARABONBA_PTR_SET_VALUE(securityStatus_, securityStatus) };


      // suggestionText Field Functions 
      bool hasSuggestionText() const { return this->suggestionText_ != nullptr;};
      void deleteSuggestionText() { this->suggestionText_ = nullptr;};
      inline string getSuggestionText() const { DARABONBA_PTR_GET_DEFAULT(suggestionText_, "") };
      inline Data& setSuggestionText(string suggestionText) { DARABONBA_PTR_SET_VALUE(suggestionText_, suggestionText) };


    protected:
      shared_ptr<int32_t> cloudSecurityGuide_ {};
      shared_ptr<int32_t> configCheckNumber_ {};
      shared_ptr<int32_t> contactCheckNumber_ {};
      shared_ptr<int32_t> riskEventNumber_ {};
      shared_ptr<int32_t> sasCheckNumber_ {};
      shared_ptr<int32_t> securityStatus_ {};
      shared_ptr<string> suggestionText_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySecurityCheckReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySecurityCheckReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySecurityCheckReportResponseBody::Data) };
    inline QuerySecurityCheckReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySecurityCheckReportResponseBody::Data) };
    inline QuerySecurityCheckReportResponseBody& setData(const QuerySecurityCheckReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySecurityCheckReportResponseBody& setData(QuerySecurityCheckReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySecurityCheckReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySecurityCheckReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySecurityCheckReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QuerySecurityCheckReportResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
