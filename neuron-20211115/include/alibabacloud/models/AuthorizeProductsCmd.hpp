// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEPRODUCTSCMD_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEPRODUCTSCMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AuthorizeProductsCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeProductsCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(productIds, productIds_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeProductsCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(productIds, productIds_);
    };
    AuthorizeProductsCmd() = default ;
    AuthorizeProductsCmd(const AuthorizeProductsCmd &) = default ;
    AuthorizeProductsCmd(AuthorizeProductsCmd &&) = default ;
    AuthorizeProductsCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeProductsCmd() = default ;
    AuthorizeProductsCmd& operator=(const AuthorizeProductsCmd &) = default ;
    AuthorizeProductsCmd& operator=(AuthorizeProductsCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->productIds_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline AuthorizeProductsCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline const vector<int64_t> & getProductIds() const { DARABONBA_PTR_GET_CONST(productIds_, vector<int64_t>) };
    inline vector<int64_t> getProductIds() { DARABONBA_PTR_GET(productIds_, vector<int64_t>) };
    inline AuthorizeProductsCmd& setProductIds(const vector<int64_t> & productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };
    inline AuthorizeProductsCmd& setProductIds(vector<int64_t> && productIds) { DARABONBA_PTR_SET_RVALUE(productIds_, productIds) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<vector<int64_t>> productIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
