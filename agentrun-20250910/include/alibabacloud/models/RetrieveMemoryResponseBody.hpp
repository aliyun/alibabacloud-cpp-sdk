// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEMEMORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEMEMORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RetrieveMemoryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RetrieveMemoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveMemoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveMemoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RetrieveMemoryResponseBody() = default ;
    RetrieveMemoryResponseBody(const RetrieveMemoryResponseBody &) = default ;
    RetrieveMemoryResponseBody(RetrieveMemoryResponseBody &&) = default ;
    RetrieveMemoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveMemoryResponseBody() = default ;
    RetrieveMemoryResponseBody& operator=(const RetrieveMemoryResponseBody &) = default ;
    RetrieveMemoryResponseBody& operator=(RetrieveMemoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RetrieveMemoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RetrieveMemoryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RetrieveMemoryResponseBodyData) };
    inline RetrieveMemoryResponseBodyData data() { DARABONBA_PTR_GET(data_, RetrieveMemoryResponseBodyData) };
    inline RetrieveMemoryResponseBody& setData(const RetrieveMemoryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RetrieveMemoryResponseBody& setData(RetrieveMemoryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrieveMemoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<RetrieveMemoryResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
