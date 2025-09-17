// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPAGESMARTSHORTURLLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPageSmartShortUrlLogResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryPageSmartShortUrlLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPageSmartShortUrlLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPageSmartShortUrlLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPageSmartShortUrlLogResponseBody() = default ;
    QueryPageSmartShortUrlLogResponseBody(const QueryPageSmartShortUrlLogResponseBody &) = default ;
    QueryPageSmartShortUrlLogResponseBody(QueryPageSmartShortUrlLogResponseBody &&) = default ;
    QueryPageSmartShortUrlLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPageSmartShortUrlLogResponseBody() = default ;
    QueryPageSmartShortUrlLogResponseBody& operator=(const QueryPageSmartShortUrlLogResponseBody &) = default ;
    QueryPageSmartShortUrlLogResponseBody& operator=(QueryPageSmartShortUrlLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->model_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPageSmartShortUrlLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPageSmartShortUrlLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const QueryPageSmartShortUrlLogResponseBodyModel & model() const { DARABONBA_PTR_GET_CONST(model_, QueryPageSmartShortUrlLogResponseBodyModel) };
    inline QueryPageSmartShortUrlLogResponseBodyModel model() { DARABONBA_PTR_GET(model_, QueryPageSmartShortUrlLogResponseBodyModel) };
    inline QueryPageSmartShortUrlLogResponseBody& setModel(const QueryPageSmartShortUrlLogResponseBodyModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline QueryPageSmartShortUrlLogResponseBody& setModel(QueryPageSmartShortUrlLogResponseBodyModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPageSmartShortUrlLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPageSmartShortUrlLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<QueryPageSmartShortUrlLogResponseBodyModel> model_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
