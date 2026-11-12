// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIMAGESHAREACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIMAGESHAREACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListCustomImageShareAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomImageShareAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageShareUsers, imageShareUsers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomImageShareAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageShareUsers, imageShareUsers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomImageShareAccountsResponseBody() = default ;
    ListCustomImageShareAccountsResponseBody(const ListCustomImageShareAccountsResponseBody &) = default ;
    ListCustomImageShareAccountsResponseBody(ListCustomImageShareAccountsResponseBody &&) = default ;
    ListCustomImageShareAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomImageShareAccountsResponseBody() = default ;
    ListCustomImageShareAccountsResponseBody& operator=(const ListCustomImageShareAccountsResponseBody &) = default ;
    ListCustomImageShareAccountsResponseBody& operator=(ListCustomImageShareAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageShareUsers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageShareUsers& obj) { 
        DARABONBA_PTR_TO_JSON(SharedTime, sharedTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ImageShareUsers& obj) { 
        DARABONBA_PTR_FROM_JSON(SharedTime, sharedTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ImageShareUsers() = default ;
      ImageShareUsers(const ImageShareUsers &) = default ;
      ImageShareUsers(ImageShareUsers &&) = default ;
      ImageShareUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageShareUsers() = default ;
      ImageShareUsers& operator=(const ImageShareUsers &) = default ;
      ImageShareUsers& operator=(ImageShareUsers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sharedTime_ == nullptr
        && this->userId_ == nullptr; };
      // sharedTime Field Functions 
      bool hasSharedTime() const { return this->sharedTime_ != nullptr;};
      void deleteSharedTime() { this->sharedTime_ = nullptr;};
      inline string getSharedTime() const { DARABONBA_PTR_GET_DEFAULT(sharedTime_, "") };
      inline ImageShareUsers& setSharedTime(string sharedTime) { DARABONBA_PTR_SET_VALUE(sharedTime_, sharedTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ImageShareUsers& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The time when the custom image was shared, in the format of YYYY-MM-DD HH:mm:ss.S.
      shared_ptr<string> sharedTime_ {};
      // The Alibaba Cloud account ID with which the custom image is shared.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->imageShareUsers_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // imageShareUsers Field Functions 
    bool hasImageShareUsers() const { return this->imageShareUsers_ != nullptr;};
    void deleteImageShareUsers() { this->imageShareUsers_ = nullptr;};
    inline const vector<ListCustomImageShareAccountsResponseBody::ImageShareUsers> & getImageShareUsers() const { DARABONBA_PTR_GET_CONST(imageShareUsers_, vector<ListCustomImageShareAccountsResponseBody::ImageShareUsers>) };
    inline vector<ListCustomImageShareAccountsResponseBody::ImageShareUsers> getImageShareUsers() { DARABONBA_PTR_GET(imageShareUsers_, vector<ListCustomImageShareAccountsResponseBody::ImageShareUsers>) };
    inline ListCustomImageShareAccountsResponseBody& setImageShareUsers(const vector<ListCustomImageShareAccountsResponseBody::ImageShareUsers> & imageShareUsers) { DARABONBA_PTR_SET_VALUE(imageShareUsers_, imageShareUsers) };
    inline ListCustomImageShareAccountsResponseBody& setImageShareUsers(vector<ListCustomImageShareAccountsResponseBody::ImageShareUsers> && imageShareUsers) { DARABONBA_PTR_SET_RVALUE(imageShareUsers_, imageShareUsers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomImageShareAccountsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomImageShareAccountsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomImageShareAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomImageShareAccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the shared custom images.
    shared_ptr<vector<ListCustomImageShareAccountsResponseBody::ImageShareUsers>> imageShareUsers_ {};
    // The page number of the paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
