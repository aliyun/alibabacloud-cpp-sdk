// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTLINKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTLINKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotLinksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotLinksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotLinks, snapshotLinks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotLinksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotLinks, snapshotLinks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSnapshotLinksResponseBody() = default ;
    DescribeSnapshotLinksResponseBody(const DescribeSnapshotLinksResponseBody &) = default ;
    DescribeSnapshotLinksResponseBody(DescribeSnapshotLinksResponseBody &&) = default ;
    DescribeSnapshotLinksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotLinksResponseBody() = default ;
    DescribeSnapshotLinksResponseBody& operator=(const DescribeSnapshotLinksResponseBody &) = default ;
    DescribeSnapshotLinksResponseBody& operator=(DescribeSnapshotLinksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotLinks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotLinks& obj) { 
        DARABONBA_PTR_TO_JSON(SnapshotLink, snapshotLink_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotLinks& obj) { 
        DARABONBA_PTR_FROM_JSON(SnapshotLink, snapshotLink_);
      };
      SnapshotLinks() = default ;
      SnapshotLinks(const SnapshotLinks &) = default ;
      SnapshotLinks(SnapshotLinks &&) = default ;
      SnapshotLinks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotLinks() = default ;
      SnapshotLinks& operator=(const SnapshotLinks &) = default ;
      SnapshotLinks& operator=(SnapshotLinks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnapshotLink : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotLink& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SnapshotLinkId, snapshotLinkId_);
          DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
          DARABONBA_PTR_TO_JSON(SourceDiskName, sourceDiskName_);
          DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
          DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        };
        friend void from_json(const Darabonba::Json& j, SnapshotLink& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SnapshotLinkId, snapshotLinkId_);
          DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
          DARABONBA_PTR_FROM_JSON(SourceDiskName, sourceDiskName_);
          DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
          DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        };
        SnapshotLink() = default ;
        SnapshotLink(const SnapshotLink &) = default ;
        SnapshotLink(SnapshotLink &&) = default ;
        SnapshotLink(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotLink() = default ;
        SnapshotLink& operator=(const SnapshotLink &) = default ;
        SnapshotLink& operator=(SnapshotLink &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instantAccess_ == nullptr && this->regionId_ == nullptr && this->snapshotLinkId_ == nullptr
        && this->sourceDiskId_ == nullptr && this->sourceDiskName_ == nullptr && this->sourceDiskSize_ == nullptr && this->sourceDiskType_ == nullptr && this->totalCount_ == nullptr
        && this->totalSize_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline SnapshotLink& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SnapshotLink& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline SnapshotLink& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instantAccess Field Functions 
        bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
        void deleteInstantAccess() { this->instantAccess_ = nullptr;};
        inline bool getInstantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
        inline SnapshotLink& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SnapshotLink& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // snapshotLinkId Field Functions 
        bool hasSnapshotLinkId() const { return this->snapshotLinkId_ != nullptr;};
        void deleteSnapshotLinkId() { this->snapshotLinkId_ = nullptr;};
        inline string getSnapshotLinkId() const { DARABONBA_PTR_GET_DEFAULT(snapshotLinkId_, "") };
        inline SnapshotLink& setSnapshotLinkId(string snapshotLinkId) { DARABONBA_PTR_SET_VALUE(snapshotLinkId_, snapshotLinkId) };


        // sourceDiskId Field Functions 
        bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
        void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
        inline string getSourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
        inline SnapshotLink& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


        // sourceDiskName Field Functions 
        bool hasSourceDiskName() const { return this->sourceDiskName_ != nullptr;};
        void deleteSourceDiskName() { this->sourceDiskName_ = nullptr;};
        inline string getSourceDiskName() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskName_, "") };
        inline SnapshotLink& setSourceDiskName(string sourceDiskName) { DARABONBA_PTR_SET_VALUE(sourceDiskName_, sourceDiskName) };


        // sourceDiskSize Field Functions 
        bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
        void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
        inline int32_t getSourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, 0) };
        inline SnapshotLink& setSourceDiskSize(int32_t sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


        // sourceDiskType Field Functions 
        bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
        void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
        inline string getSourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
        inline SnapshotLink& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline SnapshotLink& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
        inline SnapshotLink& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      protected:
        // The type of the snapshot chain. Valid values:
        // 
        // *   standard: standard snapshot chain.
        // *   archive: archive snapshot chain.
        // *   flash: instant access snapshot chain.
        shared_ptr<string> category_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // Indicates whether the instant access feature is enabled. Valid values:
        // 
        // *   true: The instant access feature is enabled. The feature can be enabled only for Enterprise SSDs (ESSDs).
        // *   false: The instant access feature is disabled. The snapshot is a standard snapshot for which the instant access feature is disabled.
        // 
        // >  This parameter is no longer used. By default, standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
        shared_ptr<bool> instantAccess_ {};
        // The region ID of the source disk.
        shared_ptr<string> regionId_ {};
        // The ID of the snapshot chain.
        shared_ptr<string> snapshotLinkId_ {};
        // The ID of the source disk. This parameter is retained even if the source disk is deleted.
        shared_ptr<string> sourceDiskId_ {};
        // The name of the source disk.
        shared_ptr<string> sourceDiskName_ {};
        // The capacity of the source disk. Unit: GiB.
        shared_ptr<int32_t> sourceDiskSize_ {};
        // The type of the source disk. Valid values:
        // 
        // *   system: system disk
        // *   data: data disk
        shared_ptr<string> sourceDiskType_ {};
        // The total number of snapshots.
        shared_ptr<int32_t> totalCount_ {};
        // The total size of all snapshots in the snapshot chain. Unit: byte.
        shared_ptr<int64_t> totalSize_ {};
      };

      virtual bool empty() const override { return this->snapshotLink_ == nullptr; };
      // snapshotLink Field Functions 
      bool hasSnapshotLink() const { return this->snapshotLink_ != nullptr;};
      void deleteSnapshotLink() { this->snapshotLink_ = nullptr;};
      inline const vector<SnapshotLinks::SnapshotLink> & getSnapshotLink() const { DARABONBA_PTR_GET_CONST(snapshotLink_, vector<SnapshotLinks::SnapshotLink>) };
      inline vector<SnapshotLinks::SnapshotLink> getSnapshotLink() { DARABONBA_PTR_GET(snapshotLink_, vector<SnapshotLinks::SnapshotLink>) };
      inline SnapshotLinks& setSnapshotLink(const vector<SnapshotLinks::SnapshotLink> & snapshotLink) { DARABONBA_PTR_SET_VALUE(snapshotLink_, snapshotLink) };
      inline SnapshotLinks& setSnapshotLink(vector<SnapshotLinks::SnapshotLink> && snapshotLink) { DARABONBA_PTR_SET_RVALUE(snapshotLink_, snapshotLink) };


    protected:
      shared_ptr<vector<SnapshotLinks::SnapshotLink>> snapshotLink_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snapshotLinks_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotLinksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnapshotLinksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnapshotLinksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotLinksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotLinks Field Functions 
    bool hasSnapshotLinks() const { return this->snapshotLinks_ != nullptr;};
    void deleteSnapshotLinks() { this->snapshotLinks_ = nullptr;};
    inline const DescribeSnapshotLinksResponseBody::SnapshotLinks & getSnapshotLinks() const { DARABONBA_PTR_GET_CONST(snapshotLinks_, DescribeSnapshotLinksResponseBody::SnapshotLinks) };
    inline DescribeSnapshotLinksResponseBody::SnapshotLinks getSnapshotLinks() { DARABONBA_PTR_GET(snapshotLinks_, DescribeSnapshotLinksResponseBody::SnapshotLinks) };
    inline DescribeSnapshotLinksResponseBody& setSnapshotLinks(const DescribeSnapshotLinksResponseBody::SnapshotLinks & snapshotLinks) { DARABONBA_PTR_SET_VALUE(snapshotLinks_, snapshotLinks) };
    inline DescribeSnapshotLinksResponseBody& setSnapshotLinks(DescribeSnapshotLinksResponseBody::SnapshotLinks && snapshotLinks) { DARABONBA_PTR_SET_RVALUE(snapshotLinks_, snapshotLinks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnapshotLinksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the snapshot chains.
    shared_ptr<DescribeSnapshotLinksResponseBody::SnapshotLinks> snapshotLinks_ {};
    // The total number of snapshot chains.
    // 
    // > When using the `MaxResults` and `NextToken` parameters for a paginated query, the returned `TotalCount` parameter value is invalid.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
