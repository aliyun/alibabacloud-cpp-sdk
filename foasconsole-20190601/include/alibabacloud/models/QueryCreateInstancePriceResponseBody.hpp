// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceResponseBodyPriceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryCreateInstancePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCreateInstancePriceResponseBody() = default ;
    QueryCreateInstancePriceResponseBody(const QueryCreateInstancePriceResponseBody &) = default ;
    QueryCreateInstancePriceResponseBody(QueryCreateInstancePriceResponseBody &&) = default ;
    QueryCreateInstancePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceResponseBody() = default ;
    QueryCreateInstancePriceResponseBody& operator=(const QueryCreateInstancePriceResponseBody &) = default ;
    QueryCreateInstancePriceResponseBody& operator=(QueryCreateInstancePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const QueryCreateInstancePriceResponseBodyPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, QueryCreateInstancePriceResponseBodyPriceInfo) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, QueryCreateInstancePriceResponseBodyPriceInfo) };
    inline QueryCreateInstancePriceResponseBody& setPriceInfo(const QueryCreateInstancePriceResponseBodyPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline QueryCreateInstancePriceResponseBody& setPriceInfo(QueryCreateInstancePriceResponseBodyPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCreateInstancePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCreateInstancePriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<QueryCreateInstancePriceResponseBodyPriceInfo> priceInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
