// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIndicesResponseBodyIndices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListIndicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Indices, indices_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Indices, indices_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIndicesResponseBody() = default ;
    ListIndicesResponseBody(const ListIndicesResponseBody &) = default ;
    ListIndicesResponseBody(ListIndicesResponseBody &&) = default ;
    ListIndicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesResponseBody() = default ;
    ListIndicesResponseBody& operator=(const ListIndicesResponseBody &) = default ;
    ListIndicesResponseBody& operator=(ListIndicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indices_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const ListIndicesResponseBodyIndices & indices() const { DARABONBA_PTR_GET_CONST(indices_, ListIndicesResponseBodyIndices) };
    inline ListIndicesResponseBodyIndices indices() { DARABONBA_PTR_GET(indices_, ListIndicesResponseBodyIndices) };
    inline ListIndicesResponseBody& setIndices(const ListIndicesResponseBodyIndices & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline ListIndicesResponseBody& setIndices(ListIndicesResponseBodyIndices && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIndicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIndicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIndicesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The queried indexes.
    std::shared_ptr<ListIndicesResponseBodyIndices> indices_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the operation. Valid values:
    // 
    // *   **success**.
    // *   **fail**.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
