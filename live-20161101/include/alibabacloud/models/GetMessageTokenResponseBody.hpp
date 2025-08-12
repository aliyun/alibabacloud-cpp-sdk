// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMessageTokenResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetMessageTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetMessageTokenResponseBody() = default ;
    GetMessageTokenResponseBody(const GetMessageTokenResponseBody &) = default ;
    GetMessageTokenResponseBody(GetMessageTokenResponseBody &&) = default ;
    GetMessageTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageTokenResponseBody() = default ;
    GetMessageTokenResponseBody& operator=(const GetMessageTokenResponseBody &) = default ;
    GetMessageTokenResponseBody& operator=(GetMessageTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetMessageTokenResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetMessageTokenResponseBodyResult) };
    inline GetMessageTokenResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetMessageTokenResponseBodyResult) };
    inline GetMessageTokenResponseBody& setResult(const GetMessageTokenResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMessageTokenResponseBody& setResult(GetMessageTokenResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<GetMessageTokenResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
