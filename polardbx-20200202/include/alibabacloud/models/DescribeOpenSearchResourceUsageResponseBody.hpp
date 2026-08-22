// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeOpenSearchResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenSearchResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenSearchResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenSearchResourceUsageResponseBody() = default ;
    DescribeOpenSearchResourceUsageResponseBody(const DescribeOpenSearchResourceUsageResponseBody &) = default ;
    DescribeOpenSearchResourceUsageResponseBody(DescribeOpenSearchResourceUsageResponseBody &&) = default ;
    DescribeOpenSearchResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenSearchResourceUsageResponseBody() = default ;
    DescribeOpenSearchResourceUsageResponseBody& operator=(const DescribeOpenSearchResourceUsageResponseBody &) = default ;
    DescribeOpenSearchResourceUsageResponseBody& operator=(DescribeOpenSearchResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DocCount, docCount_);
        DARABONBA_PTR_TO_JSON(IndexCount, indexCount_);
        DARABONBA_PTR_TO_JSON(StorageSizeInBytes, storageSizeInBytes_);
        DARABONBA_PTR_TO_JSON(StorageTotalInBytes, storageTotalInBytes_);
        DARABONBA_PTR_TO_JSON(StorageUsagePercent, storageUsagePercent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DocCount, docCount_);
        DARABONBA_PTR_FROM_JSON(IndexCount, indexCount_);
        DARABONBA_PTR_FROM_JSON(StorageSizeInBytes, storageSizeInBytes_);
        DARABONBA_PTR_FROM_JSON(StorageTotalInBytes, storageTotalInBytes_);
        DARABONBA_PTR_FROM_JSON(StorageUsagePercent, storageUsagePercent_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docCount_ == nullptr
        && this->indexCount_ == nullptr && this->storageSizeInBytes_ == nullptr && this->storageTotalInBytes_ == nullptr && this->storageUsagePercent_ == nullptr; };
      // docCount Field Functions 
      bool hasDocCount() const { return this->docCount_ != nullptr;};
      void deleteDocCount() { this->docCount_ = nullptr;};
      inline int64_t getDocCount() const { DARABONBA_PTR_GET_DEFAULT(docCount_, 0L) };
      inline Data& setDocCount(int64_t docCount) { DARABONBA_PTR_SET_VALUE(docCount_, docCount) };


      // indexCount Field Functions 
      bool hasIndexCount() const { return this->indexCount_ != nullptr;};
      void deleteIndexCount() { this->indexCount_ = nullptr;};
      inline int32_t getIndexCount() const { DARABONBA_PTR_GET_DEFAULT(indexCount_, 0) };
      inline Data& setIndexCount(int32_t indexCount) { DARABONBA_PTR_SET_VALUE(indexCount_, indexCount) };


      // storageSizeInBytes Field Functions 
      bool hasStorageSizeInBytes() const { return this->storageSizeInBytes_ != nullptr;};
      void deleteStorageSizeInBytes() { this->storageSizeInBytes_ = nullptr;};
      inline int64_t getStorageSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(storageSizeInBytes_, 0L) };
      inline Data& setStorageSizeInBytes(int64_t storageSizeInBytes) { DARABONBA_PTR_SET_VALUE(storageSizeInBytes_, storageSizeInBytes) };


      // storageTotalInBytes Field Functions 
      bool hasStorageTotalInBytes() const { return this->storageTotalInBytes_ != nullptr;};
      void deleteStorageTotalInBytes() { this->storageTotalInBytes_ = nullptr;};
      inline int64_t getStorageTotalInBytes() const { DARABONBA_PTR_GET_DEFAULT(storageTotalInBytes_, 0L) };
      inline Data& setStorageTotalInBytes(int64_t storageTotalInBytes) { DARABONBA_PTR_SET_VALUE(storageTotalInBytes_, storageTotalInBytes) };


      // storageUsagePercent Field Functions 
      bool hasStorageUsagePercent() const { return this->storageUsagePercent_ != nullptr;};
      void deleteStorageUsagePercent() { this->storageUsagePercent_ = nullptr;};
      inline double getStorageUsagePercent() const { DARABONBA_PTR_GET_DEFAULT(storageUsagePercent_, 0.0) };
      inline Data& setStorageUsagePercent(double storageUsagePercent) { DARABONBA_PTR_SET_VALUE(storageUsagePercent_, storageUsagePercent) };


    protected:
      // The total number of documents in the cluster.
      shared_ptr<int64_t> docCount_ {};
      // The number of indexes. This is a filter condition for the number of indexes that the missing index table currently has. The input format is `operator + separator "" + index count`, for example, `>=100`.
      shared_ptr<int32_t> indexCount_ {};
      // The used storage space, in bytes.
      shared_ptr<int64_t> storageSizeInBytes_ {};
      // The total storage capacity, in bytes.
      shared_ptr<int64_t> storageTotalInBytes_ {};
      // The storage space usage.
      shared_ptr<double> storageUsagePercent_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The type of the authentication principal.
      shared_ptr<string> authPrincipalType_ {};
      // The diagnostic information.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // NoPermissionType
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeOpenSearchResourceUsageResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeOpenSearchResourceUsageResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchResourceUsageResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeOpenSearchResourceUsageResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchResourceUsageResponseBody& setAccessDeniedDetail(const DescribeOpenSearchResourceUsageResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeOpenSearchResourceUsageResponseBody& setAccessDeniedDetail(DescribeOpenSearchResourceUsageResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenSearchResourceUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenSearchResourceUsageResponseBody::Data) };
    inline DescribeOpenSearchResourceUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenSearchResourceUsageResponseBody::Data) };
    inline DescribeOpenSearchResourceUsageResponseBody& setData(const DescribeOpenSearchResourceUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenSearchResourceUsageResponseBody& setData(DescribeOpenSearchResourceUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenSearchResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<DescribeOpenSearchResourceUsageResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The returned data.
    shared_ptr<DescribeOpenSearchResourceUsageResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
