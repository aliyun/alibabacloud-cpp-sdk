// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTrackListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetTrackListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrackListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_TO_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrackListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OffsetCreateTime, offsetCreateTime_);
      DARABONBA_PTR_FROM_JSON(OffsetCreateTimeDesc, offsetCreateTimeDesc_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    GetTrackListResponseBody() = default ;
    GetTrackListResponseBody(const GetTrackListResponseBody &) = default ;
    GetTrackListResponseBody(GetTrackListResponseBody &&) = default ;
    GetTrackListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrackListResponseBody() = default ;
    GetTrackListResponseBody& operator=(const GetTrackListResponseBody &) = default ;
    GetTrackListResponseBody& operator=(GetTrackListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offsetCreateTime_ != nullptr
        && this->offsetCreateTimeDesc_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr
        && this->totalPages_ != nullptr && this->data_ != nullptr; };
    // offsetCreateTime Field Functions 
    bool hasOffsetCreateTime() const { return this->offsetCreateTime_ != nullptr;};
    void deleteOffsetCreateTime() { this->offsetCreateTime_ = nullptr;};
    inline string offsetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTime_, "") };
    inline GetTrackListResponseBody& setOffsetCreateTime(string offsetCreateTime) { DARABONBA_PTR_SET_VALUE(offsetCreateTime_, offsetCreateTime) };


    // offsetCreateTimeDesc Field Functions 
    bool hasOffsetCreateTimeDesc() const { return this->offsetCreateTimeDesc_ != nullptr;};
    void deleteOffsetCreateTimeDesc() { this->offsetCreateTimeDesc_ = nullptr;};
    inline string offsetCreateTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(offsetCreateTimeDesc_, "") };
    inline GetTrackListResponseBody& setOffsetCreateTimeDesc(string offsetCreateTimeDesc) { DARABONBA_PTR_SET_VALUE(offsetCreateTimeDesc_, offsetCreateTimeDesc) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetTrackListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTrackListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrackListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetTrackListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline GetTrackListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTrackListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetTrackListResponseBodyData) };
    inline GetTrackListResponseBodyData data() { DARABONBA_PTR_GET(data_, GetTrackListResponseBodyData) };
    inline GetTrackListResponseBody& setData(const GetTrackListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTrackListResponseBody& setData(GetTrackListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Used for pagination. Not set for the first query, but for subsequent queries, it should be set to the value of OffsetCreateTime from the previous response. (This field is deprecated)
    std::shared_ptr<string> offsetCreateTime_ = nullptr;
    // (This field is deprecated)
    std::shared_ptr<string> offsetCreateTimeDesc_ = nullptr;
    // Current page number
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // Number of items per page
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of items
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<int32_t> totalPages_ = nullptr;
    // Tracking data records
    std::shared_ptr<GetTrackListResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
