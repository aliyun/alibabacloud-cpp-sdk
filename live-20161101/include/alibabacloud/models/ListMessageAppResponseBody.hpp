// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMessageAppResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListMessageAppResponseBody() = default ;
    ListMessageAppResponseBody(const ListMessageAppResponseBody &) = default ;
    ListMessageAppResponseBody(ListMessageAppResponseBody &&) = default ;
    ListMessageAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageAppResponseBody() = default ;
    ListMessageAppResponseBody& operator=(const ListMessageAppResponseBody &) = default ;
    ListMessageAppResponseBody& operator=(ListMessageAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListMessageAppResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, ListMessageAppResponseBodyResult) };
    inline ListMessageAppResponseBodyResult result() { DARABONBA_PTR_GET(result_, ListMessageAppResponseBodyResult) };
    inline ListMessageAppResponseBody& setResult(const ListMessageAppResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListMessageAppResponseBody& setResult(ListMessageAppResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<ListMessageAppResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
