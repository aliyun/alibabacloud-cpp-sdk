// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPICTURESEARCHDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPICTURESEARCHDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryPictureSearchDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPictureSearchDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPictureSearchDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryPictureSearchDevicesRequest() = default ;
    QueryPictureSearchDevicesRequest(const QueryPictureSearchDevicesRequest &) = default ;
    QueryPictureSearchDevicesRequest(QueryPictureSearchDevicesRequest &&) = default ;
    QueryPictureSearchDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPictureSearchDevicesRequest() = default ;
    QueryPictureSearchDevicesRequest& operator=(const QueryPictureSearchDevicesRequest &) = default ;
    QueryPictureSearchDevicesRequest& operator=(QueryPictureSearchDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline QueryPictureSearchDevicesRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryPictureSearchDevicesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryPictureSearchDevicesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Instance ID of the image search application instance. You can call the [QueryPictureSearchApps](https://help.aliyun.com/document_detail/206608.html) operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceId_ {};
    // The page number of the page to return. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries to return on each page. Minimum value: 1. Maximum value: 50. Default value: 10.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
