// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMARTSHORTURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESMARTSHORTURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSmartShortUrlResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmartShortUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmartShortUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmartShortUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSmartShortUrlResponseBody() = default ;
    CreateSmartShortUrlResponseBody(const CreateSmartShortUrlResponseBody &) = default ;
    CreateSmartShortUrlResponseBody(CreateSmartShortUrlResponseBody &&) = default ;
    CreateSmartShortUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmartShortUrlResponseBody() = default ;
    CreateSmartShortUrlResponseBody& operator=(const CreateSmartShortUrlResponseBody &) = default ;
    CreateSmartShortUrlResponseBody& operator=(CreateSmartShortUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->model_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSmartShortUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSmartShortUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const vector<CreateSmartShortUrlResponseBodyModel> & model() const { DARABONBA_PTR_GET_CONST(model_, vector<CreateSmartShortUrlResponseBodyModel>) };
    inline vector<CreateSmartShortUrlResponseBodyModel> model() { DARABONBA_PTR_GET(model_, vector<CreateSmartShortUrlResponseBodyModel>) };
    inline CreateSmartShortUrlResponseBody& setModel(const vector<CreateSmartShortUrlResponseBodyModel> & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline CreateSmartShortUrlResponseBody& setModel(vector<CreateSmartShortUrlResponseBodyModel> && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSmartShortUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<CreateSmartShortUrlResponseBodyModel>> model_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
