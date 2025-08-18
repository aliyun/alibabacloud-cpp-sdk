// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceRenewPriceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceRenewPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceRenewPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceRenewPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceRenewPriceResponseBody() = default ;
    GetResourceRenewPriceResponseBody(const GetResourceRenewPriceResponseBody &) = default ;
    GetResourceRenewPriceResponseBody(GetResourceRenewPriceResponseBody &&) = default ;
    GetResourceRenewPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceRenewPriceResponseBody() = default ;
    GetResourceRenewPriceResponseBody& operator=(const GetResourceRenewPriceResponseBody &) = default ;
    GetResourceRenewPriceResponseBody& operator=(GetResourceRenewPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResourceRenewPriceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetResourceRenewPriceResponseBodyData) };
    inline GetResourceRenewPriceResponseBodyData data() { DARABONBA_PTR_GET(data_, GetResourceRenewPriceResponseBodyData) };
    inline GetResourceRenewPriceResponseBody& setData(const GetResourceRenewPriceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResourceRenewPriceResponseBody& setData(GetResourceRenewPriceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceRenewPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price object.
    std::shared_ptr<GetResourceRenewPriceResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
