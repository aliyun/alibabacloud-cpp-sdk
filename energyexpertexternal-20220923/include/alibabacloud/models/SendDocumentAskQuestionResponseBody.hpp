// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDDOCUMENTASKQUESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDDOCUMENTASKQUESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SendDocumentAskQuestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendDocumentAskQuestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendDocumentAskQuestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SendDocumentAskQuestionResponseBody() = default ;
    SendDocumentAskQuestionResponseBody(const SendDocumentAskQuestionResponseBody &) = default ;
    SendDocumentAskQuestionResponseBody(SendDocumentAskQuestionResponseBody &&) = default ;
    SendDocumentAskQuestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendDocumentAskQuestionResponseBody() = default ;
    SendDocumentAskQuestionResponseBody& operator=(const SendDocumentAskQuestionResponseBody &) = default ;
    SendDocumentAskQuestionResponseBody& operator=(SendDocumentAskQuestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(answer, answer_);
        DARABONBA_PTR_TO_JSON(document, document_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(answer, answer_);
        DARABONBA_PTR_FROM_JSON(document, document_);
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
      virtual bool empty() const override { return this->answer_ == nullptr
        && this->document_ == nullptr; };
      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
      inline Data& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


      // document Field Functions 
      bool hasDocument() const { return this->document_ != nullptr;};
      void deleteDocument() { this->document_ = nullptr;};
      inline const vector<string> & getDocument() const { DARABONBA_PTR_GET_CONST(document_, vector<string>) };
      inline vector<string> getDocument() { DARABONBA_PTR_GET(document_, vector<string>) };
      inline Data& setDocument(const vector<string> & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
      inline Data& setDocument(vector<string> && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


    protected:
      // Q&A result
      shared_ptr<string> answer_ {};
      // Documents associated with the answer returned by the query
      shared_ptr<vector<string>> document_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SendDocumentAskQuestionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SendDocumentAskQuestionResponseBody::Data) };
    inline SendDocumentAskQuestionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SendDocumentAskQuestionResponseBody::Data) };
    inline SendDocumentAskQuestionResponseBody& setData(const SendDocumentAskQuestionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SendDocumentAskQuestionResponseBody& setData(SendDocumentAskQuestionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendDocumentAskQuestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data
    shared_ptr<SendDocumentAskQuestionResponseBody::Data> data_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
