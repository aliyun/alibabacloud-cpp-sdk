// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTAIANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class StartAIAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    StartAIAnalysisResponseBody() = default ;
    StartAIAnalysisResponseBody(const StartAIAnalysisResponseBody &) = default ;
    StartAIAnalysisResponseBody(StartAIAnalysisResponseBody &&) = default ;
    StartAIAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAnalysisResponseBody() = default ;
    StartAIAnalysisResponseBody& operator=(const StartAIAnalysisResponseBody &) = default ;
    StartAIAnalysisResponseBody& operator=(StartAIAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(analysis_id, analysisId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(analysis_id, analysisId_);
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
      virtual bool empty() const override { return this->analysisId_ == nullptr; };
      // analysisId Field Functions 
      bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
      void deleteAnalysisId() { this->analysisId_ = nullptr;};
      inline string getAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
      inline Data& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


    protected:
      shared_ptr<string> analysisId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StartAIAnalysisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartAIAnalysisResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, StartAIAnalysisResponseBody::Data) };
    inline StartAIAnalysisResponseBody::Data getData() { DARABONBA_PTR_GET(data_, StartAIAnalysisResponseBody::Data) };
    inline StartAIAnalysisResponseBody& setData(const StartAIAnalysisResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartAIAnalysisResponseBody& setData(StartAIAnalysisResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StartAIAnalysisResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartAIAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<StartAIAnalysisResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
