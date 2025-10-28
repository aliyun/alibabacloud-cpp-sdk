// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sNamespacesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListK8sNamespacesResponseBody() = default ;
    ListK8sNamespacesResponseBody(const ListK8sNamespacesResponseBody &) = default ;
    ListK8sNamespacesResponseBody(ListK8sNamespacesResponseBody &&) = default ;
    ListK8sNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sNamespacesResponseBody() = default ;
    ListK8sNamespacesResponseBody& operator=(const ListK8sNamespacesResponseBody &) = default ;
    ListK8sNamespacesResponseBody& operator=(ListK8sNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListK8sNamespacesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListK8sNamespacesResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListK8sNamespacesResponseBodyData>) };
    inline vector<ListK8sNamespacesResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListK8sNamespacesResponseBodyData>) };
    inline ListK8sNamespacesResponseBody& setData(const vector<ListK8sNamespacesResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListK8sNamespacesResponseBody& setData(vector<ListK8sNamespacesResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListK8sNamespacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListK8sNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The data that is returned.
    std::shared_ptr<vector<ListK8sNamespacesResponseBodyData>> data_ = nullptr;
    // The message returned for the request.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
