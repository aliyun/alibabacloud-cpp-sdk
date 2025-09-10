// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListDependentQuotasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDependentQuotasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListDependentQuotasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
    };
    ListDependentQuotasRequest() = default ;
    ListDependentQuotasRequest(const ListDependentQuotasRequest &) = default ;
    ListDependentQuotasRequest(ListDependentQuotasRequest &&) = default ;
    ListDependentQuotasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDependentQuotasRequest() = default ;
    ListDependentQuotasRequest& operator=(const ListDependentQuotasRequest &) = default ;
    ListDependentQuotasRequest& operator=(ListDependentQuotasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productCode_ != nullptr
        && this->quotaActionCode_ != nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDependentQuotasRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListDependentQuotasRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


  protected:
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // > For more information, see [Alibaba Cloud services that support Quota Center](https://help.aliyun.com/document_detail/182368.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
