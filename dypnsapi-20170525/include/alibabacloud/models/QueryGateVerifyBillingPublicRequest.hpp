// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyBillingPublicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyBillingPublicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(Month, month_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyBillingPublicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(Month, month_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    QueryGateVerifyBillingPublicRequest() = default ;
    QueryGateVerifyBillingPublicRequest(const QueryGateVerifyBillingPublicRequest &) = default ;
    QueryGateVerifyBillingPublicRequest(QueryGateVerifyBillingPublicRequest &&) = default ;
    QueryGateVerifyBillingPublicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyBillingPublicRequest() = default ;
    QueryGateVerifyBillingPublicRequest& operator=(const QueryGateVerifyBillingPublicRequest &) = default ;
    QueryGateVerifyBillingPublicRequest& operator=(QueryGateVerifyBillingPublicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authenticationType_ != nullptr
        && this->month_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline int32_t authenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, 0) };
    inline QueryGateVerifyBillingPublicRequest& setAuthenticationType(int32_t authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline string month() const { DARABONBA_PTR_GET_DEFAULT(month_, "") };
    inline QueryGateVerifyBillingPublicRequest& setMonth(string month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryGateVerifyBillingPublicRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryGateVerifyBillingPublicRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The verification method. Valid values:
    // 
    // *   **0**: phone number verification
    // *   **1**: one-click logon
    // *   **2**: all
    // *   **3**: facial recognition
    // *   **4**: SMS verification
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> authenticationType_ = nullptr;
    // The month in which the bill is generated. Specify this parameter in the YYYYMM format. Example: 202111.
    // 
    // This parameter is required.
    std::shared_ptr<string> month_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
