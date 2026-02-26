// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISTRIBUTIONPRODUCTRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDISTRIBUTIONPRODUCTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DistributionProduct.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class GetDistributionProductResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDistributionProductResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(products, products_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDistributionProductResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(products, products_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDistributionProductResult() = default ;
    GetDistributionProductResult(const GetDistributionProductResult &) = default ;
    GetDistributionProductResult(GetDistributionProductResult &&) = default ;
    GetDistributionProductResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDistributionProductResult() = default ;
    GetDistributionProductResult& operator=(const GetDistributionProductResult &) = default ;
    GetDistributionProductResult& operator=(GetDistributionProductResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->products_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDistributionProductResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDistributionProductResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<DistributionProduct> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<DistributionProduct>) };
    inline vector<DistributionProduct> getProducts() { DARABONBA_PTR_GET(products_, vector<DistributionProduct>) };
    inline GetDistributionProductResult& setProducts(const vector<DistributionProduct> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline GetDistributionProductResult& setProducts(vector<DistributionProduct> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDistributionProductResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<DistributionProduct>> products_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
