// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UploadRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UploadRuleResponseBody() = default ;
    UploadRuleResponseBody(const UploadRuleResponseBody &) = default ;
    UploadRuleResponseBody(UploadRuleResponseBody &&) = default ;
    UploadRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadRuleResponseBody() = default ;
    UploadRuleResponseBody& operator=(const UploadRuleResponseBody &) = default ;
    UploadRuleResponseBody& operator=(UploadRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RidInfo, ridInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RidInfo, ridInfo_);
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
      virtual bool empty() const override { return this->ridInfo_ == nullptr; };
      // ridInfo Field Functions 
      bool hasRidInfo() const { return this->ridInfo_ != nullptr;};
      void deleteRidInfo() { this->ridInfo_ = nullptr;};
      inline const vector<string> & getRidInfo() const { DARABONBA_PTR_GET_CONST(ridInfo_, vector<string>) };
      inline vector<string> getRidInfo() { DARABONBA_PTR_GET(ridInfo_, vector<string>) };
      inline Data& setRidInfo(const vector<string> & ridInfo) { DARABONBA_PTR_SET_VALUE(ridInfo_, ridInfo) };
      inline Data& setRidInfo(vector<string> && ridInfo) { DARABONBA_PTR_SET_RVALUE(ridInfo_, ridInfo) };


    protected:
      shared_ptr<vector<string>> ridInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UploadRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UploadRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UploadRuleResponseBody::Data) };
    inline UploadRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UploadRuleResponseBody::Data) };
    inline UploadRuleResponseBody& setData(const UploadRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UploadRuleResponseBody& setData(UploadRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UploadRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UploadRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UploadRuleResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
