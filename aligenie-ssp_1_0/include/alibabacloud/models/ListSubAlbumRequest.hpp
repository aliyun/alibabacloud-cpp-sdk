// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBALBUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBALBUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubAlbumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAlbumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(QuerySubscriptionAlbumRequest, querySubscriptionAlbumRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAlbumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(QuerySubscriptionAlbumRequest, querySubscriptionAlbumRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListSubAlbumRequest() = default ;
    ListSubAlbumRequest(const ListSubAlbumRequest &) = default ;
    ListSubAlbumRequest(ListSubAlbumRequest &&) = default ;
    ListSubAlbumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAlbumRequest() = default ;
    ListSubAlbumRequest& operator=(const ListSubAlbumRequest &) = default ;
    ListSubAlbumRequest& operator=(ListSubAlbumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      shared_ptr<string> encodeKey_ {};
      shared_ptr<string> encodeType_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> idType_ {};
      shared_ptr<string> organizationId_ {};
    };

    class QuerySubscriptionAlbumRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuerySubscriptionAlbumRequest& obj) { 
        DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, QuerySubscriptionAlbumRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      QuerySubscriptionAlbumRequest() = default ;
      QuerySubscriptionAlbumRequest(const QuerySubscriptionAlbumRequest &) = default ;
      QuerySubscriptionAlbumRequest(QuerySubscriptionAlbumRequest &&) = default ;
      QuerySubscriptionAlbumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuerySubscriptionAlbumRequest() = default ;
      QuerySubscriptionAlbumRequest& operator=(const QuerySubscriptionAlbumRequest &) = default ;
      QuerySubscriptionAlbumRequest& operator=(QuerySubscriptionAlbumRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Page : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Page& obj) { 
          DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        };
        friend void from_json(const Darabonba::Json& j, Page& obj) { 
          DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        };
        Page() = default ;
        Page(const Page &) = default ;
        Page(Page &&) = default ;
        Page(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Page() = default ;
        Page& operator=(const Page &) = default ;
        Page& operator=(Page &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr; };
        // pageNum Field Functions 
        bool hasPageNum() const { return this->pageNum_ != nullptr;};
        void deletePageNum() { this->pageNum_ = nullptr;};
        inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
        inline Page& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      protected:
        // Page number
        shared_ptr<int32_t> pageNum_ {};
        // Number of entries per page
        shared_ptr<int32_t> pageSize_ {};
      };

      virtual bool empty() const override { return this->albumId_ == nullptr
        && this->categoryId_ == nullptr && this->page_ == nullptr && this->title_ == nullptr; };
      // albumId Field Functions 
      bool hasAlbumId() const { return this->albumId_ != nullptr;};
      void deleteAlbumId() { this->albumId_ = nullptr;};
      inline string getAlbumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
      inline QuerySubscriptionAlbumRequest& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline QuerySubscriptionAlbumRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline const QuerySubscriptionAlbumRequest::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, QuerySubscriptionAlbumRequest::Page) };
      inline QuerySubscriptionAlbumRequest::Page getPage() { DARABONBA_PTR_GET(page_, QuerySubscriptionAlbumRequest::Page) };
      inline QuerySubscriptionAlbumRequest& setPage(const QuerySubscriptionAlbumRequest::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
      inline QuerySubscriptionAlbumRequest& setPage(QuerySubscriptionAlbumRequest::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline QuerySubscriptionAlbumRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Album ID
      shared_ptr<string> albumId_ {};
      // Category ID
      // 
      // This parameter is required.
      shared_ptr<int32_t> categoryId_ {};
      // Pagination Parameters
      // 
      // This parameter is required.
      shared_ptr<QuerySubscriptionAlbumRequest::Page> page_ {};
      // Album title
      shared_ptr<string> title_ {};
    };

    class DeviceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      DeviceInfo() = default ;
      DeviceInfo(const DeviceInfo &) = default ;
      DeviceInfo(DeviceInfo &&) = default ;
      DeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfo() = default ;
      DeviceInfo& operator=(const DeviceInfo &) = default ;
      DeviceInfo& operator=(DeviceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline DeviceInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline DeviceInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DeviceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline DeviceInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline DeviceInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      shared_ptr<string> encodeKey_ {};
      shared_ptr<string> encodeType_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> idType_ {};
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->querySubscriptionAlbumRequest_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListSubAlbumRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListSubAlbumRequest::DeviceInfo) };
    inline ListSubAlbumRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListSubAlbumRequest::DeviceInfo) };
    inline ListSubAlbumRequest& setDeviceInfo(const ListSubAlbumRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListSubAlbumRequest& setDeviceInfo(ListSubAlbumRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // querySubscriptionAlbumRequest Field Functions 
    bool hasQuerySubscriptionAlbumRequest() const { return this->querySubscriptionAlbumRequest_ != nullptr;};
    void deleteQuerySubscriptionAlbumRequest() { this->querySubscriptionAlbumRequest_ = nullptr;};
    inline const ListSubAlbumRequest::QuerySubscriptionAlbumRequest & getQuerySubscriptionAlbumRequest() const { DARABONBA_PTR_GET_CONST(querySubscriptionAlbumRequest_, ListSubAlbumRequest::QuerySubscriptionAlbumRequest) };
    inline ListSubAlbumRequest::QuerySubscriptionAlbumRequest getQuerySubscriptionAlbumRequest() { DARABONBA_PTR_GET(querySubscriptionAlbumRequest_, ListSubAlbumRequest::QuerySubscriptionAlbumRequest) };
    inline ListSubAlbumRequest& setQuerySubscriptionAlbumRequest(const ListSubAlbumRequest::QuerySubscriptionAlbumRequest & querySubscriptionAlbumRequest) { DARABONBA_PTR_SET_VALUE(querySubscriptionAlbumRequest_, querySubscriptionAlbumRequest) };
    inline ListSubAlbumRequest& setQuerySubscriptionAlbumRequest(ListSubAlbumRequest::QuerySubscriptionAlbumRequest && querySubscriptionAlbumRequest) { DARABONBA_PTR_SET_RVALUE(querySubscriptionAlbumRequest_, querySubscriptionAlbumRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListSubAlbumRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListSubAlbumRequest::UserInfo) };
    inline ListSubAlbumRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, ListSubAlbumRequest::UserInfo) };
    inline ListSubAlbumRequest& setUserInfo(const ListSubAlbumRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListSubAlbumRequest& setUserInfo(ListSubAlbumRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device Information
    shared_ptr<ListSubAlbumRequest::DeviceInfo> deviceInfo_ {};
    // request
    shared_ptr<ListSubAlbumRequest::QuerySubscriptionAlbumRequest> querySubscriptionAlbumRequest_ {};
    // User information
    shared_ptr<ListSubAlbumRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
