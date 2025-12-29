// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPACKAGETYPEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPACKAGETYPEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryPackageTypeInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPackageTypeInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPackageTypeInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryPackageTypeInfoRequest() = default ;
    QueryPackageTypeInfoRequest(const QueryPackageTypeInfoRequest &) = default ;
    QueryPackageTypeInfoRequest(QueryPackageTypeInfoRequest &&) = default ;
    QueryPackageTypeInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPackageTypeInfoRequest() = default ;
    QueryPackageTypeInfoRequest& operator=(const QueryPackageTypeInfoRequest &) = default ;
    QueryPackageTypeInfoRequest& operator=(QueryPackageTypeInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->productName_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryPackageTypeInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline QueryPackageTypeInfoRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryPackageTypeInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryPackageTypeInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // 产品名称，如dysms
    shared_ptr<string> productName_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
