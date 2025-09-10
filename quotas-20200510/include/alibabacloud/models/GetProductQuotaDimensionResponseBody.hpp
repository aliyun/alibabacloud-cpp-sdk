// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProductQuotaDimensionResponseBodyQuotaDimension.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaDimensionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaDimensionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaDimension, quotaDimension_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaDimensionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaDimension, quotaDimension_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProductQuotaDimensionResponseBody() = default ;
    GetProductQuotaDimensionResponseBody(const GetProductQuotaDimensionResponseBody &) = default ;
    GetProductQuotaDimensionResponseBody(GetProductQuotaDimensionResponseBody &&) = default ;
    GetProductQuotaDimensionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaDimensionResponseBody() = default ;
    GetProductQuotaDimensionResponseBody& operator=(const GetProductQuotaDimensionResponseBody &) = default ;
    GetProductQuotaDimensionResponseBody& operator=(GetProductQuotaDimensionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quotaDimension_ != nullptr
        && this->requestId_ != nullptr; };
    // quotaDimension Field Functions 
    bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
    void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
    inline const GetProductQuotaDimensionResponseBodyQuotaDimension & quotaDimension() const { DARABONBA_PTR_GET_CONST(quotaDimension_, GetProductQuotaDimensionResponseBodyQuotaDimension) };
    inline GetProductQuotaDimensionResponseBodyQuotaDimension quotaDimension() { DARABONBA_PTR_GET(quotaDimension_, GetProductQuotaDimensionResponseBodyQuotaDimension) };
    inline GetProductQuotaDimensionResponseBody& setQuotaDimension(const GetProductQuotaDimensionResponseBodyQuotaDimension & quotaDimension) { DARABONBA_PTR_SET_VALUE(quotaDimension_, quotaDimension) };
    inline GetProductQuotaDimensionResponseBody& setQuotaDimension(GetProductQuotaDimensionResponseBodyQuotaDimension && quotaDimension) { DARABONBA_PTR_SET_RVALUE(quotaDimension_, quotaDimension) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductQuotaDimensionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the quota dimension.
    std::shared_ptr<GetProductQuotaDimensionResponseBodyQuotaDimension> quotaDimension_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
