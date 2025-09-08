// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MultiModalGuardResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MultiModalGuardResponseBody() = default ;
    MultiModalGuardResponseBody(const MultiModalGuardResponseBody &) = default ;
    MultiModalGuardResponseBody(MultiModalGuardResponseBody &&) = default ;
    MultiModalGuardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardResponseBody() = default ;
    MultiModalGuardResponseBody& operator=(const MultiModalGuardResponseBody &) = default ;
    MultiModalGuardResponseBody& operator=(MultiModalGuardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline MultiModalGuardResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MultiModalGuardResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, MultiModalGuardResponseBodyData) };
    inline MultiModalGuardResponseBodyData data() { DARABONBA_PTR_GET(data_, MultiModalGuardResponseBodyData) };
    inline MultiModalGuardResponseBody& setData(const MultiModalGuardResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MultiModalGuardResponseBody& setData(MultiModalGuardResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MultiModalGuardResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MultiModalGuardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<MultiModalGuardResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
