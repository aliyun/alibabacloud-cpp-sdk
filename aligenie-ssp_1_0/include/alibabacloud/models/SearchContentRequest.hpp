// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SearchContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SearchContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    SearchContentRequest() = default ;
    SearchContentRequest(const SearchContentRequest &) = default ;
    SearchContentRequest(SearchContentRequest &&) = default ;
    SearchContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchContentRequest() = default ;
    SearchContentRequest& operator=(const SearchContentRequest &) = default ;
    SearchContentRequest& operator=(SearchContentRequest &&) = default ;
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
      // The value corresponding to the encoding type.
      // 
      // When the encoding type is SKILL_ID, the value is the Skill ID of the application.  
      // When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier for Tmall Genie, and each method corresponds to a different encoding type.  
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer link.  
      // `SKILL_ID`: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, set to either `userOpenId` or `userUnionId`.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The Type of the User ID.
      // 
      // OPEN_ID: The default User ID identity.  
      // UNION_ID: The organization-dimension User ID identity. This value is available only after an organization has been requested on the Tmall Genie Skills Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when `IdType` is `UNION_ID`.
      shared_ptr<string> organizationId_ {};
    };

    class Request : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Request& obj) { 
        DARABONBA_PTR_TO_JSON(Cate, cate_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Query, query_);
        DARABONBA_PTR_TO_JSON(QueryAlbum, queryAlbum_);
        DARABONBA_PTR_TO_JSON(SubCate, subCate_);
      };
      friend void from_json(const Darabonba::Json& j, Request& obj) { 
        DARABONBA_PTR_FROM_JSON(Cate, cate_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
        DARABONBA_PTR_FROM_JSON(QueryAlbum, queryAlbum_);
        DARABONBA_PTR_FROM_JSON(SubCate, subCate_);
      };
      Request() = default ;
      Request(const Request &) = default ;
      Request(Request &&) = default ;
      Request(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Request() = default ;
      Request& operator=(const Request &) = default ;
      Request& operator=(Request &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cate_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr && this->queryAlbum_ == nullptr && this->subCate_ == nullptr; };
      // cate Field Functions 
      bool hasCate() const { return this->cate_ != nullptr;};
      void deleteCate() { this->cate_ = nullptr;};
      inline string getCate() const { DARABONBA_PTR_GET_DEFAULT(cate_, "") };
      inline Request& setCate(string cate) { DARABONBA_PTR_SET_VALUE(cate_, cate) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Request& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline Request& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // queryAlbum Field Functions 
      bool hasQueryAlbum() const { return this->queryAlbum_ != nullptr;};
      void deleteQueryAlbum() { this->queryAlbum_ = nullptr;};
      inline bool getQueryAlbum() const { DARABONBA_PTR_GET_DEFAULT(queryAlbum_, false) };
      inline Request& setQueryAlbum(bool queryAlbum) { DARABONBA_PTR_SET_VALUE(queryAlbum_, queryAlbum) };


      // subCate Field Functions 
      bool hasSubCate() const { return this->subCate_ != nullptr;};
      void deleteSubCate() { this->subCate_ = nullptr;};
      inline string getSubCate() const { DARABONBA_PTR_GET_DEFAULT(subCate_, "") };
      inline Request& setSubCate(string subCate) { DARABONBA_PTR_SET_VALUE(subCate_, subCate) };


    protected:
      // The search scope: music or audio.  
      // Input parameter enumeration: music | program
      shared_ptr<string> cate_ {};
      // Page number
      shared_ptr<int32_t> pageNum_ {};
      // Number of records per page
      shared_ptr<int32_t> pageSize_ {};
      // Query keyword
      shared_ptr<string> query_ {};
      // Whether to query albums
      shared_ptr<bool> queryAlbum_ {};
      // When `cate` is `music`, `subCate` can be omitted.  
      // If `subCate` is provided, it can be one of the following:  
      // `song` (Song), `singer` (Artist), `album` (Album).  
      // 
      // When `cate` is `program`, `subCate` can be omitted.  
      // If `subCate` is provided, it can be one of the following:  
      // `album` (Album), `audio` (Program Audio), `radio` (Radio Station).
      shared_ptr<string> subCate_ {};
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
      // Value corresponding to the encoding type.  
      // 
      // When the encoding type is `SKILL_ID`, the value is the application\\"s Skill ID.  
      // When the encoding type is `PACKAGE_NAME`, the value is the `packageName` of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID for Tmall Genie, and each method corresponds to a different encoding type.  
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer link.  
      // `SKILL_ID`: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to either `deviceOpenId` or `deviceUnionId`.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of device ID.  
      // 
      // `OPEN_ID`: Default device ID identity.  
      // `UNION_ID`: Organization-dimension device ID identity. This value is available only after an organization has been registered on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when `IdType` is `UNION_ID`.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->request_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const SearchContentRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, SearchContentRequest::DeviceInfo) };
    inline SearchContentRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, SearchContentRequest::DeviceInfo) };
    inline SearchContentRequest& setDeviceInfo(const SearchContentRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline SearchContentRequest& setDeviceInfo(SearchContentRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const SearchContentRequest::Request & getRequest() const { DARABONBA_PTR_GET_CONST(request_, SearchContentRequest::Request) };
    inline SearchContentRequest::Request getRequest() { DARABONBA_PTR_GET(request_, SearchContentRequest::Request) };
    inline SearchContentRequest& setRequest(const SearchContentRequest::Request & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline SearchContentRequest& setRequest(SearchContentRequest::Request && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const SearchContentRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, SearchContentRequest::UserInfo) };
    inline SearchContentRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, SearchContentRequest::UserInfo) };
    inline SearchContentRequest& setUserInfo(const SearchContentRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline SearchContentRequest& setUserInfo(SearchContentRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identification information
    // 
    // This parameter is required.
    shared_ptr<SearchContentRequest::DeviceInfo> deviceInfo_ {};
    // Request Parameters
    // 
    // This parameter is required.
    shared_ptr<SearchContentRequest::Request> request_ {};
    // User identification information
    // 
    // This parameter is required.
    shared_ptr<SearchContentRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
