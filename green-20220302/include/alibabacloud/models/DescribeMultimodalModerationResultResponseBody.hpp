// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMultimodalModerationResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMultimodalModerationResultResponseBody() = default ;
    DescribeMultimodalModerationResultResponseBody(const DescribeMultimodalModerationResultResponseBody &) = default ;
    DescribeMultimodalModerationResultResponseBody(DescribeMultimodalModerationResultResponseBody &&) = default ;
    DescribeMultimodalModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBody() = default ;
    DescribeMultimodalModerationResultResponseBody& operator=(const DescribeMultimodalModerationResultResponseBody &) = default ;
    DescribeMultimodalModerationResultResponseBody& operator=(DescribeMultimodalModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->msg_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeMultimodalModerationResultResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeMultimodalModerationResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeMultimodalModerationResultResponseBodyData) };
    inline DescribeMultimodalModerationResultResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeMultimodalModerationResultResponseBodyData) };
    inline DescribeMultimodalModerationResultResponseBody& setData(const DescribeMultimodalModerationResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMultimodalModerationResultResponseBody& setData(DescribeMultimodalModerationResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeMultimodalModerationResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMultimodalModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<DescribeMultimodalModerationResultResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
