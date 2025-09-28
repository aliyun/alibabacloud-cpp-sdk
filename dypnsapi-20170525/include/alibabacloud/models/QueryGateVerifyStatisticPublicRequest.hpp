// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyStatisticPublicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyStatisticPublicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyStatisticPublicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryGateVerifyStatisticPublicRequest() = default ;
    QueryGateVerifyStatisticPublicRequest(const QueryGateVerifyStatisticPublicRequest &) = default ;
    QueryGateVerifyStatisticPublicRequest(QueryGateVerifyStatisticPublicRequest &&) = default ;
    QueryGateVerifyStatisticPublicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyStatisticPublicRequest() = default ;
    QueryGateVerifyStatisticPublicRequest& operator=(const QueryGateVerifyStatisticPublicRequest &) = default ;
    QueryGateVerifyStatisticPublicRequest& operator=(QueryGateVerifyStatisticPublicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authenticationType_ != nullptr
        && this->endDate_ != nullptr && this->osType_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->sceneCode_ != nullptr
        && this->startDate_ != nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline int32_t authenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, 0) };
    inline QueryGateVerifyStatisticPublicRequest& setAuthenticationType(int32_t authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryGateVerifyStatisticPublicRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline QueryGateVerifyStatisticPublicRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryGateVerifyStatisticPublicRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryGateVerifyStatisticPublicRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline QueryGateVerifyStatisticPublicRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryGateVerifyStatisticPublicRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The verification method. Valid values:
    // 
    // *   **1**: one-click logon
    // *   **2**: phone number verification, including the verification of the phone number used in HTML5 pages
    // *   **3**: SMS verification
    // *   **4**: facial recognition
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> authenticationType_ = nullptr;
    // The end date. Specify this parameter in the YYYYMMDD format. Example: 20220106.
    // 
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **Android**
    // *   **iOS**
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The service code.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The start date. Specify this parameter in the YYYYMMDD format. Example: 20220101.
    // 
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
