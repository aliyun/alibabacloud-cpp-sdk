// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTBYMAILFROMANDTAGNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTrackListByMailFromAndTagNameResponseBodyTrackList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListByMailFromAndTagNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListByMailFromAndTagNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_TO_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(TrackList, trackList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrackListByMailFromAndTagNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_FROM_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(TrackList, trackList_);
    };
    GetTrackListByMailFromAndTagNameResponseBody() = default ;
    GetTrackListByMailFromAndTagNameResponseBody(const GetTrackListByMailFromAndTagNameResponseBody &) = default ;
    GetTrackListByMailFromAndTagNameResponseBody(GetTrackListByMailFromAndTagNameResponseBody &&) = default ;
    GetTrackListByMailFromAndTagNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListByMailFromAndTagNameResponseBody() = default ;
    GetTrackListByMailFromAndTagNameResponseBody& operator=(const GetTrackListByMailFromAndTagNameResponseBody &) = default ;
    GetTrackListByMailFromAndTagNameResponseBody& operator=(GetTrackListByMailFromAndTagNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offsetCreateTime_ != nullptr
        && this->offsetCreateTimeDesc_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr
        && this->totalPages_ != nullptr && this->trackList_ != nullptr; };
    // offsetCreateTime Field Functions 
    bool hasOffsetCreateTime() const { return this->offsetCreateTime_ != nullptr;};
    void deleteOffsetCreateTime() { this->offsetCreateTime_ = nullptr;};
    inline string offsetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTime_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBody& setOffsetCreateTime(string offsetCreateTime) { DARABONBA_PTR_SET_VALUE(offsetCreateTime_, offsetCreateTime) };


    // offsetCreateTimeDesc Field Functions 
    bool hasOffsetCreateTimeDesc() const { return this->offsetCreateTimeDesc_ != nullptr;};
    void deleteOffsetCreateTimeDesc() { this->offsetCreateTimeDesc_ = nullptr;};
    inline string offsetCreateTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTimeDesc_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBody& setOffsetCreateTimeDesc(string offsetCreateTimeDesc) { DARABONBA_PTR_SET_VALUE(offsetCreateTimeDesc_, offsetCreateTimeDesc) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetTrackListByMailFromAndTagNameResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTrackListByMailFromAndTagNameResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetTrackListByMailFromAndTagNameResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline string totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, "") };
    inline GetTrackListByMailFromAndTagNameResponseBody& setTotalPages(string totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // trackList Field Functions 
    bool hasTrackList() const { return this->trackList_ != nullptr;};
    void deleteTrackList() { this->trackList_ = nullptr;};
    inline const GetTrackListByMailFromAndTagNameResponseBodyTrackList & trackList() const { DARABONBA_PTR_GET_CONST(trackList_, GetTrackListByMailFromAndTagNameResponseBodyTrackList) };
    inline GetTrackListByMailFromAndTagNameResponseBodyTrackList trackList() { DARABONBA_PTR_GET(trackList_, GetTrackListByMailFromAndTagNameResponseBodyTrackList) };
    inline GetTrackListByMailFromAndTagNameResponseBody& setTrackList(const GetTrackListByMailFromAndTagNameResponseBodyTrackList & trackList) { DARABONBA_PTR_SET_VALUE(trackList_, trackList) };
    inline GetTrackListByMailFromAndTagNameResponseBody& setTrackList(GetTrackListByMailFromAndTagNameResponseBodyTrackList && trackList) { DARABONBA_PTR_SET_RVALUE(trackList_, trackList) };


  protected:
    // Used for pagination. Not set for the first query; for subsequent queries, set to the value of OffsetCreateTime from the previous response. (This field is deprecated)
    std::shared_ptr<string> offsetCreateTime_ = nullptr;
    // (This field is deprecated)
    std::shared_ptr<string> offsetCreateTimeDesc_ = nullptr;
    // Current page number
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // Page size
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // (This field is deprecated)
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<string> totalPages_ = nullptr;
    // Tracking data records
    std::shared_ptr<GetTrackListByMailFromAndTagNameResponseBodyTrackList> trackList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
