// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPICTURESEARCHAIBOXESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPICTURESEARCHAIBOXESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryPictureSearchAiboxesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPictureSearchAiboxesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPictureSearchAiboxesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryPictureSearchAiboxesRequest() = default ;
    QueryPictureSearchAiboxesRequest(const QueryPictureSearchAiboxesRequest &) = default ;
    QueryPictureSearchAiboxesRequest(QueryPictureSearchAiboxesRequest &&) = default ;
    QueryPictureSearchAiboxesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPictureSearchAiboxesRequest() = default ;
    QueryPictureSearchAiboxesRequest& operator=(const QueryPictureSearchAiboxesRequest &) = default ;
    QueryPictureSearchAiboxesRequest& operator=(QueryPictureSearchAiboxesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->currentPage_ == nullptr && this->iotInstanceId_ == nullptr && this->pageSize_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline QueryPictureSearchAiboxesRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryPictureSearchAiboxesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryPictureSearchAiboxesRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryPictureSearchAiboxesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Instance ID of the image search application instance. You can call the [QueryPictureSearchApps](https://help.aliyun.com/document_detail/206608.html) operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceId_ {};
    // The page number. Minimum value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the instance. 
    // 
    // You can view the instance ID on the **Instance Overview** page in the IoT Platform console.
    // 
    // > If a public instance does not have an ID, see [How to obtain an instance ID](https://help.aliyun.com/document_detail/267533.html).
    shared_ptr<string> iotInstanceId_ {};
    // The number of entries to return on each page. Valid values: 1 to 30. Default value: 10.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
