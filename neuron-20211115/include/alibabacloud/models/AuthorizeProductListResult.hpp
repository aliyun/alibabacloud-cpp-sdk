// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEPRODUCTLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEPRODUCTLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProductInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AuthorizeProductListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeProductListResult& obj) { 
      DARABONBA_PTR_TO_JSON(authorizedProductList, authorizedProductList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeProductListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizedProductList, authorizedProductList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    AuthorizeProductListResult() = default ;
    AuthorizeProductListResult(const AuthorizeProductListResult &) = default ;
    AuthorizeProductListResult(AuthorizeProductListResult &&) = default ;
    AuthorizeProductListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeProductListResult() = default ;
    AuthorizeProductListResult& operator=(const AuthorizeProductListResult &) = default ;
    AuthorizeProductListResult& operator=(AuthorizeProductListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedProductList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // authorizedProductList Field Functions 
    bool hasAuthorizedProductList() const { return this->authorizedProductList_ != nullptr;};
    void deleteAuthorizedProductList() { this->authorizedProductList_ = nullptr;};
    inline const vector<ProductInfo> & getAuthorizedProductList() const { DARABONBA_PTR_GET_CONST(authorizedProductList_, vector<ProductInfo>) };
    inline vector<ProductInfo> getAuthorizedProductList() { DARABONBA_PTR_GET(authorizedProductList_, vector<ProductInfo>) };
    inline AuthorizeProductListResult& setAuthorizedProductList(const vector<ProductInfo> & authorizedProductList) { DARABONBA_PTR_SET_VALUE(authorizedProductList_, authorizedProductList) };
    inline AuthorizeProductListResult& setAuthorizedProductList(vector<ProductInfo> && authorizedProductList) { DARABONBA_PTR_SET_RVALUE(authorizedProductList_, authorizedProductList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthorizeProductListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline AuthorizeProductListResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ProductInfo>> authorizedProductList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
