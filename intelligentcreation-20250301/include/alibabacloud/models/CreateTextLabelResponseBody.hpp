// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEXTLABELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEXTLABELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
namespace Models
{
  class CreateTextLabelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTextLabelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tokens, tokens_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTextLabelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
    };
    CreateTextLabelResponseBody() = default ;
    CreateTextLabelResponseBody(const CreateTextLabelResponseBody &) = default ;
    CreateTextLabelResponseBody(CreateTextLabelResponseBody &&) = default ;
    CreateTextLabelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTextLabelResponseBody() = default ;
    CreateTextLabelResponseBody& operator=(const CreateTextLabelResponseBody &) = default ;
    CreateTextLabelResponseBody& operator=(CreateTextLabelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->tokens_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CreateTextLabelResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTextLabelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline string getTokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, "") };
    inline CreateTextLabelResponseBody& setTokens(string tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


  protected:
    shared_ptr<string> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> tokens_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
