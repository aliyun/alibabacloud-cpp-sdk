// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTYPEDETERMINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELTYPEDETERMINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ModelTypeDetermineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTypeDetermineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTypeDetermineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelTypeDetermineResponseBody() = default ;
    ModelTypeDetermineResponseBody(const ModelTypeDetermineResponseBody &) = default ;
    ModelTypeDetermineResponseBody(ModelTypeDetermineResponseBody &&) = default ;
    ModelTypeDetermineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTypeDetermineResponseBody() = default ;
    ModelTypeDetermineResponseBody& operator=(const ModelTypeDetermineResponseBody &) = default ;
    ModelTypeDetermineResponseBody& operator=(ModelTypeDetermineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(followUp, followUp_);
        DARABONBA_PTR_TO_JSON(rewriteText, rewriteText_);
        DARABONBA_PTR_TO_JSON(vl, vl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(followUp, followUp_);
        DARABONBA_PTR_FROM_JSON(rewriteText, rewriteText_);
        DARABONBA_PTR_FROM_JSON(vl, vl_);
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
      virtual bool empty() const override { return this->followUp_ == nullptr
        && this->rewriteText_ == nullptr && this->vl_ == nullptr; };
      // followUp Field Functions 
      bool hasFollowUp() const { return this->followUp_ != nullptr;};
      void deleteFollowUp() { this->followUp_ = nullptr;};
      inline bool getFollowUp() const { DARABONBA_PTR_GET_DEFAULT(followUp_, false) };
      inline Data& setFollowUp(bool followUp) { DARABONBA_PTR_SET_VALUE(followUp_, followUp) };


      // rewriteText Field Functions 
      bool hasRewriteText() const { return this->rewriteText_ != nullptr;};
      void deleteRewriteText() { this->rewriteText_ = nullptr;};
      inline string getRewriteText() const { DARABONBA_PTR_GET_DEFAULT(rewriteText_, "") };
      inline Data& setRewriteText(string rewriteText) { DARABONBA_PTR_SET_VALUE(rewriteText_, rewriteText) };


      // vl Field Functions 
      bool hasVl() const { return this->vl_ != nullptr;};
      void deleteVl() { this->vl_ = nullptr;};
      inline bool getVl() const { DARABONBA_PTR_GET_DEFAULT(vl_, false) };
      inline Data& setVl(bool vl) { DARABONBA_PTR_SET_VALUE(vl_, vl) };


    protected:
      shared_ptr<bool> followUp_ {};
      shared_ptr<string> rewriteText_ {};
      shared_ptr<bool> vl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModelTypeDetermineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModelTypeDetermineResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModelTypeDetermineResponseBody::Data) };
    inline ModelTypeDetermineResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModelTypeDetermineResponseBody::Data) };
    inline ModelTypeDetermineResponseBody& setData(const ModelTypeDetermineResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelTypeDetermineResponseBody& setData(ModelTypeDetermineResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelTypeDetermineResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModelTypeDetermineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelTypeDetermineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ModelTypeDetermineResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ModelTypeDetermineResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
