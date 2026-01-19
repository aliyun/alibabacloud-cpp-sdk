// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPKEYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPKEYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAppKeyPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppKeyPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppKeyPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeAppKeyPageResponseBody() = default ;
    DescribeAppKeyPageResponseBody(const DescribeAppKeyPageResponseBody &) = default ;
    DescribeAppKeyPageResponseBody(DescribeAppKeyPageResponseBody &&) = default ;
    DescribeAppKeyPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppKeyPageResponseBody() = default ;
    DescribeAppKeyPageResponseBody& operator=(const DescribeAppKeyPageResponseBody &) = default ;
    DescribeAppKeyPageResponseBody& operator=(DescribeAppKeyPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(androidSdkUrl, androidSdkUrl_);
        DARABONBA_PTR_TO_JSON(androidSdkVersion, androidSdkVersion_);
        DARABONBA_PTR_TO_JSON(appKey, appKey_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(iosSdkUrl, iosSdkUrl_);
        DARABONBA_PTR_TO_JSON(iosSdkVersion, iosSdkVersion_);
        DARABONBA_PTR_TO_JSON(memo, memo_);
        DARABONBA_PTR_TO_JSON(sdkItems, sdkItems_);
        DARABONBA_PTR_TO_JSON(used, used_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(androidSdkUrl, androidSdkUrl_);
        DARABONBA_PTR_FROM_JSON(androidSdkVersion, androidSdkVersion_);
        DARABONBA_PTR_FROM_JSON(appKey, appKey_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(iosSdkUrl, iosSdkUrl_);
        DARABONBA_PTR_FROM_JSON(iosSdkVersion, iosSdkVersion_);
        DARABONBA_PTR_FROM_JSON(memo, memo_);
        DARABONBA_PTR_FROM_JSON(sdkItems, sdkItems_);
        DARABONBA_PTR_FROM_JSON(used, used_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->androidSdkUrl_ == nullptr
        && this->androidSdkVersion_ == nullptr && this->appKey_ == nullptr && this->gmtCreate_ == nullptr && this->iosSdkUrl_ == nullptr && this->iosSdkVersion_ == nullptr
        && this->memo_ == nullptr && this->sdkItems_ == nullptr && this->used_ == nullptr; };
      // androidSdkUrl Field Functions 
      bool hasAndroidSdkUrl() const { return this->androidSdkUrl_ != nullptr;};
      void deleteAndroidSdkUrl() { this->androidSdkUrl_ = nullptr;};
      inline string getAndroidSdkUrl() const { DARABONBA_PTR_GET_DEFAULT(androidSdkUrl_, "") };
      inline ResultObject& setAndroidSdkUrl(string androidSdkUrl) { DARABONBA_PTR_SET_VALUE(androidSdkUrl_, androidSdkUrl) };


      // androidSdkVersion Field Functions 
      bool hasAndroidSdkVersion() const { return this->androidSdkVersion_ != nullptr;};
      void deleteAndroidSdkVersion() { this->androidSdkVersion_ = nullptr;};
      inline string getAndroidSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(androidSdkVersion_, "") };
      inline ResultObject& setAndroidSdkVersion(string androidSdkVersion) { DARABONBA_PTR_SET_VALUE(androidSdkVersion_, androidSdkVersion) };


      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline ResultObject& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // iosSdkUrl Field Functions 
      bool hasIosSdkUrl() const { return this->iosSdkUrl_ != nullptr;};
      void deleteIosSdkUrl() { this->iosSdkUrl_ = nullptr;};
      inline string getIosSdkUrl() const { DARABONBA_PTR_GET_DEFAULT(iosSdkUrl_, "") };
      inline ResultObject& setIosSdkUrl(string iosSdkUrl) { DARABONBA_PTR_SET_VALUE(iosSdkUrl_, iosSdkUrl) };


      // iosSdkVersion Field Functions 
      bool hasIosSdkVersion() const { return this->iosSdkVersion_ != nullptr;};
      void deleteIosSdkVersion() { this->iosSdkVersion_ = nullptr;};
      inline string getIosSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(iosSdkVersion_, "") };
      inline ResultObject& setIosSdkVersion(string iosSdkVersion) { DARABONBA_PTR_SET_VALUE(iosSdkVersion_, iosSdkVersion) };


      // memo Field Functions 
      bool hasMemo() const { return this->memo_ != nullptr;};
      void deleteMemo() { this->memo_ = nullptr;};
      inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
      inline ResultObject& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


      // sdkItems Field Functions 
      bool hasSdkItems() const { return this->sdkItems_ != nullptr;};
      void deleteSdkItems() { this->sdkItems_ = nullptr;};
      inline string getSdkItems() const { DARABONBA_PTR_GET_DEFAULT(sdkItems_, "") };
      inline ResultObject& setSdkItems(string sdkItems) { DARABONBA_PTR_SET_VALUE(sdkItems_, sdkItems) };


      // used Field Functions 
      bool hasUsed() const { return this->used_ != nullptr;};
      void deleteUsed() { this->used_ = nullptr;};
      inline string getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, "") };
      inline ResultObject& setUsed(string used) { DARABONBA_PTR_SET_VALUE(used_, used) };


    protected:
      // Android SDK download URL.
      shared_ptr<string> androidSdkUrl_ {};
      // Android SDK version number.
      shared_ptr<string> androidSdkVersion_ {};
      // Application appkey.
      shared_ptr<string> appKey_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // iOS SDK download URL.
      shared_ptr<string> iosSdkUrl_ {};
      // iOS SDK version number.
      shared_ptr<string> iosSdkVersion_ {};
      // Memo.
      shared_ptr<string> memo_ {};
      // Deprecated.
      shared_ptr<string> sdkItems_ {};
      // Whether this appKey is integrated.
      shared_ptr<string> used_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppKeyPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAppKeyPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppKeyPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeAppKeyPageResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeAppKeyPageResponseBody::ResultObject>) };
    inline vector<DescribeAppKeyPageResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeAppKeyPageResponseBody::ResultObject>) };
    inline DescribeAppKeyPageResponseBody& setResultObject(const vector<DescribeAppKeyPageResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAppKeyPageResponseBody& setResultObject(vector<DescribeAppKeyPageResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeAppKeyPageResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeAppKeyPageResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Number of items per page, default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // Returned object.
    shared_ptr<vector<DescribeAppKeyPageResponseBody::ResultObject>> resultObject_ {};
    // Total number of items.
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
