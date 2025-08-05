// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(billingType, billingType_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(saleTags, saleTags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(billingType, billingType_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(saleTags, saleTags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListQuotasRequest() = default ;
    ListQuotasRequest(const ListQuotasRequest &) = default ;
    ListQuotasRequest(ListQuotasRequest &&) = default ;
    ListQuotasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasRequest() = default ;
    ListQuotasRequest& operator=(const ListQuotasRequest &) = default ;
    ListQuotasRequest& operator=(ListQuotasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingType_ != nullptr
        && this->marker_ != nullptr && this->maxItem_ != nullptr && this->productId_ != nullptr && this->region_ != nullptr && this->saleTags_ != nullptr
        && this->tenantId_ != nullptr; };
    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string billingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline ListQuotasRequest& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListQuotasRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int64_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0L) };
    inline ListQuotasRequest& setMaxItem(int64_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListQuotasRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListQuotasRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // saleTags Field Functions 
    bool hasSaleTags() const { return this->saleTags_ != nullptr;};
    void deleteSaleTags() { this->saleTags_ = nullptr;};
    inline string saleTags() const { DARABONBA_PTR_GET_DEFAULT(saleTags_, "") };
    inline ListQuotasRequest& setSaleTags(string saleTags) { DARABONBA_PTR_SET_VALUE(saleTags_, saleTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListQuotasRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The billing method of the quota.
    std::shared_ptr<string> billingType_ = nullptr;
    // Specifies the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries to return on each page.
    std::shared_ptr<int64_t> maxItem_ = nullptr;
    // The service ID.
    std::shared_ptr<string> productId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The cost tag. You can filter out quota objects based on the cost tag. The cost tag is created when you tag a service.
    std::shared_ptr<string> saleTags_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
