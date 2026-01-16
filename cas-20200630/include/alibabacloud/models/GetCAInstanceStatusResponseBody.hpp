// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class GetCAInstanceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCAInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCAInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCAInstanceStatusResponseBody() = default ;
    GetCAInstanceStatusResponseBody(const GetCAInstanceStatusResponseBody &) = default ;
    GetCAInstanceStatusResponseBody(GetCAInstanceStatusResponseBody &&) = default ;
    GetCAInstanceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCAInstanceStatusResponseBody() = default ;
    GetCAInstanceStatusResponseBody& operator=(const GetCAInstanceStatusResponseBody &) = default ;
    GetCAInstanceStatusResponseBody& operator=(GetCAInstanceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceStatusList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, InstanceStatusList& obj) { 
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
      InstanceStatusList() = default ;
      InstanceStatusList(const InstanceStatusList &) = default ;
      InstanceStatusList(InstanceStatusList &&) = default ;
      InstanceStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceStatusList() = default ;
      InstanceStatusList& operator=(const InstanceStatusList &) = default ;
      InstanceStatusList& operator=(InstanceStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->afterTime_ == nullptr
        && this->beforeTime_ == nullptr && this->certIssuedCount_ == nullptr && this->certTotalCount_ == nullptr && this->identifier_ == nullptr && this->instanceId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->useExpireTime_ == nullptr; };
      // afterTime Field Functions 
      bool hasAfterTime() const { return this->afterTime_ != nullptr;};
      void deleteAfterTime() { this->afterTime_ = nullptr;};
      inline int64_t getAfterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
      inline InstanceStatusList& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


      // beforeTime Field Functions 
      bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
      void deleteBeforeTime() { this->beforeTime_ = nullptr;};
      inline int64_t getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
      inline InstanceStatusList& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


      // certIssuedCount Field Functions 
      bool hasCertIssuedCount() const { return this->certIssuedCount_ != nullptr;};
      void deleteCertIssuedCount() { this->certIssuedCount_ = nullptr;};
      inline int32_t getCertIssuedCount() const { DARABONBA_PTR_GET_DEFAULT(certIssuedCount_, 0) };
      inline InstanceStatusList& setCertIssuedCount(int32_t certIssuedCount) { DARABONBA_PTR_SET_VALUE(certIssuedCount_, certIssuedCount) };


      // certTotalCount Field Functions 
      bool hasCertTotalCount() const { return this->certTotalCount_ != nullptr;};
      void deleteCertTotalCount() { this->certTotalCount_ = nullptr;};
      inline int32_t getCertTotalCount() const { DARABONBA_PTR_GET_DEFAULT(certTotalCount_, 0) };
      inline InstanceStatusList& setCertTotalCount(int32_t certTotalCount) { DARABONBA_PTR_SET_VALUE(certTotalCount_, certTotalCount) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline InstanceStatusList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceStatusList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline InstanceStatusList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // useExpireTime Field Functions 
      bool hasUseExpireTime() const { return this->useExpireTime_ != nullptr;};
      void deleteUseExpireTime() { this->useExpireTime_ = nullptr;};
      inline int64_t getUseExpireTime() const { DARABONBA_PTR_GET_DEFAULT(useExpireTime_, 0L) };
      inline InstanceStatusList& setUseExpireTime(int64_t useExpireTime) { DARABONBA_PTR_SET_VALUE(useExpireTime_, useExpireTime) };


    protected:
      // The expiration date of the private CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
      // 
      // >  This parameter is returned only when the value of the **Status** parameter is **USED** or **REVOKE**. The value USED indicates that the private CA instance is enabled, and the value REVOKE indicates that the instance is revoked.
      shared_ptr<int64_t> afterTime_ {};
      // The issuance date of the private CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
      // 
      // >  This parameter is returned only when the value of the **Status** parameter is **USED** or **REVOKE**. The value USED indicates that the private CA instance is enabled, and the value REVOKE indicates that the instance is revoked.
      shared_ptr<int64_t> beforeTime_ {};
      // The number of certificates that are issued by using the private CA instance.
      shared_ptr<int32_t> certIssuedCount_ {};
      // The number of certificates that can be issued by using the private CA instance.
      // 
      // For a private root CA instance whose **Type** is **ROOT**, this parameter indicates the number of intermediate CA certificates that can be issued.
      // 
      // For a private intermediate CA instance whose **Type** is **SUB_ROOT**, this parameter indicates the total number of client certificates and server certificates that can be issued
      shared_ptr<int32_t> certTotalCount_ {};
      // The unique identifier of the private CA certificate.
      // 
      // >  This parameter is returned only when the value of the **Status** parameter is **USED** or **REVOKE**. The value USED indicates that the private CA instance is enabled, and the value REVOKE indicates that the instance is revoked.
      shared_ptr<string> identifier_ {};
      // The ID of the private CA instance.
      shared_ptr<string> instanceId_ {};
      // The status of the private CA instance. Valid values:
      // 
      // *   **BUY**: The private CA instance is purchased but is not enabled.
      // *   **USED**: The private CA instance is enabled.
      // *   **REFUND**: The private CA instance is refunded.
      // *   **REVOKE**: The private CA instance is revoked.
      shared_ptr<string> status_ {};
      // The type of the private CA instance. Valid values:
      // 
      // *   **ROOT**: root CA instance
      // *   **SUB_ROOT**: intermediate CA instance
      shared_ptr<string> type_ {};
      // The expiration date of the private CA instance. This value is a UNIX timestamp. Unit: milliseconds.
      // 
      // >  This parameter corresponds to the duration that you select when you purchase the private CA instance. The duration indicates the subscription period of the Private Certificate Authority (PCA) service.
      shared_ptr<int64_t> useExpireTime_ {};
    };

    virtual bool empty() const override { return this->instanceStatusList_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceStatusList Field Functions 
    bool hasInstanceStatusList() const { return this->instanceStatusList_ != nullptr;};
    void deleteInstanceStatusList() { this->instanceStatusList_ = nullptr;};
    inline const vector<GetCAInstanceStatusResponseBody::InstanceStatusList> & getInstanceStatusList() const { DARABONBA_PTR_GET_CONST(instanceStatusList_, vector<GetCAInstanceStatusResponseBody::InstanceStatusList>) };
    inline vector<GetCAInstanceStatusResponseBody::InstanceStatusList> getInstanceStatusList() { DARABONBA_PTR_GET(instanceStatusList_, vector<GetCAInstanceStatusResponseBody::InstanceStatusList>) };
    inline GetCAInstanceStatusResponseBody& setInstanceStatusList(const vector<GetCAInstanceStatusResponseBody::InstanceStatusList> & instanceStatusList) { DARABONBA_PTR_SET_VALUE(instanceStatusList_, instanceStatusList) };
    inline GetCAInstanceStatusResponseBody& setInstanceStatusList(vector<GetCAInstanceStatusResponseBody::InstanceStatusList> && instanceStatusList) { DARABONBA_PTR_SET_RVALUE(instanceStatusList_, instanceStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCAInstanceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information of the private CA instance.
    shared_ptr<vector<GetCAInstanceStatusResponseBody::InstanceStatusList>> instanceStatusList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
