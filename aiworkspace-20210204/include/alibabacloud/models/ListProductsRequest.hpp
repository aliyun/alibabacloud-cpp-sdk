// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCodes, productCodes_);
      DARABONBA_PTR_TO_JSON(ServiceCodes, serviceCodes_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCodes, productCodes_);
      DARABONBA_PTR_FROM_JSON(ServiceCodes, serviceCodes_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    ListProductsRequest() = default ;
    ListProductsRequest(const ListProductsRequest &) = default ;
    ListProductsRequest(ListProductsRequest &&) = default ;
    ListProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsRequest() = default ;
    ListProductsRequest& operator=(const ListProductsRequest &) = default ;
    ListProductsRequest& operator=(ListProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productCodes_ == nullptr
        && return this->serviceCodes_ == nullptr && return this->verbose_ == nullptr; };
    // productCodes Field Functions 
    bool hasProductCodes() const { return this->productCodes_ != nullptr;};
    void deleteProductCodes() { this->productCodes_ = nullptr;};
    inline string productCodes() const { DARABONBA_PTR_GET_DEFAULT(productCodes_, "") };
    inline ListProductsRequest& setProductCodes(string productCodes) { DARABONBA_PTR_SET_VALUE(productCodes_, productCodes) };


    // serviceCodes Field Functions 
    bool hasServiceCodes() const { return this->serviceCodes_ != nullptr;};
    void deleteServiceCodes() { this->serviceCodes_ = nullptr;};
    inline string serviceCodes() const { DARABONBA_PTR_GET_DEFAULT(serviceCodes_, "") };
    inline ListProductsRequest& setServiceCodes(string serviceCodes) { DARABONBA_PTR_SET_VALUE(serviceCodes_, serviceCodes) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListProductsRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    std::shared_ptr<string> productCodes_ = nullptr;
    std::shared_ptr<string> serviceCodes_ = nullptr;
    std::shared_ptr<bool> verbose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
