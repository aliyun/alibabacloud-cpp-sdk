// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetAppVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAppVersionsResponseBody() = default ;
    GetAppVersionsResponseBody(const GetAppVersionsResponseBody &) = default ;
    GetAppVersionsResponseBody(GetAppVersionsResponseBody &&) = default ;
    GetAppVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppVersionsResponseBody() = default ;
    GetAppVersionsResponseBody& operator=(const GetAppVersionsResponseBody &) = default ;
    GetAppVersionsResponseBody& operator=(GetAppVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppVersions& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, AppVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      AppVersions() = default ;
      AppVersions(const AppVersions &) = default ;
      AppVersions(AppVersions &&) = default ;
      AppVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppVersions() = default ;
      AppVersions& operator=(const AppVersions &) = default ;
      AppVersions& operator=(AppVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline AppVersions& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AppVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline AppVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The image ID of the application.
      // 
      // This parameter is required.
      shared_ptr<string> imageId_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The application version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->appVersions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // appVersions Field Functions 
    bool hasAppVersions() const { return this->appVersions_ != nullptr;};
    void deleteAppVersions() { this->appVersions_ = nullptr;};
    inline const vector<GetAppVersionsResponseBody::AppVersions> & getAppVersions() const { DARABONBA_PTR_GET_CONST(appVersions_, vector<GetAppVersionsResponseBody::AppVersions>) };
    inline vector<GetAppVersionsResponseBody::AppVersions> getAppVersions() { DARABONBA_PTR_GET(appVersions_, vector<GetAppVersionsResponseBody::AppVersions>) };
    inline GetAppVersionsResponseBody& setAppVersions(const vector<GetAppVersionsResponseBody::AppVersions> & appVersions) { DARABONBA_PTR_SET_VALUE(appVersions_, appVersions) };
    inline GetAppVersionsResponseBody& setAppVersions(vector<GetAppVersionsResponseBody::AppVersions> && appVersions) { DARABONBA_PTR_SET_RVALUE(appVersions_, appVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetAppVersionsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAppVersionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAppVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of application versions.
    shared_ptr<vector<GetAppVersionsResponseBody::AppVersions>> appVersions_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // true
    // 
    // false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
