// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    DescribePdnsUserInfoResponseBody() = default ;
    DescribePdnsUserInfoResponseBody(const DescribePdnsUserInfoResponseBody &) = default ;
    DescribePdnsUserInfoResponseBody(DescribePdnsUserInfoResponseBody &&) = default ;
    DescribePdnsUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsUserInfoResponseBody() = default ;
    DescribePdnsUserInfoResponseBody& operator=(const DescribePdnsUserInfoResponseBody &) = default ;
    DescribePdnsUserInfoResponseBody& operator=(DescribePdnsUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableAccessSecurityType, availableAccessSecurityType_);
        DARABONBA_PTR_TO_JSON(AvailableService, availableService_);
        DARABONBA_PTR_TO_JSON(PdnsId, pdnsId_);
        DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(StatisticSwitchStatus, statisticSwitchStatus_);
        DARABONBA_PTR_TO_JSON(StoppedService, stoppedService_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableAccessSecurityType, availableAccessSecurityType_);
        DARABONBA_PTR_FROM_JSON(AvailableService, availableService_);
        DARABONBA_PTR_FROM_JSON(PdnsId, pdnsId_);
        DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(StatisticSwitchStatus, statisticSwitchStatus_);
        DARABONBA_PTR_FROM_JSON(StoppedService, stoppedService_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availableAccessSecurityType_ == nullptr
        && this->availableService_ == nullptr && this->pdnsId_ == nullptr && this->secretKey_ == nullptr && this->serviceType_ == nullptr && this->state_ == nullptr
        && this->statisticSwitchStatus_ == nullptr && this->stoppedService_ == nullptr; };
      // availableAccessSecurityType Field Functions 
      bool hasAvailableAccessSecurityType() const { return this->availableAccessSecurityType_ != nullptr;};
      void deleteAvailableAccessSecurityType() { this->availableAccessSecurityType_ = nullptr;};
      inline string getAvailableAccessSecurityType() const { DARABONBA_PTR_GET_DEFAULT(availableAccessSecurityType_, "") };
      inline UserInfo& setAvailableAccessSecurityType(string availableAccessSecurityType) { DARABONBA_PTR_SET_VALUE(availableAccessSecurityType_, availableAccessSecurityType) };


      // availableService Field Functions 
      bool hasAvailableService() const { return this->availableService_ != nullptr;};
      void deleteAvailableService() { this->availableService_ = nullptr;};
      inline string getAvailableService() const { DARABONBA_PTR_GET_DEFAULT(availableService_, "") };
      inline UserInfo& setAvailableService(string availableService) { DARABONBA_PTR_SET_VALUE(availableService_, availableService) };


      // pdnsId Field Functions 
      bool hasPdnsId() const { return this->pdnsId_ != nullptr;};
      void deletePdnsId() { this->pdnsId_ = nullptr;};
      inline int64_t getPdnsId() const { DARABONBA_PTR_GET_DEFAULT(pdnsId_, 0L) };
      inline UserInfo& setPdnsId(int64_t pdnsId) { DARABONBA_PTR_SET_VALUE(pdnsId_, pdnsId) };


      // secretKey Field Functions 
      bool hasSecretKey() const { return this->secretKey_ != nullptr;};
      void deleteSecretKey() { this->secretKey_ = nullptr;};
      inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
      inline UserInfo& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline UserInfo& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline UserInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // statisticSwitchStatus Field Functions 
      bool hasStatisticSwitchStatus() const { return this->statisticSwitchStatus_ != nullptr;};
      void deleteStatisticSwitchStatus() { this->statisticSwitchStatus_ = nullptr;};
      inline string getStatisticSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(statisticSwitchStatus_, "") };
      inline UserInfo& setStatisticSwitchStatus(string statisticSwitchStatus) { DARABONBA_PTR_SET_VALUE(statisticSwitchStatus_, statisticSwitchStatus) };


      // stoppedService Field Functions 
      bool hasStoppedService() const { return this->stoppedService_ != nullptr;};
      void deleteStoppedService() { this->stoppedService_ = nullptr;};
      inline string getStoppedService() const { DARABONBA_PTR_GET_DEFAULT(stoppedService_, "") };
      inline UserInfo& setStoppedService(string stoppedService) { DARABONBA_PTR_SET_VALUE(stoppedService_, stoppedService) };


    protected:
      // The enabled access security types.
      shared_ptr<string> availableAccessSecurityType_ {};
      // The enabled public recursive DNS service.
      shared_ptr<string> availableService_ {};
      // The configuration ID of the users in public recursive DNS.
      shared_ptr<int64_t> pdnsId_ {};
      // The SecretKey configured for a UDP-based CIDR block.
      shared_ptr<string> secretKey_ {};
      // The type of the public recursive DNS service.
      shared_ptr<string> serviceType_ {};
      // The status of the public recursive DNS service.
      shared_ptr<string> state_ {};
      // The status of the traffic analysis switch for the user in public recursive DNS service.
      shared_ptr<string> statisticSwitchStatus_ {};
      // The disabled public recursive DNS service.
      shared_ptr<string> stoppedService_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DescribePdnsUserInfoResponseBody::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DescribePdnsUserInfoResponseBody::UserInfo) };
    inline DescribePdnsUserInfoResponseBody::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, DescribePdnsUserInfoResponseBody::UserInfo) };
    inline DescribePdnsUserInfoResponseBody& setUserInfo(const DescribePdnsUserInfoResponseBody::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DescribePdnsUserInfoResponseBody& setUserInfo(DescribePdnsUserInfoResponseBody::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the user.
    shared_ptr<DescribePdnsUserInfoResponseBody::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
