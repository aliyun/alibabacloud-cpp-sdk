// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchWaterMarkTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplateList, waterMarkTemplateList_);
    };
    friend void from_json(const Darabonba::Json& j, SearchWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplateList, waterMarkTemplateList_);
    };
    SearchWaterMarkTemplateResponseBody() = default ;
    SearchWaterMarkTemplateResponseBody(const SearchWaterMarkTemplateResponseBody &) = default ;
    SearchWaterMarkTemplateResponseBody(SearchWaterMarkTemplateResponseBody &&) = default ;
    SearchWaterMarkTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchWaterMarkTemplateResponseBody() = default ;
    SearchWaterMarkTemplateResponseBody& operator=(const SearchWaterMarkTemplateResponseBody &) = default ;
    SearchWaterMarkTemplateResponseBody& operator=(SearchWaterMarkTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->waterMarkTemplateList_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline SearchWaterMarkTemplateResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline SearchWaterMarkTemplateResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchWaterMarkTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchWaterMarkTemplateResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // waterMarkTemplateList Field Functions 
    bool hasWaterMarkTemplateList() const { return this->waterMarkTemplateList_ != nullptr;};
    void deleteWaterMarkTemplateList() { this->waterMarkTemplateList_ = nullptr;};
    inline const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList & waterMarkTemplateList() const { DARABONBA_PTR_GET_CONST(waterMarkTemplateList_, SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList) };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList waterMarkTemplateList() { DARABONBA_PTR_GET(waterMarkTemplateList_, SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList) };
    inline SearchWaterMarkTemplateResponseBody& setWaterMarkTemplateList(const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList & waterMarkTemplateList) { DARABONBA_PTR_SET_VALUE(waterMarkTemplateList_, waterMarkTemplateList) };
    inline SearchWaterMarkTemplateResponseBody& setWaterMarkTemplateList(SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList && waterMarkTemplateList) { DARABONBA_PTR_SET_RVALUE(waterMarkTemplateList_, waterMarkTemplateList) };


  protected:
    // The width of the watermark image in the output video. The value can be an integer or a decimal.
    // 
    // *   **Integer**: the width of the watermark image. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the width of the watermark image to the width of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The values of the Height, Width, Dx, and Dy parameters relative to the reference edges. If the values of the Height, Width, Dx, and Dy parameters are decimals between 0 and 1, the values are calculated by referring to the following edges in sequence:
    // 
    // *   **Width**: the width edge.
    // *   **Height**: the height edge.
    // *   **Long**: the long edge.
    // *   **Short**: the short edge.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the watermark. Valid values:
    // 
    // *   Image: an image watermark.
    // *   Text: a text watermark.
    // 
    // >  Only watermarks of the **Image** types are supported.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The height of the watermark image in the output video. The value can be an integer or a decimal.
    // 
    // *   **Integer**: the height of the watermark image. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the height of the watermark image to the height of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList> waterMarkTemplateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
