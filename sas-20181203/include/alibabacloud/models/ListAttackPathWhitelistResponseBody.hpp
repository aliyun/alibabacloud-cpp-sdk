// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathWhitelistList, attackPathWhitelistList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathWhitelistList, attackPathWhitelistList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAttackPathWhitelistResponseBody() = default ;
    ListAttackPathWhitelistResponseBody(const ListAttackPathWhitelistResponseBody &) = default ;
    ListAttackPathWhitelistResponseBody(ListAttackPathWhitelistResponseBody &&) = default ;
    ListAttackPathWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathWhitelistResponseBody() = default ;
    ListAttackPathWhitelistResponseBody& operator=(const ListAttackPathWhitelistResponseBody &) = default ;
    ListAttackPathWhitelistResponseBody& operator=(ListAttackPathWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Number of items displayed on the current page in a paginated query.
      shared_ptr<int32_t> count_ {};
      // Current page number in a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // Number of items per page in the returned data.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of items.
      shared_ptr<int32_t> totalCount_ {};
    };

    class AttackPathWhitelistList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathWhitelistList& obj) { 
        DARABONBA_PTR_TO_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
        DARABONBA_PTR_TO_JSON(LastModifiedTimestamp, lastModifiedTimestamp_);
        DARABONBA_PTR_TO_JSON(PathName, pathName_);
        DARABONBA_PTR_TO_JSON(PathType, pathType_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(WhitelistName, whitelistName_);
        DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathWhitelistList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackPathWhitelistId, attackPathWhitelistId_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTimestamp, lastModifiedTimestamp_);
        DARABONBA_PTR_FROM_JSON(PathName, pathName_);
        DARABONBA_PTR_FROM_JSON(PathType, pathType_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(WhitelistName, whitelistName_);
        DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
      };
      AttackPathWhitelistList() = default ;
      AttackPathWhitelistList(const AttackPathWhitelistList &) = default ;
      AttackPathWhitelistList(AttackPathWhitelistList &&) = default ;
      AttackPathWhitelistList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathWhitelistList() = default ;
      AttackPathWhitelistList& operator=(const AttackPathWhitelistList &) = default ;
      AttackPathWhitelistList& operator=(AttackPathWhitelistList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackPathWhitelistId_ == nullptr
        && this->lastModifiedTimestamp_ == nullptr && this->pathName_ == nullptr && this->pathType_ == nullptr && this->remark_ == nullptr && this->whitelistName_ == nullptr
        && this->whitelistType_ == nullptr; };
      // attackPathWhitelistId Field Functions 
      bool hasAttackPathWhitelistId() const { return this->attackPathWhitelistId_ != nullptr;};
      void deleteAttackPathWhitelistId() { this->attackPathWhitelistId_ = nullptr;};
      inline string getAttackPathWhitelistId() const { DARABONBA_PTR_GET_DEFAULT(attackPathWhitelistId_, "") };
      inline AttackPathWhitelistList& setAttackPathWhitelistId(string attackPathWhitelistId) { DARABONBA_PTR_SET_VALUE(attackPathWhitelistId_, attackPathWhitelistId) };


      // lastModifiedTimestamp Field Functions 
      bool hasLastModifiedTimestamp() const { return this->lastModifiedTimestamp_ != nullptr;};
      void deleteLastModifiedTimestamp() { this->lastModifiedTimestamp_ = nullptr;};
      inline int64_t getLastModifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTimestamp_, 0L) };
      inline AttackPathWhitelistList& setLastModifiedTimestamp(int64_t lastModifiedTimestamp) { DARABONBA_PTR_SET_VALUE(lastModifiedTimestamp_, lastModifiedTimestamp) };


      // pathName Field Functions 
      bool hasPathName() const { return this->pathName_ != nullptr;};
      void deletePathName() { this->pathName_ = nullptr;};
      inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
      inline AttackPathWhitelistList& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


      // pathType Field Functions 
      bool hasPathType() const { return this->pathType_ != nullptr;};
      void deletePathType() { this->pathType_ = nullptr;};
      inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
      inline AttackPathWhitelistList& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline AttackPathWhitelistList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // whitelistName Field Functions 
      bool hasWhitelistName() const { return this->whitelistName_ != nullptr;};
      void deleteWhitelistName() { this->whitelistName_ = nullptr;};
      inline string getWhitelistName() const { DARABONBA_PTR_GET_DEFAULT(whitelistName_, "") };
      inline AttackPathWhitelistList& setWhitelistName(string whitelistName) { DARABONBA_PTR_SET_VALUE(whitelistName_, whitelistName) };


      // whitelistType Field Functions 
      bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
      void deleteWhitelistType() { this->whitelistType_ = nullptr;};
      inline string getWhitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
      inline AttackPathWhitelistList& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


    protected:
      // Attack path whitelist ID.
      shared_ptr<string> attackPathWhitelistId_ {};
      // Timestamp of the last modification, in milliseconds.
      shared_ptr<int64_t> lastModifiedTimestamp_ {};
      // Path name.
      shared_ptr<string> pathName_ {};
      // Path type.
      shared_ptr<string> pathType_ {};
      // Remark.
      shared_ptr<string> remark_ {};
      // Whitelist name.
      shared_ptr<string> whitelistName_ {};
      // Whitelist type.
      shared_ptr<string> whitelistType_ {};
    };

    virtual bool empty() const override { return this->attackPathWhitelistList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // attackPathWhitelistList Field Functions 
    bool hasAttackPathWhitelistList() const { return this->attackPathWhitelistList_ != nullptr;};
    void deleteAttackPathWhitelistList() { this->attackPathWhitelistList_ = nullptr;};
    inline const vector<ListAttackPathWhitelistResponseBody::AttackPathWhitelistList> & getAttackPathWhitelistList() const { DARABONBA_PTR_GET_CONST(attackPathWhitelistList_, vector<ListAttackPathWhitelistResponseBody::AttackPathWhitelistList>) };
    inline vector<ListAttackPathWhitelistResponseBody::AttackPathWhitelistList> getAttackPathWhitelistList() { DARABONBA_PTR_GET(attackPathWhitelistList_, vector<ListAttackPathWhitelistResponseBody::AttackPathWhitelistList>) };
    inline ListAttackPathWhitelistResponseBody& setAttackPathWhitelistList(const vector<ListAttackPathWhitelistResponseBody::AttackPathWhitelistList> & attackPathWhitelistList) { DARABONBA_PTR_SET_VALUE(attackPathWhitelistList_, attackPathWhitelistList) };
    inline ListAttackPathWhitelistResponseBody& setAttackPathWhitelistList(vector<ListAttackPathWhitelistResponseBody::AttackPathWhitelistList> && attackPathWhitelistList) { DARABONBA_PTR_SET_RVALUE(attackPathWhitelistList_, attackPathWhitelistList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAttackPathWhitelistResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAttackPathWhitelistResponseBody::PageInfo) };
    inline ListAttackPathWhitelistResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAttackPathWhitelistResponseBody::PageInfo) };
    inline ListAttackPathWhitelistResponseBody& setPageInfo(const ListAttackPathWhitelistResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAttackPathWhitelistResponseBody& setPageInfo(ListAttackPathWhitelistResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttackPathWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of attack path whitelists.
    shared_ptr<vector<ListAttackPathWhitelistResponseBody::AttackPathWhitelistList>> attackPathWhitelistList_ {};
    // Page information for paginated queries.
    shared_ptr<ListAttackPathWhitelistResponseBody::PageInfo> pageInfo_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
