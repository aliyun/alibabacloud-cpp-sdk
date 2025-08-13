// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListSupportResourceTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportResourceTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceTye, resourceTye_);
      DARABONBA_PTR_TO_JSON(ShowItems, showItems_);
      DARABONBA_PTR_TO_JSON(SupportCode, supportCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportResourceTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceTye, resourceTye_);
      DARABONBA_PTR_FROM_JSON(ShowItems, showItems_);
      DARABONBA_PTR_FROM_JSON(SupportCode, supportCode_);
    };
    ListSupportResourceTypesRequest() = default ;
    ListSupportResourceTypesRequest(const ListSupportResourceTypesRequest &) = default ;
    ListSupportResourceTypesRequest(ListSupportResourceTypesRequest &&) = default ;
    ListSupportResourceTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportResourceTypesRequest() = default ;
    ListSupportResourceTypesRequest& operator=(const ListSupportResourceTypesRequest &) = default ;
    ListSupportResourceTypesRequest& operator=(ListSupportResourceTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResult_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->productCode_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceTye_ != nullptr && this->showItems_ != nullptr && this->supportCode_ != nullptr; };
    // maxResult Field Functions 
    bool hasMaxResult() const { return this->maxResult_ != nullptr;};
    void deleteMaxResult() { this->maxResult_ = nullptr;};
    inline int32_t maxResult() const { DARABONBA_PTR_GET_DEFAULT(maxResult_, 0) };
    inline ListSupportResourceTypesRequest& setMaxResult(int32_t maxResult) { DARABONBA_PTR_SET_VALUE(maxResult_, maxResult) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupportResourceTypesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListSupportResourceTypesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListSupportResourceTypesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListSupportResourceTypesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSupportResourceTypesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListSupportResourceTypesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceTye Field Functions 
    bool hasResourceTye() const { return this->resourceTye_ != nullptr;};
    void deleteResourceTye() { this->resourceTye_ = nullptr;};
    inline string resourceTye() const { DARABONBA_PTR_GET_DEFAULT(resourceTye_, "") };
    inline ListSupportResourceTypesRequest& setResourceTye(string resourceTye) { DARABONBA_PTR_SET_VALUE(resourceTye_, resourceTye) };


    // showItems Field Functions 
    bool hasShowItems() const { return this->showItems_ != nullptr;};
    void deleteShowItems() { this->showItems_ = nullptr;};
    inline bool showItems() const { DARABONBA_PTR_GET_DEFAULT(showItems_, false) };
    inline ListSupportResourceTypesRequest& setShowItems(bool showItems) { DARABONBA_PTR_SET_VALUE(showItems_, showItems) };


    // supportCode Field Functions 
    bool hasSupportCode() const { return this->supportCode_ != nullptr;};
    void deleteSupportCode() { this->supportCode_ = nullptr;};
    inline string supportCode() const { DARABONBA_PTR_GET_DEFAULT(supportCode_, "") };
    inline ListSupportResourceTypesRequest& setSupportCode(string supportCode) { DARABONBA_PTR_SET_VALUE(supportCode_, supportCode) };


  protected:
    // The number of entries to return on each page.
    // 
    // Maximum value: 1000. Default value: 50.
    std::shared_ptr<int32_t> maxResult_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The service code. This parameter specifies a filter condition for the query.
    // 
    // This parameter is obtained from the response.
    std::shared_ptr<string> productCode_ = nullptr;
    // The region ID.
    // 
    // For more information about region IDs, see [Endpoints](https://help.aliyun.com/document_detail/2330902.html).
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The resource type. This parameter specifies a filter condition for the query.
    // 
    // This parameter is obtained from the response.
    std::shared_ptr<string> resourceTye_ = nullptr;
    // Specifies whether to return tag-related capability items. Valid values:
    // 
    // *   true: The system returns tag-related capability items.
    // *   false (default value): The system does not return tag-related capability items.
    std::shared_ptr<bool> showItems_ = nullptr;
    // The code of the tag-related capability item. This parameter specifies a filter condition for the query.
    // 
    // For more information, see **Tag-related capability items**.
    std::shared_ptr<string> supportCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
