// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADVANCEDSEARCHFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADVANCEDSEARCHFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAdvancedSearchFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdvancedSearchFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceSearch, resourceSearch_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdvancedSearchFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceSearch, resourceSearch_);
    };
    GetAdvancedSearchFileResponseBody() = default ;
    GetAdvancedSearchFileResponseBody(const GetAdvancedSearchFileResponseBody &) = default ;
    GetAdvancedSearchFileResponseBody(GetAdvancedSearchFileResponseBody &&) = default ;
    GetAdvancedSearchFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdvancedSearchFileResponseBody() = default ;
    GetAdvancedSearchFileResponseBody& operator=(const GetAdvancedSearchFileResponseBody &) = default ;
    GetAdvancedSearchFileResponseBody& operator=(GetAdvancedSearchFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceSearch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSearch& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSearch& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ResourceSearch() = default ;
      ResourceSearch(const ResourceSearch &) = default ;
      ResourceSearch(ResourceSearch &&) = default ;
      ResourceSearch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSearch() = default ;
      ResourceSearch& operator=(const ResourceSearch &) = default ;
      ResourceSearch& operator=(ResourceSearch &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->resourceInventoryGenerateTime_ == nullptr && this->status_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline ResourceSearch& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // resourceInventoryGenerateTime Field Functions 
      bool hasResourceInventoryGenerateTime() const { return this->resourceInventoryGenerateTime_ != nullptr;};
      void deleteResourceInventoryGenerateTime() { this->resourceInventoryGenerateTime_ = nullptr;};
      inline int64_t getResourceInventoryGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceInventoryGenerateTime_, 0L) };
      inline ResourceSearch& setResourceInventoryGenerateTime(int64_t resourceInventoryGenerateTime) { DARABONBA_PTR_SET_VALUE(resourceInventoryGenerateTime_, resourceInventoryGenerateTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceSearch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The download URL of the resource file.
      shared_ptr<string> downloadUrl_ {};
      // The time when the resource file was generated. The value is a timestamp. Unit: milliseconds.
      shared_ptr<int64_t> resourceInventoryGenerateTime_ {};
      // The generation status of the resource file. Valid values:
      // 
      // *   CREATING: The resource file is being generated.
      // *   COMPLETE: The resource file is generated.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceSearch_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdvancedSearchFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceSearch Field Functions 
    bool hasResourceSearch() const { return this->resourceSearch_ != nullptr;};
    void deleteResourceSearch() { this->resourceSearch_ = nullptr;};
    inline const GetAdvancedSearchFileResponseBody::ResourceSearch & getResourceSearch() const { DARABONBA_PTR_GET_CONST(resourceSearch_, GetAdvancedSearchFileResponseBody::ResourceSearch) };
    inline GetAdvancedSearchFileResponseBody::ResourceSearch getResourceSearch() { DARABONBA_PTR_GET(resourceSearch_, GetAdvancedSearchFileResponseBody::ResourceSearch) };
    inline GetAdvancedSearchFileResponseBody& setResourceSearch(const GetAdvancedSearchFileResponseBody::ResourceSearch & resourceSearch) { DARABONBA_PTR_SET_VALUE(resourceSearch_, resourceSearch) };
    inline GetAdvancedSearchFileResponseBody& setResourceSearch(GetAdvancedSearchFileResponseBody::ResourceSearch && resourceSearch) { DARABONBA_PTR_SET_RVALUE(resourceSearch_, resourceSearch) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the resource file.
    shared_ptr<GetAdvancedSearchFileResponseBody::ResourceSearch> resourceSearch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
