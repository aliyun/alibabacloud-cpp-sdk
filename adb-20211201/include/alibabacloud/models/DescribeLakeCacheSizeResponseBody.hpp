// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKECACHESIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKECACHESIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLakeCacheSizeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeLakeCacheSizeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakeCacheSizeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakeCacheSizeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLakeCacheSizeResponseBody() = default ;
    DescribeLakeCacheSizeResponseBody(const DescribeLakeCacheSizeResponseBody &) = default ;
    DescribeLakeCacheSizeResponseBody(DescribeLakeCacheSizeResponseBody &&) = default ;
    DescribeLakeCacheSizeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakeCacheSizeResponseBody() = default ;
    DescribeLakeCacheSizeResponseBody& operator=(const DescribeLakeCacheSizeResponseBody &) = default ;
    DescribeLakeCacheSizeResponseBody& operator=(DescribeLakeCacheSizeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeLakeCacheSizeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeLakeCacheSizeResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeLakeCacheSizeResponseBodyData) };
    inline DescribeLakeCacheSizeResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeLakeCacheSizeResponseBodyData) };
    inline DescribeLakeCacheSizeResponseBody& setData(const DescribeLakeCacheSizeResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLakeCacheSizeResponseBody& setData(DescribeLakeCacheSizeResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLakeCacheSizeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The value 200 indicates that the request is successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned data.
    std::shared_ptr<DescribeLakeCacheSizeResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
