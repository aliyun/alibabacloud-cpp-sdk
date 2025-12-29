// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CredentialVerifyResponseBody() = default ;
    CredentialVerifyResponseBody(const CredentialVerifyResponseBody &) = default ;
    CredentialVerifyResponseBody(CredentialVerifyResponseBody &&) = default ;
    CredentialVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyResponseBody() = default ;
    CredentialVerifyResponseBody& operator=(const CredentialVerifyResponseBody &) = default ;
    CredentialVerifyResponseBody& operator=(CredentialVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RiskScore, riskScore_);
        DARABONBA_PTR_TO_JSON(RiskTag, riskTag_);
        DARABONBA_PTR_TO_JSON(VerifyDetail, verifyDetail_);
        DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
        DARABONBA_PTR_TO_JSON(VlResult, vlResult_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(RiskScore, riskScore_);
        DARABONBA_PTR_FROM_JSON(RiskTag, riskTag_);
        DARABONBA_PTR_FROM_JSON(VerifyDetail, verifyDetail_);
        DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
        DARABONBA_PTR_FROM_JSON(VlResult, vlResult_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VlResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VlResult& obj) { 
          DARABONBA_PTR_TO_JSON(Success, success_);
          DARABONBA_PTR_TO_JSON(VlContent, vlContent_);
        };
        friend void from_json(const Darabonba::Json& j, VlResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Success, success_);
          DARABONBA_PTR_FROM_JSON(VlContent, vlContent_);
        };
        VlResult() = default ;
        VlResult(const VlResult &) = default ;
        VlResult(VlResult &&) = default ;
        VlResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VlResult() = default ;
        VlResult& operator=(const VlResult &) = default ;
        VlResult& operator=(VlResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->success_ == nullptr
        && this->vlContent_ == nullptr; };
        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline VlResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        // vlContent Field Functions 
        bool hasVlContent() const { return this->vlContent_ != nullptr;};
        void deleteVlContent() { this->vlContent_ = nullptr;};
        inline string getVlContent() const { DARABONBA_PTR_GET_DEFAULT(vlContent_, "") };
        inline VlResult& setVlContent(string vlContent) { DARABONBA_PTR_SET_VALUE(vlContent_, vlContent) };


      protected:
        // Indicates whether the call was successful. Valid values:
        // 
        // - **true**: The call was successful.
        // - **false**: The call failed.
        shared_ptr<bool> success_ {};
        // Image understanding result:
        // 
        // - When PromptModel is DEFAULT, the output format refers to the example on the right.
        // 
        // - When PromptModel is CUSTOM, the output format follows the agreed format of the Prompt.
        shared_ptr<string> vlContent_ {};
      };

      virtual bool empty() const override { return this->materialInfo_ == nullptr
        && this->ocrInfo_ == nullptr && this->result_ == nullptr && this->riskScore_ == nullptr && this->riskTag_ == nullptr && this->verifyDetail_ == nullptr
        && this->verifyResult_ == nullptr && this->vlResult_ == nullptr; };
      // materialInfo Field Functions 
      bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
      void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
      inline string getMaterialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
      inline ResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


      // ocrInfo Field Functions 
      bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
      void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
      inline string getOcrInfo() const { DARABONBA_PTR_GET_DEFAULT(ocrInfo_, "") };
      inline ResultObject& setOcrInfo(string ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline ResultObject& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // riskScore Field Functions 
      bool hasRiskScore() const { return this->riskScore_ != nullptr;};
      void deleteRiskScore() { this->riskScore_ = nullptr;};
      inline const map<string, string> & getRiskScore() const { DARABONBA_PTR_GET_CONST(riskScore_, map<string, string>) };
      inline map<string, string> getRiskScore() { DARABONBA_PTR_GET(riskScore_, map<string, string>) };
      inline ResultObject& setRiskScore(const map<string, string> & riskScore) { DARABONBA_PTR_SET_VALUE(riskScore_, riskScore) };
      inline ResultObject& setRiskScore(map<string, string> && riskScore) { DARABONBA_PTR_SET_RVALUE(riskScore_, riskScore) };


      // riskTag Field Functions 
      bool hasRiskTag() const { return this->riskTag_ != nullptr;};
      void deleteRiskTag() { this->riskTag_ = nullptr;};
      inline string getRiskTag() const { DARABONBA_PTR_GET_DEFAULT(riskTag_, "") };
      inline ResultObject& setRiskTag(string riskTag) { DARABONBA_PTR_SET_VALUE(riskTag_, riskTag) };


      // verifyDetail Field Functions 
      bool hasVerifyDetail() const { return this->verifyDetail_ != nullptr;};
      void deleteVerifyDetail() { this->verifyDetail_ = nullptr;};
      inline string getVerifyDetail() const { DARABONBA_PTR_GET_DEFAULT(verifyDetail_, "") };
      inline ResultObject& setVerifyDetail(string verifyDetail) { DARABONBA_PTR_SET_VALUE(verifyDetail_, verifyDetail) };


      // verifyResult Field Functions 
      bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
      void deleteVerifyResult() { this->verifyResult_ = nullptr;};
      inline string getVerifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
      inline ResultObject& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


      // vlResult Field Functions 
      bool hasVlResult() const { return this->vlResult_ != nullptr;};
      void deleteVlResult() { this->vlResult_ = nullptr;};
      inline const ResultObject::VlResult & getVlResult() const { DARABONBA_PTR_GET_CONST(vlResult_, ResultObject::VlResult) };
      inline ResultObject::VlResult getVlResult() { DARABONBA_PTR_GET(vlResult_, ResultObject::VlResult) };
      inline ResultObject& setVlResult(const ResultObject::VlResult & vlResult) { DARABONBA_PTR_SET_VALUE(vlResult_, vlResult) };
      inline ResultObject& setVlResult(ResultObject::VlResult && vlResult) { DARABONBA_PTR_SET_RVALUE(vlResult_, vlResult) };


    protected:
      // Additional information in JSON format.
      shared_ptr<string> materialInfo_ {};
      // OCR recognition result.
      shared_ptr<string> ocrInfo_ {};
      // Risk result
      // 
      // - **0**: Low risk
      // - **1**: High risk
      // - **2**: Suspicious
      shared_ptr<string> result_ {};
      // Risk score map.
      shared_ptr<map<string, string>> riskScore_ {};
      // Risk tags, separated by commas (,), including:
      // 
      // - **PS**: Image manipulation.
      // - **SCREEN_PHOTO**: Screen recapture.
      // - **SCREENSHOT**: Screenshot.
      // - **WATERMARK**: Watermark.
      // - **SAME_BACKGROUND**: Similar background.
      // - **ORIGINAL_PHOTO**: Not the original image
      shared_ptr<string> riskTag_ {};
      // Authority verification details.
      shared_ptr<string> verifyDetail_ {};
      // The verification result.
      shared_ptr<string> verifyResult_ {};
      // Qwen interpretation.
      shared_ptr<ResultObject::VlResult> vlResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CredentialVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CredentialVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CredentialVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CredentialVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CredentialVerifyResponseBody::ResultObject) };
    inline CredentialVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CredentialVerifyResponseBody::ResultObject) };
    inline CredentialVerifyResponseBody& setResultObject(const CredentialVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CredentialVerifyResponseBody& setResultObject(CredentialVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result
    shared_ptr<CredentialVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
