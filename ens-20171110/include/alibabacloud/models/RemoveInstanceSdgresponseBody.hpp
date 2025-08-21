// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCESDGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCESDGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveInstanceSDGResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveInstanceSDGResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveInstanceSDGResponseBody() = default ;
    RemoveInstanceSDGResponseBody(const RemoveInstanceSDGResponseBody &) = default ;
    RemoveInstanceSDGResponseBody(RemoveInstanceSDGResponseBody &&) = default ;
    RemoveInstanceSDGResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstanceSDGResponseBody() = default ;
    RemoveInstanceSDGResponseBody& operator=(const RemoveInstanceSDGResponseBody &) = default ;
    RemoveInstanceSDGResponseBody& operator=(RemoveInstanceSDGResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline RemoveInstanceSDGResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RemoveInstanceSDGResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RemoveInstanceSDGResponseBodyData) };
    inline RemoveInstanceSDGResponseBodyData data() { DARABONBA_PTR_GET(data_, RemoveInstanceSDGResponseBodyData) };
    inline RemoveInstanceSDGResponseBody& setData(const RemoveInstanceSDGResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RemoveInstanceSDGResponseBody& setData(RemoveInstanceSDGResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveInstanceSDGResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned data object.
    std::shared_ptr<RemoveInstanceSDGResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
