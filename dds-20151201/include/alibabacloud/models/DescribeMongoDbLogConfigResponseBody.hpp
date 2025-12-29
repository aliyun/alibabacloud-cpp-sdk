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
      DARABONBA_PTR_TO_JSON(IsEtlMetaExist, isEtlMetaExist_);
      DARABONBA_PTR_TO_JSON(IsUserProjectLogstoreExist, isUserProjectLogstoreExist_);
      DARABONBA_PTR_TO_JSON(PreserveStorageForStandard, preserveStorageForStandard_);
      DARABONBA_PTR_TO_JSON(PreserveStorageForTrail, preserveStorageForTrail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(TtlForStandard, ttlForStandard_);
      DARABONBA_PTR_TO_JSON(TtlForTrail, ttlForTrail_);
      DARABONBA_PTR_TO_JSON(UsedStorageForStandard, usedStorageForStandard_);
      DARABONBA_PTR_TO_JSON(UsedStorageForTrail, usedStorageForTrail_);
      DARABONBA_PTR_TO_JSON(UserProjectName, userProjectName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMongoDBLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_FROM_JSON(IsEtlMetaExist, isEtlMetaExist_);
      DARABONBA_PTR_FROM_JSON(IsUserProjectLogstoreExist, isUserProjectLogstoreExist_);
      DARABONBA_PTR_FROM_JSON(PreserveStorageForStandard, preserveStorageForStandard_);
      DARABONBA_PTR_FROM_JSON(PreserveStorageForTrail, preserveStorageForTrail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(TtlForStandard, ttlForStandard_);
      DARABONBA_PTR_FROM_JSON(TtlForTrail, ttlForTrail_);
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
        && this->isEtlMetaExist_ == nullptr && this->isUserProjectLogstoreExist_ == nullptr && this->preserveStorageForStandard_ == nullptr && this->preserveStorageForTrail_ == nullptr && this->requestId_ == nullptr
        && this->serviceType_ == nullptr && this->ttlForStandard_ == nullptr && this->ttlForTrail_ == nullptr && this->usedStorageForStandard_ == nullptr && this->usedStorageForTrail_ == nullptr
        && this->userProjectName_ == nullptr; };
    // enableAudit Field Functions 
    bool hasEnableAudit() const { return this->enableAudit_ != nullptr;};
    void deleteEnableAudit() { this->enableAudit_ = nullptr;};
    inline bool getEnableAudit() const { DARABONBA_PTR_GET_DEFAULT(enableAudit_, false) };
    inline DescribeMongoDBLogConfigResponseBody& setEnableAudit(bool enableAudit) { DARABONBA_PTR_SET_VALUE(enableAudit_, enableAudit) };


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
    // Indicates whether to enable the audit log feature.
    // 
    // *   **true**: The audit log feature is enabled.
    // *   **false**: The audit log feature is disabled.
    shared_ptr<bool> enableAudit_ {};
    // Indicates whether a rule to distribute logs to Logtail is created. For more information, see [Logtail overview](https://help.aliyun.com/document_detail/28979.html). Valid values:
    // 
    // *   **1**: A rule to distribute logs to Logtail is created.
    // *   **0** or **null**: A rule to distribute logs to Logtail is not created.
    shared_ptr<int32_t> isEtlMetaExist_ {};
    // Indicates whether a project exists in the current region. Valid values:
    // 
    // *   **1**: A logging project exists in the current region.
    // *   **0** or **null**: A logging project does not exist in the current region.
    shared_ptr<int32_t> isUserProjectLogstoreExist_ {};
    // The maximum storage capacity for the formal edition of the audit log feature. If the value is -1, no maximum storage capacity is set.
    shared_ptr<int64_t> preserveStorageForStandard_ {};
    // The maximum storage capacity for the free trial edition of the audit log feature. Unit: bytes. You can set the maximum storage capacity to 107,374,182,400 bytes.
    shared_ptr<int64_t> preserveStorageForTrail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The type of the audit log feature. Valid values:
    // 
    // *   **Trail**: the free trial edition
    // *   **Standard**: the official edition
    shared_ptr<string> serviceType_ {};
    // The retention period for the official edition of the audit log feature. Valid values: 1 to 365. Unit: day.
    shared_ptr<int64_t> ttlForStandard_ {};
    // The retention period for the free trial edition of the audit log feature.
    shared_ptr<int64_t> ttlForTrail_ {};
    // The used storage capacity for the formal edition of the audit log feature. Unit: bytes.
    shared_ptr<int64_t> usedStorageForStandard_ {};
    // The used storage capacity for the free trial edition of the audit log feature. Unit: bytes.
    shared_ptr<int64_t> usedStorageForTrail_ {};
    // The name of the project.
    shared_ptr<string> userProjectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
