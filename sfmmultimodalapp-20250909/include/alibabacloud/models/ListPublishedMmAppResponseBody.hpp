// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDMMAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDMMAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListPublishedMmAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedMmAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublishedVersionInfoList, publishedVersionInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedMmAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublishedVersionInfoList, publishedVersionInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublishedMmAppResponseBody() = default ;
    ListPublishedMmAppResponseBody(const ListPublishedMmAppResponseBody &) = default ;
    ListPublishedMmAppResponseBody(ListPublishedMmAppResponseBody &&) = default ;
    ListPublishedMmAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedMmAppResponseBody() = default ;
    ListPublishedMmAppResponseBody& operator=(const ListPublishedMmAppResponseBody &) = default ;
    ListPublishedMmAppResponseBody& operator=(ListPublishedMmAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishedVersionInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishedVersionInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, PublishedVersionInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      PublishedVersionInfoList() = default ;
      PublishedVersionInfoList(const PublishedVersionInfoList &) = default ;
      PublishedVersionInfoList(PublishedVersionInfoList &&) = default ;
      PublishedVersionInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishedVersionInfoList() = default ;
      PublishedVersionInfoList& operator=(const PublishedVersionInfoList &) = default ;
      PublishedVersionInfoList& operator=(PublishedVersionInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr
        && this->publishTime_ == nullptr && this->version_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline PublishedVersionInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline PublishedVersionInfoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
      inline PublishedVersionInfoList& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline PublishedVersionInfoList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PublishedVersionInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline PublishedVersionInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline PublishedVersionInfoList& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline PublishedVersionInfoList& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> createUserId_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> publishTime_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->publishedVersionInfoList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPublishedMmAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishedMmAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publishedVersionInfoList Field Functions 
    bool hasPublishedVersionInfoList() const { return this->publishedVersionInfoList_ != nullptr;};
    void deletePublishedVersionInfoList() { this->publishedVersionInfoList_ = nullptr;};
    inline const vector<ListPublishedMmAppResponseBody::PublishedVersionInfoList> & getPublishedVersionInfoList() const { DARABONBA_PTR_GET_CONST(publishedVersionInfoList_, vector<ListPublishedMmAppResponseBody::PublishedVersionInfoList>) };
    inline vector<ListPublishedMmAppResponseBody::PublishedVersionInfoList> getPublishedVersionInfoList() { DARABONBA_PTR_GET(publishedVersionInfoList_, vector<ListPublishedMmAppResponseBody::PublishedVersionInfoList>) };
    inline ListPublishedMmAppResponseBody& setPublishedVersionInfoList(const vector<ListPublishedMmAppResponseBody::PublishedVersionInfoList> & publishedVersionInfoList) { DARABONBA_PTR_SET_VALUE(publishedVersionInfoList_, publishedVersionInfoList) };
    inline ListPublishedMmAppResponseBody& setPublishedVersionInfoList(vector<ListPublishedMmAppResponseBody::PublishedVersionInfoList> && publishedVersionInfoList) { DARABONBA_PTR_SET_RVALUE(publishedVersionInfoList_, publishedVersionInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishedMmAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPublishedMmAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<ListPublishedMmAppResponseBody::PublishedVersionInfoList>> publishedVersionInfoList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
