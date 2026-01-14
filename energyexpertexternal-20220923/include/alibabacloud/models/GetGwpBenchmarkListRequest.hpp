// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpBenchmarkListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
    };
    GetGwpBenchmarkListRequest() = default ;
    GetGwpBenchmarkListRequest(const GetGwpBenchmarkListRequest &) = default ;
    GetGwpBenchmarkListRequest(GetGwpBenchmarkListRequest &&) = default ;
    GetGwpBenchmarkListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkListRequest() = default ;
    GetGwpBenchmarkListRequest& operator=(const GetGwpBenchmarkListRequest &) = default ;
    GetGwpBenchmarkListRequest& operator=(GetGwpBenchmarkListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->productId_ == nullptr && this->productType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGwpBenchmarkListRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline GetGwpBenchmarkListRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int64_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
    inline GetGwpBenchmarkListRequest& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The product id.
    // 
    // This parameter is required.
    shared_ptr<int64_t> productId_ {};
    // Product type: 1 indicates that the carbon footprint of the product is requested, and 5 indicates that the carbon footprint of the supply chain is requested.
    // 
    // This parameter is required.
    shared_ptr<int64_t> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
