// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATAINSTANCESINSTANCEAPPLICABLEPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATAINSTANCESINSTANCEAPPLICABLEPRODUCTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts& obj) { 
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts() = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts(const QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts &) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts(QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts &&) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts() = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts& operator=(const QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts &) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts& operator=(QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->product_ != nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline const vector<string> & product() const { DARABONBA_PTR_GET_CONST(product_, vector<string>) };
    inline vector<string> product() { DARABONBA_PTR_GET(product_, vector<string>) };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts& setProduct(const vector<string> & product) { DARABONBA_PTR_SET_VALUE(product_, product) };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts& setProduct(vector<string> && product) { DARABONBA_PTR_SET_RVALUE(product_, product) };


  protected:
    std::shared_ptr<vector<string>> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
