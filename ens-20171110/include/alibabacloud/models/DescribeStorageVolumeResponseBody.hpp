// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeStorageVolumeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageVolumeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageVolumes, storageVolumes_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageVolumeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageVolumes, storageVolumes_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStorageVolumeResponseBody() = default ;
    DescribeStorageVolumeResponseBody(const DescribeStorageVolumeResponseBody &) = default ;
    DescribeStorageVolumeResponseBody(DescribeStorageVolumeResponseBody &&) = default ;
    DescribeStorageVolumeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageVolumeResponseBody() = default ;
    DescribeStorageVolumeResponseBody& operator=(const DescribeStorageVolumeResponseBody &) = default ;
    DescribeStorageVolumeResponseBody& operator=(DescribeStorageVolumeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageVolumes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageVolumes& obj) { 
        DARABONBA_PTR_TO_JSON(AuthProtocol, authProtocol_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(IsAuth, isAuth_);
        DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageGatewayId, storageGatewayId_);
        DARABONBA_PTR_TO_JSON(StorageId, storageId_);
        DARABONBA_PTR_TO_JSON(StorageVolumeId, storageVolumeId_);
        DARABONBA_PTR_TO_JSON(StorageVolumeName, storageVolumeName_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      };
      friend void from_json(const Darabonba::Json& j, StorageVolumes& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthProtocol, authProtocol_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(IsAuth, isAuth_);
        DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageGatewayId, storageGatewayId_);
        DARABONBA_PTR_FROM_JSON(StorageId, storageId_);
        DARABONBA_PTR_FROM_JSON(StorageVolumeId, storageVolumeId_);
        DARABONBA_PTR_FROM_JSON(StorageVolumeName, storageVolumeName_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      };
      StorageVolumes() = default ;
      StorageVolumes(const StorageVolumes &) = default ;
      StorageVolumes(StorageVolumes &&) = default ;
      StorageVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageVolumes() = default ;
      StorageVolumes& operator=(const StorageVolumes &) = default ;
      StorageVolumes& operator=(StorageVolumes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authProtocol_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->isAuth_ == nullptr && this->isEnable_ == nullptr
        && this->status_ == nullptr && this->storageGatewayId_ == nullptr && this->storageId_ == nullptr && this->storageVolumeId_ == nullptr && this->storageVolumeName_ == nullptr
        && this->targetName_ == nullptr; };
      // authProtocol Field Functions 
      bool hasAuthProtocol() const { return this->authProtocol_ != nullptr;};
      void deleteAuthProtocol() { this->authProtocol_ = nullptr;};
      inline string getAuthProtocol() const { DARABONBA_PTR_GET_DEFAULT(authProtocol_, "") };
      inline StorageVolumes& setAuthProtocol(string authProtocol) { DARABONBA_PTR_SET_VALUE(authProtocol_, authProtocol) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline StorageVolumes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StorageVolumes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline StorageVolumes& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // isAuth Field Functions 
      bool hasIsAuth() const { return this->isAuth_ != nullptr;};
      void deleteIsAuth() { this->isAuth_ = nullptr;};
      inline int32_t getIsAuth() const { DARABONBA_PTR_GET_DEFAULT(isAuth_, 0) };
      inline StorageVolumes& setIsAuth(int32_t isAuth) { DARABONBA_PTR_SET_VALUE(isAuth_, isAuth) };


      // isEnable Field Functions 
      bool hasIsEnable() const { return this->isEnable_ != nullptr;};
      void deleteIsEnable() { this->isEnable_ = nullptr;};
      inline int32_t getIsEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, 0) };
      inline StorageVolumes& setIsEnable(int32_t isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StorageVolumes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageGatewayId Field Functions 
      bool hasStorageGatewayId() const { return this->storageGatewayId_ != nullptr;};
      void deleteStorageGatewayId() { this->storageGatewayId_ = nullptr;};
      inline string getStorageGatewayId() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayId_, "") };
      inline StorageVolumes& setStorageGatewayId(string storageGatewayId) { DARABONBA_PTR_SET_VALUE(storageGatewayId_, storageGatewayId) };


      // storageId Field Functions 
      bool hasStorageId() const { return this->storageId_ != nullptr;};
      void deleteStorageId() { this->storageId_ = nullptr;};
      inline string getStorageId() const { DARABONBA_PTR_GET_DEFAULT(storageId_, "") };
      inline StorageVolumes& setStorageId(string storageId) { DARABONBA_PTR_SET_VALUE(storageId_, storageId) };


      // storageVolumeId Field Functions 
      bool hasStorageVolumeId() const { return this->storageVolumeId_ != nullptr;};
      void deleteStorageVolumeId() { this->storageVolumeId_ = nullptr;};
      inline string getStorageVolumeId() const { DARABONBA_PTR_GET_DEFAULT(storageVolumeId_, "") };
      inline StorageVolumes& setStorageVolumeId(string storageVolumeId) { DARABONBA_PTR_SET_VALUE(storageVolumeId_, storageVolumeId) };


      // storageVolumeName Field Functions 
      bool hasStorageVolumeName() const { return this->storageVolumeName_ != nullptr;};
      void deleteStorageVolumeName() { this->storageVolumeName_ = nullptr;};
      inline string getStorageVolumeName() const { DARABONBA_PTR_GET_DEFAULT(storageVolumeName_, "") };
      inline StorageVolumes& setStorageVolumeName(string storageVolumeName) { DARABONBA_PTR_SET_VALUE(storageVolumeName_, storageVolumeName) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline StorageVolumes& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    protected:
      // The authentication protocol. The value is set to **CHAP**.
      shared_ptr<string> authProtocol_ {};
      // The time when the volume was created. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the volume.
      shared_ptr<string> description_ {};
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
      // Indicates whether authentication is enabled. Valid values:
      // 
      // *   **1**: Authentication is enabled.
      // *   **0** (default): Authentication is disabled.
      shared_ptr<int32_t> isAuth_ {};
      // Indicates whether the volume is enabled. Valid values:
      // 
      // *   **1** (default): The volume is enabled.
      // *   **0**: The volume is disabled.
      shared_ptr<int32_t> isEnable_ {};
      // The status of the volume. Valid values:
      // 
      // *   creating
      // *   available
      // *   deleting
      // *   deleted
      shared_ptr<string> status_ {};
      // The ID of the storage gateway.
      shared_ptr<string> storageGatewayId_ {};
      // The ID of the storage medium.
      shared_ptr<string> storageId_ {};
      // The ID of the volume.
      shared_ptr<string> storageVolumeId_ {};
      // The name of the volume.
      shared_ptr<string> storageVolumeName_ {};
      // The destination of the volume.
      shared_ptr<string> targetName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->storageVolumes_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeStorageVolumeResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeStorageVolumeResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageVolumeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageVolumes Field Functions 
    bool hasStorageVolumes() const { return this->storageVolumes_ != nullptr;};
    void deleteStorageVolumes() { this->storageVolumes_ = nullptr;};
    inline const vector<DescribeStorageVolumeResponseBody::StorageVolumes> & getStorageVolumes() const { DARABONBA_PTR_GET_CONST(storageVolumes_, vector<DescribeStorageVolumeResponseBody::StorageVolumes>) };
    inline vector<DescribeStorageVolumeResponseBody::StorageVolumes> getStorageVolumes() { DARABONBA_PTR_GET(storageVolumes_, vector<DescribeStorageVolumeResponseBody::StorageVolumes>) };
    inline DescribeStorageVolumeResponseBody& setStorageVolumes(const vector<DescribeStorageVolumeResponseBody::StorageVolumes> & storageVolumes) { DARABONBA_PTR_SET_VALUE(storageVolumes_, storageVolumes) };
    inline DescribeStorageVolumeResponseBody& setStorageVolumes(vector<DescribeStorageVolumeResponseBody::StorageVolumes> && storageVolumes) { DARABONBA_PTR_SET_RVALUE(storageVolumes_, storageVolumes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeStorageVolumeResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of returned results.
    shared_ptr<vector<DescribeStorageVolumeResponseBody::StorageVolumes>> storageVolumes_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
