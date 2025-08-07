// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSRESPONSEBODYINSTANCESTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSRESPONSEBODYINSTANCESTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class GetCAInstanceStatusResponseBodyInstanceStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCAInstanceStatusResponseBodyInstanceStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(CertIssuedCount, certIssuedCount_);
      DARABONBA_PTR_TO_JSON(CertTotalCount, certTotalCount_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UseExpireTime, useExpireTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCAInstanceStatusResponseBodyInstanceStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(CertIssuedCount, certIssuedCount_);
      DARABONBA_PTR_FROM_JSON(CertTotalCount, certTotalCount_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UseExpireTime, useExpireTime_);
    };
    GetCAInstanceStatusResponseBodyInstanceStatusList() = default ;
    GetCAInstanceStatusResponseBodyInstanceStatusList(const GetCAInstanceStatusResponseBodyInstanceStatusList &) = default ;
    GetCAInstanceStatusResponseBodyInstanceStatusList(GetCAInstanceStatusResponseBodyInstanceStatusList &&) = default ;
    GetCAInstanceStatusResponseBodyInstanceStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCAInstanceStatusResponseBodyInstanceStatusList() = default ;
    GetCAInstanceStatusResponseBodyInstanceStatusList& operator=(const GetCAInstanceStatusResponseBodyInstanceStatusList &) = default ;
    GetCAInstanceStatusResponseBodyInstanceStatusList& operator=(GetCAInstanceStatusResponseBodyInstanceStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterTime_ != nullptr
        && this->beforeTime_ != nullptr && this->certIssuedCount_ != nullptr && this->certTotalCount_ != nullptr && this->identifier_ != nullptr && this->instanceId_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr && this->useExpireTime_ != nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t afterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t beforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // certIssuedCount Field Functions 
    bool hasCertIssuedCount() const { return this->certIssuedCount_ != nullptr;};
    void deleteCertIssuedCount() { this->certIssuedCount_ = nullptr;};
    inline int32_t certIssuedCount() const { DARABONBA_PTR_GET_DEFAULT(certIssuedCount_, 0) };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setCertIssuedCount(int32_t certIssuedCount) { DARABONBA_PTR_SET_VALUE(certIssuedCount_, certIssuedCount) };


    // certTotalCount Field Functions 
    bool hasCertTotalCount() const { return this->certTotalCount_ != nullptr;};
    void deleteCertTotalCount() { this->certTotalCount_ = nullptr;};
    inline int32_t certTotalCount() const { DARABONBA_PTR_GET_DEFAULT(certTotalCount_, 0) };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setCertTotalCount(int32_t certTotalCount) { DARABONBA_PTR_SET_VALUE(certTotalCount_, certTotalCount) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useExpireTime Field Functions 
    bool hasUseExpireTime() const { return this->useExpireTime_ != nullptr;};
    void deleteUseExpireTime() { this->useExpireTime_ = nullptr;};
    inline int64_t useExpireTime() const { DARABONBA_PTR_GET_DEFAULT(useExpireTime_, 0L) };
    inline GetCAInstanceStatusResponseBodyInstanceStatusList& setUseExpireTime(int64_t useExpireTime) { DARABONBA_PTR_SET_VALUE(useExpireTime_, useExpireTime) };


  protected:
    // The expiration date of the private CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
    // 
    // >  This parameter is returned only when the value of the **Status** parameter is **USED** or **REVOKE**. The value USED indicates that the private CA instance is enabled, and the value REVOKE indicates that the instance is revoked.
    std::shared_ptr<int64_t> afterTime_ = nullptr;
    // The issuance date of the private CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
    // 
    // >  This parameter is returned only when the value of the **Status** parameter is **USED** or **REVOKE**. The value USED indicates that the private CA instance is enabled, and the value REVOKE indicates that the instance is revoked.
    std::shared_ptr<int64_t> beforeTime_ = nullptr;
    // The number of certificates that are issued by using the private CA instance.
    std::shared_ptr<int32_t> certIssuedCount_ = nullptr;
    // The number of certificates that can be issued by using the private CA instance.
    // 
    // For a private root CA instance whose **Type** is **ROOT**, this parameter indicates the number of intermediate CA certificates that can be issued.
    // 
    // For a private intermediate CA instance whose **Type** is **SUB_ROOT**, this parameter indicates the total number of client certificates and server certificates that can be issued
    std::shared_ptr<int32_t> certTotalCount_ = nullptr;
    // The unique identifier of the private CA certificate.
    // 
    // >  This parameter is returned only when the value of the **Status** parameter is **USED** or **REVOKE**. The value USED indicates that the private CA instance is enabled, and the value REVOKE indicates that the instance is revoked.
    std::shared_ptr<string> identifier_ = nullptr;
    // The ID of the private CA instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the private CA instance. Valid values:
    // 
    // *   **BUY**: The private CA instance is purchased but is not enabled.
    // *   **USED**: The private CA instance is enabled.
    // *   **REFUND**: The private CA instance is refunded.
    // *   **REVOKE**: The private CA instance is revoked.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the private CA instance. Valid values:
    // 
    // *   **ROOT**: root CA instance
    // *   **SUB_ROOT**: intermediate CA instance
    std::shared_ptr<string> type_ = nullptr;
    // The expiration date of the private CA instance. This value is a UNIX timestamp. Unit: milliseconds.
    // 
    // >  This parameter corresponds to the duration that you select when you purchase the private CA instance. The duration indicates the subscription period of the Private Certificate Authority (PCA) service.
    std::shared_ptr<int64_t> useExpireTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
