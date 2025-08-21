// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserMessageResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListUserMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListUserMessageResponseBody() = default ;
    ListUserMessageResponseBody(const ListUserMessageResponseBody &) = default ;
    ListUserMessageResponseBody(ListUserMessageResponseBody &&) = default ;
    ListUserMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserMessageResponseBody() = default ;
    ListUserMessageResponseBody& operator=(const ListUserMessageResponseBody &) = default ;
    ListUserMessageResponseBody& operator=(ListUserMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->result_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUserMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListUserMessageResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListUserMessageResponseBodyResult>) };
    inline vector<ListUserMessageResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListUserMessageResponseBodyResult>) };
    inline ListUserMessageResponseBody& setResult(const vector<ListUserMessageResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListUserMessageResponseBody& setResult(vector<ListUserMessageResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<ListUserMessageResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
