// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryNotifyResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class QueryNotifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNotifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNotifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryNotifyResponseBody() = default ;
    QueryNotifyResponseBody(const QueryNotifyResponseBody &) = default ;
    QueryNotifyResponseBody(QueryNotifyResponseBody &&) = default ;
    QueryNotifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNotifyResponseBody() = default ;
    QueryNotifyResponseBody& operator=(const QueryNotifyResponseBody &) = default ;
    QueryNotifyResponseBody& operator=(QueryNotifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryNotifyResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryNotifyResponseBodyData) };
    inline QueryNotifyResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryNotifyResponseBodyData) };
    inline QueryNotifyResponseBody& setData(const QueryNotifyResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryNotifyResponseBody& setData(QueryNotifyResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryNotifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<QueryNotifyResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
