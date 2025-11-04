// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlipayUrlResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlipayUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAlipayUrlResponseBody() = default ;
    GetAlipayUrlResponseBody(const GetAlipayUrlResponseBody &) = default ;
    GetAlipayUrlResponseBody(GetAlipayUrlResponseBody &&) = default ;
    GetAlipayUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayUrlResponseBody() = default ;
    GetAlipayUrlResponseBody& operator=(const GetAlipayUrlResponseBody &) = default ;
    GetAlipayUrlResponseBody& operator=(GetAlipayUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlipayUrlResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetAlipayUrlResponseBodyData) };
    inline GetAlipayUrlResponseBodyData data() { DARABONBA_PTR_GET(data_, GetAlipayUrlResponseBodyData) };
    inline GetAlipayUrlResponseBody& setData(const GetAlipayUrlResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlipayUrlResponseBody& setData(GetAlipayUrlResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlipayUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAlipayUrlResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
