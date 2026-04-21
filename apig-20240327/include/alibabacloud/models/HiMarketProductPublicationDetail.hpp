// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETPRODUCTPUBLICATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETPRODUCTPUBLICATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketProductPublicationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketProductPublicationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(portalId, portalId_);
      DARABONBA_PTR_TO_JSON(portalName, portalName_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
      DARABONBA_PTR_TO_JSON(publicationId, publicationId_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketProductPublicationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(portalId, portalId_);
      DARABONBA_PTR_FROM_JSON(portalName, portalName_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
      DARABONBA_PTR_FROM_JSON(publicationId, publicationId_);
    };
    HiMarketProductPublicationDetail() = default ;
    HiMarketProductPublicationDetail(const HiMarketProductPublicationDetail &) = default ;
    HiMarketProductPublicationDetail(HiMarketProductPublicationDetail &&) = default ;
    HiMarketProductPublicationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketProductPublicationDetail() = default ;
    HiMarketProductPublicationDetail& operator=(const HiMarketProductPublicationDetail &) = default ;
    HiMarketProductPublicationDetail& operator=(HiMarketProductPublicationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portalId_ == nullptr
        && this->portalName_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->productType_ == nullptr && this->publicationId_ == nullptr; };
    // portalId Field Functions 
    bool hasPortalId() const { return this->portalId_ != nullptr;};
    void deletePortalId() { this->portalId_ = nullptr;};
    inline string getPortalId() const { DARABONBA_PTR_GET_DEFAULT(portalId_, "") };
    inline HiMarketProductPublicationDetail& setPortalId(string portalId) { DARABONBA_PTR_SET_VALUE(portalId_, portalId) };


    // portalName Field Functions 
    bool hasPortalName() const { return this->portalName_ != nullptr;};
    void deletePortalName() { this->portalName_ = nullptr;};
    inline string getPortalName() const { DARABONBA_PTR_GET_DEFAULT(portalName_, "") };
    inline HiMarketProductPublicationDetail& setPortalName(string portalName) { DARABONBA_PTR_SET_VALUE(portalName_, portalName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline HiMarketProductPublicationDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline HiMarketProductPublicationDetail& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline HiMarketProductPublicationDetail& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // publicationId Field Functions 
    bool hasPublicationId() const { return this->publicationId_ != nullptr;};
    void deletePublicationId() { this->publicationId_ = nullptr;};
    inline string getPublicationId() const { DARABONBA_PTR_GET_DEFAULT(publicationId_, "") };
    inline HiMarketProductPublicationDetail& setPublicationId(string publicationId) { DARABONBA_PTR_SET_VALUE(publicationId_, publicationId) };


  protected:
    shared_ptr<string> portalId_ {};
    shared_ptr<string> portalName_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<string> productType_ {};
    shared_ptr<string> publicationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
