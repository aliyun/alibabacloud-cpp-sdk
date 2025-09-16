// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConvertPrepayInstancePriceResponseBodyPriceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryConvertPrepayInstancePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertPrepayInstancePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertPrepayInstancePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryConvertPrepayInstancePriceResponseBody() = default ;
    QueryConvertPrepayInstancePriceResponseBody(const QueryConvertPrepayInstancePriceResponseBody &) = default ;
    QueryConvertPrepayInstancePriceResponseBody(QueryConvertPrepayInstancePriceResponseBody &&) = default ;
    QueryConvertPrepayInstancePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertPrepayInstancePriceResponseBody() = default ;
    QueryConvertPrepayInstancePriceResponseBody& operator=(const QueryConvertPrepayInstancePriceResponseBody &) = default ;
    QueryConvertPrepayInstancePriceResponseBody& operator=(QueryConvertPrepayInstancePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->priceInfo_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const QueryConvertPrepayInstancePriceResponseBodyPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, QueryConvertPrepayInstancePriceResponseBodyPriceInfo) };
    inline QueryConvertPrepayInstancePriceResponseBodyPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, QueryConvertPrepayInstancePriceResponseBodyPriceInfo) };
    inline QueryConvertPrepayInstancePriceResponseBody& setPriceInfo(const QueryConvertPrepayInstancePriceResponseBodyPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline QueryConvertPrepayInstancePriceResponseBody& setPriceInfo(QueryConvertPrepayInstancePriceResponseBodyPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConvertPrepayInstancePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryConvertPrepayInstancePriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<QueryConvertPrepayInstancePriceResponseBodyPriceInfo> priceInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
