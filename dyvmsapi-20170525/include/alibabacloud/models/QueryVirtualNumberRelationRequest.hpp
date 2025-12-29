// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIRTUALNUMBERRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVirtualNumberRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVirtualNumberRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(RegionNameCity, regionNameCity_);
      DARABONBA_PTR_TO_JSON(RelatedNum, relatedNum_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVirtualNumberRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(RegionNameCity, regionNameCity_);
      DARABONBA_PTR_FROM_JSON(RelatedNum, relatedNum_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
    };
    QueryVirtualNumberRelationRequest() = default ;
    QueryVirtualNumberRelationRequest(const QueryVirtualNumberRelationRequest &) = default ;
    QueryVirtualNumberRelationRequest(QueryVirtualNumberRelationRequest &&) = default ;
    QueryVirtualNumberRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVirtualNumberRelationRequest() = default ;
    QueryVirtualNumberRelationRequest& operator=(const QueryVirtualNumberRelationRequest &) = default ;
    QueryVirtualNumberRelationRequest& operator=(QueryVirtualNumberRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->phoneNum_ == nullptr && this->prodCode_ == nullptr && this->qualificationId_ == nullptr
        && this->regionNameCity_ == nullptr && this->relatedNum_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->routeType_ == nullptr
        && this->specId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryVirtualNumberRelationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryVirtualNumberRelationRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryVirtualNumberRelationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline QueryVirtualNumberRelationRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline QueryVirtualNumberRelationRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline QueryVirtualNumberRelationRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // regionNameCity Field Functions 
    bool hasRegionNameCity() const { return this->regionNameCity_ != nullptr;};
    void deleteRegionNameCity() { this->regionNameCity_ = nullptr;};
    inline string getRegionNameCity() const { DARABONBA_PTR_GET_DEFAULT(regionNameCity_, "") };
    inline QueryVirtualNumberRelationRequest& setRegionNameCity(string regionNameCity) { DARABONBA_PTR_SET_VALUE(regionNameCity_, regionNameCity) };


    // relatedNum Field Functions 
    bool hasRelatedNum() const { return this->relatedNum_ != nullptr;};
    void deleteRelatedNum() { this->relatedNum_ = nullptr;};
    inline string getRelatedNum() const { DARABONBA_PTR_GET_DEFAULT(relatedNum_, "") };
    inline QueryVirtualNumberRelationRequest& setRelatedNum(string relatedNum) { DARABONBA_PTR_SET_VALUE(relatedNum_, relatedNum) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryVirtualNumberRelationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryVirtualNumberRelationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline int32_t getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, 0) };
    inline QueryVirtualNumberRelationRequest& setRouteType(int32_t routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline int64_t getSpecId() const { DARABONBA_PTR_GET_DEFAULT(specId_, 0L) };
    inline QueryVirtualNumberRelationRequest& setSpecId(int64_t specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The virtual number.
    shared_ptr<string> phoneNum_ {};
    // The service name. Default value: **dyvms**.
    shared_ptr<string> prodCode_ {};
    // The qualification ID.
    // 
    // You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Qualifications\\&Communication Scripts > Qualification Management**, and then click **Details** in the Actions column to view the qualification ID.
    shared_ptr<int64_t> qualificationId_ {};
    // The city to which the virtual number belongs.
    shared_ptr<string> regionNameCity_ {};
    // The real number.
    shared_ptr<string> relatedNum_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The route type. Valid values:
    // 
    // **0**: number location first. **1**: random.
    shared_ptr<int32_t> routeType_ {};
    // The number type. Valid values:
    // 
    // *   **1**: the number provided by a virtual network operator, in the 05710000\\*\\*\\*\\* format.
    // *   **2**: the number provided by an Internet service provider (ISP).
    // *   **3**: a 5-digit phone number that starts with 95.
    shared_ptr<int64_t> specId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
