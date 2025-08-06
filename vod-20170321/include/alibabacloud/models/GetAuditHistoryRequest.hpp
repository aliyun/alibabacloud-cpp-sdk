// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetAuditHistoryRequest() = default ;
    GetAuditHistoryRequest(const GetAuditHistoryRequest &) = default ;
    GetAuditHistoryRequest(GetAuditHistoryRequest &&) = default ;
    GetAuditHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditHistoryRequest() = default ;
    GetAuditHistoryRequest& operator=(const GetAuditHistoryRequest &) = default ;
    GetAuditHistoryRequest& operator=(GetAuditHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->sortBy_ != nullptr && this->videoId_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetAuditHistoryRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAuditHistoryRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetAuditHistoryRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetAuditHistoryRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries to return on each page. Default value: **10**. Maximum value: **100**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The sorting rule of the results. Valid values:
    // *   **CreationTime:Desc**: sorts the results based on the creation time in descending order. This is the default value.
    // *   **CreationTime:Asc**: sorts the results based on the creation time in ascending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The ID of the video.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
