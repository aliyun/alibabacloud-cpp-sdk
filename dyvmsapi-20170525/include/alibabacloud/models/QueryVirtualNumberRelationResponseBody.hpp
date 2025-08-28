// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVirtualNumberRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVirtualNumberRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVirtualNumberRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryVirtualNumberRelationResponseBody() = default ;
    QueryVirtualNumberRelationResponseBody(const QueryVirtualNumberRelationResponseBody &) = default ;
    QueryVirtualNumberRelationResponseBody(QueryVirtualNumberRelationResponseBody &&) = default ;
    QueryVirtualNumberRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVirtualNumberRelationResponseBody() = default ;
    QueryVirtualNumberRelationResponseBody& operator=(const QueryVirtualNumberRelationResponseBody &) = default ;
    QueryVirtualNumberRelationResponseBody& operator=(QueryVirtualNumberRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVirtualNumberRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryVirtualNumberRelationResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVirtualNumberRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value 200 indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    std::shared_ptr<string> code_ = nullptr;
    // The list of associations between virtual numbers and real numbers. The following fields are returned:
    // 
    // *   **relatedNum**: the real number.
    // *   **createTime**: the time when the number was activated.
    // *   **pageNo**: the page number.
    // *   **pageSize**: the number of entries per page.
    // *   **total**: the total number of entries returned.
    std::shared_ptr<string> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
