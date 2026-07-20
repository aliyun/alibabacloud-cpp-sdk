// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYCHECKRESULTBASEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYCHECKRESULTBASEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetSecurityCheckResultBaseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityCheckResultBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityCheckResultBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSecurityCheckResultBaseInfoResponseBody() = default ;
    GetSecurityCheckResultBaseInfoResponseBody(const GetSecurityCheckResultBaseInfoResponseBody &) = default ;
    GetSecurityCheckResultBaseInfoResponseBody(GetSecurityCheckResultBaseInfoResponseBody &&) = default ;
    GetSecurityCheckResultBaseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityCheckResultBaseInfoResponseBody() = default ;
    GetSecurityCheckResultBaseInfoResponseBody& operator=(const GetSecurityCheckResultBaseInfoResponseBody &) = default ;
    GetSecurityCheckResultBaseInfoResponseBody& operator=(GetSecurityCheckResultBaseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigCompleted, configCompleted_);
        DARABONBA_PTR_TO_JSON(PendingSecurityAlertCount, pendingSecurityAlertCount_);
        DARABONBA_PTR_TO_JSON(PendingVulnerabilityCount, pendingVulnerabilityCount_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigCompleted, configCompleted_);
        DARABONBA_PTR_FROM_JSON(PendingSecurityAlertCount, pendingSecurityAlertCount_);
        DARABONBA_PTR_FROM_JSON(PendingVulnerabilityCount, pendingVulnerabilityCount_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
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
      virtual bool empty() const override { return this->configCompleted_ == nullptr
        && this->pendingSecurityAlertCount_ == nullptr && this->pendingVulnerabilityCount_ == nullptr && this->progress_ == nullptr; };
      // configCompleted Field Functions 
      bool hasConfigCompleted() const { return this->configCompleted_ != nullptr;};
      void deleteConfigCompleted() { this->configCompleted_ = nullptr;};
      inline string getConfigCompleted() const { DARABONBA_PTR_GET_DEFAULT(configCompleted_, "") };
      inline Data& setConfigCompleted(string configCompleted) { DARABONBA_PTR_SET_VALUE(configCompleted_, configCompleted) };


      // pendingSecurityAlertCount Field Functions 
      bool hasPendingSecurityAlertCount() const { return this->pendingSecurityAlertCount_ != nullptr;};
      void deletePendingSecurityAlertCount() { this->pendingSecurityAlertCount_ = nullptr;};
      inline int32_t getPendingSecurityAlertCount() const { DARABONBA_PTR_GET_DEFAULT(pendingSecurityAlertCount_, 0) };
      inline Data& setPendingSecurityAlertCount(int32_t pendingSecurityAlertCount) { DARABONBA_PTR_SET_VALUE(pendingSecurityAlertCount_, pendingSecurityAlertCount) };


      // pendingVulnerabilityCount Field Functions 
      bool hasPendingVulnerabilityCount() const { return this->pendingVulnerabilityCount_ != nullptr;};
      void deletePendingVulnerabilityCount() { this->pendingVulnerabilityCount_ = nullptr;};
      inline int32_t getPendingVulnerabilityCount() const { DARABONBA_PTR_GET_DEFAULT(pendingVulnerabilityCount_, 0) };
      inline Data& setPendingVulnerabilityCount(int32_t pendingVulnerabilityCount) { DARABONBA_PTR_SET_VALUE(pendingVulnerabilityCount_, pendingVulnerabilityCount) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Data& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    protected:
      shared_ptr<string> configCompleted_ {};
      shared_ptr<int32_t> pendingSecurityAlertCount_ {};
      shared_ptr<int32_t> pendingVulnerabilityCount_ {};
      shared_ptr<string> progress_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecurityCheckResultBaseInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSecurityCheckResultBaseInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSecurityCheckResultBaseInfoResponseBody::Data) };
    inline GetSecurityCheckResultBaseInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSecurityCheckResultBaseInfoResponseBody::Data) };
    inline GetSecurityCheckResultBaseInfoResponseBody& setData(const GetSecurityCheckResultBaseInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSecurityCheckResultBaseInfoResponseBody& setData(GetSecurityCheckResultBaseInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecurityCheckResultBaseInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityCheckResultBaseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSecurityCheckResultBaseInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSecurityCheckResultBaseInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
