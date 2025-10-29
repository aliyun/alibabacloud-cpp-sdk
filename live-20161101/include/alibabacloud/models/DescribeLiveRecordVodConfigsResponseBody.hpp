// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDVODCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDVODCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordVodConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordVodConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordVodConfigs, liveRecordVodConfigs_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordVodConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordVodConfigs, liveRecordVodConfigs_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveRecordVodConfigsResponseBody() = default ;
    DescribeLiveRecordVodConfigsResponseBody(const DescribeLiveRecordVodConfigsResponseBody &) = default ;
    DescribeLiveRecordVodConfigsResponseBody(DescribeLiveRecordVodConfigsResponseBody &&) = default ;
    DescribeLiveRecordVodConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordVodConfigsResponseBody() = default ;
    DescribeLiveRecordVodConfigsResponseBody& operator=(const DescribeLiveRecordVodConfigsResponseBody &) = default ;
    DescribeLiveRecordVodConfigsResponseBody& operator=(DescribeLiveRecordVodConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveRecordVodConfigs_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // liveRecordVodConfigs Field Functions 
    bool hasLiveRecordVodConfigs() const { return this->liveRecordVodConfigs_ != nullptr;};
    void deleteLiveRecordVodConfigs() { this->liveRecordVodConfigs_ = nullptr;};
    inline const DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs & liveRecordVodConfigs() const { DARABONBA_PTR_GET_CONST(liveRecordVodConfigs_, DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs) };
    inline DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs liveRecordVodConfigs() { DARABONBA_PTR_GET(liveRecordVodConfigs_, DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs) };
    inline DescribeLiveRecordVodConfigsResponseBody& setLiveRecordVodConfigs(const DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs & liveRecordVodConfigs) { DARABONBA_PTR_SET_VALUE(liveRecordVodConfigs_, liveRecordVodConfigs) };
    inline DescribeLiveRecordVodConfigsResponseBody& setLiveRecordVodConfigs(DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs && liveRecordVodConfigs) { DARABONBA_PTR_SET_RVALUE(liveRecordVodConfigs_, liveRecordVodConfigs) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveRecordVodConfigsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveRecordVodConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRecordVodConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeLiveRecordVodConfigsResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The configurations.
    std::shared_ptr<DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs> liveRecordVodConfigs_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
