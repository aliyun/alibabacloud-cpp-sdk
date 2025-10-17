// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSPARKREPLSTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELSPARKREPLSTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CancelSparkReplStatementResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CancelSparkReplStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelSparkReplStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelSparkReplStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelSparkReplStatementResponseBody() = default ;
    CancelSparkReplStatementResponseBody(const CancelSparkReplStatementResponseBody &) = default ;
    CancelSparkReplStatementResponseBody(CancelSparkReplStatementResponseBody &&) = default ;
    CancelSparkReplStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelSparkReplStatementResponseBody() = default ;
    CancelSparkReplStatementResponseBody& operator=(const CancelSparkReplStatementResponseBody &) = default ;
    CancelSparkReplStatementResponseBody& operator=(CancelSparkReplStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CancelSparkReplStatementResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CancelSparkReplStatementResponseBodyData) };
    inline CancelSparkReplStatementResponseBodyData data() { DARABONBA_PTR_GET(data_, CancelSparkReplStatementResponseBodyData) };
    inline CancelSparkReplStatementResponseBody& setData(const CancelSparkReplStatementResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CancelSparkReplStatementResponseBody& setData(CancelSparkReplStatementResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelSparkReplStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<CancelSparkReplStatementResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
