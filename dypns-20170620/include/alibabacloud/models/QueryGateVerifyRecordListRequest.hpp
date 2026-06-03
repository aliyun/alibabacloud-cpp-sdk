// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYRECORDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYRECORDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class QueryGateVerifyRecordListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyRecordListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyRecordListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryGateVerifyRecordListRequest() = default ;
    QueryGateVerifyRecordListRequest(const QueryGateVerifyRecordListRequest &) = default ;
    QueryGateVerifyRecordListRequest(QueryGateVerifyRecordListRequest &&) = default ;
    QueryGateVerifyRecordListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyRecordListRequest() = default ;
    QueryGateVerifyRecordListRequest& operator=(const QueryGateVerifyRecordListRequest &) = default ;
    QueryGateVerifyRecordListRequest& operator=(QueryGateVerifyRecordListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationType_ == nullptr
        && this->osType_ == nullptr && this->ownerId_ == nullptr && this->phoneNum_ == nullptr && this->prodCode_ == nullptr && this->queryDate_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline int32_t getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, 0) };
    inline QueryGateVerifyRecordListRequest& setAuthenticationType(int32_t authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline QueryGateVerifyRecordListRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryGateVerifyRecordListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline QueryGateVerifyRecordListRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline QueryGateVerifyRecordListRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // queryDate Field Functions 
    bool hasQueryDate() const { return this->queryDate_ != nullptr;};
    void deleteQueryDate() { this->queryDate_ = nullptr;};
    inline string getQueryDate() const { DARABONBA_PTR_GET_DEFAULT(queryDate_, "") };
    inline QueryGateVerifyRecordListRequest& setQueryDate(string queryDate) { DARABONBA_PTR_SET_VALUE(queryDate_, queryDate) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryGateVerifyRecordListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryGateVerifyRecordListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> authenticationType_ {};
    // This parameter is required.
    shared_ptr<string> osType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> phoneNum_ {};
    shared_ptr<string> prodCode_ {};
    // This parameter is required.
    shared_ptr<string> queryDate_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
