// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVIRTUALNUMBERRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDVIRTUALNUMBERRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class AddVirtualNumberRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVirtualNumberRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CorpNameList, corpNameList_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
    };
    friend void from_json(const Darabonba::Json& j, AddVirtualNumberRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CorpNameList, corpNameList_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
    };
    AddVirtualNumberRelationRequest() = default ;
    AddVirtualNumberRelationRequest(const AddVirtualNumberRelationRequest &) = default ;
    AddVirtualNumberRelationRequest(AddVirtualNumberRelationRequest &&) = default ;
    AddVirtualNumberRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVirtualNumberRelationRequest() = default ;
    AddVirtualNumberRelationRequest& operator=(const AddVirtualNumberRelationRequest &) = default ;
    AddVirtualNumberRelationRequest& operator=(AddVirtualNumberRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->corpNameList_ == nullptr
        && this->numberList_ == nullptr && this->ownerId_ == nullptr && this->phoneNum_ == nullptr && this->prodCode_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->routeType_ == nullptr; };
    // corpNameList Field Functions 
    bool hasCorpNameList() const { return this->corpNameList_ != nullptr;};
    void deleteCorpNameList() { this->corpNameList_ = nullptr;};
    inline string getCorpNameList() const { DARABONBA_PTR_GET_DEFAULT(corpNameList_, "") };
    inline AddVirtualNumberRelationRequest& setCorpNameList(string corpNameList) { DARABONBA_PTR_SET_VALUE(corpNameList_, corpNameList) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string getNumberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline AddVirtualNumberRelationRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddVirtualNumberRelationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline AddVirtualNumberRelationRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline AddVirtualNumberRelationRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddVirtualNumberRelationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddVirtualNumberRelationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline int32_t getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, 0) };
    inline AddVirtualNumberRelationRequest& setRouteType(int32_t routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


  protected:
    // The company names. Separate multiple company names with commas (,).
    shared_ptr<string> corpNameList_ {};
    // The real numbers. Separate multiple real numbers with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> numberList_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The virtual number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNum_ {};
    // The service name. Default value: **dyvms**.
    shared_ptr<string> prodCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The route type. Valid values:
    // 
    // *   **0**: number location first.
    // *   **1**: random.
    // 
    // This parameter is required.
    shared_ptr<int32_t> routeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
