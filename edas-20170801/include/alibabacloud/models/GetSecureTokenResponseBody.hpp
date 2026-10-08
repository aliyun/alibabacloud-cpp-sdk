// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetSecureTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecureTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecureToken, secureToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecureTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecureToken, secureToken_);
    };
    GetSecureTokenResponseBody() = default ;
    GetSecureTokenResponseBody(const GetSecureTokenResponseBody &) = default ;
    GetSecureTokenResponseBody(GetSecureTokenResponseBody &&) = default ;
    GetSecureTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecureTokenResponseBody() = default ;
    GetSecureTokenResponseBody& operator=(const GetSecureTokenResponseBody &) = default ;
    GetSecureTokenResponseBody& operator=(GetSecureTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecureToken : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecureToken& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_TO_JSON(AddressServerHost, addressServerHost_);
        DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EdasId, edasId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MseInstanceId, mseInstanceId_);
        DARABONBA_PTR_TO_JSON(MseInternetAddress, mseInternetAddress_);
        DARABONBA_PTR_TO_JSON(MseIntranetAddress, mseIntranetAddress_);
        DARABONBA_PTR_TO_JSON(MseRegistryType, mseRegistryType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, SecureToken& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_FROM_JSON(AddressServerHost, addressServerHost_);
        DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EdasId, edasId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MseInstanceId, mseInstanceId_);
        DARABONBA_PTR_FROM_JSON(MseInternetAddress, mseInternetAddress_);
        DARABONBA_PTR_FROM_JSON(MseIntranetAddress, mseIntranetAddress_);
        DARABONBA_PTR_FROM_JSON(MseRegistryType, mseRegistryType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      SecureToken() = default ;
      SecureToken(const SecureToken &) = default ;
      SecureToken(SecureToken &&) = default ;
      SecureToken(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecureToken() = default ;
      SecureToken& operator=(const SecureToken &) = default ;
      SecureToken& operator=(SecureToken &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->addressServerHost_ == nullptr && this->belongRegion_ == nullptr && this->description_ == nullptr && this->edasId_ == nullptr && this->id_ == nullptr
        && this->mseInstanceId_ == nullptr && this->mseInternetAddress_ == nullptr && this->mseIntranetAddress_ == nullptr && this->mseRegistryType_ == nullptr && this->regionId_ == nullptr
        && this->regionName_ == nullptr && this->secretKey_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr; };
      // accessKey Field Functions 
      bool hasAccessKey() const { return this->accessKey_ != nullptr;};
      void deleteAccessKey() { this->accessKey_ = nullptr;};
      inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
      inline SecureToken& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


      // addressServerHost Field Functions 
      bool hasAddressServerHost() const { return this->addressServerHost_ != nullptr;};
      void deleteAddressServerHost() { this->addressServerHost_ = nullptr;};
      inline string getAddressServerHost() const { DARABONBA_PTR_GET_DEFAULT(addressServerHost_, "") };
      inline SecureToken& setAddressServerHost(string addressServerHost) { DARABONBA_PTR_SET_VALUE(addressServerHost_, addressServerHost) };


      // belongRegion Field Functions 
      bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
      void deleteBelongRegion() { this->belongRegion_ = nullptr;};
      inline string getBelongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
      inline SecureToken& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SecureToken& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // edasId Field Functions 
      bool hasEdasId() const { return this->edasId_ != nullptr;};
      void deleteEdasId() { this->edasId_ = nullptr;};
      inline string getEdasId() const { DARABONBA_PTR_GET_DEFAULT(edasId_, "") };
      inline SecureToken& setEdasId(string edasId) { DARABONBA_PTR_SET_VALUE(edasId_, edasId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SecureToken& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mseInstanceId Field Functions 
      bool hasMseInstanceId() const { return this->mseInstanceId_ != nullptr;};
      void deleteMseInstanceId() { this->mseInstanceId_ = nullptr;};
      inline string getMseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mseInstanceId_, "") };
      inline SecureToken& setMseInstanceId(string mseInstanceId) { DARABONBA_PTR_SET_VALUE(mseInstanceId_, mseInstanceId) };


      // mseInternetAddress Field Functions 
      bool hasMseInternetAddress() const { return this->mseInternetAddress_ != nullptr;};
      void deleteMseInternetAddress() { this->mseInternetAddress_ = nullptr;};
      inline string getMseInternetAddress() const { DARABONBA_PTR_GET_DEFAULT(mseInternetAddress_, "") };
      inline SecureToken& setMseInternetAddress(string mseInternetAddress) { DARABONBA_PTR_SET_VALUE(mseInternetAddress_, mseInternetAddress) };


      // mseIntranetAddress Field Functions 
      bool hasMseIntranetAddress() const { return this->mseIntranetAddress_ != nullptr;};
      void deleteMseIntranetAddress() { this->mseIntranetAddress_ = nullptr;};
      inline string getMseIntranetAddress() const { DARABONBA_PTR_GET_DEFAULT(mseIntranetAddress_, "") };
      inline SecureToken& setMseIntranetAddress(string mseIntranetAddress) { DARABONBA_PTR_SET_VALUE(mseIntranetAddress_, mseIntranetAddress) };


      // mseRegistryType Field Functions 
      bool hasMseRegistryType() const { return this->mseRegistryType_ != nullptr;};
      void deleteMseRegistryType() { this->mseRegistryType_ = nullptr;};
      inline string getMseRegistryType() const { DARABONBA_PTR_GET_DEFAULT(mseRegistryType_, "") };
      inline SecureToken& setMseRegistryType(string mseRegistryType) { DARABONBA_PTR_SET_VALUE(mseRegistryType_, mseRegistryType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SecureToken& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline SecureToken& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // secretKey Field Functions 
      bool hasSecretKey() const { return this->secretKey_ != nullptr;};
      void deleteSecretKey() { this->secretKey_ = nullptr;};
      inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
      inline SecureToken& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline SecureToken& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SecureToken& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The AccessKey ID used in the namespace.
      shared_ptr<string> accessKey_ {};
      // The address of Address Server associated with the namespace.
      shared_ptr<string> addressServerHost_ {};
      // The ID of the region.
      shared_ptr<string> belongRegion_ {};
      // The description of the namespace.
      shared_ptr<string> description_ {};
      // The ID of the Alibaba Cloud account that activated Enterprise Distributed Application Service (EDAS).
      shared_ptr<string> edasId_ {};
      // The ID of the security token.
      shared_ptr<int64_t> id_ {};
      // The ID of the MSE instance.
      shared_ptr<string> mseInstanceId_ {};
      // The public endpoint of the MSE registry.
      shared_ptr<string> mseInternetAddress_ {};
      // The private endpoint of the MSE registry.
      shared_ptr<string> mseIntranetAddress_ {};
      // The type of the Microservices Engine (MSE) registry.
      // 
      // - default: the shared registry of EDAS
      // 
      // - exclusive_mse: MSE Nacos registry
      shared_ptr<string> mseRegistryType_ {};
      // The ID of the region where the namespace resides.
      shared_ptr<string> regionId_ {};
      // The name of the region where the namespace resides.
      shared_ptr<string> regionName_ {};
      // The AccessKey secret used in the namespace.
      shared_ptr<string> secretKey_ {};
      // The tenant ID of the namespace.
      shared_ptr<string> tenantId_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secureToken_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetSecureTokenResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecureTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecureTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secureToken Field Functions 
    bool hasSecureToken() const { return this->secureToken_ != nullptr;};
    void deleteSecureToken() { this->secureToken_ = nullptr;};
    inline const GetSecureTokenResponseBody::SecureToken & getSecureToken() const { DARABONBA_PTR_GET_CONST(secureToken_, GetSecureTokenResponseBody::SecureToken) };
    inline GetSecureTokenResponseBody::SecureToken getSecureToken() { DARABONBA_PTR_GET(secureToken_, GetSecureTokenResponseBody::SecureToken) };
    inline GetSecureTokenResponseBody& setSecureToken(const GetSecureTokenResponseBody::SecureToken & secureToken) { DARABONBA_PTR_SET_VALUE(secureToken_, secureToken) };
    inline GetSecureTokenResponseBody& setSecureToken(GetSecureTokenResponseBody::SecureToken && secureToken) { DARABONBA_PTR_SET_RVALUE(secureToken_, secureToken) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The message returned for the request.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned security token.
    shared_ptr<GetSecureTokenResponseBody::SecureToken> secureToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
