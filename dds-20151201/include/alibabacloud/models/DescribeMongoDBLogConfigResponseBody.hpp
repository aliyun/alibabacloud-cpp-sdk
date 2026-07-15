// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONGODBLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONGODBLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeMongoDBLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMongoDBLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_TO_JSON(HotTtlForV2Standard, hotTtlForV2Standard_);
      DARABONBA_PTR_TO_JSON(IsEtlMetaExist, isEtlMetaExist_);
      DARABONBA_PTR_TO_JSON(IsUserProjectLogstoreExist, isUserProjectLogstoreExist_);
      DARABONBA_PTR_TO_JSON(PreserveStorageForStandard, preserveStorageForStandard_);
      DARABONBA_PTR_TO_JSON(PreserveStorageForTrail, preserveStorageForTrail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(TtlForStandard, ttlForStandard_);
      DARABONBA_PTR_TO_JSON(TtlForTrail, ttlForTrail_);
      DARABONBA_PTR_TO_JSON(TtlForV2Standard, ttlForV2Standard_);
      DARABONBA_PTR_TO_JSON(UsedStorageForStandard, usedStorageForStandard_);
      DARABONBA_PTR_TO_JSON(UsedStorageForTrail, usedStorageForTrail_);
      DARABONBA_PTR_TO_JSON(UserProjectName, userProjectName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMongoDBLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_FROM_JSON(HotTtlForV2Standard, hotTtlForV2Standard_);
      DARABONBA_PTR_FROM_JSON(IsEtlMetaExist, isEtlMetaExist_);
      DARABONBA_PTR_FROM_JSON(IsUserProjectLogstoreExist, isUserProjectLogstoreExist_);
      DARABONBA_PTR_FROM_JSON(PreserveStorageForStandard, preserveStorageForStandard_);
      DARABONBA_PTR_FROM_JSON(PreserveStorageForTrail, preserveStorageForTrail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(TtlForStandard, ttlForStandard_);
      DARABONBA_PTR_FROM_JSON(TtlForTrail, ttlForTrail_);
      DARABONBA_PTR_FROM_JSON(TtlForV2Standard, ttlForV2Standard_);
      DARABONBA_PTR_FROM_JSON(UsedStorageForStandard, usedStorageForStandard_);
      DARABONBA_PTR_FROM_JSON(UsedStorageForTrail, usedStorageForTrail_);
      DARABONBA_PTR_FROM_JSON(UserProjectName, userProjectName_);
    };
    DescribeMongoDBLogConfigResponseBody() = default ;
    DescribeMongoDBLogConfigResponseBody(const DescribeMongoDBLogConfigResponseBody &) = default ;
    DescribeMongoDBLogConfigResponseBody(DescribeMongoDBLogConfigResponseBody &&) = default ;
    DescribeMongoDBLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMongoDBLogConfigResponseBody() = default ;
    DescribeMongoDBLogConfigResponseBody& operator=(const DescribeMongoDBLogConfigResponseBody &) = default ;
    DescribeMongoDBLogConfigResponseBody& operator=(DescribeMongoDBLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAudit_ == nullptr
        && this->hotTtlForV2Standard_ == nullptr && this->isEtlMetaExist_ == nullptr && this->isUserProjectLogstoreExist_ == nullptr && this->preserveStorageForStandard_ == nullptr && this->preserveStorageForTrail_ == nullptr
        && this->requestId_ == nullptr && this->serviceType_ == nullptr && this->ttlForStandard_ == nullptr && this->ttlForTrail_ == nullptr && this->ttlForV2Standard_ == nullptr
        && this->usedStorageForStandard_ == nullptr && this->usedStorageForTrail_ == nullptr && this->userProjectName_ == nullptr; };
    // enableAudit Field Functions 
    bool hasEnableAudit() const { return this->enableAudit_ != nullptr;};
    void deleteEnableAudit() { this->enableAudit_ = nullptr;};
    inline bool getEnableAudit() const { DARABONBA_PTR_GET_DEFAULT(enableAudit_, false) };
    inline DescribeMongoDBLogConfigResponseBody& setEnableAudit(bool enableAudit) { DARABONBA_PTR_SET_VALUE(enableAudit_, enableAudit) };


    // hotTtlForV2Standard Field Functions 
    bool hasHotTtlForV2Standard() const { return this->hotTtlForV2Standard_ != nullptr;};
    void deleteHotTtlForV2Standard() { this->hotTtlForV2Standard_ = nullptr;};
    inline int64_t getHotTtlForV2Standard() const { DARABONBA_PTR_GET_DEFAULT(hotTtlForV2Standard_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setHotTtlForV2Standard(int64_t hotTtlForV2Standard) { DARABONBA_PTR_SET_VALUE(hotTtlForV2Standard_, hotTtlForV2Standard) };


    // isEtlMetaExist Field Functions 
    bool hasIsEtlMetaExist() const { return this->isEtlMetaExist_ != nullptr;};
    void deleteIsEtlMetaExist() { this->isEtlMetaExist_ = nullptr;};
    inline int32_t getIsEtlMetaExist() const { DARABONBA_PTR_GET_DEFAULT(isEtlMetaExist_, 0) };
    inline DescribeMongoDBLogConfigResponseBody& setIsEtlMetaExist(int32_t isEtlMetaExist) { DARABONBA_PTR_SET_VALUE(isEtlMetaExist_, isEtlMetaExist) };


    // isUserProjectLogstoreExist Field Functions 
    bool hasIsUserProjectLogstoreExist() const { return this->isUserProjectLogstoreExist_ != nullptr;};
    void deleteIsUserProjectLogstoreExist() { this->isUserProjectLogstoreExist_ = nullptr;};
    inline int32_t getIsUserProjectLogstoreExist() const { DARABONBA_PTR_GET_DEFAULT(isUserProjectLogstoreExist_, 0) };
    inline DescribeMongoDBLogConfigResponseBody& setIsUserProjectLogstoreExist(int32_t isUserProjectLogstoreExist) { DARABONBA_PTR_SET_VALUE(isUserProjectLogstoreExist_, isUserProjectLogstoreExist) };


    // preserveStorageForStandard Field Functions 
    bool hasPreserveStorageForStandard() const { return this->preserveStorageForStandard_ != nullptr;};
    void deletePreserveStorageForStandard() { this->preserveStorageForStandard_ = nullptr;};
    inline int64_t getPreserveStorageForStandard() const { DARABONBA_PTR_GET_DEFAULT(preserveStorageForStandard_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setPreserveStorageForStandard(int64_t preserveStorageForStandard) { DARABONBA_PTR_SET_VALUE(preserveStorageForStandard_, preserveStorageForStandard) };


    // preserveStorageForTrail Field Functions 
    bool hasPreserveStorageForTrail() const { return this->preserveStorageForTrail_ != nullptr;};
    void deletePreserveStorageForTrail() { this->preserveStorageForTrail_ = nullptr;};
    inline int64_t getPreserveStorageForTrail() const { DARABONBA_PTR_GET_DEFAULT(preserveStorageForTrail_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setPreserveStorageForTrail(int64_t preserveStorageForTrail) { DARABONBA_PTR_SET_VALUE(preserveStorageForTrail_, preserveStorageForTrail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMongoDBLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeMongoDBLogConfigResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // ttlForStandard Field Functions 
    bool hasTtlForStandard() const { return this->ttlForStandard_ != nullptr;};
    void deleteTtlForStandard() { this->ttlForStandard_ = nullptr;};
    inline int64_t getTtlForStandard() const { DARABONBA_PTR_GET_DEFAULT(ttlForStandard_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setTtlForStandard(int64_t ttlForStandard) { DARABONBA_PTR_SET_VALUE(ttlForStandard_, ttlForStandard) };


    // ttlForTrail Field Functions 
    bool hasTtlForTrail() const { return this->ttlForTrail_ != nullptr;};
    void deleteTtlForTrail() { this->ttlForTrail_ = nullptr;};
    inline int64_t getTtlForTrail() const { DARABONBA_PTR_GET_DEFAULT(ttlForTrail_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setTtlForTrail(int64_t ttlForTrail) { DARABONBA_PTR_SET_VALUE(ttlForTrail_, ttlForTrail) };


    // ttlForV2Standard Field Functions 
    bool hasTtlForV2Standard() const { return this->ttlForV2Standard_ != nullptr;};
    void deleteTtlForV2Standard() { this->ttlForV2Standard_ = nullptr;};
    inline int64_t getTtlForV2Standard() const { DARABONBA_PTR_GET_DEFAULT(ttlForV2Standard_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setTtlForV2Standard(int64_t ttlForV2Standard) { DARABONBA_PTR_SET_VALUE(ttlForV2Standard_, ttlForV2Standard) };


    // usedStorageForStandard Field Functions 
    bool hasUsedStorageForStandard() const { return this->usedStorageForStandard_ != nullptr;};
    void deleteUsedStorageForStandard() { this->usedStorageForStandard_ = nullptr;};
    inline int64_t getUsedStorageForStandard() const { DARABONBA_PTR_GET_DEFAULT(usedStorageForStandard_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setUsedStorageForStandard(int64_t usedStorageForStandard) { DARABONBA_PTR_SET_VALUE(usedStorageForStandard_, usedStorageForStandard) };


    // usedStorageForTrail Field Functions 
    bool hasUsedStorageForTrail() const { return this->usedStorageForTrail_ != nullptr;};
    void deleteUsedStorageForTrail() { this->usedStorageForTrail_ = nullptr;};
    inline int64_t getUsedStorageForTrail() const { DARABONBA_PTR_GET_DEFAULT(usedStorageForTrail_, 0L) };
    inline DescribeMongoDBLogConfigResponseBody& setUsedStorageForTrail(int64_t usedStorageForTrail) { DARABONBA_PTR_SET_VALUE(usedStorageForTrail_, usedStorageForTrail) };


    // userProjectName Field Functions 
    bool hasUserProjectName() const { return this->userProjectName_ != nullptr;};
    void deleteUserProjectName() { this->userProjectName_ = nullptr;};
    inline string getUserProjectName() const { DARABONBA_PTR_GET_DEFAULT(userProjectName_, "") };
    inline DescribeMongoDBLogConfigResponseBody& setUserProjectName(string userProjectName) { DARABONBA_PTR_SET_VALUE(userProjectName_, userProjectName) };


  protected:
    // Indicates whether the audit log feature is enabled for the ApsaraDB for MongoDB instance.
    // 
    // - **true**: Enabled.
    // 
    // - **false**: Disabled.
    shared_ptr<bool> enableAudit_ {};
    // The retention period of hot storage for the V2_Standard (DAS Enterprise Edition (NoSQL-compatible)) version of audit logs. Unit: days.
    shared_ptr<int64_t> hotTtlForV2Standard_ {};
    // Indicates whether a rule is created to ship audit logs to Logtail. For more information about Logtail, see [What is Logtail?](https://help.aliyun.com/document_detail/28979.html). Valid values:
    // 
    // - **1**: A rule is created.
    // 
    // - **0** or **null**: No rule is created.
    shared_ptr<int32_t> isEtlMetaExist_ {};
    // Indicates whether a Simple Log Service project for audit logs exists in the current region. Valid values:
    // 
    // - **1**: The project exists.
    // 
    // - **0** or **null**: The project does not exist.
    shared_ptr<int32_t> isUserProjectLogstoreExist_ {};
    // The maximum storage capacity for the official version of audit logs. A value of -1 indicates that no upper limit is set.
    shared_ptr<int64_t> preserveStorageForStandard_ {};
    // The maximum storage capacity for the free trial version of audit logs. Unit: bytes. The maximum value is 107374182400 bytes.
    shared_ptr<int64_t> preserveStorageForTrail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The version of the audit log feature.
    // 
    // - **Trial**: Free trial version.
    // 
    // - **Standard**: Official version.
    // 
    // - **V2_Standard**: DAS Enterprise Edition (NoSQL-compatible) version.
    shared_ptr<string> serviceType_ {};
    // The retention period of audit logs for the official version. The value ranges from 1 to 365. Unit: days.
    shared_ptr<int64_t> ttlForStandard_ {};
    // The retention period of audit logs for the free trial version. Unit: days.
    shared_ptr<int64_t> ttlForTrail_ {};
    // The retention period of cold storage for the V2_Standard (DAS Enterprise Edition (NoSQL-compatible)) version of audit logs. Unit: days.
    shared_ptr<int64_t> ttlForV2Standard_ {};
    // The storage capacity that is used by audit logs for the official version. Unit: bytes.
    shared_ptr<int64_t> usedStorageForStandard_ {};
    // The storage capacity that is used by audit logs for the free trial version. Unit: bytes.
    shared_ptr<int64_t> usedStorageForTrail_ {};
    // The name of the Simple Log Service project for the audit logs.
    shared_ptr<string> userProjectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
