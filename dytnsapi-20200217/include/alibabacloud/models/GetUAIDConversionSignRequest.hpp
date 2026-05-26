// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUAIDCONVERSIONSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUAIDCONVERSIONSIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class GetUAIDConversionSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUAIDConversionSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
      DARABONBA_PTR_TO_JSON(ParamStr, paramStr_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetUAIDConversionSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
      DARABONBA_PTR_FROM_JSON(ParamStr, paramStr_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    GetUAIDConversionSignRequest() = default ;
    GetUAIDConversionSignRequest(const GetUAIDConversionSignRequest &) = default ;
    GetUAIDConversionSignRequest(GetUAIDConversionSignRequest &&) = default ;
    GetUAIDConversionSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUAIDConversionSignRequest() = default ;
    GetUAIDConversionSignRequest& operator=(const GetUAIDConversionSignRequest &) = default ;
    GetUAIDConversionSignRequest& operator=(GetUAIDConversionSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->carrier_ == nullptr && this->clientType_ == nullptr && this->format_ == nullptr && this->outId_ == nullptr && this->ownerId_ == nullptr
        && this->paramKey_ == nullptr && this->paramStr_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->time_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetUAIDConversionSignRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline GetUAIDConversionSignRequest& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline GetUAIDConversionSignRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline GetUAIDConversionSignRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline GetUAIDConversionSignRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetUAIDConversionSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramKey Field Functions 
    bool hasParamKey() const { return this->paramKey_ != nullptr;};
    void deleteParamKey() { this->paramKey_ = nullptr;};
    inline string getParamKey() const { DARABONBA_PTR_GET_DEFAULT(paramKey_, "") };
    inline GetUAIDConversionSignRequest& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


    // paramStr Field Functions 
    bool hasParamStr() const { return this->paramStr_ != nullptr;};
    void deleteParamStr() { this->paramStr_ = nullptr;};
    inline string getParamStr() const { DARABONBA_PTR_GET_DEFAULT(paramStr_, "") };
    inline GetUAIDConversionSignRequest& setParamStr(string paramStr) { DARABONBA_PTR_SET_VALUE(paramStr_, paramStr) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetUAIDConversionSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetUAIDConversionSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetUAIDConversionSignRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> carrier_ {};
    shared_ptr<string> clientType_ {};
    shared_ptr<string> format_ {};
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> paramKey_ {};
    shared_ptr<string> paramStr_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
