// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlipayTransferStatusResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayTransferStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayTransferStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlipayTransferStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAlipayTransferStatusResponseBody() = default ;
    GetAlipayTransferStatusResponseBody(const GetAlipayTransferStatusResponseBody &) = default ;
    GetAlipayTransferStatusResponseBody(GetAlipayTransferStatusResponseBody &&) = default ;
    GetAlipayTransferStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayTransferStatusResponseBody() = default ;
    GetAlipayTransferStatusResponseBody& operator=(const GetAlipayTransferStatusResponseBody &) = default ;
    GetAlipayTransferStatusResponseBody& operator=(GetAlipayTransferStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlipayTransferStatusResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetAlipayTransferStatusResponseBodyData) };
    inline GetAlipayTransferStatusResponseBodyData data() { DARABONBA_PTR_GET(data_, GetAlipayTransferStatusResponseBodyData) };
    inline GetAlipayTransferStatusResponseBody& setData(const GetAlipayTransferStatusResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlipayTransferStatusResponseBody& setData(GetAlipayTransferStatusResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlipayTransferStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAlipayTransferStatusResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
