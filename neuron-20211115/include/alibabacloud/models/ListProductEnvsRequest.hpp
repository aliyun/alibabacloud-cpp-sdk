// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTENVSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTENVSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListProductEnvsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductEnvsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductEnvsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
    };
    ListProductEnvsRequest() = default ;
    ListProductEnvsRequest(const ListProductEnvsRequest &) = default ;
    ListProductEnvsRequest(ListProductEnvsRequest &&) = default ;
    ListProductEnvsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductEnvsRequest() = default ;
    ListProductEnvsRequest& operator=(const ListProductEnvsRequest &) = default ;
    ListProductEnvsRequest& operator=(ListProductEnvsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->productId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ListProductEnvsRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ListProductEnvsRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
