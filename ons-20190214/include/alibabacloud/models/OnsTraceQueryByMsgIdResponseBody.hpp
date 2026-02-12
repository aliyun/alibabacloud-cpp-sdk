// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRACEQUERYBYMSGIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSTRACEQUERYBYMSGIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTraceQueryByMsgIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTraceQueryByMsgIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTraceQueryByMsgIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsTraceQueryByMsgIdResponseBody() = default ;
    OnsTraceQueryByMsgIdResponseBody(const OnsTraceQueryByMsgIdResponseBody &) = default ;
    OnsTraceQueryByMsgIdResponseBody(OnsTraceQueryByMsgIdResponseBody &&) = default ;
    OnsTraceQueryByMsgIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTraceQueryByMsgIdResponseBody() = default ;
    OnsTraceQueryByMsgIdResponseBody& operator=(const OnsTraceQueryByMsgIdResponseBody &) = default ;
    OnsTraceQueryByMsgIdResponseBody& operator=(OnsTraceQueryByMsgIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryId_ == nullptr
        && this->requestId_ == nullptr; };
    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline OnsTraceQueryByMsgIdResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsTraceQueryByMsgIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the query task. You can call the [OnsTraceGetResult](https://help.aliyun.com/document_detail/59832.html) operation to query the details of the message trace based on the task ID.
    shared_ptr<string> queryId_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
