// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYNAMESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryNamespaceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryNamespaceResponseBody() = default ;
    QueryNamespaceResponseBody(const QueryNamespaceResponseBody &) = default ;
    QueryNamespaceResponseBody(QueryNamespaceResponseBody &&) = default ;
    QueryNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNamespaceResponseBody() = default ;
    QueryNamespaceResponseBody& operator=(const QueryNamespaceResponseBody &) = default ;
    QueryNamespaceResponseBody& operator=(QueryNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->errorCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryNamespaceResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryNamespaceResponseBodyData>) };
    inline vector<QueryNamespaceResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<QueryNamespaceResponseBodyData>) };
    inline QueryNamespaceResponseBody& setData(const vector<QueryNamespaceResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryNamespaceResponseBody& setData(vector<QueryNamespaceResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryNamespaceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryNamespaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryNamespaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    std::shared_ptr<vector<QueryNamespaceResponseBodyData>> data_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
