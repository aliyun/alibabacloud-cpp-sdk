// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{
namespace Models
{
  class ListProductReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LatestOnly, latestOnly_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestOnly, latestOnly_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    ListProductReportsRequest() = default ;
    ListProductReportsRequest(const ListProductReportsRequest &) = default ;
    ListProductReportsRequest(ListProductReportsRequest &&) = default ;
    ListProductReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductReportsRequest() = default ;
    ListProductReportsRequest& operator=(const ListProductReportsRequest &) = default ;
    ListProductReportsRequest& operator=(ListProductReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latestOnly_ == nullptr
        && this->productCode_ == nullptr; };
    // latestOnly Field Functions 
    bool hasLatestOnly() const { return this->latestOnly_ != nullptr;};
    void deleteLatestOnly() { this->latestOnly_ = nullptr;};
    inline bool getLatestOnly() const { DARABONBA_PTR_GET_DEFAULT(latestOnly_, false) };
    inline ListProductReportsRequest& setLatestOnly(bool latestOnly) { DARABONBA_PTR_SET_VALUE(latestOnly_, latestOnly) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductReportsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    shared_ptr<bool> latestOnly_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
