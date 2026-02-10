// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTRESPONSEBODY_HPP_
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
  class DescribeAccesskeyLeakListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccesskeyLeakListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyLeakList, accessKeyLeakList_);
      DARABONBA_PTR_TO_JSON(AkLeakCount, akLeakCount_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccesskeyLeakListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyLeakList, accessKeyLeakList_);
      DARABONBA_PTR_FROM_JSON(AkLeakCount, akLeakCount_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccesskeyLeakListResponseBody() = default ;
    DescribeAccesskeyLeakListResponseBody(const DescribeAccesskeyLeakListResponseBody &) = default ;
    DescribeAccesskeyLeakListResponseBody(DescribeAccesskeyLeakListResponseBody &&) = default ;
    DescribeAccesskeyLeakListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccesskeyLeakListResponseBody() = default ;
    DescribeAccesskeyLeakListResponseBody& operator=(const DescribeAccesskeyLeakListResponseBody &) = default ;
    DescribeAccesskeyLeakListResponseBody& operator=(DescribeAccesskeyLeakListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessKeyLeakList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessKeyLeakList& obj) { 
        DARABONBA_PTR_TO_JSON(AccesskeyId, accesskeyId_);
        DARABONBA_PTR_TO_JSON(AliUserName, aliUserName_);
        DARABONBA_PTR_TO_JSON(Asset, asset_);
        DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
        DARABONBA_PTR_TO_JSON(DealType, dealType_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessKeyLeakList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccesskeyId, accesskeyId_);
        DARABONBA_PTR_FROM_JSON(AliUserName, aliUserName_);
        DARABONBA_PTR_FROM_JSON(Asset, asset_);
        DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
        DARABONBA_PTR_FROM_JSON(DealType, dealType_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
      };
      AccessKeyLeakList() = default ;
      AccessKeyLeakList(const AccessKeyLeakList &) = default ;
      AccessKeyLeakList(AccessKeyLeakList &&) = default ;
      AccessKeyLeakList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessKeyLeakList() = default ;
      AccessKeyLeakList& operator=(const AccessKeyLeakList &) = default ;
      AccessKeyLeakList& operator=(AccessKeyLeakList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accesskeyId_ == nullptr
        && this->aliUserName_ == nullptr && this->asset_ == nullptr && this->dealTime_ == nullptr && this->dealType_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->url_ == nullptr && this->userType_ == nullptr; };
      // accesskeyId Field Functions 
      bool hasAccesskeyId() const { return this->accesskeyId_ != nullptr;};
      void deleteAccesskeyId() { this->accesskeyId_ = nullptr;};
      inline string getAccesskeyId() const { DARABONBA_PTR_GET_DEFAULT(accesskeyId_, "") };
      inline AccessKeyLeakList& setAccesskeyId(string accesskeyId) { DARABONBA_PTR_SET_VALUE(accesskeyId_, accesskeyId) };


      // aliUserName Field Functions 
      bool hasAliUserName() const { return this->aliUserName_ != nullptr;};
      void deleteAliUserName() { this->aliUserName_ = nullptr;};
      inline string getAliUserName() const { DARABONBA_PTR_GET_DEFAULT(aliUserName_, "") };
      inline AccessKeyLeakList& setAliUserName(string aliUserName) { DARABONBA_PTR_SET_VALUE(aliUserName_, aliUserName) };


      // asset Field Functions 
      bool hasAsset() const { return this->asset_ != nullptr;};
      void deleteAsset() { this->asset_ = nullptr;};
      inline string getAsset() const { DARABONBA_PTR_GET_DEFAULT(asset_, "") };
      inline AccessKeyLeakList& setAsset(string asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };


      // dealTime Field Functions 
      bool hasDealTime() const { return this->dealTime_ != nullptr;};
      void deleteDealTime() { this->dealTime_ = nullptr;};
      inline string getDealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, "") };
      inline AccessKeyLeakList& setDealTime(string dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


      // dealType Field Functions 
      bool hasDealType() const { return this->dealType_ != nullptr;};
      void deleteDealType() { this->dealType_ = nullptr;};
      inline string getDealType() const { DARABONBA_PTR_GET_DEFAULT(dealType_, "") };
      inline AccessKeyLeakList& setDealType(string dealType) { DARABONBA_PTR_SET_VALUE(dealType_, dealType) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline AccessKeyLeakList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline AccessKeyLeakList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AccessKeyLeakList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AccessKeyLeakList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline AccessKeyLeakList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline AccessKeyLeakList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // The ID of the AccessKey pair that is leaked.
      shared_ptr<string> accesskeyId_ {};
      // The name of the Alibaba Cloud account that is affected.
      shared_ptr<string> aliUserName_ {};
      // The platform to which the asset belongs. The value is fixed as **Cloud platform**.
      shared_ptr<string> asset_ {};
      // The time when the AccessKey pair leak is handled.
      shared_ptr<string> dealTime_ {};
      // The method to handle the AccessKey pair leak. Valid values:
      // 
      // *   **pending**: The AccessKey pair leak is unhandled.
      // *   **manual**: The AccessKey pair leak is manually handled.
      // *   **disable**: The AccessKey pair leak is disabled.
      // *   **add-whitelist**: The AccessKey pair leak is added to the whitelist.
      shared_ptr<string> dealType_ {};
      // The time when the AccessKey pair leak is first detected. The value of this parameter is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The primary key ID of the database.
      shared_ptr<int64_t> id_ {};
      // Indicates whether the AccessKey pair leak is handled. Valid values:
      // 
      // *   **pending**: unhandled
      // *   **dealed**: handled
      shared_ptr<string> status_ {};
      // The type of the leak. The value is fixed as **AccessKey**.
      shared_ptr<string> type_ {};
      // The URL of the platform on which the AccessKey pair leak is detected.
      shared_ptr<string> url_ {};
      // The type of the account to which the leaked AccessKey pair belongs. Valid values:
      // 
      // *   **master**: Alibaba Cloud account
      // *   **ram**: RAM user
      shared_ptr<string> userType_ {};
    };

    virtual bool empty() const override { return this->accessKeyLeakList_ == nullptr
        && this->akLeakCount_ == nullptr && this->currentPage_ == nullptr && this->gmtLast_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessKeyLeakList Field Functions 
    bool hasAccessKeyLeakList() const { return this->accessKeyLeakList_ != nullptr;};
    void deleteAccessKeyLeakList() { this->accessKeyLeakList_ = nullptr;};
    inline const vector<DescribeAccesskeyLeakListResponseBody::AccessKeyLeakList> & getAccessKeyLeakList() const { DARABONBA_PTR_GET_CONST(accessKeyLeakList_, vector<DescribeAccesskeyLeakListResponseBody::AccessKeyLeakList>) };
    inline vector<DescribeAccesskeyLeakListResponseBody::AccessKeyLeakList> getAccessKeyLeakList() { DARABONBA_PTR_GET(accessKeyLeakList_, vector<DescribeAccesskeyLeakListResponseBody::AccessKeyLeakList>) };
    inline DescribeAccesskeyLeakListResponseBody& setAccessKeyLeakList(const vector<DescribeAccesskeyLeakListResponseBody::AccessKeyLeakList> & accessKeyLeakList) { DARABONBA_PTR_SET_VALUE(accessKeyLeakList_, accessKeyLeakList) };
    inline DescribeAccesskeyLeakListResponseBody& setAccessKeyLeakList(vector<DescribeAccesskeyLeakListResponseBody::AccessKeyLeakList> && accessKeyLeakList) { DARABONBA_PTR_SET_RVALUE(accessKeyLeakList_, accessKeyLeakList) };


    // akLeakCount Field Functions 
    bool hasAkLeakCount() const { return this->akLeakCount_ != nullptr;};
    void deleteAkLeakCount() { this->akLeakCount_ = nullptr;};
    inline int32_t getAkLeakCount() const { DARABONBA_PTR_GET_DEFAULT(akLeakCount_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setAkLeakCount(int32_t akLeakCount) { DARABONBA_PTR_SET_VALUE(akLeakCount_, akLeakCount) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // gmtLast Field Functions 
    bool hasGmtLast() const { return this->gmtLast_ != nullptr;};
    void deleteGmtLast() { this->gmtLast_ = nullptr;};
    inline int64_t getGmtLast() const { DARABONBA_PTR_GET_DEFAULT(gmtLast_, 0L) };
    inline DescribeAccesskeyLeakListResponseBody& setGmtLast(int64_t gmtLast) { DARABONBA_PTR_SET_VALUE(gmtLast_, gmtLast) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccesskeyLeakListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccesskeyLeakListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details about AccessKey pair leaks.
    shared_ptr<vector<DescribeAccesskeyLeakListResponseBody::AccessKeyLeakList>> accessKeyLeakList_ {};
    // The number of AccessKey pair leaks that are unhandled.
    shared_ptr<int32_t> akLeakCount_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // This parameter is deprecated.
    shared_ptr<int64_t> gmtLast_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of AccessKey pair leaks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
