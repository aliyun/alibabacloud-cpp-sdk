// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyFlowPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyFlowPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyFlowPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    QueryVerifyFlowPackageRequest() = default ;
    QueryVerifyFlowPackageRequest(const QueryVerifyFlowPackageRequest &) = default ;
    QueryVerifyFlowPackageRequest(QueryVerifyFlowPackageRequest &&) = default ;
    QueryVerifyFlowPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyFlowPackageRequest() = default ;
    QueryVerifyFlowPackageRequest& operator=(const QueryVerifyFlowPackageRequest &) = default ;
    QueryVerifyFlowPackageRequest& operator=(QueryVerifyFlowPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryVerifyFlowPackageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // Product type:
    // - **FINANCE_VERIFY**: Financial Grade Real Person Verification
    // - **SMART_VERIFY**: Enhanced Real Person Verification (discontinued)
    // - **FACE_VERIFY**: Real Person Verification (discontinued)
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
