// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSASYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMMSASYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMmsAsyncTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsAsyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMmsAsyncTaskResponseBody() = default ;
    GetMmsAsyncTaskResponseBody(const GetMmsAsyncTaskResponseBody &) = default ;
    GetMmsAsyncTaskResponseBody(GetMmsAsyncTaskResponseBody &&) = default ;
    GetMmsAsyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsAsyncTaskResponseBody() = default ;
    GetMmsAsyncTaskResponseBody& operator=(const GetMmsAsyncTaskResponseBody &) = default ;
    GetMmsAsyncTaskResponseBody& operator=(GetMmsAsyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMmsAsyncTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetMmsAsyncTaskResponseBodyData) };
    inline GetMmsAsyncTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, GetMmsAsyncTaskResponseBodyData) };
    inline GetMmsAsyncTaskResponseBody& setData(const GetMmsAsyncTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMmsAsyncTaskResponseBody& setData(GetMmsAsyncTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMmsAsyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetMmsAsyncTaskResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
