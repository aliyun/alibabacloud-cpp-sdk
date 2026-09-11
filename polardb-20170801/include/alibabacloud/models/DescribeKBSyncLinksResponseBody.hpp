// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKBSYNCLINKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKBSYNCLINKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKBSyncLinksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKBSyncLinksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKBSyncLinksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeKBSyncLinksResponseBody() = default ;
    DescribeKBSyncLinksResponseBody(const DescribeKBSyncLinksResponseBody &) = default ;
    DescribeKBSyncLinksResponseBody(DescribeKBSyncLinksResponseBody &&) = default ;
    DescribeKBSyncLinksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKBSyncLinksResponseBody() = default ;
    DescribeKBSyncLinksResponseBody& operator=(const DescribeKBSyncLinksResponseBody &) = default ;
    DescribeKBSyncLinksResponseBody& operator=(DescribeKBSyncLinksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImPlatform, imPlatform_);
        DARABONBA_PTR_TO_JSON(LinkId, linkId_);
        DARABONBA_PTR_TO_JSON(LinkName, linkName_);
        DARABONBA_PTR_TO_JSON(SourceDir, sourceDir_);
        DARABONBA_PTR_TO_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
        DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImPlatform, imPlatform_);
        DARABONBA_PTR_FROM_JSON(LinkId, linkId_);
        DARABONBA_PTR_FROM_JSON(LinkName, linkName_);
        DARABONBA_PTR_FROM_JSON(SourceDir, sourceDir_);
        DARABONBA_PTR_FROM_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
        DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->imPlatform_ == nullptr && this->linkId_ == nullptr && this->linkName_ == nullptr
        && this->sourceDir_ == nullptr && this->syncIntervalMinutes_ == nullptr && this->syncStatus_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Items& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Items& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // imPlatform Field Functions 
      bool hasImPlatform() const { return this->imPlatform_ != nullptr;};
      void deleteImPlatform() { this->imPlatform_ = nullptr;};
      inline string getImPlatform() const { DARABONBA_PTR_GET_DEFAULT(imPlatform_, "") };
      inline Items& setImPlatform(string imPlatform) { DARABONBA_PTR_SET_VALUE(imPlatform_, imPlatform) };


      // linkId Field Functions 
      bool hasLinkId() const { return this->linkId_ != nullptr;};
      void deleteLinkId() { this->linkId_ = nullptr;};
      inline string getLinkId() const { DARABONBA_PTR_GET_DEFAULT(linkId_, "") };
      inline Items& setLinkId(string linkId) { DARABONBA_PTR_SET_VALUE(linkId_, linkId) };


      // linkName Field Functions 
      bool hasLinkName() const { return this->linkName_ != nullptr;};
      void deleteLinkName() { this->linkName_ = nullptr;};
      inline string getLinkName() const { DARABONBA_PTR_GET_DEFAULT(linkName_, "") };
      inline Items& setLinkName(string linkName) { DARABONBA_PTR_SET_VALUE(linkName_, linkName) };


      // sourceDir Field Functions 
      bool hasSourceDir() const { return this->sourceDir_ != nullptr;};
      void deleteSourceDir() { this->sourceDir_ = nullptr;};
      inline string getSourceDir() const { DARABONBA_PTR_GET_DEFAULT(sourceDir_, "") };
      inline Items& setSourceDir(string sourceDir) { DARABONBA_PTR_SET_VALUE(sourceDir_, sourceDir) };


      // syncIntervalMinutes Field Functions 
      bool hasSyncIntervalMinutes() const { return this->syncIntervalMinutes_ != nullptr;};
      void deleteSyncIntervalMinutes() { this->syncIntervalMinutes_ = nullptr;};
      inline int32_t getSyncIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(syncIntervalMinutes_, 0) };
      inline Items& setSyncIntervalMinutes(int32_t syncIntervalMinutes) { DARABONBA_PTR_SET_VALUE(syncIntervalMinutes_, syncIntervalMinutes) };


      // syncStatus Field Functions 
      bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
      void deleteSyncStatus() { this->syncStatus_ = nullptr;};
      inline string getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
      inline Items& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    protected:
      // The client ID.
      shared_ptr<string> clientId_ {};
      // The creation time.
      shared_ptr<string> creationTime_ {};
      // The description of the synchronization link.
      shared_ptr<string> description_ {};
      // The source channel of the synchronization link.
      shared_ptr<string> imPlatform_ {};
      // The synchronization link ID.
      shared_ptr<string> linkId_ {};
      // The link name.
      shared_ptr<string> linkName_ {};
      // The source directory address for synchronization.
      shared_ptr<string> sourceDir_ {};
      // The synchronization interval. Unit: minutes.
      shared_ptr<int32_t> syncIntervalMinutes_ {};
      // The synchronization status. Valid values:
      // - CREATING
      // - RUNNING
      // - PAUSED
      // - DELETING
      shared_ptr<string> syncStatus_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeKBSyncLinksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeKBSyncLinksResponseBody::Items>) };
    inline vector<DescribeKBSyncLinksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeKBSyncLinksResponseBody::Items>) };
    inline DescribeKBSyncLinksResponseBody& setItems(const vector<DescribeKBSyncLinksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeKBSyncLinksResponseBody& setItems(vector<DescribeKBSyncLinksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKBSyncLinksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKBSyncLinksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKBSyncLinksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeKBSyncLinksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of synchronization links.
    shared_ptr<vector<DescribeKBSyncLinksResponseBody::Items>> items_ {};
    // The page number of the current results.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page in the current results.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of synchronization links that match the query conditions.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
